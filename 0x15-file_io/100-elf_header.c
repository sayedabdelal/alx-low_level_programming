#include "main.h"
#include <elf.h>
void print_elf_header(Elf64_Ehdr *header);
/**
 * main - program 
 * @argc: the number of arguments passed to the program
 * @argv: an array of pointers to the arguments
 * Return: 0 on success 0 in failure
 */
int main(int argc, char *argv[]) {
	int fd;
	Elf64_Ehdr header;
	ssize_t bytes_read;

	if (argc != 2)
	{
		fprintf(stderr, "Usage: %s elf_filename\n", argv[0]);
		exit(98);
	}
	/* Open the ELF file for reading*/
	fd = open(argv[1], O_RDONLY);
	if (fd == -1)
	{
		fprintf(stderr, "Error: Can't open file %s\n", argv[1]);
		exit(98);
	}
	/* Read the ELF header*/
	bytes_read = read(fd, &header, sizeof(header));
	if (bytes_read == -1 || bytes_read != sizeof(header))
	{
		fprintf(stderr, "Error: Can't read ELF header from file %s\n", argv[1]);
		exit(98);
	}
	/* Check that the file is an ELF file*/
	if (header.e_ident[EI_MAG0] != ELFMAG0 || header.e_ident[EI_MAG1] != ELFMAG1 ||
		header.e_ident[EI_MAG2] != ELFMAG2 || header.e_ident[EI_MAG3] != ELFMAG3) 
	{
		fprintf(stderr, "Error: File %s is not an ELF file\n", argv[1]);
		exit(98);
	}
	/* Print the ELF header information*/
	print_elf_header(&header);
	/* Close the file*/
	if (close(fd) == -1) 
	{
		fprintf(stderr, "Error: Can't close file %s\n", argv[1]);
		exit(98);
	}
	return (0);
}

/**
 * print_elf_header- Prints the contents of an ELF header.
 *
 * @param header A pointer to the ELF header to print.
 * Return: Print the other of the ELF header
 */
void print_elf_header(Elf64_Ehdr *header)
{
	int i;
	printf("Magic:   ");
	for (i = 0; i < EI_NIDENT; i++)
	{
		printf("%02x ", header->e_ident[i]);
	}
	printf("\n");
	printf("Class:                             ");
	switch (header->e_ident[EI_CLASS])
	{
		case ELFCLASSNONE:
			printf("none\n");
			break;
		case ELFCLASS32:
			printf("ELF32\n");
			break;
		case ELFCLASS64:
			printf("ELF64\n");
			break;
		default:
			printf("<unknown>\n");
			break;
	}
	printf("Data:                              ");
	switch (header->e_ident[EI_DATA])
	{
		case ELFDATANONE:
			printf("none\n");
			break;
		case ELFDATA2LSB:
			printf("2's complement, little endian\n")
			break;
		case ELFDATA2MSB:
			printf("2's complement, big endian\n");
			break;
		default:
			printf("<unknown>\n");
			break;
	}
	printf("Version:                           %d\n", header->e_ident[EI_VERSION]);
	printf("OS/ABI:                            ");
	switch (header->e_ident[EI_OSABI])
	{
		case ELFOSABI_SYSV:
			printf("UNIX - System V\n");
			break;
		case ELFOSABI_HPUX:
			printf("HP-UX\n");
			break;
		case ELFOSABI_NETBSD:
			printf("NetBSD\n");
			break;
		case ELFOSABI_LINUX:
			printf("Linux\n");
			break;
		case ELFOSABI_SOLARIS:
			printf("Solaris\n");
			break;
		case ELFOSABI_IRIX:
			printf("IRIX\n");
			break;
		case ELFOSABI_FREEBSD:
			printf("FreeBSD\n");
			break;
		case ELFOSABI_TRU64:
			printf("Compaq TRU64 UNIX\n");
			break;
		case ELFOSABI_ARM:
			printf("ARM\n");
			break;
		case ELFOSABI_STANDALONE:
			printf("Standalone (embedded) application\n");
			break;
		default:
		printf("<unknown>\n");
		break;
	}
	printf("ABI Version:                       %d\n", header->e_ident[EI_ABIVERSION]);
	printf("Type:                              ");
	switch (header->e_type) 
	{
	case ET_NONE:
		printf("NONE (Unknown type)\n");
		break;
	case ET_REL:
		printf("REL (Relocatable file)\n");
		break;
	case ET_EXEC:
		printf("EXEC (Executable file)\n");
		break;
	case ET_DYN:
		printf("DYN (Shared object file)\n");
		break;
	case ET_CORE:
		printf("CORE (Core file)\n");
		break;
	default:
		printf("<unknown>\n");
		break;
	}
	printf("Machine:                           ");
	switch (header->e_machine)
	{
		case EM_NONE:
			printf("None\n");
			break;
		case EM_M32:
			printf("WE32100\n");
			break;
		case EM_SPARC:
			printf("Sparc\n");
			break;
		case EM_386:
			printf("Intel 80386\n");
			break;
		case EM_68K:
			printf("MC68000\n");
			break;
		case EM_88K:
			printf("MC88000\n");
			break;
		case EM_860:
			printf("Intel 80860\n");
			break;
		case EM_MIPS:
			printf("MIPS I Architecture\n");
			break;
		default:
			printf("<unknown>\n");
			break;
	}
	printf("Version:                           0x%x\n", header->e_version);
	printf("Entry point address:               0x%lx\n", (unsigned long)header->e_entry);
	printf("Start of program headers:          %lu (bytes into file)\n", (unsigned long)header->e_phoff);
	printf("Start of section headers:          %lu (bytes into file)\n", (unsigned long)header->e_shoff);
	printf("Flags:                             0x%x\n", header->e_flags);
	printf("Size of this header:               %d (bytes)\n", header->e_ehsize);
	printf("Size of program headers:           %d (bytes)\n", header->e_phentsize);
	printf("Number of program headers:         %d\n", header->e_phnum);
	printf("Size of section headers:           %d (bytes)\n", header->e_shentsize);
	printf("Number of section headers:         %d\n", header->e_shnum);
	printf("Section header string table index: %d\n", header->e_shstrndx);
}
