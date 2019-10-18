#include "disassembler.h"

/* ld GPR,NUM(NUM) */
int ld_GPR_NUM_NUM_(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_LD;
	/* 111010AAAAA00000BBBBBBBBBBBBBB00 */
	dec->operand_n = 3;
	dec->operand_types[0] = PPC_OPER_TYPE_GPR;
	dec->operand_values[0] = (insword & 0x3E00000)>>21;
	dec->operand_types[1] = PPC_OPER_TYPE_NUM;
	dec->operand_values[1] = (insword & 0xFFFC)>>2;
	dec->operand_types[2] = PPC_OPER_TYPE_NUM;
	dec->operand_fmtstr = PPC_FMTSTR_GPR_C_NUM_LPAREN_NUM_RPAREN_;
	return 0;
}

/* lwa GPR,NUM(NUM) */
int lwa_GPR_NUM_NUM_(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_LWA;
	/* 111010AAAAA00000BBBBBBBBBBBBBB10 */
	dec->operand_n = 3;
	dec->operand_types[0] = PPC_OPER_TYPE_GPR;
	dec->operand_values[0] = (insword & 0x3E00000)>>21;
	dec->operand_types[1] = PPC_OPER_TYPE_NUM;
	dec->operand_values[1] = (insword & 0xFFFC)>>2;
	dec->operand_types[2] = PPC_OPER_TYPE_NUM;
	dec->operand_fmtstr = PPC_FMTSTR_GPR_C_NUM_LPAREN_NUM_RPAREN_;
	return 0;
}

/* ld GPR,NUM(GPR) */
int ld_GPR_NUM_GPR_(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_LD;
	/* 111010AAAAACCCCCBBBBBBBBBBBBBB00 */
	dec->operand_n = 3;
	dec->operand_types[0] = PPC_OPER_TYPE_GPR;
	dec->operand_values[0] = (insword & 0x3E00000)>>21;
	dec->operand_types[1] = PPC_OPER_TYPE_NUM;
	dec->operand_values[1] = (insword & 0xFFFC)>>2;
	dec->operand_types[2] = PPC_OPER_TYPE_GPR;
	dec->operand_values[2] = (insword & 0x1F0000)>>16;
	dec->operand_fmtstr = PPC_FMTSTR_GPR_C_NUM_LPAREN_GPR_RPAREN_;
	return 0;
}

/* ldu GPR,NUM(GPR) */
int ldu_GPR_NUM_GPR_(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_LDU;
	/* 111010AAAAACCCCCBBBBBBBBBBBBBB01 */
	dec->operand_n = 3;
	dec->operand_types[0] = PPC_OPER_TYPE_GPR;
	dec->operand_values[0] = (insword & 0x3E00000)>>21;
	dec->operand_types[1] = PPC_OPER_TYPE_NUM;
	dec->operand_values[1] = (insword & 0xFFFC)>>2;
	dec->operand_types[2] = PPC_OPER_TYPE_GPR;
	dec->operand_values[2] = (insword & 0x1F0000)>>16;
	dec->operand_fmtstr = PPC_FMTSTR_GPR_C_NUM_LPAREN_GPR_RPAREN_;
	return 0;
}

/* lwa GPR,NUM(GPR) */
int lwa_GPR_NUM_GPR_(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_LWA;
	/* 111010AAAAACCCCCBBBBBBBBBBBBBB10 */
	dec->operand_n = 3;
	dec->operand_types[0] = PPC_OPER_TYPE_GPR;
	dec->operand_values[0] = (insword & 0x3E00000)>>21;
	dec->operand_types[1] = PPC_OPER_TYPE_NUM;
	dec->operand_values[1] = (insword & 0xFFFC)>>2;
	dec->operand_types[2] = PPC_OPER_TYPE_GPR;
	dec->operand_values[2] = (insword & 0x1F0000)>>16;
	dec->operand_fmtstr = PPC_FMTSTR_GPR_C_NUM_LPAREN_GPR_RPAREN_;
	return 0;
}

