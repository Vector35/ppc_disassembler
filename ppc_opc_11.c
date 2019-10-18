#include "disassembler.h"

/* cmpwi GPR,NUM */
int cmpwi_GPR_NUM(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_CMPWI;
	/* 001011000x0AAAAABBBBBBBBBBBBBBBB */
	dec->operand_n = 2;
	dec->operand_types[0] = PPC_OPER_TYPE_GPR;
	dec->operand_values[0] = (insword & 0x1F0000)>>16;
	dec->operand_types[1] = PPC_OPER_TYPE_NUM;
	dec->operand_values[1] = insword & 0xFFFF;
	dec->operand_fmtstr = PPC_FMTSTR_GPR_C_NUM;
	return 0;
}

/* cmpdi GPR,NUM */
int cmpdi_GPR_NUM(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_CMPDI;
	/* 001011000x1AAAAABBBBBBBBBBBBBBBB */
	dec->operand_n = 2;
	dec->operand_types[0] = PPC_OPER_TYPE_GPR;
	dec->operand_values[0] = (insword & 0x1F0000)>>16;
	dec->operand_types[1] = PPC_OPER_TYPE_NUM;
	dec->operand_values[1] = insword & 0xFFFF;
	dec->operand_fmtstr = PPC_FMTSTR_GPR_C_NUM;
	return 0;
}

/* cmpwi CREG,GPR,NUM */
int cmpwi_CREG_GPR_NUM(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_CMPWI;
	/* 001011AAAx0BBBBBCCCCCCCCCCCCCCCC */
	dec->operand_n = 3;
	dec->operand_types[0] = PPC_OPER_TYPE_CREG;
	dec->operand_values[0] = (insword & 0x3800000)>>23;
	dec->operand_types[1] = PPC_OPER_TYPE_GPR;
	dec->operand_values[1] = (insword & 0x1F0000)>>16;
	dec->operand_types[2] = PPC_OPER_TYPE_NUM;
	dec->operand_values[2] = insword & 0xFFFF;
	dec->operand_fmtstr = PPC_FMTSTR_CREG_C_GPR_C_NUM;
	return 0;
}

/* cmpdi CREG,GPR,NUM */
int cmpdi_CREG_GPR_NUM(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_CMPDI;
	/* 001011xAAx1BBBBBCCCCCCCCCCCCCCCC */
	dec->operand_n = 3;
	dec->operand_types[0] = PPC_OPER_TYPE_CREG;
	dec->operand_values[0] = (insword & 0x1800000)>>23;
	dec->operand_types[1] = PPC_OPER_TYPE_GPR;
	dec->operand_values[1] = (insword & 0x1F0000)>>16;
	dec->operand_types[2] = PPC_OPER_TYPE_NUM;
	dec->operand_values[2] = insword & 0xFFFF;
	dec->operand_fmtstr = PPC_FMTSTR_CREG_C_GPR_C_NUM;
	return 0;
}

