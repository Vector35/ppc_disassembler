#include "disassembler.h"

/* stfdp FREG,NUM(NUM) */
int stfdp_FREG_NUM_NUM_(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_STFDP;
	/* 111101AAAA000000BBBBBBBBBBBBBB00 */
	dec->operand_n = 3;
	dec->operand_types[0] = PPC_OPER_TYPE_FREG;
	dec->operand_values[0] = (insword & 0x3C00000)>>22;
	dec->operand_types[1] = PPC_OPER_TYPE_NUM;
	dec->operand_values[1] = (insword & 0xFFFC)>>2;
	dec->operand_types[2] = PPC_OPER_TYPE_NUM;
	dec->operand_fmtstr = PPC_FMTSTR_FREG_C_NUM_LPAREN_NUM_RPAREN_;
	return 0;
}

/* lxv VSREG,NUM(NUM) */
int lxv_VSREG_NUM_NUM_(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_LXV;
	/* 111101AAAAA00000BBBBBBBBBBBBA001 */
	dec->operand_n = 3;
	dec->operand_types[0] = PPC_OPER_TYPE_VSREG;
	dec->operand_values[0] = ((insword & 0x3E00000)>>20)|((insword & 0x8)>>3);
	dec->operand_types[1] = PPC_OPER_TYPE_NUM;
	dec->operand_values[1] = (insword & 0xFFF0)>>4;
	dec->operand_types[2] = PPC_OPER_TYPE_NUM;
	dec->operand_fmtstr = PPC_FMTSTR_VSREG_C_NUM_LPAREN_NUM_RPAREN_;
	return 0;
}

/* stxsd VREG,NUM(NUM) */
int stxsd_VREG_NUM_NUM_(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_STXSD;
	/* 111101AAAAA00000BBBBBBBBBBBBBB10 */
	dec->operand_n = 3;
	dec->operand_types[0] = PPC_OPER_TYPE_VREG;
	dec->operand_values[0] = (insword & 0x3E00000)>>21;
	dec->operand_types[1] = PPC_OPER_TYPE_NUM;
	dec->operand_values[1] = (insword & 0xFFFC)>>2;
	dec->operand_types[2] = PPC_OPER_TYPE_NUM;
	dec->operand_fmtstr = PPC_FMTSTR_VREG_C_NUM_LPAREN_NUM_RPAREN_;
	return 0;
}

/* stxssp VREG,NUM(NUM) */
int stxssp_VREG_NUM_NUM_(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_STXSSP;
	/* 111101AAAAA00000BBBBBBBBBBBBBB11 */
	dec->operand_n = 3;
	dec->operand_types[0] = PPC_OPER_TYPE_VREG;
	dec->operand_values[0] = (insword & 0x3E00000)>>21;
	dec->operand_types[1] = PPC_OPER_TYPE_NUM;
	dec->operand_values[1] = (insword & 0xFFFC)>>2;
	dec->operand_types[2] = PPC_OPER_TYPE_NUM;
	dec->operand_fmtstr = PPC_FMTSTR_VREG_C_NUM_LPAREN_NUM_RPAREN_;
	return 0;
}

/* stxv VSREG,NUM(NUM) */
int stxv_VSREG_NUM_NUM_(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_STXV;
	/* 111101AAAAA00000BBBBBBBBBBBBA101 */
	dec->operand_n = 3;
	dec->operand_types[0] = PPC_OPER_TYPE_VSREG;
	dec->operand_values[0] = ((insword & 0x3E00000)>>20)|((insword & 0x8)>>3);
	dec->operand_types[1] = PPC_OPER_TYPE_NUM;
	dec->operand_values[1] = (insword & 0xFFF0)>>4;
	dec->operand_types[2] = PPC_OPER_TYPE_NUM;
	dec->operand_fmtstr = PPC_FMTSTR_VSREG_C_NUM_LPAREN_NUM_RPAREN_;
	return 0;
}

