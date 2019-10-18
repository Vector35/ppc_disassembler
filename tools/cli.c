#include <stdio.h>
#include <stdlib.h>

#include "disassembler.h"

int main(int ac, char **av)
{
	if(ac < 2)
		return -1;

	uint32_t insword = strtoul(av[1], 0, 16);

	uint8_t data[4];
	data[0] = (insword >> 24) & 0xFF;
	data[1] = (insword >> 16) & 0xFF;
	data[2] = (insword >> 8) & 0xFF;
	data[3] = insword & 0xFF;

	char instxt[128];
	ppc_disassemble(insword, instxt);
	printf("%08X: %s\n", insword, instxt);

	return 0;
}
