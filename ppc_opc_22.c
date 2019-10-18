#include "disassembler.h"

/* rlmi GPR,GPR,GPR,NUM,NUM */
int rlmi_GPR_GPR_GPR_NUM_NUM(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_RLMI;
	/* 010110BBBBBAAAAACCCCCDDDDDEEEEE0 */
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

/* rlmi. GPR,GPR,GPR,NUM,NUM */
int rlmiD_GPR_GPR_GPR_NUM_NUM(uint32_t insword, struct ppc_decoded *dec)
{
	dec->properties |= PPC_PROPERTY_DOTTED;
	dec->mnemonic = PPC_MNEM_RLMI;
	/* 010110BBBBBAAAAACCCCCDDDDDEEEEE1 */
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

