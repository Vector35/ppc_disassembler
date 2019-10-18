#include "disassembler.h"

/* b NUM */
int b_NUM(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_B;
	/* 010010AAAAAAAAAAAAAAAAAAAAAAAA00 */
	dec->operand_n = 1;
	dec->operand_types[0] = PPC_OPER_TYPE_NUM;
	dec->operand_values[0] = (insword & 0x3FFFFFC)>>2;
	dec->operand_fmtstr = PPC_FMTSTR_NUM;
	return 0;
}

/* bl NUM */
int bl_NUM(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_BL;
	/* 010010AAAAAAAAAAAAAAAAAAAAAAAA01 */
	dec->operand_n = 1;
	dec->operand_types[0] = PPC_OPER_TYPE_NUM;
	dec->operand_values[0] = (insword & 0x3FFFFFC)>>2;
	dec->operand_fmtstr = PPC_FMTSTR_NUM;
	return 0;
}

/* ba NUM */
int ba_NUM(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_BA;
	/* 010010AAAAAAAAAAAAAAAAAAAAAAAA10 */
	dec->operand_n = 1;
	dec->operand_types[0] = PPC_OPER_TYPE_NUM;
	dec->operand_values[0] = (insword & 0x3FFFFFC)>>2;
	dec->operand_fmtstr = PPC_FMTSTR_NUM;
	return 0;
}

/* bla NUM */
int bla_NUM(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_BLA;
	/* 010010AAAAAAAAAAAAAAAAAAAAAAAA11 */
	dec->operand_n = 1;
	dec->operand_types[0] = PPC_OPER_TYPE_NUM;
	dec->operand_values[0] = (insword & 0x3FFFFFC)>>2;
	dec->operand_fmtstr = PPC_FMTSTR_NUM;
	return 0;
}

