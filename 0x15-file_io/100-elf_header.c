#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <fcntl.h>
#include <elf.h>

#define BUF_SIZE 1024

void print_error(char *msg) {
    fprintf(stderr, "%s\n", msg);
    exit(98);
}

int main(int argc, char *argv[]) {
    if (argc != 2) {
        print_error("Usage: elf_header elf_filename");
    }

    char *filename = argv[1];

    int fd = open(filename, O_RDONLY);
    if (fd == -1) {
        print_error("Cannot open file");
    }

    Elf64_Ehdr elf_header;
    ssize_t bytes_read = read(fd, &elf_header, sizeof(Elf64_Ehdr));
    if (bytes_read != sizeof(Elf64_Ehdr)) {
        print_error("Error reading ELF header");
    }

    if (memcmp(elf_header.e_ident, ELFMAG, SELFMAG) != 0) {
        print_error("File is not an ELF file");
    }

    printf("Magic: ");
    for (int i = 0; i < EI_NIDENT; i++) {
        printf("%02x ", elf_header.e_ident[i]);
    }
    printf("\n");

    printf("Class: %s\n", elf_header.e_ident[EI_CLASS] == ELFCLASS32 ? "ELF32" : "ELF64");

    printf("Data: %s\n", elf_header.e_ident[EI_DATA] == ELFDATA2LSB ? "2's complement, little endian" : "2's complement, big endian");

    printf("Version: %d\n", elf_header.e_ident[EI_VERSION]);

    printf("OS/ABI: ");
    switch (elf_header.e_ident[EI_OSABI]) {
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
            printf("Standalone (embedded) application\n");
            break;
        default:
            printf("<unknown: %d>\n", elf_header.e_ident[EI_OSABI]);
            break;
    }

    printf("ABI Version: %d\n", elf_header.e_ident[EI_ABIVERSION]);

    printf("Type: ");
    switch (elf_header.e_type) {
        case ET_NONE:
            printf("NONE (No file type)\n");
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
            printf("<unknown: %d>\n", elf_header.e_type);
            break;
    }

    printf("Entry point address: 0x%lx\n", elf_header.e_entry);

    close(fd);

    return 0;
}
