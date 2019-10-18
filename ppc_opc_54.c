#include "disassembler.h"

/* stfd FREG,NUM(NUM) */
int stfd_FREG_NUM_NUM_(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_STFD;
	/* 110110AAAAA00000BBBBBBBBBBBBBBBB */
	dec->operand_n = 3;
	dec->operand_types[0] = PPC_OPER_TYPE_FREG;
	dec->operand_values[0] = (insword & 0x3E00000)>>21;
	dec->operand_types[1] = PPC_OPER_TYPE_NUM;
	dec->operand_values[1] = insword & 0xFFFF;
	dec->operand_types[2] = PPC_OPER_TYPE_NUM;
	dec->operand_fmtstr = PPC_FMTSTR_FREG_C_NUM_LPAREN_NUM_RPAREN_;
	return 0;
}

/* stfd FREG,NUM(GPR) */
int stfd_FREG_NUM_GPR_(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_STFD;
	/* 110110AAAAACCCCCBBBBBBBBBBBBBBBB */
	dec->operand_n = 3;
	dec->operand_types[0] = PPC_OPER_TYPE_FREG;
	dec->operand_values[0] = (insword & 0x3E00000)>>21;
	dec->operand_types[1] = PPC_OPER_TYPE_NUM;
	dec->operand_values[1] = insword & 0xFFFF;
	dec->operand_types[2] = PPC_OPER_TYPE_GPR;
	dec->operand_values[2] = (insword & 0x1F0000)>>16;
	dec->operand_fmtstr = PPC_FMTSTR_FREG_C_NUM_LPAREN_GPR_RPAREN_;
	return 0;
}

