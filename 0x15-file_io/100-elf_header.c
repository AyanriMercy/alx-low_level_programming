#include <elf.h>
#include "main.h"

/**
 * print_error - Prints an error message to stderr and exits with status
 * code 98
 * @msg: The error message to print
 *
 * Return: None, the function exits with status code 98
 */
void print_error(char *msg)
{
	fprintf(stderr, "Error: %s\n", msg);
	exit(98);
}

/**
 * print_elf_header - Prints the information contained in the ELF header
 * of an ELF file
 * @header: The ELF header to print
 *
 * Return: None
 */
void print_elf_header(Elf64_Ehdr header)
{
	int i;

	printf("ELF Header:\n");
	printf("  Magic:   ");
	for (i = 0; i < EI_NIDENT; i++)
	{
		printf("%02x ", header.e_ident[i]);
	}
	printf("\n");
	printf("  Class:                             %s\n",
			header.e_ident[EI_CLASS] == ELFCLASS64 ?
			"ELF64" : "ELF32");
	printf("  Data:                              %s\n", 
			header.e_ident[EI_DATA] == ELFDATA2LSB ?
			"2's complement, little endian" :
			"2's complement, big endian");
	printf("  Version:                           %d%s\n",
			header.e_ident[EI_VERSION], header.e_ident[EI_VERSION]
			== EV_CURRENT ? " (current)" : "");
	printf("  OS/ABI:                            %d\n",
			header.e_ident[EI_OSABI]);
	printf("  ABI Version:                       %d\n",
			header.e_ident[EI_ABIVERSION]);
	printf("  Type:                              %d\n", header.e_type);
	printf("  Entry point address:               0x%lx\n", header.e_entry);
}

/**
 * main - Entry point for the ELF header program
 *
 * @argc: The number of command-line arguments
 * @argv: An array of command-line argument strings
 *
 * Return: 0 on success, 98 on failure
 */
int main(int argc, char *argv[])
{
	int fd;
	Elf64_Ehdr header;

	if (argc != 2)
	{
		print_error("Invalid number of arguments");
	}

	fd = open(argv[1], O_RDONLY);
	if (fd == -1)
	{
		print_error("Could not open file");
	}

	if (read(fd, &header, sizeof(header)) != sizeof(header))
	{
		print_error("Could not read ELF header");
	}

	if (header.e_ident[EI_MAG0] != ELFMAG0 ||
			header.e_ident[EI_MAG1] != ELFMAG1 ||
			header.e_ident[EI_MAG2] != ELFMAG2 ||
			header.e_ident[EI_MAG3] != ELFMAG3)
	{
		print_error("Not an ELF file");
	}

	print_elf_header(header);
	close(fd);
	return 0;
}
