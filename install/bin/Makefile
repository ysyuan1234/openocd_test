//GCC=~/../tools/ingenic/mips-gcc520-msa/bin/mips-sde-elf-gcc-5.2.0
GCC=/home/tools/ingenic/mips-elf520-msa/bin/mips-sde-elf-gcc-5.2.0
LINK_SCRIPT=link.ld
CFLAGS=-O2 -EL -mips32 -nostartfiles -g 
target_obj= test2.c

.PHONY:all
all: $(target_obj)
	$(GCC) -T $(LINK_SCRIPT) $(CFLAGS) -o test.exe $^

.PHONY:clean
clean:
	rm -f test.exe
