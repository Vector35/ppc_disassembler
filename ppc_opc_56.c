#include "disassembler.h"

/* psq_l FREG,NUM(GPR),NUM,NUM */
int psq_l_FREG_NUM_GPR__NUM_NUM(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_PSQ_L;
	/* 111000AAAAxCCCCCDEEEBBBBBBBBBBBB */
	dec->operand_n = 5;
	dec->operand_types[0] = PPC_OPER_TYPE_FREG;
	dec->operand_values[0] = (insword & 0x3C00000)>>22;
	dec->operand_types[1] = PPC_OPER_TYPE_NUM;
	dec->operand_values[1] = insword & 0xFFF;
	dec->operand_types[2] = PPC_OPER_TYPE_GPR;
	dec->operand_values[2] = (insword & 0x1F0000)>>16;
	dec->operand_types[3] = PPC_OPER_TYPE_NUM;
	dec->operand_values[3] = (insword & 0x8000)>>15;
	dec->operand_types[4] = PPC_OPER_TYPE_NUM;
	dec->operand_values[4] = (insword & 0x7000)>>12;
	dec->operand_fmtstr = PPC_FMTSTR_FREG_C_NUM_LPAREN_GPR_RPAREN__C_NUM_C_NUM;
	return 0;
}

/* lq GPR,NUM(GPR) */
int lq_GPR_NUM_GPR_(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_LQ;
	/* 111000AAAA0CCCCCBBBBBBBBBBBBxxxx */
	dec->operand_n = 3;
	dec->operand_types[0] = PPC_OPER_TYPE_GPR;
	dec->operand_values[0] = (insword & 0x3C00000)>>22;
	dec->operand_types[1] = PPC_OPER_TYPE_NUM;
	dec->operand_values[1] = (insword & 0xFFF0)>>4;
	dec->operand_types[2] = PPC_OPER_TYPE_GPR;
	dec->operand_values[2] = (insword & 0x1F0000)>>16;
	dec->operand_fmtstr = PPC_FMTSTR_GPR_C_NUM_LPAREN_GPR_RPAREN_;
	return 0;
}

/* lq GPR,NUM(NUM) */
int lq_GPR_NUM_NUM_(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_LQ;
	/* 111000AAAA000000BBBBBBBBBBBBxxxx */
	dec->operand_n = 3;
	dec->operand_types[0] = PPC_OPER_TYPE_GPR;
	dec->operand_values[0] = (insword & 0x3C00000)>>22;
	dec->operand_types[1] = PPC_OPER_TYPE_NUM;
	dec->operand_values[1] = (insword & 0xFFF0)>>4;
	dec->operand_types[2] = PPC_OPER_TYPE_NUM;
	dec->operand_fmtstr = PPC_FMTSTR_GPR_C_NUM_LPAREN_NUM_RPAREN_;
	return 0;
}

