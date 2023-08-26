#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>

typedef struct {
    unsigned char ident[16];
    uint16_t type;
    uint16_t machine;
    uint32_t version;
    uint32_t entry;
    uint32_t phoff;
    uint32_t shoff;
    uint32_t flags;
    uint16_t ehsize;
    uint16_t phentsize;
    uint16_t phnum;
    uint16_t shentsize;
    uint16_t shnum;
    uint16_t shstrndx;
} ElfHeader;

void read_elf_header(const char *file_path, ElfHeader *header) {
    FILE *file = fopen(file_path, "rb");
    if (!file) {
        perror("Error opening file");
        exit(1);
    }

    if (fread(header, sizeof(ElfHeader), 1, file) != 1) {
        perror("Error reading ELF header");
        fclose(file);
        exit(1);
    }

    fclose(file);
}

int main(int argc, char *argv[]) 
{
	const char *file_path = argv[1];
	ElfHeader elf_header;
    
	if (argc != 2) {
        printf("Usage: %s <elf_file>\n", argv[0]);
        return 1;
    }

    read_elf_header(file_path, &elf_header);

    printf("ELF Header:\n");
    printf("  Type:                             0x%x\n", elf_header.type);
    printf("  Machine:                          0x%x\n", elf_header.machine);
    printf("  Version:                          0x%x\n", elf_header.version);
    printf("  Entry point address:              0x%x\n", elf_header.entry);
    printf("  Start of program headers:         %u (bytes into file)\n", elf_header.phoff);
    printf("  Start of section headers:         %u (bytes into file)\n", elf_header.shoff);
    printf("  Flags:                            0x%x\n", elf_header.flags);
    printf("  Size of this header:              %u (bytes)\n", elf_header.ehsize);
    printf("  Size of program headers:          %u (bytes)\n", elf_header.phentsize);
    printf("  Number of program headers:        %u\n", elf_header.phnum);
    printf("  Size of section headers:          %u (bytes)\n", elf_header.shentsize);
    printf("  Number of section headers:        %u\n", elf_header.shnum);
    printf("  Section header string table index: %u\n", elf_header.shstrndx);

    return 0;
}

