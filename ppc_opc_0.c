#include "disassembler.h"

/* attn */
int attn(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_ATTN;
	return 0;
}