/* stfdp FREG,NUM(GPR) */
int stfdp_FREG_NUM_GPR_(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_STFDP;
	/* 111101AAAA0CCCCCBBBBBBBBBBBBBB00 */
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

/* lxv VSREG,NUM(GPR) */
int lxv_VSREG_NUM_GPR_(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_LXV;
	/* 111101AAAAACCCCCBBBBBBBBBBBBA001 */
	dec->operand_n = 3;
	dec->operand_types[0] = PPC_OPER_TYPE_VSREG;
	dec->operand_values[0] = ((insword & 0x3E00000)>>20)|((insword & 0x8)>>3);
	dec->operand_types[1] = PPC_OPER_TYPE_NUM;
	dec->operand_values[1] = (insword & 0xFFF0)>>4;
	dec->operand_types[2] = PPC_OPER_TYPE_GPR;
	dec->operand_values[2] = (insword & 0x1F0000)>>16;
	dec->operand_fmtstr = PPC_FMTSTR_VSREG_C_NUM_LPAREN_GPR_RPAREN_;
	return 0;
}

/* stxsd VREG,NUM(GPR) */
int stxsd_VREG_NUM_GPR_(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_STXSD;
	/* 111101AAAAACCCCCBBBBBBBBBBBBBB10 */
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

/* stxssp VREG,NUM(GPR) */
int stxssp_VREG_NUM_GPR_(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_STXSSP;
	/* 111101AAAAACCCCxBBBBBBBBBBBBBB11 */
	dec->operand_n = 3;
	dec->operand_types[0] = PPC_OPER_TYPE_VREG;
	dec->operand_values[0] = (insword & 0x3E00000)>>21;
	dec->operand_types[1] = PPC_OPER_TYPE_NUM;
	dec->operand_values[1] = (insword & 0xFFFC)>>2;
	dec->operand_types[2] = PPC_OPER_TYPE_GPR;
	dec->operand_values[2] = (insword & 0x1E0000)>>17;
	dec->operand_fmtstr = PPC_FMTSTR_VREG_C_NUM_LPAREN_GPR_RPAREN_;
	return 0;
}

/* stxv VSREG,NUM(GPR) */
int stxv_VSREG_NUM_GPR_(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_STXV;
	/* 111101AAAAACCCCCBBBBBBBBBBBBA101 */
	dec->operand_n = 3;
	dec->operand_types[0] = PPC_OPER_TYPE_VSREG;
	dec->operand_values[0] = ((insword & 0x3E00000)>>20)|((insword & 0x8)>>3);
	dec->operand_types[1] = PPC_OPER_TYPE_NUM;
	dec->operand_values[1] = (insword & 0xFFF0)>>4;
	dec->operand_types[2] = PPC_OPER_TYPE_GPR;
	dec->operand_values[2] = (insword & 0x1F0000)>>16;
	dec->operand_fmtstr = PPC_FMTSTR_VSREG_C_NUM_LPAREN_GPR_RPAREN_;
	return 0;
}

/* psq_stu FREG,NUM(GPR),NUM,NUM */
int psq_stu_FREG_NUM_GPR__NUM_NUM(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_PSQ_STU;
	/* 111101AAAA1CCCCCDEEEBBBBBBBBBB00 */
	dec->operand_n = 5;
	dec->operand_types[0] = PPC_OPER_TYPE_FREG;
	dec->operand_values[0] = (insword & 0x3C00000)>>22;
	dec->operand_types[1] = PPC_OPER_TYPE_NUM;
	dec->operand_values[1] = (insword & 0xFFC)>>2;
	dec->operand_types[2] = PPC_OPER_TYPE_GPR;
	dec->operand_values[2] = (insword & 0x1F0000)>>16;
	dec->operand_types[3] = PPC_OPER_TYPE_NUM;
	dec->operand_values[3] = (insword & 0x8000)>>15;
	dec->operand_types[4] = PPC_OPER_TYPE_NUM;
	dec->operand_values[4] = (insword & 0x7000)>>12;
	dec->operand_fmtstr = PPC_FMTSTR_FREG_C_NUM_LPAREN_GPR_RPAREN__C_NUM_C_NUM;
	return 0;
}

