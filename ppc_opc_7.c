#include "disassembler.h"

/* mulli GPR,GPR,NUM */
int mulli_GPR_GPR_NUM(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_MULLI;
	/* 000111AAAAABBBBBCCCCCCCCCCCCCCCC */
	dec->operand_n = 3;
	dec->operand_types[0] = PPC_OPER_TYPE_GPR;
	dec->operand_values[0] = (insword & 0x3E00000)>>21;
	dec->operand_types[1] = PPC_OPER_TYPE_GPR;
	dec->operand_values[1] = (insword & 0x1F0000)>>16;
	dec->operand_types[2] = PPC_OPER_TYPE_NUM;
	dec->operand_values[2] = insword & 0xFFFF;
	dec->operand_fmtstr = PPC_FMTSTR_GPR_C_GPR_C_NUM;
	return 0;
}

