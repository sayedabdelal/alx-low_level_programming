#include "main.h"
#include <elf.h>
#include <string.h>

void print_magic(unsigned char *e_ident)
{
    int i;
    printf("  Magic:   ");
    for (i = 0; i < EI_NIDENT; i++) {
        printf("%02x ", e_ident[i]);
    }
    printf("\n");
}
void print_class(unsigned char e_ident[EI_NIDENT])
{
    printf("  Class:                             ");
    switch (e_ident[EI_CLASS]) {
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
            printf("<unknown: %x>\n", e_ident[EI_CLASS]);
            break;
    }
}

void print_data(unsigned char e_ident[EI_NIDENT])
{
    printf("  Data:                              ");
    switch (e_ident[EI_DATA]) {
        case ELFDATANONE:
            printf("none\n");
            break;
        case ELFDATA2LSB:
            printf("2's complement, little endian\n");
            break;
        case ELFDATA2MSB:
            printf("2's complement, big endian\n");
            break;
        default:
            printf("<unknown: %x>\n", e_ident[EI_DATA]);
            break;
    }
}

void print_version(unsigned char e_ident[EI_NIDENT])
{
    printf("  Version:                           %d", e_ident[EI_VERSION]);
    if (e_ident[EI_VERSION] == EV_CURRENT) {
        printf(" (current)\n");
    } else {
        printf("\n");
    }
}

void print_osabi(unsigned char e_ident[EI_NIDENT])
{
    printf("  OS/ABI:                            ");
    switch (e_ident[EI_OSABI]) {
        case ELFOSABI_SYSV:
            printf("UNIX - System V\n");
            break;
        case ELFOSABI_HPUX:
            printf("UNIX - HP-UX\n");
            break;
        case ELFOSABI_NETBSD:
            printf("UNIX - NetBSD\n");
            break;
        case ELFOSABI_LINUX:
            printf("UNIX - Linux\n");
            break;
        case ELFOSABI_SOLARIS:
            printf("UNIX - Solaris\n");
            break;
        case ELFOSABI_IRIX:
            printf("UNIX - IRIX\n");
            break;
        case ELFOSABI_FREEBSD:
            printf("UNIX - FreeBSD\n");
            break;
        case ELFOSABI_TRU64:
            printf("UNIX - TRU64\n");
            break;
        case ELFOSABI_ARM:
            printf("ARM\n");
            break;
        case ELFOSABI_STANDALONE:
            printf("Standalone App\n");
            break;
        default:
            printf("<unknown: %x>\n", e_ident[EI_OSABI]);
            break;
    }
}

void print_abiversion(unsigned char e_ident[EI_NIDENT])
{
    printf("  ABI Version:                       %d\n", e_ident[EI_ABIVERSION]);
}

void print_type(Elf64_Half e_type)
{
    printf("  Type:                              ");
    switch (e_type) {
        case ET_NONE:
            printf("NONE (None)\n");
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
            printf("<unknown: %x>\n", e_type);
            break;
    }
}

void print_entry(Elf64_Addr e_entry)
{
    printf("  Entry point address:               %lx\n", e_entry);
}

void print_elf_header(Elf64_Ehdr *ehdr)
{
    print_magic(ehdr->e_ident);
    print_class(ehdr->e_ident);
    print_data(ehdr->e_ident);
    print_version(ehdr->e_ident);
    print_osabi(ehdr->e_ident);
    print_abiversion(ehdr->e_ident);
    print_type(ehdr->e_type);
    print_entry(ehdr->e_entry);
}

int main(int argc, char *argv[])
{
    int fd;
    Elf64_Ehdr ehdr;

    if (argc != 2) {
        dprintf(STDERR_FILENO, "Usage: elf_header elf_filename\n");
        exit(98);
    }

    fd = open(argv[1], O_RDONLY);
    if (fd == -1) {
        dprintf(STDERR_FILENO, "Error: Can't open file %s\n", argv[1]);
        exit(99);
    }

    if (read(fd, &ehdr, sizeof(ehdr)) != sizeof(ehdr)) {
        dprintf(STDERR_FILENO, "Error: Can't read ELF header\n");
        exit(100);
    }

    if (memcmp(ehdr.e_ident, ELFMAG, SELFMAG) != 0) {
        dprintf(STDERR_FILENO, "Error: Not an ELF file\n");
        exit(101);
    }

    print_elf_header(&ehdr);

    close(fd);
    return 0;
}
