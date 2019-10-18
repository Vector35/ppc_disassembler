#include "disassembler.h"

/* cmplwi GPR,NUM */
int cmplwi_GPR_NUM(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_CMPLWI;
	/* 001010000x0AAAAABBBBBBBBBBBBBBBB */
	dec->operand_n = 2;
	dec->operand_types[0] = PPC_OPER_TYPE_GPR;
	dec->operand_values[0] = (insword & 0x1F0000)>>16;
	dec->operand_types[1] = PPC_OPER_TYPE_NUM;
	dec->operand_values[1] = insword & 0xFFFF;
	dec->operand_fmtstr = PPC_FMTSTR_GPR_C_NUM;
	return 0;
}

/* cmpldi GPR,NUM */
int cmpldi_GPR_NUM(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_CMPLDI;
	/* 001010000x1AAAAABBBBBBBBBBBBBBBB */
	dec->operand_n = 2;
	dec->operand_types[0] = PPC_OPER_TYPE_GPR;
	dec->operand_values[0] = (insword & 0x1F0000)>>16;
	dec->operand_types[1] = PPC_OPER_TYPE_NUM;
	dec->operand_values[1] = insword & 0xFFFF;
	dec->operand_fmtstr = PPC_FMTSTR_GPR_C_NUM;
	return 0;
}

/* cmplwi CREG,GPR,NUM */
int cmplwi_CREG_GPR_NUM(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_CMPLWI;
	/* 001010AAAx0BBBBBCCCCCCCCCCCCCCCC */
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

/* cmpldi CREG,GPR,NUM */
int cmpldi_CREG_GPR_NUM(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_CMPLDI;
	/* 001010AxAx1BBBBBCCCCCCCCCCCCCCCC */
	dec->operand_n = 3;
	dec->operand_types[0] = PPC_OPER_TYPE_CREG;
	dec->operand_values[0] = ((insword & 0x2000000)>>24)|((insword & 0x800000)>>23);
	dec->operand_types[1] = PPC_OPER_TYPE_GPR;
	dec->operand_values[1] = (insword & 0x1F0000)>>16;
	dec->operand_types[2] = PPC_OPER_TYPE_NUM;
	dec->operand_values[2] = insword & 0xFFFF;
	dec->operand_fmtstr = PPC_FMTSTR_CREG_C_GPR_C_NUM;
	return 0;
}

