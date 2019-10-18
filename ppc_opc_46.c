#include "disassembler.h"

/* lm GPR,NUM(NUM) */
int lm_GPR_NUM_NUM_(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_LM;
	/* 1011100000000000BBBBBBBBBBBBBBBB */
	dec->operand_n = 3;
	dec->operand_types[0] = PPC_OPER_TYPE_GPR;
	dec->operand_types[1] = PPC_OPER_TYPE_NUM;
	dec->operand_values[1] = insword & 0xFFFF;
	dec->operand_types[2] = PPC_OPER_TYPE_NUM;
	dec->operand_fmtstr = PPC_FMTSTR_GPR_C_NUM_LPAREN_NUM_RPAREN_;
	return 0;
}

/* lm GPR,NUM(GPR) */
int lm_GPR_NUM_GPR_(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_LM;
	/* 101110AxxAxxCCxCBBBBBBBBBBBBBBBB */
	dec->operand_n = 3;
	dec->operand_types[0] = PPC_OPER_TYPE_GPR;
	dec->operand_values[0] = ((insword & 0x2000000)>>24)|((insword & 0x400000)>>22);
	dec->operand_types[1] = PPC_OPER_TYPE_NUM;
	dec->operand_values[1] = insword & 0xFFFF;
	dec->operand_types[2] = PPC_OPER_TYPE_GPR;
	dec->operand_values[2] = ((insword & 0xC0000)>>17)|((insword & 0x10000)>>16);
	dec->operand_fmtstr = PPC_FMTSTR_GPR_C_NUM_LPAREN_GPR_RPAREN_;
	return 0;
}

/* lmw GPR,NUM(NUM) */
int lmw_GPR_NUM_NUM_(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_LMW;
	/* 101110AAAAA00000BBBBBBBBBBBBBBBB */
	dec->operand_n = 3;
	dec->operand_types[0] = PPC_OPER_TYPE_GPR;
	dec->operand_values[0] = (insword & 0x3E00000)>>21;
	dec->operand_types[1] = PPC_OPER_TYPE_NUM;
	dec->operand_values[1] = insword & 0xFFFF;
	dec->operand_types[2] = PPC_OPER_TYPE_NUM;
	dec->operand_fmtstr = PPC_FMTSTR_GPR_C_NUM_LPAREN_NUM_RPAREN_;
	return 0;
}

/* lmw GPR,NUM(GPR) */
int lmw_GPR_NUM_GPR_(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_LMW;
	/* 101110AAAAACCCCCBBBBBBBBBBBBBBBB */
	dec->operand_n = 3;
	dec->operand_types[0] = PPC_OPER_TYPE_GPR;
	dec->operand_values[0] = (insword & 0x3E00000)>>21;
	dec->operand_types[1] = PPC_OPER_TYPE_NUM;
	dec->operand_values[1] = insword & 0xFFFF;
	dec->operand_types[2] = PPC_OPER_TYPE_GPR;
	dec->operand_values[2] = (insword & 0x1F0000)>>16;
	dec->operand_fmtstr = PPC_FMTSTR_GPR_C_NUM_LPAREN_GPR_RPAREN_;
	return 0;
}

