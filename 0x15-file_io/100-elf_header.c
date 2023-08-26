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

int main(int argc, char *argv[]) {
    if (argc != 2) {
        printf("Usage: %s <elf_file>\n", argv[0]);
        return 1;
    }

    const char *file_path = argv[1];
    ElfHeader elf_header;
    read_elf_header(file_path, &elf_header);

    printf("Magic:             ");
    for (int i = 0; i < 16; ++i) {
        printf("%02x ", elf_header.ident[i]);
    }
    printf("\n");

    printf("Class:             %u-bit\n", elf_header.ident[4] == 1 ? 32 : 64);
    printf("Data:              %s\n", elf_header.ident[5] == 1 ? "little-endian" : "big-endian");
    printf("Version:           %u\n", elf_header.version);
    printf("OS/ABI:            %u\n", elf_header.ident[7]);
    printf("ABI Version:       %u\n", elf_header.ident[8]);
    printf("Type:              %u\n", elf_header.type);
    printf("Entry point:       0x%x\n", elf_header.entry);

    return 0;
}


