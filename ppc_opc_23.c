#include "disassembler.h"

/* rlwnm GPR,GPR,GPR,NUM,NUM */
int rlwnm_GPR_GPR_GPR_NUM_NUM(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_RLWNM;
	/* 010111BBBBBAAAAACCCCCDDDDDEEEEE0 */
	dec->operand_n = 5;
	dec->operand_types[0] = PPC_OPER_TYPE_GPR;
	dec->operand_values[0] = (insword & 0x1F0000)>>16;
	dec->operand_types[1] = PPC_OPER_TYPE_GPR;
	dec->operand_values[1] = (insword & 0x3E00000)>>21;
	dec->operand_types[2] = PPC_OPER_TYPE_GPR;
	dec->operand_values[2] = (insword & 0xF800)>>11;
	dec->operand_types[3] = PPC_OPER_TYPE_NUM;
	dec->operand_values[3] = (insword & 0x7C0)>>6;
	dec->operand_types[4] = PPC_OPER_TYPE_NUM;
	dec->operand_values[4] = (insword & 0x3E)>>1;
	dec->operand_fmtstr = PPC_FMTSTR_GPR_C_GPR_C_GPR_C_NUM_C_NUM;
	return 0;
}

/* rlwnm. GPR,GPR,GPR,NUM,NUM */
int rlwnmD_GPR_GPR_GPR_NUM_NUM(uint32_t insword, struct ppc_decoded *dec)
{
	dec->properties |= PPC_PROPERTY_DOTTED;
	dec->mnemonic = PPC_MNEM_RLWNM;
	/* 010111BBBBBAAAAACCCCCDDDDDEEEEE1 */
	dec->operand_n = 5;
	dec->operand_types[0] = PPC_OPER_TYPE_GPR;
	dec->operand_values[0] = (insword & 0x1F0000)>>16;
	dec->operand_types[1] = PPC_OPER_TYPE_GPR;
	dec->operand_values[1] = (insword & 0x3E00000)>>21;
	dec->operand_types[2] = PPC_OPER_TYPE_GPR;
	dec->operand_values[2] = (insword & 0xF800)>>11;
	dec->operand_types[3] = PPC_OPER_TYPE_NUM;
	dec->operand_values[3] = (insword & 0x7C0)>>6;
	dec->operand_types[4] = PPC_OPER_TYPE_NUM;
	dec->operand_values[4] = (insword & 0x3E)>>1;
	dec->operand_fmtstr = PPC_FMTSTR_GPR_C_GPR_C_GPR_C_NUM_C_NUM;
	return 0;
}

/* rotlw GPR,GPR,GPR */
int rotlw_GPR_GPR_GPR(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_ROTLW;
	/* 010111BBBBBAAAAACCCCC00000111110 */
	dec->operand_n = 3;
	dec->operand_types[0] = PPC_OPER_TYPE_GPR;
	dec->operand_values[0] = (insword & 0x1F0000)>>16;
	dec->operand_types[1] = PPC_OPER_TYPE_GPR;
	dec->operand_values[1] = (insword & 0x3E00000)>>21;
	dec->operand_types[2] = PPC_OPER_TYPE_GPR;
	dec->operand_values[2] = (insword & 0xF800)>>11;
	dec->operand_fmtstr = PPC_FMTSTR_GPR_C_GPR_C_GPR;
	return 0;
}

/* rotlw. GPR,GPR,GPR */
int rotlwD_GPR_GPR_GPR(uint32_t insword, struct ppc_decoded *dec)
{
	dec->properties |= PPC_PROPERTY_DOTTED;
	dec->mnemonic = PPC_MNEM_ROTLW;
	/* 010111BBBBBAAAAACCCCC00000111111 */
	dec->operand_n = 3;
	dec->operand_types[0] = PPC_OPER_TYPE_GPR;
	dec->operand_values[0] = (insword & 0x1F0000)>>16;
	dec->operand_types[1] = PPC_OPER_TYPE_GPR;
	dec->operand_values[1] = (insword & 0x3E00000)>>21;
	dec->operand_types[2] = PPC_OPER_TYPE_GPR;
	dec->operand_values[2] = (insword & 0xF800)>>11;
	dec->operand_fmtstr = PPC_FMTSTR_GPR_C_GPR_C_GPR;
	return 0;
}

