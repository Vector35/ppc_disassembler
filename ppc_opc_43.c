#include "disassembler.h"

/* lhau GPR,NUM(GPR) */
int lhau_GPR_NUM_GPR_(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_LHAU;
	/* 101011AAxAACCxCCBBBBBBBBBBBBBBBB */
	dec->operand_n = 3;
	dec->operand_types[0] = PPC_OPER_TYPE_GPR;
	dec->operand_values[0] = ((insword & 0x3000000)>>22)|((insword & 0x600000)>>21);
	dec->operand_types[1] = PPC_OPER_TYPE_NUM;
	dec->operand_values[1] = insword & 0xFFFF;
	dec->operand_types[2] = PPC_OPER_TYPE_GPR;
	dec->operand_values[2] = ((insword & 0x180000)>>17)|((insword & 0x30000)>>16);
	dec->operand_fmtstr = PPC_FMTSTR_GPR_C_NUM_LPAREN_GPR_RPAREN_;
	return 0;
}

