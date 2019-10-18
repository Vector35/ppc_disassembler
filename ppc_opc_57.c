#include "disassembler.h"

/* lfdp FREG,NUM(NUM) */
int lfdp_FREG_NUM_NUM_(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_LFDP;
	/* 111001AAAA000000BBBBBBBBBBBBBB0x */
	dec->operand_n = 3;
	dec->operand_types[0] = PPC_OPER_TYPE_FREG;
	dec->operand_values[0] = (insword & 0x3C00000)>>22;
	dec->operand_types[1] = PPC_OPER_TYPE_NUM;
	dec->operand_values[1] = (insword & 0xFFFC)>>2;
	dec->operand_types[2] = PPC_OPER_TYPE_NUM;
	dec->operand_fmtstr = PPC_FMTSTR_FREG_C_NUM_LPAREN_NUM_RPAREN_;
	return 0;
}

/* lxsd VREG,NUM(NUM) */
int lxsd_VREG_NUM_NUM_(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_LXSD;
	/* 111001AAAAA00000BBBBBBBBBBBBBB10 */
	dec->operand_n = 3;
	dec->operand_types[0] = PPC_OPER_TYPE_VREG;
	dec->operand_values[0] = (insword & 0x3E00000)>>21;
	dec->operand_types[1] = PPC_OPER_TYPE_NUM;
	dec->operand_values[1] = (insword & 0xFFFC)>>2;
	dec->operand_types[2] = PPC_OPER_TYPE_NUM;
	dec->operand_fmtstr = PPC_FMTSTR_VREG_C_NUM_LPAREN_NUM_RPAREN_;
	return 0;
}

/* lxssp VREG,NUM(NUM) */
int lxssp_VREG_NUM_NUM_(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_LXSSP;
	/* 111001AAAAA00000BBBBBBBBBBBBBB11 */
	dec->operand_n = 3;
	dec->operand_types[0] = PPC_OPER_TYPE_VREG;
	dec->operand_values[0] = (insword & 0x3E00000)>>21;
	dec->operand_types[1] = PPC_OPER_TYPE_NUM;
	dec->operand_values[1] = (insword & 0xFFFC)>>2;
	dec->operand_types[2] = PPC_OPER_TYPE_NUM;
	dec->operand_fmtstr = PPC_FMTSTR_VREG_C_NUM_LPAREN_NUM_RPAREN_;
	return 0;
}

/* lfdp FREG,NUM(GPR) */
int lfdp_FREG_NUM_GPR_(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_LFDP;
	/* 111001AAAA0CCCCCBBBBBBBBBBBBBB0x */
	dec->operand_n = 3;
	dec->operand_types[0] = PPC_OPER_TYPE_FREG;
	dec->operand_values[0] = (insword & 0x3C00000)>>22;
	dec->operand_types[1] = PPC_OPER_TYPE_NUM;
	dec->operand_values[1] = (insword & 0xFFFC)>>2;
	dec->operand_types[2] = PPC_OPER_TYPE_GPR;
	dec->operand_values[2] = (insword & 0x1F0000)>>16;
	dec->operand_fmtstr = PPC_FMTSTR_FREG_C_NUM_LPAREN_GPR_RPAREN_;
	return 0;
}

/* lxsd VREG,NUM(GPR) */
int lxsd_VREG_NUM_GPR_(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_LXSD;
	/* 111001AAAAACCCCCBBBBBBBBBBBBBB10 */
	dec->operand_n = 3;
	dec->operand_types[0] = PPC_OPER_TYPE_VREG;
	dec->operand_values[0] = (insword & 0x3E00000)>>21;
	dec->operand_types[1] = PPC_OPER_TYPE_NUM;
	dec->operand_values[1] = (insword & 0xFFFC)>>2;
	dec->operand_types[2] = PPC_OPER_TYPE_GPR;
	dec->operand_values[2] = (insword & 0x1F0000)>>16;
	dec->operand_fmtstr = PPC_FMTSTR_VREG_C_NUM_LPAREN_GPR_RPAREN_;
	return 0;
}

/* lxssp VREG,NUM(GPR) */
int lxssp_VREG_NUM_GPR_(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_LXSSP;
	/* 111001AAAAACCCCCBBBBBBBBBBBBBB11 */
	dec->operand_n = 3;
	dec->operand_types[0] = PPC_OPER_TYPE_VREG;
	dec->operand_values[0] = (insword & 0x3E00000)>>21;
	dec->operand_types[1] = PPC_OPER_TYPE_NUM;
	dec->operand_values[1] = (insword & 0xFFFC)>>2;
	dec->operand_types[2] = PPC_OPER_TYPE_GPR;
	dec->operand_values[2] = (insword & 0x1F0000)>>16;
	dec->operand_fmtstr = PPC_FMTSTR_VREG_C_NUM_LPAREN_GPR_RPAREN_;
	return 0;
}

/* psq_lu FREG,NUM(GPR),NUM,NUM */
int psq_lu_FREG_NUM_GPR__NUM_NUM(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_PSQ_LU;
	/* 111001AAAA1CCCCCDEEEBBBBBBBBBB0B */
	dec->operand_n = 5;
	dec->operand_types[0] = PPC_OPER_TYPE_FREG;
	dec->operand_values[0] = (insword & 0x3C00000)>>22;
	dec->operand_types[1] = PPC_OPER_TYPE_NUM;
	dec->operand_values[1] = ((insword & 0xFFC)>>1)|((insword & 0x1)>>0);
	dec->operand_types[2] = PPC_OPER_TYPE_GPR;
	dec->operand_values[2] = (insword & 0x1F0000)>>16;
	dec->operand_types[3] = PPC_OPER_TYPE_NUM;
	dec->operand_values[3] = (insword & 0x8000)>>15;
	dec->operand_types[4] = PPC_OPER_TYPE_NUM;
	dec->operand_values[4] = (insword & 0x7000)>>12;
	dec->operand_fmtstr = PPC_FMTSTR_FREG_C_NUM_LPAREN_GPR_RPAREN__C_NUM_C_NUM;
	return 0;
}

