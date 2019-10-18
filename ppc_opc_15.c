#include "disassembler.h"

/* lis GPR,NUM */
int lis_GPR_NUM(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_LIS;
	/* 001111AAAAA00000BBBBBBBBBBBBBBBB */
	dec->operand_n = 2;
	dec->operand_types[0] = PPC_OPER_TYPE_GPR;
	dec->operand_values[0] = (insword & 0x3E00000)>>21;
	dec->operand_types[1] = PPC_OPER_TYPE_NUM;
	dec->operand_values[1] = insword & 0xFFFF;
	dec->operand_fmtstr = PPC_FMTSTR_GPR_C_NUM;
	return 0;
}

/* addis GPR,GPR,NUM */
int addis_GPR_GPR_NUM(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_ADDIS;
	/* 001111AAAAABBBBBCCCCCCCCCCCCCCCC */
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

