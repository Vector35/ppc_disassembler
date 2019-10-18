#include "disassembler.h"

/* fcmpu CREG,FREG,FREG */
int fcmpu_CREG_FREG_FREG(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_FCMPU;
	/* 111111AAA00BBBBBCCCCC00000000000 */
	dec->operand_n = 3;
	dec->operand_types[0] = PPC_OPER_TYPE_CREG;
	dec->operand_values[0] = (insword & 0x3800000)>>23;
	dec->operand_types[1] = PPC_OPER_TYPE_FREG;
	dec->operand_values[1] = (insword & 0x1F0000)>>16;
	dec->operand_types[2] = PPC_OPER_TYPE_FREG;
	dec->operand_values[2] = (insword & 0xF800)>>11;
	dec->operand_fmtstr = PPC_FMTSTR_CREG_C_FREG_C_FREG;
	return 0;
}

/* daddq FREG,FREG,FREG */
int daddq_FREG_FREG_FREG(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_DADDQ;
	/* 111111AAAA0BBBBxCCCCx00000000100 */
	dec->operand_n = 3;
	dec->operand_types[0] = PPC_OPER_TYPE_FREG;
	dec->operand_values[0] = (insword & 0x3C00000)>>22;
	dec->operand_types[1] = PPC_OPER_TYPE_FREG;
	dec->operand_values[1] = (insword & 0x1E0000)>>17;
	dec->operand_types[2] = PPC_OPER_TYPE_FREG;
	dec->operand_values[2] = (insword & 0xF000)>>12;
	dec->operand_fmtstr = PPC_FMTSTR_FREG_C_FREG_C_FREG;
	return 0;
}

/* daddq. FREG,FREG,FREG */
int daddqD_FREG_FREG_FREG(uint32_t insword, struct ppc_decoded *dec)
{
	dec->properties |= PPC_PROPERTY_DOTTED;
	dec->mnemonic = PPC_MNEM_DADDQ;
	/* 111111AAAA0BBBBxCCCCx00000000101 */
	dec->operand_n = 3;
	dec->operand_types[0] = PPC_OPER_TYPE_FREG;
	dec->operand_values[0] = (insword & 0x3C00000)>>22;
	dec->operand_types[1] = PPC_OPER_TYPE_FREG;
	dec->operand_values[1] = (insword & 0x1E0000)>>17;
	dec->operand_types[2] = PPC_OPER_TYPE_FREG;
	dec->operand_values[2] = (insword & 0xF000)>>12;
	dec->operand_fmtstr = PPC_FMTSTR_FREG_C_FREG_C_FREG;
	return 0;
}

/* dquaq FREG,FREG,FREG,NUM */
int dquaq_FREG_FREG_FREG_NUM(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_DQUAQ;
	/* 111111AAAA0BBBBxCCCCxDD000000110 */
	dec->operand_n = 4;
	dec->operand_types[0] = PPC_OPER_TYPE_FREG;
	dec->operand_values[0] = (insword & 0x3C00000)>>22;
	dec->operand_types[1] = PPC_OPER_TYPE_FREG;
	dec->operand_values[1] = (insword & 0x1E0000)>>17;
	dec->operand_types[2] = PPC_OPER_TYPE_FREG;
	dec->operand_values[2] = (insword & 0xF000)>>12;
	dec->operand_types[3] = PPC_OPER_TYPE_NUM;
	dec->operand_values[3] = (insword & 0x600)>>9;
	dec->operand_fmtstr = PPC_FMTSTR_FREG_C_FREG_C_FREG_C_NUM;
	return 0;
}

/* dquaq. FREG,FREG,FREG,NUM */
int dquaqD_FREG_FREG_FREG_NUM(uint32_t insword, struct ppc_decoded *dec)
{
	dec->properties |= PPC_PROPERTY_DOTTED;
	dec->mnemonic = PPC_MNEM_DQUAQ;
	/* 111111AAAA0BBBBxCCCCxDD000000111 */
	dec->operand_n = 4;
	dec->operand_types[0] = PPC_OPER_TYPE_FREG;
	dec->operand_values[0] = (insword & 0x3C00000)>>22;
	dec->operand_types[1] = PPC_OPER_TYPE_FREG;
	dec->operand_values[1] = (insword & 0x1E0000)>>17;
	dec->operand_types[2] = PPC_OPER_TYPE_FREG;
	dec->operand_values[2] = (insword & 0xF000)>>12;
	dec->operand_types[3] = PPC_OPER_TYPE_NUM;
	dec->operand_values[3] = (insword & 0x600)>>9;
	dec->operand_fmtstr = PPC_FMTSTR_FREG_C_FREG_C_FREG_C_NUM;
	return 0;
}

/* xsaddqp VREG,VREG,VREG */
int xsaddqp_VREG_VREG_VREG(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_XSADDQP;
	/* 111111AAAAABBBBBCCCCC00000001000 */
	dec->operand_n = 3;
	dec->operand_types[0] = PPC_OPER_TYPE_VREG;
	dec->operand_values[0] = (insword & 0x3E00000)>>21;
	dec->operand_types[1] = PPC_OPER_TYPE_VREG;
	dec->operand_values[1] = (insword & 0x1F0000)>>16;
	dec->operand_types[2] = PPC_OPER_TYPE_VREG;
	dec->operand_values[2] = (insword & 0xF800)>>11;
	dec->operand_fmtstr = PPC_FMTSTR_VREG_C_VREG_C_VREG;
	return 0;
}

/* xsaddqpo VREG,VREG,VREG */
int xsaddqpo_VREG_VREG_VREG(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_XSADDQPO;
	/* 111111AAAAABBBBBCCCCC00000001001 */
	dec->operand_n = 3;
	dec->operand_types[0] = PPC_OPER_TYPE_VREG;
	dec->operand_values[0] = (insword & 0x3E00000)>>21;
	dec->operand_types[1] = PPC_OPER_TYPE_VREG;
	dec->operand_values[1] = (insword & 0x1F0000)>>16;
	dec->operand_types[2] = PPC_OPER_TYPE_VREG;
	dec->operand_values[2] = (insword & 0xF800)>>11;
	dec->operand_fmtstr = PPC_FMTSTR_VREG_C_VREG_C_VREG;
	return 0;
}

/* xsrqpi NUM,VREG,VREG,NUM */
int xsrqpi_NUM_VREG_VREG_NUM(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_XSRQPI;
	/* 111111BBBBBxxxxACCCCCDD000001010 */
	dec->operand_n = 4;
	dec->operand_types[0] = PPC_OPER_TYPE_NUM;
	dec->operand_values[0] = (insword & 0x10000)>>16;
	dec->operand_types[1] = PPC_OPER_TYPE_VREG;
	dec->operand_values[1] = (insword & 0x3E00000)>>21;
	dec->operand_types[2] = PPC_OPER_TYPE_VREG;
	dec->operand_values[2] = (insword & 0xF800)>>11;
	dec->operand_types[3] = PPC_OPER_TYPE_NUM;
	dec->operand_values[3] = (insword & 0x600)>>9;
	dec->operand_fmtstr = PPC_FMTSTR_NUM_C_VREG_C_VREG_C_NUM;
	return 0;
}

/* xsrqpix NUM,VREG,VREG,NUM */
int xsrqpix_NUM_VREG_VREG_NUM(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_XSRQPIX;
	/* 111111BBBBBxxxxACCCCCDD000001011 */
	dec->operand_n = 4;
	dec->operand_types[0] = PPC_OPER_TYPE_NUM;
	dec->operand_values[0] = (insword & 0x10000)>>16;
	dec->operand_types[1] = PPC_OPER_TYPE_VREG;
	dec->operand_values[1] = (insword & 0x3E00000)>>21;
	dec->operand_types[2] = PPC_OPER_TYPE_VREG;
	dec->operand_values[2] = (insword & 0xF800)>>11;
	dec->operand_types[3] = PPC_OPER_TYPE_NUM;
	dec->operand_values[3] = (insword & 0x600)>>9;
	dec->operand_fmtstr = PPC_FMTSTR_NUM_C_VREG_C_VREG_C_NUM;
	return 0;
}

/* fcpsgn FREG,FREG,FREG */
int fcpsgn_FREG_FREG_FREG(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_FCPSGN;
	/* 111111AAAAABBBBBCCCCC00000010000 */
	dec->operand_n = 3;
	dec->operand_types[0] = PPC_OPER_TYPE_FREG;
	dec->operand_values[0] = (insword & 0x3E00000)>>21;
	dec->operand_types[1] = PPC_OPER_TYPE_FREG;
	dec->operand_values[1] = (insword & 0x1F0000)>>16;
	dec->operand_types[2] = PPC_OPER_TYPE_FREG;
	dec->operand_values[2] = (insword & 0xF800)>>11;
	dec->operand_fmtstr = PPC_FMTSTR_FREG_C_FREG_C_FREG;
	return 0;
}

/* fcpsgn. FREG,FREG,FREG */
int fcpsgnD_FREG_FREG_FREG(uint32_t insword, struct ppc_decoded *dec)
{
	dec->properties |= PPC_PROPERTY_DOTTED;
	dec->mnemonic = PPC_MNEM_FCPSGN;
	/* 111111AAAAABBBBBCCCCC00000010001 */
	dec->operand_n = 3;
	dec->operand_types[0] = PPC_OPER_TYPE_FREG;
	dec->operand_values[0] = (insword & 0x3E00000)>>21;
	dec->operand_types[1] = PPC_OPER_TYPE_FREG;
	dec->operand_values[1] = (insword & 0x1F0000)>>16;
	dec->operand_types[2] = PPC_OPER_TYPE_FREG;
	dec->operand_values[2] = (insword & 0xF800)>>11;
	dec->operand_fmtstr = PPC_FMTSTR_FREG_C_FREG_C_FREG;
	return 0;
}

/* frsp FREG,FREG */
int frsp_FREG_FREG(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_FRSP;
	/* 111111AAAAA00000BBBBB00000011000 */
	dec->operand_n = 2;
	dec->operand_types[0] = PPC_OPER_TYPE_FREG;
	dec->operand_values[0] = (insword & 0x3E00000)>>21;
	dec->operand_types[1] = PPC_OPER_TYPE_FREG;
	dec->operand_values[1] = (insword & 0xF800)>>11;
	dec->operand_fmtstr = PPC_FMTSTR_FREG_C_FREG;
	return 0;
}

/* frsp. FREG,FREG */
int frspD_FREG_FREG(uint32_t insword, struct ppc_decoded *dec)
{
	dec->properties |= PPC_PROPERTY_DOTTED;
	dec->mnemonic = PPC_MNEM_FRSP;
	/* 111111AAAAA00000BBBBB00000011001 */
	dec->operand_n = 2;
	dec->operand_types[0] = PPC_OPER_TYPE_FREG;
	dec->operand_values[0] = (insword & 0x3E00000)>>21;
	dec->operand_types[1] = PPC_OPER_TYPE_FREG;
	dec->operand_values[1] = (insword & 0xF800)>>11;
	dec->operand_fmtstr = PPC_FMTSTR_FREG_C_FREG;
	return 0;
}

/* fctiw FREG,FREG */
int fctiw_FREG_FREG(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_FCTIW;
	/* 111111AAAAA00000BBBBB00000011100 */
	dec->operand_n = 2;
	dec->operand_types[0] = PPC_OPER_TYPE_FREG;
	dec->operand_values[0] = (insword & 0x3E00000)>>21;
	dec->operand_types[1] = PPC_OPER_TYPE_FREG;
	dec->operand_values[1] = (insword & 0xF800)>>11;
	dec->operand_fmtstr = PPC_FMTSTR_FREG_C_FREG;
	return 0;
}

/* fctiw. FREG,FREG */
int fctiwD_FREG_FREG(uint32_t insword, struct ppc_decoded *dec)
{
	dec->properties |= PPC_PROPERTY_DOTTED;
	dec->mnemonic = PPC_MNEM_FCTIW;
	/* 111111AAAAA00000BBBBB00000011101 */
	dec->operand_n = 2;
	dec->operand_types[0] = PPC_OPER_TYPE_FREG;
	dec->operand_values[0] = (insword & 0x3E00000)>>21;
	dec->operand_types[1] = PPC_OPER_TYPE_FREG;
	dec->operand_values[1] = (insword & 0xF800)>>11;
	dec->operand_fmtstr = PPC_FMTSTR_FREG_C_FREG;
	return 0;
}

/* fctiwz FREG,FREG */
int fctiwz_FREG_FREG(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_FCTIWZ;
	/* 111111AAAAA00000BBBBB00000011110 */
	dec->operand_n = 2;
	dec->operand_types[0] = PPC_OPER_TYPE_FREG;
	dec->operand_values[0] = (insword & 0x3E00000)>>21;
	dec->operand_types[1] = PPC_OPER_TYPE_FREG;
	dec->operand_values[1] = (insword & 0xF800)>>11;
	dec->operand_fmtstr = PPC_FMTSTR_FREG_C_FREG;
	return 0;
}

/* fctiwz. FREG,FREG */
int fctiwzD_FREG_FREG(uint32_t insword, struct ppc_decoded *dec)
{
	dec->properties |= PPC_PROPERTY_DOTTED;
	dec->mnemonic = PPC_MNEM_FCTIWZ;
	/* 111111AAAAA00000BBBBB00000011111 */
	dec->operand_n = 2;
	dec->operand_types[0] = PPC_OPER_TYPE_FREG;
	dec->operand_values[0] = (insword & 0x3E00000)>>21;
	dec->operand_types[1] = PPC_OPER_TYPE_FREG;
	dec->operand_values[1] = (insword & 0xF800)>>11;
	dec->operand_fmtstr = PPC_FMTSTR_FREG_C_FREG;
	return 0;
}

/* fdiv FREG,FREG,FREG */
int fdiv_FREG_FREG_FREG(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_FDIV;
	/* 111111AAAAABBBBBCCCCC00000100100 */
	dec->operand_n = 3;
	dec->operand_types[0] = PPC_OPER_TYPE_FREG;
	dec->operand_values[0] = (insword & 0x3E00000)>>21;
	dec->operand_types[1] = PPC_OPER_TYPE_FREG;
	dec->operand_values[1] = (insword & 0x1F0000)>>16;
	dec->operand_types[2] = PPC_OPER_TYPE_FREG;
	dec->operand_values[2] = (insword & 0xF800)>>11;
	dec->operand_fmtstr = PPC_FMTSTR_FREG_C_FREG_C_FREG;
	return 0;
}

/* fdiv. FREG,FREG,FREG */
int fdivD_FREG_FREG_FREG(uint32_t insword, struct ppc_decoded *dec)
{
	dec->properties |= PPC_PROPERTY_DOTTED;
	dec->mnemonic = PPC_MNEM_FDIV;
	/* 111111AAAAABBBBBCCCCC00000100101 */
	dec->operand_n = 3;
	dec->operand_types[0] = PPC_OPER_TYPE_FREG;
	dec->operand_values[0] = (insword & 0x3E00000)>>21;
	dec->operand_types[1] = PPC_OPER_TYPE_FREG;
	dec->operand_values[1] = (insword & 0x1F0000)>>16;
	dec->operand_types[2] = PPC_OPER_TYPE_FREG;
	dec->operand_values[2] = (insword & 0xF800)>>11;
	dec->operand_fmtstr = PPC_FMTSTR_FREG_C_FREG_C_FREG;
	return 0;
}

/* fsub FREG,FREG,FREG */
int fsub_FREG_FREG_FREG(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_FSUB;
	/* 111111AAAAABBBBBCCCCC00000101000 */
	dec->operand_n = 3;
	dec->operand_types[0] = PPC_OPER_TYPE_FREG;
	dec->operand_values[0] = (insword & 0x3E00000)>>21;
	dec->operand_types[1] = PPC_OPER_TYPE_FREG;
	dec->operand_values[1] = (insword & 0x1F0000)>>16;
	dec->operand_types[2] = PPC_OPER_TYPE_FREG;
	dec->operand_values[2] = (insword & 0xF800)>>11;
	dec->operand_fmtstr = PPC_FMTSTR_FREG_C_FREG_C_FREG;
	return 0;
}

/* fsub. FREG,FREG,FREG */
int fsubD_FREG_FREG_FREG(uint32_t insword, struct ppc_decoded *dec)
{
	dec->properties |= PPC_PROPERTY_DOTTED;
	dec->mnemonic = PPC_MNEM_FSUB;
	/* 111111AAAAABBBBBCCCCC00000101001 */
	dec->operand_n = 3;
	dec->operand_types[0] = PPC_OPER_TYPE_FREG;
	dec->operand_values[0] = (insword & 0x3E00000)>>21;
	dec->operand_types[1] = PPC_OPER_TYPE_FREG;
	dec->operand_values[1] = (insword & 0x1F0000)>>16;
	dec->operand_types[2] = PPC_OPER_TYPE_FREG;
	dec->operand_values[2] = (insword & 0xF800)>>11;
	dec->operand_fmtstr = PPC_FMTSTR_FREG_C_FREG_C_FREG;
	return 0;
}

/* fadd FREG,FREG,FREG */
int fadd_FREG_FREG_FREG(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_FADD;
	/* 111111AAAAABBBBBCCCCC00000101010 */
	dec->operand_n = 3;
	dec->operand_types[0] = PPC_OPER_TYPE_FREG;
	dec->operand_values[0] = (insword & 0x3E00000)>>21;
	dec->operand_types[1] = PPC_OPER_TYPE_FREG;
	dec->operand_values[1] = (insword & 0x1F0000)>>16;
	dec->operand_types[2] = PPC_OPER_TYPE_FREG;
	dec->operand_values[2] = (insword & 0xF800)>>11;
	dec->operand_fmtstr = PPC_FMTSTR_FREG_C_FREG_C_FREG;
	return 0;
}

/* fadd. FREG,FREG,FREG */
int faddD_FREG_FREG_FREG(uint32_t insword, struct ppc_decoded *dec)
{
	dec->properties |= PPC_PROPERTY_DOTTED;
	dec->mnemonic = PPC_MNEM_FADD;
	/* 111111AAAAABBBBBCCCCC00000101011 */
	dec->operand_n = 3;
	dec->operand_types[0] = PPC_OPER_TYPE_FREG;
	dec->operand_values[0] = (insword & 0x3E00000)>>21;
	dec->operand_types[1] = PPC_OPER_TYPE_FREG;
	dec->operand_values[1] = (insword & 0x1F0000)>>16;
	dec->operand_types[2] = PPC_OPER_TYPE_FREG;
	dec->operand_values[2] = (insword & 0xF800)>>11;
	dec->operand_fmtstr = PPC_FMTSTR_FREG_C_FREG_C_FREG;
	return 0;
}

/* fsqrt FREG,FREG */
int fsqrt_FREG_FREG(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_FSQRT;
	/* 111111AAAAA00000BBBBB00000101100 */
	dec->operand_n = 2;
	dec->operand_types[0] = PPC_OPER_TYPE_FREG;
	dec->operand_values[0] = (insword & 0x3E00000)>>21;
	dec->operand_types[1] = PPC_OPER_TYPE_FREG;
	dec->operand_values[1] = (insword & 0xF800)>>11;
	dec->operand_fmtstr = PPC_FMTSTR_FREG_C_FREG;
	return 0;
}

/* fsqrt. FREG,FREG */
int fsqrtD_FREG_FREG(uint32_t insword, struct ppc_decoded *dec)
{
	dec->properties |= PPC_PROPERTY_DOTTED;
	dec->mnemonic = PPC_MNEM_FSQRT;
	/* 111111AAAAA00000BBBBB00000101101 */
	dec->operand_n = 2;
	dec->operand_types[0] = PPC_OPER_TYPE_FREG;
	dec->operand_values[0] = (insword & 0x3E00000)>>21;
	dec->operand_types[1] = PPC_OPER_TYPE_FREG;
	dec->operand_values[1] = (insword & 0xF800)>>11;
	dec->operand_fmtstr = PPC_FMTSTR_FREG_C_FREG;
	return 0;
}

/* fsel FREG,FREG,FREG,FREG */
int fsel_FREG_FREG_FREG_FREG(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_FSEL;
	/* 111111AAAAABBBBBDDDDDCCCCC101110 */
	dec->operand_n = 4;
	dec->operand_types[0] = PPC_OPER_TYPE_FREG;
	dec->operand_values[0] = (insword & 0x3E00000)>>21;
	dec->operand_types[1] = PPC_OPER_TYPE_FREG;
	dec->operand_values[1] = (insword & 0x1F0000)>>16;
	dec->operand_types[2] = PPC_OPER_TYPE_FREG;
	dec->operand_values[2] = (insword & 0x7C0)>>6;
	dec->operand_types[3] = PPC_OPER_TYPE_FREG;
	dec->operand_values[3] = (insword & 0xF800)>>11;
	dec->operand_fmtstr = PPC_FMTSTR_FREG_C_FREG_C_FREG_C_FREG;
	return 0;
}

/* fsel. FREG,FREG,FREG,FREG */
int fselD_FREG_FREG_FREG_FREG(uint32_t insword, struct ppc_decoded *dec)
{
	dec->properties |= PPC_PROPERTY_DOTTED;
	dec->mnemonic = PPC_MNEM_FSEL;
	/* 111111AAAAABBBBBDDDDDCCCCC101111 */
	dec->operand_n = 4;
	dec->operand_types[0] = PPC_OPER_TYPE_FREG;
	dec->operand_values[0] = (insword & 0x3E00000)>>21;
	dec->operand_types[1] = PPC_OPER_TYPE_FREG;
	dec->operand_values[1] = (insword & 0x1F0000)>>16;
	dec->operand_types[2] = PPC_OPER_TYPE_FREG;
	dec->operand_values[2] = (insword & 0x7C0)>>6;
	dec->operand_types[3] = PPC_OPER_TYPE_FREG;
	dec->operand_values[3] = (insword & 0xF800)>>11;
	dec->operand_fmtstr = PPC_FMTSTR_FREG_C_FREG_C_FREG_C_FREG;
	return 0;
}

/* fre FREG,FREG */
int fre_FREG_FREG(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_FRE;
	/* 111111AAAAA00000BBBBB00000110000 */
	dec->operand_n = 2;
	dec->operand_types[0] = PPC_OPER_TYPE_FREG;
	dec->operand_values[0] = (insword & 0x3E00000)>>21;
	dec->operand_types[1] = PPC_OPER_TYPE_FREG;
	dec->operand_values[1] = (insword & 0xF800)>>11;
	dec->operand_fmtstr = PPC_FMTSTR_FREG_C_FREG;
	return 0;
}

/* fre. FREG,FREG */
int freD_FREG_FREG(uint32_t insword, struct ppc_decoded *dec)
{
	dec->properties |= PPC_PROPERTY_DOTTED;
	dec->mnemonic = PPC_MNEM_FRE;
	/* 111111AAAAA00000BBBBB00000110001 */
	dec->operand_n = 2;
	dec->operand_types[0] = PPC_OPER_TYPE_FREG;
	dec->operand_values[0] = (insword & 0x3E00000)>>21;
	dec->operand_types[1] = PPC_OPER_TYPE_FREG;
	dec->operand_values[1] = (insword & 0xF800)>>11;
	dec->operand_fmtstr = PPC_FMTSTR_FREG_C_FREG;
	return 0;
}

/* fmul FREG,FREG,FREG */
int fmul_FREG_FREG_FREG(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_FMUL;
	/* 111111AAAAABBBBB00000CCCCC110010 */
	dec->operand_n = 3;
	dec->operand_types[0] = PPC_OPER_TYPE_FREG;
	dec->operand_values[0] = (insword & 0x3E00000)>>21;
	dec->operand_types[1] = PPC_OPER_TYPE_FREG;
	dec->operand_values[1] = (insword & 0x1F0000)>>16;
	dec->operand_types[2] = PPC_OPER_TYPE_FREG;
	dec->operand_values[2] = (insword & 0x7C0)>>6;
	dec->operand_fmtstr = PPC_FMTSTR_FREG_C_FREG_C_FREG;
	return 0;
}

/* fmul. FREG,FREG,FREG */
int fmulD_FREG_FREG_FREG(uint32_t insword, struct ppc_decoded *dec)
{
	dec->properties |= PPC_PROPERTY_DOTTED;
	dec->mnemonic = PPC_MNEM_FMUL;
	/* 111111AAAAABBBBB00000CCCCC110011 */
	dec->operand_n = 3;
	dec->operand_types[0] = PPC_OPER_TYPE_FREG;
	dec->operand_values[0] = (insword & 0x3E00000)>>21;
	dec->operand_types[1] = PPC_OPER_TYPE_FREG;
	dec->operand_values[1] = (insword & 0x1F0000)>>16;
	dec->operand_types[2] = PPC_OPER_TYPE_FREG;
	dec->operand_values[2] = (insword & 0x7C0)>>6;
	dec->operand_fmtstr = PPC_FMTSTR_FREG_C_FREG_C_FREG;
	return 0;
}

/* frsqrte FREG,FREG */
int frsqrte_FREG_FREG(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_FRSQRTE;
	/* 111111AAAAA00000BBBBB00000110100 */
	dec->operand_n = 2;
	dec->operand_types[0] = PPC_OPER_TYPE_FREG;
	dec->operand_values[0] = (insword & 0x3E00000)>>21;
	dec->operand_types[1] = PPC_OPER_TYPE_FREG;
	dec->operand_values[1] = (insword & 0xF800)>>11;
	dec->operand_fmtstr = PPC_FMTSTR_FREG_C_FREG;
	return 0;
}

/* frsqrte. FREG,FREG */
int frsqrteD_FREG_FREG(uint32_t insword, struct ppc_decoded *dec)
{
	dec->properties |= PPC_PROPERTY_DOTTED;
	dec->mnemonic = PPC_MNEM_FRSQRTE;
	/* 111111AAAAA00000BBBBB00000110101 */
	dec->operand_n = 2;
	dec->operand_types[0] = PPC_OPER_TYPE_FREG;
	dec->operand_values[0] = (insword & 0x3E00000)>>21;
	dec->operand_types[1] = PPC_OPER_TYPE_FREG;
	dec->operand_values[1] = (insword & 0xF800)>>11;
	dec->operand_fmtstr = PPC_FMTSTR_FREG_C_FREG;
	return 0;
}

/* fmsub FREG,FREG,FREG,FREG */
int fmsub_FREG_FREG_FREG_FREG(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_FMSUB;
	/* 111111AAAAABBBBBDDDDDCCCCC111000 */
	dec->operand_n = 4;
	dec->operand_types[0] = PPC_OPER_TYPE_FREG;
	dec->operand_values[0] = (insword & 0x3E00000)>>21;
	dec->operand_types[1] = PPC_OPER_TYPE_FREG;
	dec->operand_values[1] = (insword & 0x1F0000)>>16;
	dec->operand_types[2] = PPC_OPER_TYPE_FREG;
	dec->operand_values[2] = (insword & 0x7C0)>>6;
	dec->operand_types[3] = PPC_OPER_TYPE_FREG;
	dec->operand_values[3] = (insword & 0xF800)>>11;
	dec->operand_fmtstr = PPC_FMTSTR_FREG_C_FREG_C_FREG_C_FREG;
	return 0;
}

/* fmsub. FREG,FREG,FREG,FREG */
int fmsubD_FREG_FREG_FREG_FREG(uint32_t insword, struct ppc_decoded *dec)
{
	dec->properties |= PPC_PROPERTY_DOTTED;
	dec->mnemonic = PPC_MNEM_FMSUB;
	/* 111111AAAAABBBBBDDDDDCCCCC111001 */
	dec->operand_n = 4;
	dec->operand_types[0] = PPC_OPER_TYPE_FREG;
	dec->operand_values[0] = (insword & 0x3E00000)>>21;
	dec->operand_types[1] = PPC_OPER_TYPE_FREG;
	dec->operand_values[1] = (insword & 0x1F0000)>>16;
	dec->operand_types[2] = PPC_OPER_TYPE_FREG;
	dec->operand_values[2] = (insword & 0x7C0)>>6;
	dec->operand_types[3] = PPC_OPER_TYPE_FREG;
	dec->operand_values[3] = (insword & 0xF800)>>11;
	dec->operand_fmtstr = PPC_FMTSTR_FREG_C_FREG_C_FREG_C_FREG;
	return 0;
}

/* fmadd FREG,FREG,FREG,FREG */
int fmadd_FREG_FREG_FREG_FREG(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_FMADD;
	/* 111111AAAAABBBBBDDDDDCCCCC111010 */
	dec->operand_n = 4;
	dec->operand_types[0] = PPC_OPER_TYPE_FREG;
	dec->operand_values[0] = (insword & 0x3E00000)>>21;
	dec->operand_types[1] = PPC_OPER_TYPE_FREG;
	dec->operand_values[1] = (insword & 0x1F0000)>>16;
	dec->operand_types[2] = PPC_OPER_TYPE_FREG;
	dec->operand_values[2] = (insword & 0x7C0)>>6;
	dec->operand_types[3] = PPC_OPER_TYPE_FREG;
	dec->operand_values[3] = (insword & 0xF800)>>11;
	dec->operand_fmtstr = PPC_FMTSTR_FREG_C_FREG_C_FREG_C_FREG;
	return 0;
}

/* fmadd. FREG,FREG,FREG,FREG */
int fmaddD_FREG_FREG_FREG_FREG(uint32_t insword, struct ppc_decoded *dec)
{
	dec->properties |= PPC_PROPERTY_DOTTED;
	dec->mnemonic = PPC_MNEM_FMADD;
	/* 111111AAAAABBBBBDDDDDCCCCC111011 */
	dec->operand_n = 4;
	dec->operand_types[0] = PPC_OPER_TYPE_FREG;
	dec->operand_values[0] = (insword & 0x3E00000)>>21;
	dec->operand_types[1] = PPC_OPER_TYPE_FREG;
	dec->operand_values[1] = (insword & 0x1F0000)>>16;
	dec->operand_types[2] = PPC_OPER_TYPE_FREG;
	dec->operand_values[2] = (insword & 0x7C0)>>6;
	dec->operand_types[3] = PPC_OPER_TYPE_FREG;
	dec->operand_values[3] = (insword & 0xF800)>>11;
	dec->operand_fmtstr = PPC_FMTSTR_FREG_C_FREG_C_FREG_C_FREG;
	return 0;
}

/* fnmsub FREG,FREG,FREG,FREG */
int fnmsub_FREG_FREG_FREG_FREG(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_FNMSUB;
	/* 111111AAAAABBBBBDDDDDCCCCC111100 */
	dec->operand_n = 4;
	dec->operand_types[0] = PPC_OPER_TYPE_FREG;
	dec->operand_values[0] = (insword & 0x3E00000)>>21;
	dec->operand_types[1] = PPC_OPER_TYPE_FREG;
	dec->operand_values[1] = (insword & 0x1F0000)>>16;
	dec->operand_types[2] = PPC_OPER_TYPE_FREG;
	dec->operand_values[2] = (insword & 0x7C0)>>6;
	dec->operand_types[3] = PPC_OPER_TYPE_FREG;
	dec->operand_values[3] = (insword & 0xF800)>>11;
	dec->operand_fmtstr = PPC_FMTSTR_FREG_C_FREG_C_FREG_C_FREG;
	return 0;
}

/* fnmsub. FREG,FREG,FREG,FREG */
int fnmsubD_FREG_FREG_FREG_FREG(uint32_t insword, struct ppc_decoded *dec)
{
	dec->properties |= PPC_PROPERTY_DOTTED;
	dec->mnemonic = PPC_MNEM_FNMSUB;
	/* 111111AAAAABBBBBDDDDDCCCCC111101 */
	dec->operand_n = 4;
	dec->operand_types[0] = PPC_OPER_TYPE_FREG;
	dec->operand_values[0] = (insword & 0x3E00000)>>21;
	dec->operand_types[1] = PPC_OPER_TYPE_FREG;
	dec->operand_values[1] = (insword & 0x1F0000)>>16;
	dec->operand_types[2] = PPC_OPER_TYPE_FREG;
	dec->operand_values[2] = (insword & 0x7C0)>>6;
	dec->operand_types[3] = PPC_OPER_TYPE_FREG;
	dec->operand_values[3] = (insword & 0xF800)>>11;
	dec->operand_fmtstr = PPC_FMTSTR_FREG_C_FREG_C_FREG_C_FREG;
	return 0;
}

/* fnmadd FREG,FREG,FREG,FREG */
int fnmadd_FREG_FREG_FREG_FREG(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_FNMADD;
	/* 111111AAAAABBBBBDDDDDCCCCC111110 */
	dec->operand_n = 4;
	dec->operand_types[0] = PPC_OPER_TYPE_FREG;
	dec->operand_values[0] = (insword & 0x3E00000)>>21;
	dec->operand_types[1] = PPC_OPER_TYPE_FREG;
	dec->operand_values[1] = (insword & 0x1F0000)>>16;
	dec->operand_types[2] = PPC_OPER_TYPE_FREG;
	dec->operand_values[2] = (insword & 0x7C0)>>6;
	dec->operand_types[3] = PPC_OPER_TYPE_FREG;
	dec->operand_values[3] = (insword & 0xF800)>>11;
	dec->operand_fmtstr = PPC_FMTSTR_FREG_C_FREG_C_FREG_C_FREG;
	return 0;
}

/* fnmadd. FREG,FREG,FREG,FREG */
int fnmaddD_FREG_FREG_FREG_FREG(uint32_t insword, struct ppc_decoded *dec)
{
	dec->properties |= PPC_PROPERTY_DOTTED;
	dec->mnemonic = PPC_MNEM_FNMADD;
	/* 111111AAAAABBBBBDDDDDCCCCC111111 */
	dec->operand_n = 4;
	dec->operand_types[0] = PPC_OPER_TYPE_FREG;
	dec->operand_values[0] = (insword & 0x3E00000)>>21;
	dec->operand_types[1] = PPC_OPER_TYPE_FREG;
	dec->operand_values[1] = (insword & 0x1F0000)>>16;
	dec->operand_types[2] = PPC_OPER_TYPE_FREG;
	dec->operand_values[2] = (insword & 0x7C0)>>6;
	dec->operand_types[3] = PPC_OPER_TYPE_FREG;
	dec->operand_values[3] = (insword & 0xF800)>>11;
	dec->operand_fmtstr = PPC_FMTSTR_FREG_C_FREG_C_FREG_C_FREG;
	return 0;
}

/* fcmpo CREG,FREG,FREG */
int fcmpo_CREG_FREG_FREG(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_FCMPO;
	/* 111111AAA00BBBBBCCCCC00001000000 */
	dec->operand_n = 3;
	dec->operand_types[0] = PPC_OPER_TYPE_CREG;
	dec->operand_values[0] = (insword & 0x3800000)>>23;
	dec->operand_types[1] = PPC_OPER_TYPE_FREG;
	dec->operand_values[1] = (insword & 0x1F0000)>>16;
	dec->operand_types[2] = PPC_OPER_TYPE_FREG;
	dec->operand_values[2] = (insword & 0xF800)>>11;
	dec->operand_fmtstr = PPC_FMTSTR_CREG_C_FREG_C_FREG;
	return 0;
}

/* dmulq FREG,FREG,FREG */
int dmulq_FREG_FREG_FREG(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_DMULQ;
	/* 111111AAAA0BBBBxCCCCx00001000100 */
	dec->operand_n = 3;
	dec->operand_types[0] = PPC_OPER_TYPE_FREG;
	dec->operand_values[0] = (insword & 0x3C00000)>>22;
	dec->operand_types[1] = PPC_OPER_TYPE_FREG;
	dec->operand_values[1] = (insword & 0x1E0000)>>17;
	dec->operand_types[2] = PPC_OPER_TYPE_FREG;
	dec->operand_values[2] = (insword & 0xF000)>>12;
	dec->operand_fmtstr = PPC_FMTSTR_FREG_C_FREG_C_FREG;
	return 0;
}

/* dmulq. FREG,FREG,FREG */
int dmulqD_FREG_FREG_FREG(uint32_t insword, struct ppc_decoded *dec)
{
	dec->properties |= PPC_PROPERTY_DOTTED;
	dec->mnemonic = PPC_MNEM_DMULQ;
	/* 111111AAAA0BBBBxCCCCx00001000101 */
	dec->operand_n = 3;
	dec->operand_types[0] = PPC_OPER_TYPE_FREG;
	dec->operand_values[0] = (insword & 0x3C00000)>>22;
	dec->operand_types[1] = PPC_OPER_TYPE_FREG;
	dec->operand_values[1] = (insword & 0x1E0000)>>17;
	dec->operand_types[2] = PPC_OPER_TYPE_FREG;
	dec->operand_values[2] = (insword & 0xF000)>>12;
	dec->operand_fmtstr = PPC_FMTSTR_FREG_C_FREG_C_FREG;
	return 0;
}

/* drrndq FREG,FREG,FREG,NUM */
int drrndq_FREG_FREG_FREG_NUM(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_DRRNDQ;
	/* 111111AAAA0BBBBBCCCCxDD001000110 */
	dec->operand_n = 4;
	dec->operand_types[0] = PPC_OPER_TYPE_FREG;
	dec->operand_values[0] = (insword & 0x3C00000)>>22;
	dec->operand_types[1] = PPC_OPER_TYPE_FREG;
	dec->operand_values[1] = (insword & 0x1F0000)>>16;
	dec->operand_types[2] = PPC_OPER_TYPE_FREG;
	dec->operand_values[2] = (insword & 0xF000)>>12;
	dec->operand_types[3] = PPC_OPER_TYPE_NUM;
	dec->operand_values[3] = (insword & 0x600)>>9;
	dec->operand_fmtstr = PPC_FMTSTR_FREG_C_FREG_C_FREG_C_NUM;
	return 0;
}

/* drrndq. FREG,FREG,FREG,NUM */
int drrndqD_FREG_FREG_FREG_NUM(uint32_t insword, struct ppc_decoded *dec)
{
	dec->properties |= PPC_PROPERTY_DOTTED;
	dec->mnemonic = PPC_MNEM_DRRNDQ;
	/* 111111AAAA0BBBBBCCCCxDD001000111 */
	dec->operand_n = 4;
	dec->operand_types[0] = PPC_OPER_TYPE_FREG;
	dec->operand_values[0] = (insword & 0x3C00000)>>22;
	dec->operand_types[1] = PPC_OPER_TYPE_FREG;
	dec->operand_values[1] = (insword & 0x1F0000)>>16;
	dec->operand_types[2] = PPC_OPER_TYPE_FREG;
	dec->operand_values[2] = (insword & 0xF000)>>12;
	dec->operand_types[3] = PPC_OPER_TYPE_NUM;
	dec->operand_values[3] = (insword & 0x600)>>9;
	dec->operand_fmtstr = PPC_FMTSTR_FREG_C_FREG_C_FREG_C_NUM;
	return 0;
}

/* xsmulqp VREG,VREG,VREG */
int xsmulqp_VREG_VREG_VREG(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_XSMULQP;
	/* 111111AAAAABBBBBCCCCC00001001000 */
	dec->operand_n = 3;
	dec->operand_types[0] = PPC_OPER_TYPE_VREG;
	dec->operand_values[0] = (insword & 0x3E00000)>>21;
	dec->operand_types[1] = PPC_OPER_TYPE_VREG;
	dec->operand_values[1] = (insword & 0x1F0000)>>16;
	dec->operand_types[2] = PPC_OPER_TYPE_VREG;
	dec->operand_values[2] = (insword & 0xF800)>>11;
	dec->operand_fmtstr = PPC_FMTSTR_VREG_C_VREG_C_VREG;
	return 0;
}

/* xsmulqpo VREG,VREG,VREG */
int xsmulqpo_VREG_VREG_VREG(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_XSMULQPO;
	/* 111111AAAAABBBBBCCCCC00001001001 */
	dec->operand_n = 3;
	dec->operand_types[0] = PPC_OPER_TYPE_VREG;
	dec->operand_values[0] = (insword & 0x3E00000)>>21;
	dec->operand_types[1] = PPC_OPER_TYPE_VREG;
	dec->operand_values[1] = (insword & 0x1F0000)>>16;
	dec->operand_types[2] = PPC_OPER_TYPE_VREG;
	dec->operand_values[2] = (insword & 0xF800)>>11;
	dec->operand_fmtstr = PPC_FMTSTR_VREG_C_VREG_C_VREG;
	return 0;
}

/* xsrqpxp NUM,VREG,VREG,NUM */
int xsrqpxp_NUM_VREG_VREG_NUM(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_XSRQPXP;
	/* 111111BBBBBxxxxACCCCCDD001001010 */
	dec->operand_n = 4;
	dec->operand_types[0] = PPC_OPER_TYPE_NUM;
	dec->operand_values[0] = (insword & 0x10000)>>16;
	dec->operand_types[1] = PPC_OPER_TYPE_VREG;
	dec->operand_values[1] = (insword & 0x3E00000)>>21;
	dec->operand_types[2] = PPC_OPER_TYPE_VREG;
	dec->operand_values[2] = (insword & 0xF800)>>11;
	dec->operand_types[3] = PPC_OPER_TYPE_NUM;
	dec->operand_values[3] = (insword & 0x600)>>9;
	dec->operand_fmtstr = PPC_FMTSTR_NUM_C_VREG_C_VREG_C_NUM;
	return 0;
}

/* mtfsb1 FLAG */
int mtfsb1_FLAG(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_MTFSB1;
	/* 111111000AA000000000000001001100 */
	dec->operand_n = 1;
	dec->operand_types[0] = PPC_OPER_TYPE_FLAG;
	dec->operand_values[0] = (insword & 0x600000)>>21;
	dec->operand_fmtstr = PPC_FMTSTR_FLAG;
	return 0;
}

/* mtfsb1. FLAG */
int mtfsb1D_FLAG(uint32_t insword, struct ppc_decoded *dec)
{
	dec->properties |= PPC_PROPERTY_DOTTED;
	dec->mnemonic = PPC_MNEM_MTFSB1;
	/* 111111000AA000000000000001001101 */
	dec->operand_n = 1;
	dec->operand_types[0] = PPC_OPER_TYPE_FLAG;
	dec->operand_values[0] = (insword & 0x600000)>>21;
	dec->operand_fmtstr = PPC_FMTSTR_FLAG;
	return 0;
}

/* fneg FREG,FREG */
int fneg_FREG_FREG(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_FNEG;
	/* 111111AAAAA00000BBBBB00001010000 */
	dec->operand_n = 2;
	dec->operand_types[0] = PPC_OPER_TYPE_FREG;
	dec->operand_values[0] = (insword & 0x3E00000)>>21;
	dec->operand_types[1] = PPC_OPER_TYPE_FREG;
	dec->operand_values[1] = (insword & 0xF800)>>11;
	dec->operand_fmtstr = PPC_FMTSTR_FREG_C_FREG;
	return 0;
}

/* fneg. FREG,FREG */
int fnegD_FREG_FREG(uint32_t insword, struct ppc_decoded *dec)
{
	dec->properties |= PPC_PROPERTY_DOTTED;
	dec->mnemonic = PPC_MNEM_FNEG;
	/* 111111AAAAA00000BBBBB00001010001 */
	dec->operand_n = 2;
	dec->operand_types[0] = PPC_OPER_TYPE_FREG;
	dec->operand_values[0] = (insword & 0x3E00000)>>21;
	dec->operand_types[1] = PPC_OPER_TYPE_FREG;
	dec->operand_values[1] = (insword & 0xF800)>>11;
	dec->operand_fmtstr = PPC_FMTSTR_FREG_C_FREG;
	return 0;
}

/* mcrfs CREG,CREG */
int mcrfs_CREG_CREG(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_MCRFS;
	/* 111111AAA00BBB000000000010000000 */
	dec->operand_n = 2;
	dec->operand_types[0] = PPC_OPER_TYPE_CREG;
	dec->operand_values[0] = (insword & 0x3800000)>>23;
	dec->operand_types[1] = PPC_OPER_TYPE_CREG;
	dec->operand_values[1] = (insword & 0x1C0000)>>18;
	dec->operand_fmtstr = PPC_FMTSTR_CREG_C_CREG;
	return 0;
}

/* dscliq FREG,FREG,NUM */
int dscliq_FREG_FREG_NUM(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_DSCLIQ;
	/* 111111AAAA0BBBBxCCCCCC0010000100 */
	dec->operand_n = 3;
	dec->operand_types[0] = PPC_OPER_TYPE_FREG;
	dec->operand_values[0] = (insword & 0x3C00000)>>22;
	dec->operand_types[1] = PPC_OPER_TYPE_FREG;
	dec->operand_values[1] = (insword & 0x1E0000)>>17;
	dec->operand_types[2] = PPC_OPER_TYPE_NUM;
	dec->operand_values[2] = (insword & 0xFC00)>>10;
	dec->operand_fmtstr = PPC_FMTSTR_FREG_C_FREG_C_NUM;
	return 0;
}

/* dscliq. FREG,FREG,NUM */
int dscliqD_FREG_FREG_NUM(uint32_t insword, struct ppc_decoded *dec)
{
	dec->properties |= PPC_PROPERTY_DOTTED;
	dec->mnemonic = PPC_MNEM_DSCLIQ;
	/* 111111AAAA0BBBBxCCCCCC0010000101 */
	dec->operand_n = 3;
	dec->operand_types[0] = PPC_OPER_TYPE_FREG;
	dec->operand_values[0] = (insword & 0x3C00000)>>22;
	dec->operand_types[1] = PPC_OPER_TYPE_FREG;
	dec->operand_values[1] = (insword & 0x1E0000)>>17;
	dec->operand_types[2] = PPC_OPER_TYPE_NUM;
	dec->operand_values[2] = (insword & 0xFC00)>>10;
	dec->operand_fmtstr = PPC_FMTSTR_FREG_C_FREG_C_NUM;
	return 0;
}

/* dquaiq NUM,FREG,FREG,NUM */
int dquaiq_NUM_FREG_FREG_NUM(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_DQUAIQ;
	/* 111111BBBB0AAAAACCCCxDD010000110 */
	dec->operand_n = 4;
	dec->operand_types[0] = PPC_OPER_TYPE_NUM;
	dec->operand_values[0] = (insword & 0x1F0000)>>16;
	dec->operand_types[1] = PPC_OPER_TYPE_FREG;
	dec->operand_values[1] = (insword & 0x3C00000)>>22;
	dec->operand_types[2] = PPC_OPER_TYPE_FREG;
	dec->operand_values[2] = (insword & 0xF000)>>12;
	dec->operand_types[3] = PPC_OPER_TYPE_NUM;
	dec->operand_values[3] = (insword & 0x600)>>9;
	dec->operand_fmtstr = PPC_FMTSTR_NUM_C_FREG_C_FREG_C_NUM;
	return 0;
}

/* dquaiq. NUM,FREG,FREG,NUM */
int dquaiqD_NUM_FREG_FREG_NUM(uint32_t insword, struct ppc_decoded *dec)
{
	dec->properties |= PPC_PROPERTY_DOTTED;
	dec->mnemonic = PPC_MNEM_DQUAIQ;
	/* 111111BBBB0AAAAACCCCxDD010000111 */
	dec->operand_n = 4;
	dec->operand_types[0] = PPC_OPER_TYPE_NUM;
	dec->operand_values[0] = (insword & 0x1F0000)>>16;
	dec->operand_types[1] = PPC_OPER_TYPE_FREG;
	dec->operand_values[1] = (insword & 0x3C00000)>>22;
	dec->operand_types[2] = PPC_OPER_TYPE_FREG;
	dec->operand_values[2] = (insword & 0xF000)>>12;
	dec->operand_types[3] = PPC_OPER_TYPE_NUM;
	dec->operand_values[3] = (insword & 0x600)>>9;
	dec->operand_fmtstr = PPC_FMTSTR_NUM_C_FREG_C_FREG_C_NUM;
	return 0;
}

/* mtfsb0 FLAG */
int mtfsb0_FLAG(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_MTFSB0;
	/* 111111000AA000000000000010001100 */
	dec->operand_n = 1;
	dec->operand_types[0] = PPC_OPER_TYPE_FLAG;
	dec->operand_values[0] = (insword & 0x600000)>>21;
	dec->operand_fmtstr = PPC_FMTSTR_FLAG;
	return 0;
}

/* mtfsb0. FLAG */
int mtfsb0D_FLAG(uint32_t insword, struct ppc_decoded *dec)
{
	dec->properties |= PPC_PROPERTY_DOTTED;
	dec->mnemonic = PPC_MNEM_MTFSB0;
	/* 111111000AA000000000000010001101 */
	dec->operand_n = 1;
	dec->operand_types[0] = PPC_OPER_TYPE_FLAG;
	dec->operand_values[0] = (insword & 0x600000)>>21;
	dec->operand_fmtstr = PPC_FMTSTR_FLAG;
	return 0;
}

/* fmr FREG,FREG */
int fmr_FREG_FREG(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_FMR;
	/* 111111AAAAA00000BBBBB00010010000 */
	dec->operand_n = 2;
	dec->operand_types[0] = PPC_OPER_TYPE_FREG;
	dec->operand_values[0] = (insword & 0x3E00000)>>21;
	dec->operand_types[1] = PPC_OPER_TYPE_FREG;
	dec->operand_values[1] = (insword & 0xF800)>>11;
	dec->operand_fmtstr = PPC_FMTSTR_FREG_C_FREG;
	return 0;
}

/* fmr. FREG,FREG */
int fmrD_FREG_FREG(uint32_t insword, struct ppc_decoded *dec)
{
	dec->properties |= PPC_PROPERTY_DOTTED;
	dec->mnemonic = PPC_MNEM_FMR;
	/* 111111AAAAA00000BBBBB00010010001 */
	dec->operand_n = 2;
	dec->operand_types[0] = PPC_OPER_TYPE_FREG;
	dec->operand_values[0] = (insword & 0x3E00000)>>21;
	dec->operand_types[1] = PPC_OPER_TYPE_FREG;
	dec->operand_values[1] = (insword & 0xF800)>>11;
	dec->operand_fmtstr = PPC_FMTSTR_FREG_C_FREG;
	return 0;
}

/* dscriq FREG,FREG,NUM */
int dscriq_FREG_FREG_NUM(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_DSCRIQ;
	/* 111111AAAA0BBBBxCCCCCC0011000100 */
	dec->operand_n = 3;
	dec->operand_types[0] = PPC_OPER_TYPE_FREG;
	dec->operand_values[0] = (insword & 0x3C00000)>>22;
	dec->operand_types[1] = PPC_OPER_TYPE_FREG;
	dec->operand_values[1] = (insword & 0x1E0000)>>17;
	dec->operand_types[2] = PPC_OPER_TYPE_NUM;
	dec->operand_values[2] = (insword & 0xFC00)>>10;
	dec->operand_fmtstr = PPC_FMTSTR_FREG_C_FREG_C_NUM;
	return 0;
}

/* dscriq. FREG,FREG,NUM */
int dscriqD_FREG_FREG_NUM(uint32_t insword, struct ppc_decoded *dec)
{
	dec->properties |= PPC_PROPERTY_DOTTED;
	dec->mnemonic = PPC_MNEM_DSCRIQ;
	/* 111111AAAA0BBBBxCCCCCC0011000101 */
	dec->operand_n = 3;
	dec->operand_types[0] = PPC_OPER_TYPE_FREG;
	dec->operand_values[0] = (insword & 0x3C00000)>>22;
	dec->operand_types[1] = PPC_OPER_TYPE_FREG;
	dec->operand_values[1] = (insword & 0x1E0000)>>17;
	dec->operand_types[2] = PPC_OPER_TYPE_NUM;
	dec->operand_values[2] = (insword & 0xFC00)>>10;
	dec->operand_fmtstr = PPC_FMTSTR_FREG_C_FREG_C_NUM;
	return 0;
}

/* drintxq NUM,FREG,FREG,NUM */
int drintxq_NUM_FREG_FREG_NUM(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_DRINTXQ;
	/* 111111BBBB0xxxxACCCCxDD011000110 */
	dec->operand_n = 4;
	dec->operand_types[0] = PPC_OPER_TYPE_NUM;
	dec->operand_values[0] = (insword & 0x10000)>>16;
	dec->operand_types[1] = PPC_OPER_TYPE_FREG;
	dec->operand_values[1] = (insword & 0x3C00000)>>22;
	dec->operand_types[2] = PPC_OPER_TYPE_FREG;
	dec->operand_values[2] = (insword & 0xF000)>>12;
	dec->operand_types[3] = PPC_OPER_TYPE_NUM;
	dec->operand_values[3] = (insword & 0x600)>>9;
	dec->operand_fmtstr = PPC_FMTSTR_NUM_C_FREG_C_FREG_C_NUM;
	return 0;
}

/* drintxq. NUM,FREG,FREG,NUM */
int drintxqD_NUM_FREG_FREG_NUM(uint32_t insword, struct ppc_decoded *dec)
{
	dec->properties |= PPC_PROPERTY_DOTTED;
	dec->mnemonic = PPC_MNEM_DRINTXQ;
	/* 111111BBBB0xxxxACCCCxDD011000111 */
	dec->operand_n = 4;
	dec->operand_types[0] = PPC_OPER_TYPE_NUM;
	dec->operand_values[0] = (insword & 0x10000)>>16;
	dec->operand_types[1] = PPC_OPER_TYPE_FREG;
	dec->operand_values[1] = (insword & 0x3C00000)>>22;
	dec->operand_types[2] = PPC_OPER_TYPE_FREG;
	dec->operand_values[2] = (insword & 0xF000)>>12;
	dec->operand_types[3] = PPC_OPER_TYPE_NUM;
	dec->operand_values[3] = (insword & 0x600)>>9;
	dec->operand_fmtstr = PPC_FMTSTR_NUM_C_FREG_C_FREG_C_NUM;
	return 0;
}

/* xscpsgnqp VREG,VREG,VREG */
int xscpsgnqp_VREG_VREG_VREG(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_XSCPSGNQP;
	/* 111111AAAAABBBBBCCCCC00011001000 */
	dec->operand_n = 3;
	dec->operand_types[0] = PPC_OPER_TYPE_VREG;
	dec->operand_values[0] = (insword & 0x3E00000)>>21;
	dec->operand_types[1] = PPC_OPER_TYPE_VREG;
	dec->operand_values[1] = (insword & 0x1F0000)>>16;
	dec->operand_types[2] = PPC_OPER_TYPE_VREG;
	dec->operand_values[2] = (insword & 0xF800)>>11;
	dec->operand_fmtstr = PPC_FMTSTR_VREG_C_VREG_C_VREG;
	return 0;
}

/* ftdiv CREG,FREG,FREG */
int ftdiv_CREG_FREG_FREG(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_FTDIV;
	/* 111111AAA00BBBBBCCCCC00100000000 */
	dec->operand_n = 3;
	dec->operand_types[0] = PPC_OPER_TYPE_CREG;
	dec->operand_values[0] = (insword & 0x3800000)>>23;
	dec->operand_types[1] = PPC_OPER_TYPE_FREG;
	dec->operand_values[1] = (insword & 0x1F0000)>>16;
	dec->operand_types[2] = PPC_OPER_TYPE_FREG;
	dec->operand_values[2] = (insword & 0xF800)>>11;
	dec->operand_fmtstr = PPC_FMTSTR_CREG_C_FREG_C_FREG;
	return 0;
}

/* dcmpoq CREG,FREG,FREG */
int dcmpoq_CREG_FREG_FREG(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_DCMPOQ;
	/* 111111AAAxxBBBBxCCCCx00100000100 */
	dec->operand_n = 3;
	dec->operand_types[0] = PPC_OPER_TYPE_CREG;
	dec->operand_values[0] = (insword & 0x3800000)>>23;
	dec->operand_types[1] = PPC_OPER_TYPE_FREG;
	dec->operand_values[1] = (insword & 0x1E0000)>>17;
	dec->operand_types[2] = PPC_OPER_TYPE_FREG;
	dec->operand_values[2] = (insword & 0xF000)>>12;
	dec->operand_fmtstr = PPC_FMTSTR_CREG_C_FREG_C_FREG;
	return 0;
}

/* xscmpoqp CREG,VREG,VREG */
int xscmpoqp_CREG_VREG_VREG(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_XSCMPOQP;
	/* 111111AAA00BBBBBCCCCC00100001000 */
	dec->operand_n = 3;
	dec->operand_types[0] = PPC_OPER_TYPE_CREG;
	dec->operand_values[0] = (insword & 0x3800000)>>23;
	dec->operand_types[1] = PPC_OPER_TYPE_VREG;
	dec->operand_values[1] = (insword & 0x1F0000)>>16;
	dec->operand_types[2] = PPC_OPER_TYPE_VREG;
	dec->operand_values[2] = (insword & 0xF800)>>11;
	dec->operand_fmtstr = PPC_FMTSTR_CREG_C_VREG_C_VREG;
	return 0;
}

/* mtfsfi NUM,NUM */
int mtfsfi_NUM_NUM(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_MTFSFI;
	/* 111111AAA0000000BBBB000100001100 */
	dec->operand_n = 2;
	dec->operand_types[0] = PPC_OPER_TYPE_NUM;
	dec->operand_values[0] = (insword & 0x3800000)>>23;
	dec->operand_types[1] = PPC_OPER_TYPE_NUM;
	dec->operand_values[1] = (insword & 0xF000)>>12;
	dec->operand_fmtstr = PPC_FMTSTR_NUM_C_NUM;
	return 0;
}

/* mtfsfi. NUM,NUM */
int mtfsfiD_NUM_NUM(uint32_t insword, struct ppc_decoded *dec)
{
	dec->properties |= PPC_PROPERTY_DOTTED;
	dec->mnemonic = PPC_MNEM_MTFSFI;
	/* 111111AAA0000000BBBB000100001101 */
	dec->operand_n = 2;
	dec->operand_types[0] = PPC_OPER_TYPE_NUM;
	dec->operand_values[0] = (insword & 0x3800000)>>23;
	dec->operand_types[1] = PPC_OPER_TYPE_NUM;
	dec->operand_values[1] = (insword & 0xF000)>>12;
	dec->operand_fmtstr = PPC_FMTSTR_NUM_C_NUM;
	return 0;
}

/* fnabs FREG,FREG */
int fnabs_FREG_FREG(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_FNABS;
	/* 111111AAAAA00000BBBBB00100010000 */
	dec->operand_n = 2;
	dec->operand_types[0] = PPC_OPER_TYPE_FREG;
	dec->operand_values[0] = (insword & 0x3E00000)>>21;
	dec->operand_types[1] = PPC_OPER_TYPE_FREG;
	dec->operand_values[1] = (insword & 0xF800)>>11;
	dec->operand_fmtstr = PPC_FMTSTR_FREG_C_FREG;
	return 0;
}

/* fnabs. FREG,FREG */
int fnabsD_FREG_FREG(uint32_t insword, struct ppc_decoded *dec)
{
	dec->properties |= PPC_PROPERTY_DOTTED;
	dec->mnemonic = PPC_MNEM_FNABS;
	/* 111111AAAAA00000BBBBB00100010001 */
	dec->operand_n = 2;
	dec->operand_types[0] = PPC_OPER_TYPE_FREG;
	dec->operand_values[0] = (insword & 0x3E00000)>>21;
	dec->operand_types[1] = PPC_OPER_TYPE_FREG;
	dec->operand_values[1] = (insword & 0xF800)>>11;
	dec->operand_fmtstr = PPC_FMTSTR_FREG_C_FREG;
	return 0;
}

/* fctiwu FREG,FREG */
int fctiwu_FREG_FREG(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_FCTIWU;
	/* 111111AAAAA00000BBBBB00100011100 */
	dec->operand_n = 2;
	dec->operand_types[0] = PPC_OPER_TYPE_FREG;
	dec->operand_values[0] = (insword & 0x3E00000)>>21;
	dec->operand_types[1] = PPC_OPER_TYPE_FREG;
	dec->operand_values[1] = (insword & 0xF800)>>11;
	dec->operand_fmtstr = PPC_FMTSTR_FREG_C_FREG;
	return 0;
}

/* fctiwu. FREG,FREG */
int fctiwuD_FREG_FREG(uint32_t insword, struct ppc_decoded *dec)
{
	dec->properties |= PPC_PROPERTY_DOTTED;
	dec->mnemonic = PPC_MNEM_FCTIWU;
	/* 111111AAAAA00000BBBBB00100011101 */
	dec->operand_n = 2;
	dec->operand_types[0] = PPC_OPER_TYPE_FREG;
	dec->operand_values[0] = (insword & 0x3E00000)>>21;
	dec->operand_types[1] = PPC_OPER_TYPE_FREG;
	dec->operand_values[1] = (insword & 0xF800)>>11;
	dec->operand_fmtstr = PPC_FMTSTR_FREG_C_FREG;
	return 0;
}

/* fctiwuz FREG,FREG */
int fctiwuz_FREG_FREG(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_FCTIWUZ;
	/* 111111AAAAA00000BBBBB00100011110 */
	dec->operand_n = 2;
	dec->operand_types[0] = PPC_OPER_TYPE_FREG;
	dec->operand_values[0] = (insword & 0x3E00000)>>21;
	dec->operand_types[1] = PPC_OPER_TYPE_FREG;
	dec->operand_values[1] = (insword & 0xF800)>>11;
	dec->operand_fmtstr = PPC_FMTSTR_FREG_C_FREG;
	return 0;
}

/* fctiwuz. FREG,FREG */
int fctiwuzD_FREG_FREG(uint32_t insword, struct ppc_decoded *dec)
{
	dec->properties |= PPC_PROPERTY_DOTTED;
	dec->mnemonic = PPC_MNEM_FCTIWUZ;
	/* 111111AAAAA00000BBBBB00100011111 */
	dec->operand_n = 2;
	dec->operand_types[0] = PPC_OPER_TYPE_FREG;
	dec->operand_values[0] = (insword & 0x3E00000)>>21;
	dec->operand_types[1] = PPC_OPER_TYPE_FREG;
	dec->operand_values[1] = (insword & 0xF800)>>11;
	dec->operand_fmtstr = PPC_FMTSTR_FREG_C_FREG;
	return 0;
}

/* ftsqrt CREG,FREG */
int ftsqrt_CREG_FREG(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_FTSQRT;
	/* 111111AAA0000000BBBBB00101000000 */
	dec->operand_n = 2;
	dec->operand_types[0] = PPC_OPER_TYPE_CREG;
	dec->operand_values[0] = (insword & 0x3800000)>>23;
	dec->operand_types[1] = PPC_OPER_TYPE_FREG;
	dec->operand_values[1] = (insword & 0xF800)>>11;
	dec->operand_fmtstr = PPC_FMTSTR_CREG_C_FREG;
	return 0;
}

/* dtstexq CREG,FREG,FREG */
int dtstexq_CREG_FREG_FREG(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_DTSTEXQ;
	/* 111111AAAxxBBBBxCCCCx00101000100 */
	dec->operand_n = 3;
	dec->operand_types[0] = PPC_OPER_TYPE_CREG;
	dec->operand_values[0] = (insword & 0x3800000)>>23;
	dec->operand_types[1] = PPC_OPER_TYPE_FREG;
	dec->operand_values[1] = (insword & 0x1E0000)>>17;
	dec->operand_types[2] = PPC_OPER_TYPE_FREG;
	dec->operand_values[2] = (insword & 0xF000)>>12;
	dec->operand_fmtstr = PPC_FMTSTR_CREG_C_FREG_C_FREG;
	return 0;
}

/* xscmpexpqp CREG,VREG,VREG */
int xscmpexpqp_CREG_VREG_VREG(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_XSCMPEXPQP;
	/* 111111AAA00BBBBBCCCCC00101001000 */
	dec->operand_n = 3;
	dec->operand_types[0] = PPC_OPER_TYPE_CREG;
	dec->operand_values[0] = (insword & 0x3800000)>>23;
	dec->operand_types[1] = PPC_OPER_TYPE_VREG;
	dec->operand_values[1] = (insword & 0x1F0000)>>16;
	dec->operand_types[2] = PPC_OPER_TYPE_VREG;
	dec->operand_values[2] = (insword & 0xF800)>>11;
	dec->operand_fmtstr = PPC_FMTSTR_CREG_C_VREG_C_VREG;
	return 0;
}

/* dtstdcq CREG,FREG,NUM */
int dtstdcq_CREG_FREG_NUM(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_DTSTDCQ;
	/* 111111AAAxxBBBBxCCCCCC0110000100 */
	dec->operand_n = 3;
	dec->operand_types[0] = PPC_OPER_TYPE_CREG;
	dec->operand_values[0] = (insword & 0x3800000)>>23;
	dec->operand_types[1] = PPC_OPER_TYPE_FREG;
	dec->operand_values[1] = (insword & 0x1E0000)>>17;
	dec->operand_types[2] = PPC_OPER_TYPE_NUM;
	dec->operand_values[2] = (insword & 0xFC00)>>10;
	dec->operand_fmtstr = PPC_FMTSTR_CREG_C_FREG_C_NUM;
	return 0;
}

/* dtstdgq CREG,FREG,NUM */
int dtstdgq_CREG_FREG_NUM(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_DTSTDGQ;
	/* 111111AAAxxBBBBxCCCCCC0111000100 */
	dec->operand_n = 3;
	dec->operand_types[0] = PPC_OPER_TYPE_CREG;
	dec->operand_values[0] = (insword & 0x3800000)>>23;
	dec->operand_types[1] = PPC_OPER_TYPE_FREG;
	dec->operand_values[1] = (insword & 0x1E0000)>>17;
	dec->operand_types[2] = PPC_OPER_TYPE_NUM;
	dec->operand_values[2] = (insword & 0xFC00)>>10;
	dec->operand_fmtstr = PPC_FMTSTR_CREG_C_FREG_C_NUM;
	return 0;
}

/* drintnq NUM,FREG,FREG,NUM */
int drintnq_NUM_FREG_FREG_NUM(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_DRINTNQ;
	/* 111111BBBB0xxxxACCCCxDD111000110 */
	dec->operand_n = 4;
	dec->operand_types[0] = PPC_OPER_TYPE_NUM;
	dec->operand_values[0] = (insword & 0x10000)>>16;
	dec->operand_types[1] = PPC_OPER_TYPE_FREG;
	dec->operand_values[1] = (insword & 0x3C00000)>>22;
	dec->operand_types[2] = PPC_OPER_TYPE_FREG;
	dec->operand_values[2] = (insword & 0xF000)>>12;
	dec->operand_types[3] = PPC_OPER_TYPE_NUM;
	dec->operand_values[3] = (insword & 0x600)>>9;
	dec->operand_fmtstr = PPC_FMTSTR_NUM_C_FREG_C_FREG_C_NUM;
	return 0;
}

/* drintnq. NUM,FREG,FREG,NUM */
int drintnqD_NUM_FREG_FREG_NUM(uint32_t insword, struct ppc_decoded *dec)
{
	dec->properties |= PPC_PROPERTY_DOTTED;
	dec->mnemonic = PPC_MNEM_DRINTNQ;
	/* 111111BBBB0xxxxACCCCxDD111000111 */
	dec->operand_n = 4;
	dec->operand_types[0] = PPC_OPER_TYPE_NUM;
	dec->operand_values[0] = (insword & 0x10000)>>16;
	dec->operand_types[1] = PPC_OPER_TYPE_FREG;
	dec->operand_values[1] = (insword & 0x3C00000)>>22;
	dec->operand_types[2] = PPC_OPER_TYPE_FREG;
	dec->operand_values[2] = (insword & 0xF000)>>12;
	dec->operand_types[3] = PPC_OPER_TYPE_NUM;
	dec->operand_values[3] = (insword & 0x600)>>9;
	dec->operand_fmtstr = PPC_FMTSTR_NUM_C_FREG_C_FREG_C_NUM;
	return 0;
}

/* dctqpq FREG,FREG */
int dctqpq_FREG_FREG(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_DCTQPQ;
	/* 111111AAAA0xxxxxBBBBB01000000100 */
	dec->operand_n = 2;
	dec->operand_types[0] = PPC_OPER_TYPE_FREG;
	dec->operand_values[0] = (insword & 0x3C00000)>>22;
	dec->operand_types[1] = PPC_OPER_TYPE_FREG;
	dec->operand_values[1] = (insword & 0xF800)>>11;
	dec->operand_fmtstr = PPC_FMTSTR_FREG_C_FREG;
	return 0;
}

/* dctqpq. FREG,FREG */
int dctqpqD_FREG_FREG(uint32_t insword, struct ppc_decoded *dec)
{
	dec->properties |= PPC_PROPERTY_DOTTED;
	dec->mnemonic = PPC_MNEM_DCTQPQ;
	/* 111111AAAA0xxxxxBBBBB01000000101 */
	dec->operand_n = 2;
	dec->operand_types[0] = PPC_OPER_TYPE_FREG;
	dec->operand_values[0] = (insword & 0x3C00000)>>22;
	dec->operand_types[1] = PPC_OPER_TYPE_FREG;
	dec->operand_values[1] = (insword & 0xF800)>>11;
	dec->operand_fmtstr = PPC_FMTSTR_FREG_C_FREG;
	return 0;
}

/* fabs FREG,FREG */
int fabs_FREG_FREG(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_FABS;
	/* 111111AAAAA00000BBBBB01000010000 */
	dec->operand_n = 2;
	dec->operand_types[0] = PPC_OPER_TYPE_FREG;
	dec->operand_values[0] = (insword & 0x3E00000)>>21;
	dec->operand_types[1] = PPC_OPER_TYPE_FREG;
	dec->operand_values[1] = (insword & 0xF800)>>11;
	dec->operand_fmtstr = PPC_FMTSTR_FREG_C_FREG;
	return 0;
}

/* fabs. FREG,FREG */
int fabsD_FREG_FREG(uint32_t insword, struct ppc_decoded *dec)
{
	dec->properties |= PPC_PROPERTY_DOTTED;
	dec->mnemonic = PPC_MNEM_FABS;
	/* 111111AAAAA00000BBBBB01000010001 */
	dec->operand_n = 2;
	dec->operand_types[0] = PPC_OPER_TYPE_FREG;
	dec->operand_values[0] = (insword & 0x3E00000)>>21;
	dec->operand_types[1] = PPC_OPER_TYPE_FREG;
	dec->operand_values[1] = (insword & 0xF800)>>11;
	dec->operand_fmtstr = PPC_FMTSTR_FREG_C_FREG;
	return 0;
}

/* dctfixq FREG,FREG */
int dctfixq_FREG_FREG(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_DCTFIXQ;
	/* 111111AAAAAxxxxxBBBBx01001000100 */
	dec->operand_n = 2;
	dec->operand_types[0] = PPC_OPER_TYPE_FREG;
	dec->operand_values[0] = (insword & 0x3E00000)>>21;
	dec->operand_types[1] = PPC_OPER_TYPE_FREG;
	dec->operand_values[1] = (insword & 0xF000)>>12;
	dec->operand_fmtstr = PPC_FMTSTR_FREG_C_FREG;
	return 0;
}

/* dctfixq. FREG,FREG */
int dctfixqD_FREG_FREG(uint32_t insword, struct ppc_decoded *dec)
{
	dec->properties |= PPC_PROPERTY_DOTTED;
	dec->mnemonic = PPC_MNEM_DCTFIXQ;
	/* 111111AAAAAxxxxxBBBBx01001000101 */
	dec->operand_n = 2;
	dec->operand_types[0] = PPC_OPER_TYPE_FREG;
	dec->operand_values[0] = (insword & 0x3E00000)>>21;
	dec->operand_types[1] = PPC_OPER_TYPE_FREG;
	dec->operand_values[1] = (insword & 0xF000)>>12;
	dec->operand_fmtstr = PPC_FMTSTR_FREG_C_FREG;
	return 0;
}

/* ddedpdq NUM,FREG,FREG */
int ddedpdq_NUM_FREG_FREG(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_DDEDPDQ;
	/* 111111BBBB0AAxxxCCCCx01010000100 */
	dec->operand_n = 3;
	dec->operand_types[0] = PPC_OPER_TYPE_NUM;
	dec->operand_values[0] = (insword & 0x180000)>>19;
	dec->operand_types[1] = PPC_OPER_TYPE_FREG;
	dec->operand_values[1] = (insword & 0x3C00000)>>22;
	dec->operand_types[2] = PPC_OPER_TYPE_FREG;
	dec->operand_values[2] = (insword & 0xF000)>>12;
	dec->operand_fmtstr = PPC_FMTSTR_NUM_C_FREG_C_FREG;
	return 0;
}

/* ddedpdq. NUM,FREG,FREG */
int ddedpdqD_NUM_FREG_FREG(uint32_t insword, struct ppc_decoded *dec)
{
	dec->properties |= PPC_PROPERTY_DOTTED;
	dec->mnemonic = PPC_MNEM_DDEDPDQ;
	/* 111111BBBB0AAxxxCCCCx01010000101 */
	dec->operand_n = 3;
	dec->operand_types[0] = PPC_OPER_TYPE_NUM;
	dec->operand_values[0] = (insword & 0x180000)>>19;
	dec->operand_types[1] = PPC_OPER_TYPE_FREG;
	dec->operand_values[1] = (insword & 0x3C00000)>>22;
	dec->operand_types[2] = PPC_OPER_TYPE_FREG;
	dec->operand_values[2] = (insword & 0xF000)>>12;
	dec->operand_fmtstr = PPC_FMTSTR_NUM_C_FREG_C_FREG;
	return 0;
}

/* dxexq FREG,FREG */
int dxexq_FREG_FREG(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_DXEXQ;
	/* 111111AAAAAxxxxxBBBBx01011000100 */
	dec->operand_n = 2;
	dec->operand_types[0] = PPC_OPER_TYPE_FREG;
	dec->operand_values[0] = (insword & 0x3E00000)>>21;
	dec->operand_types[1] = PPC_OPER_TYPE_FREG;
	dec->operand_values[1] = (insword & 0xF000)>>12;
	dec->operand_fmtstr = PPC_FMTSTR_FREG_C_FREG;
	return 0;
}

/* dxexq. FREG,FREG */
int dxexqD_FREG_FREG(uint32_t insword, struct ppc_decoded *dec)
{
	dec->properties |= PPC_PROPERTY_DOTTED;
	dec->mnemonic = PPC_MNEM_DXEXQ;
	/* 111111AAAAAxxxxxBBBBx01011000101 */
	dec->operand_n = 2;
	dec->operand_types[0] = PPC_OPER_TYPE_FREG;
	dec->operand_values[0] = (insword & 0x3E00000)>>21;
	dec->operand_types[1] = PPC_OPER_TYPE_FREG;
	dec->operand_values[1] = (insword & 0xF000)>>12;
	dec->operand_fmtstr = PPC_FMTSTR_FREG_C_FREG;
	return 0;
}

/* xsmaddqp VREG,VREG,VREG */
int xsmaddqp_VREG_VREG_VREG(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_XSMADDQP;
	/* 111111AAAAABBBBBCCCCC01100001000 */
	dec->operand_n = 3;
	dec->operand_types[0] = PPC_OPER_TYPE_VREG;
	dec->operand_values[0] = (insword & 0x3E00000)>>21;
	dec->operand_types[1] = PPC_OPER_TYPE_VREG;
	dec->operand_values[1] = (insword & 0x1F0000)>>16;
	dec->operand_types[2] = PPC_OPER_TYPE_VREG;
	dec->operand_values[2] = (insword & 0xF800)>>11;
	dec->operand_fmtstr = PPC_FMTSTR_VREG_C_VREG_C_VREG;
	return 0;
}

/* xsmaddqpo VREG,VREG,VREG */
int xsmaddqpo_VREG_VREG_VREG(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_XSMADDQPO;
	/* 111111AAAAABBBBBCCCCC01100001001 */
	dec->operand_n = 3;
	dec->operand_types[0] = PPC_OPER_TYPE_VREG;
	dec->operand_values[0] = (insword & 0x3E00000)>>21;
	dec->operand_types[1] = PPC_OPER_TYPE_VREG;
	dec->operand_values[1] = (insword & 0x1F0000)>>16;
	dec->operand_types[2] = PPC_OPER_TYPE_VREG;
	dec->operand_values[2] = (insword & 0xF800)>>11;
	dec->operand_fmtstr = PPC_FMTSTR_VREG_C_VREG_C_VREG;
	return 0;
}

/* frin FREG,FREG */
int frin_FREG_FREG(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_FRIN;
	/* 111111AAAAA00000BBBBB01100010000 */
	dec->operand_n = 2;
	dec->operand_types[0] = PPC_OPER_TYPE_FREG;
	dec->operand_values[0] = (insword & 0x3E00000)>>21;
	dec->operand_types[1] = PPC_OPER_TYPE_FREG;
	dec->operand_values[1] = (insword & 0xF800)>>11;
	dec->operand_fmtstr = PPC_FMTSTR_FREG_C_FREG;
	return 0;
}

/* frin. FREG,FREG */
int frinD_FREG_FREG(uint32_t insword, struct ppc_decoded *dec)
{
	dec->properties |= PPC_PROPERTY_DOTTED;
	dec->mnemonic = PPC_MNEM_FRIN;
	/* 111111AAAAA00000BBBBB01100010001 */
	dec->operand_n = 2;
	dec->operand_types[0] = PPC_OPER_TYPE_FREG;
	dec->operand_values[0] = (insword & 0x3E00000)>>21;
	dec->operand_types[1] = PPC_OPER_TYPE_FREG;
	dec->operand_values[1] = (insword & 0xF800)>>11;
	dec->operand_fmtstr = PPC_FMTSTR_FREG_C_FREG;
	return 0;
}

/* xsmsubqp VREG,VREG,VREG */
int xsmsubqp_VREG_VREG_VREG(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_XSMSUBQP;
	/* 111111AAAAABBBBBCCCCC01101001000 */
	dec->operand_n = 3;
	dec->operand_types[0] = PPC_OPER_TYPE_VREG;
	dec->operand_values[0] = (insword & 0x3E00000)>>21;
	dec->operand_types[1] = PPC_OPER_TYPE_VREG;
	dec->operand_values[1] = (insword & 0x1F0000)>>16;
	dec->operand_types[2] = PPC_OPER_TYPE_VREG;
	dec->operand_values[2] = (insword & 0xF800)>>11;
	dec->operand_fmtstr = PPC_FMTSTR_VREG_C_VREG_C_VREG;
	return 0;
}

/* xsmsubqpo VREG,VREG,VREG */
int xsmsubqpo_VREG_VREG_VREG(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_XSMSUBQPO;
	/* 111111AAAAABBBBBCCCCC01101001001 */
	dec->operand_n = 3;
	dec->operand_types[0] = PPC_OPER_TYPE_VREG;
	dec->operand_values[0] = (insword & 0x3E00000)>>21;
	dec->operand_types[1] = PPC_OPER_TYPE_VREG;
	dec->operand_values[1] = (insword & 0x1F0000)>>16;
	dec->operand_types[2] = PPC_OPER_TYPE_VREG;
	dec->operand_values[2] = (insword & 0xF800)>>11;
	dec->operand_fmtstr = PPC_FMTSTR_VREG_C_VREG_C_VREG;
	return 0;
}

/* friz FREG,FREG */
int friz_FREG_FREG(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_FRIZ;
	/* 111111AAAAA00000BBBBB01101010000 */
	dec->operand_n = 2;
	dec->operand_types[0] = PPC_OPER_TYPE_FREG;
	dec->operand_values[0] = (insword & 0x3E00000)>>21;
	dec->operand_types[1] = PPC_OPER_TYPE_FREG;
	dec->operand_values[1] = (insword & 0xF800)>>11;
	dec->operand_fmtstr = PPC_FMTSTR_FREG_C_FREG;
	return 0;
}

/* friz. FREG,FREG */
int frizD_FREG_FREG(uint32_t insword, struct ppc_decoded *dec)
{
	dec->properties |= PPC_PROPERTY_DOTTED;
	dec->mnemonic = PPC_MNEM_FRIZ;
	/* 111111AAAAA00000BBBBB01101010001 */
	dec->operand_n = 2;
	dec->operand_types[0] = PPC_OPER_TYPE_FREG;
	dec->operand_values[0] = (insword & 0x3E00000)>>21;
	dec->operand_types[1] = PPC_OPER_TYPE_FREG;
	dec->operand_values[1] = (insword & 0xF800)>>11;
	dec->operand_fmtstr = PPC_FMTSTR_FREG_C_FREG;
	return 0;
}

/* xsnmaddqp VREG,VREG,VREG */
int xsnmaddqp_VREG_VREG_VREG(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_XSNMADDQP;
	/* 111111AAAAABBBBBCCCCC01110001000 */
	dec->operand_n = 3;
	dec->operand_types[0] = PPC_OPER_TYPE_VREG;
	dec->operand_values[0] = (insword & 0x3E00000)>>21;
	dec->operand_types[1] = PPC_OPER_TYPE_VREG;
	dec->operand_values[1] = (insword & 0x1F0000)>>16;
	dec->operand_types[2] = PPC_OPER_TYPE_VREG;
	dec->operand_values[2] = (insword & 0xF800)>>11;
	dec->operand_fmtstr = PPC_FMTSTR_VREG_C_VREG_C_VREG;
	return 0;
}

/* xsnmaddqpo VREG,VREG,VREG */
int xsnmaddqpo_VREG_VREG_VREG(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_XSNMADDQPO;
	/* 111111AAAAABBBBBCCCCC01110001001 */
	dec->operand_n = 3;
	dec->operand_types[0] = PPC_OPER_TYPE_VREG;
	dec->operand_values[0] = (insword & 0x3E00000)>>21;
	dec->operand_types[1] = PPC_OPER_TYPE_VREG;
	dec->operand_values[1] = (insword & 0x1F0000)>>16;
	dec->operand_types[2] = PPC_OPER_TYPE_VREG;
	dec->operand_values[2] = (insword & 0xF800)>>11;
	dec->operand_fmtstr = PPC_FMTSTR_VREG_C_VREG_C_VREG;
	return 0;
}

/* frip FREG,FREG */
int frip_FREG_FREG(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_FRIP;
	/* 111111AAAAA00000BBBBB01110010000 */
	dec->operand_n = 2;
	dec->operand_types[0] = PPC_OPER_TYPE_FREG;
	dec->operand_values[0] = (insword & 0x3E00000)>>21;
	dec->operand_types[1] = PPC_OPER_TYPE_FREG;
	dec->operand_values[1] = (insword & 0xF800)>>11;
	dec->operand_fmtstr = PPC_FMTSTR_FREG_C_FREG;
	return 0;
}

/* frip. FREG,FREG */
int fripD_FREG_FREG(uint32_t insword, struct ppc_decoded *dec)
{
	dec->properties |= PPC_PROPERTY_DOTTED;
	dec->mnemonic = PPC_MNEM_FRIP;
	/* 111111AAAAA00000BBBBB01110010001 */
	dec->operand_n = 2;
	dec->operand_types[0] = PPC_OPER_TYPE_FREG;
	dec->operand_values[0] = (insword & 0x3E00000)>>21;
	dec->operand_types[1] = PPC_OPER_TYPE_FREG;
	dec->operand_values[1] = (insword & 0xF800)>>11;
	dec->operand_fmtstr = PPC_FMTSTR_FREG_C_FREG;
	return 0;
}

/* xsnmsubqp VREG,VREG,VREG */
int xsnmsubqp_VREG_VREG_VREG(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_XSNMSUBQP;
	/* 111111AAAAABBBBBCCCCC01111001000 */
	dec->operand_n = 3;
	dec->operand_types[0] = PPC_OPER_TYPE_VREG;
	dec->operand_values[0] = (insword & 0x3E00000)>>21;
	dec->operand_types[1] = PPC_OPER_TYPE_VREG;
	dec->operand_values[1] = (insword & 0x1F0000)>>16;
	dec->operand_types[2] = PPC_OPER_TYPE_VREG;
	dec->operand_values[2] = (insword & 0xF800)>>11;
	dec->operand_fmtstr = PPC_FMTSTR_VREG_C_VREG_C_VREG;
	return 0;
}

/* xsnmsubqpo VREG,VREG,VREG */
int xsnmsubqpo_VREG_VREG_VREG(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_XSNMSUBQPO;
	/* 111111AAAAABBBBBCCCCC01111001001 */
	dec->operand_n = 3;
	dec->operand_types[0] = PPC_OPER_TYPE_VREG;
	dec->operand_values[0] = (insword & 0x3E00000)>>21;
	dec->operand_types[1] = PPC_OPER_TYPE_VREG;
	dec->operand_values[1] = (insword & 0x1F0000)>>16;
	dec->operand_types[2] = PPC_OPER_TYPE_VREG;
	dec->operand_values[2] = (insword & 0xF800)>>11;
	dec->operand_fmtstr = PPC_FMTSTR_VREG_C_VREG_C_VREG;
	return 0;
}

/* frim FREG,FREG */
int frim_FREG_FREG(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_FRIM;
	/* 111111AAAAA00000BBBBB01111010000 */
	dec->operand_n = 2;
	dec->operand_types[0] = PPC_OPER_TYPE_FREG;
	dec->operand_values[0] = (insword & 0x3E00000)>>21;
	dec->operand_types[1] = PPC_OPER_TYPE_FREG;
	dec->operand_values[1] = (insword & 0xF800)>>11;
	dec->operand_fmtstr = PPC_FMTSTR_FREG_C_FREG;
	return 0;
}

/* frim. FREG,FREG */
int frimD_FREG_FREG(uint32_t insword, struct ppc_decoded *dec)
{
	dec->properties |= PPC_PROPERTY_DOTTED;
	dec->mnemonic = PPC_MNEM_FRIM;
	/* 111111AAAAA00000BBBBB01111010001 */
	dec->operand_n = 2;
	dec->operand_types[0] = PPC_OPER_TYPE_FREG;
	dec->operand_values[0] = (insword & 0x3E00000)>>21;
	dec->operand_types[1] = PPC_OPER_TYPE_FREG;
	dec->operand_values[1] = (insword & 0xF800)>>11;
	dec->operand_fmtstr = PPC_FMTSTR_FREG_C_FREG;
	return 0;
}

/* dsubq FREG,FREG,FREG */
int dsubq_FREG_FREG_FREG(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_DSUBQ;
	/* 111111AAAA0BBBBxCCCCx10000000100 */
	dec->operand_n = 3;
	dec->operand_types[0] = PPC_OPER_TYPE_FREG;
	dec->operand_values[0] = (insword & 0x3C00000)>>22;
	dec->operand_types[1] = PPC_OPER_TYPE_FREG;
	dec->operand_values[1] = (insword & 0x1E0000)>>17;
	dec->operand_types[2] = PPC_OPER_TYPE_FREG;
	dec->operand_values[2] = (insword & 0xF000)>>12;
	dec->operand_fmtstr = PPC_FMTSTR_FREG_C_FREG_C_FREG;
	return 0;
}

/* dsubq. FREG,FREG,FREG */
int dsubqD_FREG_FREG_FREG(uint32_t insword, struct ppc_decoded *dec)
{
	dec->properties |= PPC_PROPERTY_DOTTED;
	dec->mnemonic = PPC_MNEM_DSUBQ;
	/* 111111AAAA0BBBBxCCCCx10000000101 */
	dec->operand_n = 3;
	dec->operand_types[0] = PPC_OPER_TYPE_FREG;
	dec->operand_values[0] = (insword & 0x3C00000)>>22;
	dec->operand_types[1] = PPC_OPER_TYPE_FREG;
	dec->operand_values[1] = (insword & 0x1E0000)>>17;
	dec->operand_types[2] = PPC_OPER_TYPE_FREG;
	dec->operand_values[2] = (insword & 0xF000)>>12;
	dec->operand_fmtstr = PPC_FMTSTR_FREG_C_FREG_C_FREG;
	return 0;
}

/* xssubqp VREG,VREG,VREG */
int xssubqp_VREG_VREG_VREG(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_XSSUBQP;
	/* 111111AAAAABBBBBCCCCC10000001000 */
	dec->operand_n = 3;
	dec->operand_types[0] = PPC_OPER_TYPE_VREG;
	dec->operand_values[0] = (insword & 0x3E00000)>>21;
	dec->operand_types[1] = PPC_OPER_TYPE_VREG;
	dec->operand_values[1] = (insword & 0x1F0000)>>16;
	dec->operand_types[2] = PPC_OPER_TYPE_VREG;
	dec->operand_values[2] = (insword & 0xF800)>>11;
	dec->operand_fmtstr = PPC_FMTSTR_VREG_C_VREG_C_VREG;
	return 0;
}

/* xssubqpo VREG,VREG,VREG */
int xssubqpo_VREG_VREG_VREG(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_XSSUBQPO;
	/* 111111AAAAABBBBBCCCCC10000001001 */
	dec->operand_n = 3;
	dec->operand_types[0] = PPC_OPER_TYPE_VREG;
	dec->operand_values[0] = (insword & 0x3E00000)>>21;
	dec->operand_types[1] = PPC_OPER_TYPE_VREG;
	dec->operand_values[1] = (insword & 0x1F0000)>>16;
	dec->operand_types[2] = PPC_OPER_TYPE_VREG;
	dec->operand_values[2] = (insword & 0xF800)>>11;
	dec->operand_fmtstr = PPC_FMTSTR_VREG_C_VREG_C_VREG;
	return 0;
}

/* ddivq FREG,FREG,FREG */
int ddivq_FREG_FREG_FREG(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_DDIVQ;
	/* 111111AAAA0BBBBxCCCCx10001000100 */
	dec->operand_n = 3;
	dec->operand_types[0] = PPC_OPER_TYPE_FREG;
	dec->operand_values[0] = (insword & 0x3C00000)>>22;
	dec->operand_types[1] = PPC_OPER_TYPE_FREG;
	dec->operand_values[1] = (insword & 0x1E0000)>>17;
	dec->operand_types[2] = PPC_OPER_TYPE_FREG;
	dec->operand_values[2] = (insword & 0xF000)>>12;
	dec->operand_fmtstr = PPC_FMTSTR_FREG_C_FREG_C_FREG;
	return 0;
}

/* ddivq. FREG,FREG,FREG */
int ddivqD_FREG_FREG_FREG(uint32_t insword, struct ppc_decoded *dec)
{
	dec->properties |= PPC_PROPERTY_DOTTED;
	dec->mnemonic = PPC_MNEM_DDIVQ;
	/* 111111AAAA0BBBBxCCCCx10001000101 */
	dec->operand_n = 3;
	dec->operand_types[0] = PPC_OPER_TYPE_FREG;
	dec->operand_values[0] = (insword & 0x3C00000)>>22;
	dec->operand_types[1] = PPC_OPER_TYPE_FREG;
	dec->operand_values[1] = (insword & 0x1E0000)>>17;
	dec->operand_types[2] = PPC_OPER_TYPE_FREG;
	dec->operand_values[2] = (insword & 0xF000)>>12;
	dec->operand_fmtstr = PPC_FMTSTR_FREG_C_FREG_C_FREG;
	return 0;
}

/* xsdivqp VREG,VREG,VREG */
int xsdivqp_VREG_VREG_VREG(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_XSDIVQP;
	/* 111111AAAAABBBBBCCCCC10001001000 */
	dec->operand_n = 3;
	dec->operand_types[0] = PPC_OPER_TYPE_VREG;
	dec->operand_values[0] = (insword & 0x3E00000)>>21;
	dec->operand_types[1] = PPC_OPER_TYPE_VREG;
	dec->operand_values[1] = (insword & 0x1F0000)>>16;
	dec->operand_types[2] = PPC_OPER_TYPE_VREG;
	dec->operand_values[2] = (insword & 0xF800)>>11;
	dec->operand_fmtstr = PPC_FMTSTR_VREG_C_VREG_C_VREG;
	return 0;
}

/* xsdivqpo VREG,VREG,VREG */
int xsdivqpo_VREG_VREG_VREG(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_XSDIVQPO;
	/* 111111AAAAABBBBBCCCCC10001001001 */
	dec->operand_n = 3;
	dec->operand_types[0] = PPC_OPER_TYPE_VREG;
	dec->operand_values[0] = (insword & 0x3E00000)>>21;
	dec->operand_types[1] = PPC_OPER_TYPE_VREG;
	dec->operand_values[1] = (insword & 0x1F0000)>>16;
	dec->operand_types[2] = PPC_OPER_TYPE_VREG;
	dec->operand_values[2] = (insword & 0xF800)>>11;
	dec->operand_fmtstr = PPC_FMTSTR_VREG_C_VREG_C_VREG;
	return 0;
}

/* mffs FREG */
int mffs_FREG(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_MFFS;
	/* 111111AAAAA000000000010010001110 */
	dec->operand_n = 1;
	dec->operand_types[0] = PPC_OPER_TYPE_FREG;
	dec->operand_values[0] = (insword & 0x3E00000)>>21;
	dec->operand_fmtstr = PPC_FMTSTR_FREG;
	return 0;
}

/* mffs. FREG */
int mffsD_FREG(uint32_t insword, struct ppc_decoded *dec)
{
	dec->properties |= PPC_PROPERTY_DOTTED;
	dec->mnemonic = PPC_MNEM_MFFS;
	/* 111111AAAAA000000000010010001111 */
	dec->operand_n = 1;
	dec->operand_types[0] = PPC_OPER_TYPE_FREG;
	dec->operand_values[0] = (insword & 0x3E00000)>>21;
	dec->operand_fmtstr = PPC_FMTSTR_FREG;
	return 0;
}

/* dcmpuq CREG,FREG,FREG */
int dcmpuq_CREG_FREG_FREG(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_DCMPUQ;
	/* 111111AAAxxBBBBxCCCCx10100000100 */
	dec->operand_n = 3;
	dec->operand_types[0] = PPC_OPER_TYPE_CREG;
	dec->operand_values[0] = (insword & 0x3800000)>>23;
	dec->operand_types[1] = PPC_OPER_TYPE_FREG;
	dec->operand_values[1] = (insword & 0x1E0000)>>17;
	dec->operand_types[2] = PPC_OPER_TYPE_FREG;
	dec->operand_values[2] = (insword & 0xF000)>>12;
	dec->operand_fmtstr = PPC_FMTSTR_CREG_C_FREG_C_FREG;
	return 0;
}

/* xscmpuqp CREG,VREG,VREG */
int xscmpuqp_CREG_VREG_VREG(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_XSCMPUQP;
	/* 111111AAA00BBBBBCCCCC10100001000 */
	dec->operand_n = 3;
	dec->operand_types[0] = PPC_OPER_TYPE_CREG;
	dec->operand_values[0] = (insword & 0x3800000)>>23;
	dec->operand_types[1] = PPC_OPER_TYPE_VREG;
	dec->operand_values[1] = (insword & 0x1F0000)>>16;
	dec->operand_types[2] = PPC_OPER_TYPE_VREG;
	dec->operand_values[2] = (insword & 0xF800)>>11;
	dec->operand_fmtstr = PPC_FMTSTR_CREG_C_VREG_C_VREG;
	return 0;
}

/* dtstsfq CREG,FREG,FREG */
int dtstsfq_CREG_FREG_FREG(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_DTSTSFQ;
	/* 111111AAAxxBBBBBCCCCx10101000100 */
	dec->operand_n = 3;
	dec->operand_types[0] = PPC_OPER_TYPE_CREG;
	dec->operand_values[0] = (insword & 0x3800000)>>23;
	dec->operand_types[1] = PPC_OPER_TYPE_FREG;
	dec->operand_values[1] = (insword & 0x1F0000)>>16;
	dec->operand_types[2] = PPC_OPER_TYPE_FREG;
	dec->operand_values[2] = (insword & 0xF000)>>12;
	dec->operand_fmtstr = PPC_FMTSTR_CREG_C_FREG_C_FREG;
	return 0;
}

/* dtstsfiq CREG,NUM,FREG */
int dtstsfiq_CREG_NUM_FREG(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_DTSTSFIQ;
	/* 111111AAA0BBBBBBCCCCx10101000110 */
	dec->operand_n = 3;
	dec->operand_types[0] = PPC_OPER_TYPE_CREG;
	dec->operand_values[0] = (insword & 0x3800000)>>23;
	dec->operand_types[1] = PPC_OPER_TYPE_NUM;
	dec->operand_values[1] = (insword & 0x3F0000)>>16;
	dec->operand_types[2] = PPC_OPER_TYPE_FREG;
	dec->operand_values[2] = (insword & 0xF000)>>12;
	dec->operand_fmtstr = PPC_FMTSTR_CREG_C_NUM_C_FREG;
	return 0;
}

/* xststdcqp CREG,VREG,NUM */
int xststdcqp_CREG_VREG_NUM(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_XSTSTDCQP;
	/* 111111AAACCCCCCCBBBBB10110001000 */
	dec->operand_n = 3;
	dec->operand_types[0] = PPC_OPER_TYPE_CREG;
	dec->operand_values[0] = (insword & 0x3800000)>>23;
	dec->operand_types[1] = PPC_OPER_TYPE_VREG;
	dec->operand_values[1] = (insword & 0xF800)>>11;
	dec->operand_types[2] = PPC_OPER_TYPE_NUM;
	dec->operand_values[2] = (insword & 0x7F0000)>>16;
	dec->operand_fmtstr = PPC_FMTSTR_CREG_C_VREG_C_NUM;
	return 0;
}

/* mtfsf NUM,FREG */
int mtfsf_NUM_FREG(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_MTFSF;
	/* 1111110AAAAAAAA0BBBBB10110001110 */
	dec->operand_n = 2;
	dec->operand_types[0] = PPC_OPER_TYPE_NUM;
	dec->operand_values[0] = (insword & 0x1FE0000)>>17;
	dec->operand_types[1] = PPC_OPER_TYPE_FREG;
	dec->operand_values[1] = (insword & 0xF800)>>11;
	dec->operand_fmtstr = PPC_FMTSTR_NUM_C_FREG;
	return 0;
}

/* mtfsf. NUM,FREG */
int mtfsfD_NUM_FREG(uint32_t insword, struct ppc_decoded *dec)
{
	dec->properties |= PPC_PROPERTY_DOTTED;
	dec->mnemonic = PPC_MNEM_MTFSF;
	/* 1111110AAAAAAAA0BBBBB10110001111 */
	dec->operand_n = 2;
	dec->operand_types[0] = PPC_OPER_TYPE_NUM;
	dec->operand_values[0] = (insword & 0x1FE0000)>>17;
	dec->operand_types[1] = PPC_OPER_TYPE_FREG;
	dec->operand_values[1] = (insword & 0xF800)>>11;
	dec->operand_fmtstr = PPC_FMTSTR_NUM_C_FREG;
	return 0;
}

/* drdpq FREG,FREG */
int drdpq_FREG_FREG(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_DRDPQ;
	/* 111111AAAA0xxxxxBBBBx11000000100 */
	dec->operand_n = 2;
	dec->operand_types[0] = PPC_OPER_TYPE_FREG;
	dec->operand_values[0] = (insword & 0x3C00000)>>22;
	dec->operand_types[1] = PPC_OPER_TYPE_FREG;
	dec->operand_values[1] = (insword & 0xF000)>>12;
	dec->operand_fmtstr = PPC_FMTSTR_FREG_C_FREG;
	return 0;
}

/* drdpq. FREG,FREG */
int drdpqD_FREG_FREG(uint32_t insword, struct ppc_decoded *dec)
{
	dec->properties |= PPC_PROPERTY_DOTTED;
	dec->mnemonic = PPC_MNEM_DRDPQ;
	/* 111111AAAA0xxxxxBBBBx11000000101 */
	dec->operand_n = 2;
	dec->operand_types[0] = PPC_OPER_TYPE_FREG;
	dec->operand_values[0] = (insword & 0x3C00000)>>22;
	dec->operand_types[1] = PPC_OPER_TYPE_FREG;
	dec->operand_values[1] = (insword & 0xF000)>>12;
	dec->operand_fmtstr = PPC_FMTSTR_FREG_C_FREG;
	return 0;
}

/* dcffixq FREG,FREG */
int dcffixq_FREG_FREG(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_DCFFIXQ;
	/* 111111AAAA0xxxxxBBBBB11001000100 */
	dec->operand_n = 2;
	dec->operand_types[0] = PPC_OPER_TYPE_FREG;
	dec->operand_values[0] = (insword & 0x3C00000)>>22;
	dec->operand_types[1] = PPC_OPER_TYPE_FREG;
	dec->operand_values[1] = (insword & 0xF800)>>11;
	dec->operand_fmtstr = PPC_FMTSTR_FREG_C_FREG;
	return 0;
}

/* dcffixq. FREG,FREG */
int dcffixqD_FREG_FREG(uint32_t insword, struct ppc_decoded *dec)
{
	dec->properties |= PPC_PROPERTY_DOTTED;
	dec->mnemonic = PPC_MNEM_DCFFIXQ;
	/* 111111AAAA0xxxxxBBBBB11001000101 */
	dec->operand_n = 2;
	dec->operand_types[0] = PPC_OPER_TYPE_FREG;
	dec->operand_values[0] = (insword & 0x3C00000)>>22;
	dec->operand_types[1] = PPC_OPER_TYPE_FREG;
	dec->operand_values[1] = (insword & 0xF800)>>11;
	dec->operand_fmtstr = PPC_FMTSTR_FREG_C_FREG;
	return 0;
}

/* xsabsqp VREG,VREG */
int xsabsqp_VREG_VREG(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_XSABSQP;
	/* 111111AAAAA00000BBBBB11001001000 */
	dec->operand_n = 2;
	dec->operand_types[0] = PPC_OPER_TYPE_VREG;
	dec->operand_values[0] = (insword & 0x3E00000)>>21;
	dec->operand_types[1] = PPC_OPER_TYPE_VREG;
	dec->operand_values[1] = (insword & 0xF800)>>11;
	dec->operand_fmtstr = PPC_FMTSTR_VREG_C_VREG;
	return 0;
}

/* fctid FREG,FREG */
int fctid_FREG_FREG(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_FCTID;
	/* 111111AAAAA00000BBBBB11001011100 */
	dec->operand_n = 2;
	dec->operand_types[0] = PPC_OPER_TYPE_FREG;
	dec->operand_values[0] = (insword & 0x3E00000)>>21;
	dec->operand_types[1] = PPC_OPER_TYPE_FREG;
	dec->operand_values[1] = (insword & 0xF800)>>11;
	dec->operand_fmtstr = PPC_FMTSTR_FREG_C_FREG;
	return 0;
}

/* fctid. FREG,FREG */
int fctidD_FREG_FREG(uint32_t insword, struct ppc_decoded *dec)
{
	dec->properties |= PPC_PROPERTY_DOTTED;
	dec->mnemonic = PPC_MNEM_FCTID;
	/* 111111AAAAA00000BBBBB11001011101 */
	dec->operand_n = 2;
	dec->operand_types[0] = PPC_OPER_TYPE_FREG;
	dec->operand_values[0] = (insword & 0x3E00000)>>21;
	dec->operand_types[1] = PPC_OPER_TYPE_FREG;
	dec->operand_values[1] = (insword & 0xF800)>>11;
	dec->operand_fmtstr = PPC_FMTSTR_FREG_C_FREG;
	return 0;
}

/* fctidz FREG,FREG */
int fctidz_FREG_FREG(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_FCTIDZ;
	/* 111111AAAAA00000BBBBB11001011110 */
	dec->operand_n = 2;
	dec->operand_types[0] = PPC_OPER_TYPE_FREG;
	dec->operand_values[0] = (insword & 0x3E00000)>>21;
	dec->operand_types[1] = PPC_OPER_TYPE_FREG;
	dec->operand_values[1] = (insword & 0xF800)>>11;
	dec->operand_fmtstr = PPC_FMTSTR_FREG_C_FREG;
	return 0;
}

/* fctidz. FREG,FREG */
int fctidzD_FREG_FREG(uint32_t insword, struct ppc_decoded *dec)
{
	dec->properties |= PPC_PROPERTY_DOTTED;
	dec->mnemonic = PPC_MNEM_FCTIDZ;
	/* 111111AAAAA00000BBBBB11001011111 */
	dec->operand_n = 2;
	dec->operand_types[0] = PPC_OPER_TYPE_FREG;
	dec->operand_values[0] = (insword & 0x3E00000)>>21;
	dec->operand_types[1] = PPC_OPER_TYPE_FREG;
	dec->operand_values[1] = (insword & 0xF800)>>11;
	dec->operand_fmtstr = PPC_FMTSTR_FREG_C_FREG;
	return 0;
}

/* denbcdq NUM,FREG,FREG */
int denbcdq_NUM_FREG_FREG(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_DENBCDQ;
	/* 111111BBBB0AxxxxCCCCx11010000100 */
	dec->operand_n = 3;
	dec->operand_types[0] = PPC_OPER_TYPE_NUM;
	dec->operand_values[0] = (insword & 0x100000)>>20;
	dec->operand_types[1] = PPC_OPER_TYPE_FREG;
	dec->operand_values[1] = (insword & 0x3C00000)>>22;
	dec->operand_types[2] = PPC_OPER_TYPE_FREG;
	dec->operand_values[2] = (insword & 0xF000)>>12;
	dec->operand_fmtstr = PPC_FMTSTR_NUM_C_FREG_C_FREG;
	return 0;
}

/* denbcdq. NUM,FREG,FREG */
int denbcdqD_NUM_FREG_FREG(uint32_t insword, struct ppc_decoded *dec)
{
	dec->properties |= PPC_PROPERTY_DOTTED;
	dec->mnemonic = PPC_MNEM_DENBCDQ;
	/* 111111BBBB0AxxxxCCCCx11010000101 */
	dec->operand_n = 3;
	dec->operand_types[0] = PPC_OPER_TYPE_NUM;
	dec->operand_values[0] = (insword & 0x100000)>>20;
	dec->operand_types[1] = PPC_OPER_TYPE_FREG;
	dec->operand_values[1] = (insword & 0x3C00000)>>22;
	dec->operand_types[2] = PPC_OPER_TYPE_FREG;
	dec->operand_values[2] = (insword & 0xF000)>>12;
	dec->operand_fmtstr = PPC_FMTSTR_NUM_C_FREG_C_FREG;
	return 0;
}

/* fmrgow FREG,FREG,FREG */
int fmrgow_FREG_FREG_FREG(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_FMRGOW;
	/* 111111AAAAABBBBBCCCCC11010001100 */
	dec->operand_n = 3;
	dec->operand_types[0] = PPC_OPER_TYPE_FREG;
	dec->operand_values[0] = (insword & 0x3E00000)>>21;
	dec->operand_types[1] = PPC_OPER_TYPE_FREG;
	dec->operand_values[1] = (insword & 0x1F0000)>>16;
	dec->operand_types[2] = PPC_OPER_TYPE_FREG;
	dec->operand_values[2] = (insword & 0xF800)>>11;
	dec->operand_fmtstr = PPC_FMTSTR_FREG_C_FREG_C_FREG;
	return 0;
}

/* fcfid FREG,FREG */
int fcfid_FREG_FREG(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_FCFID;
	/* 111111AAAAA00000BBBBB11010011100 */
	dec->operand_n = 2;
	dec->operand_types[0] = PPC_OPER_TYPE_FREG;
	dec->operand_values[0] = (insword & 0x3E00000)>>21;
	dec->operand_types[1] = PPC_OPER_TYPE_FREG;
	dec->operand_values[1] = (insword & 0xF800)>>11;
	dec->operand_fmtstr = PPC_FMTSTR_FREG_C_FREG;
	return 0;
}

/* fcfid. FREG,FREG */
int fcfidD_FREG_FREG(uint32_t insword, struct ppc_decoded *dec)
{
	dec->properties |= PPC_PROPERTY_DOTTED;
	dec->mnemonic = PPC_MNEM_FCFID;
	/* 111111AAAAA00000BBBBB11010011101 */
	dec->operand_n = 2;
	dec->operand_types[0] = PPC_OPER_TYPE_FREG;
	dec->operand_values[0] = (insword & 0x3E00000)>>21;
	dec->operand_types[1] = PPC_OPER_TYPE_FREG;
	dec->operand_values[1] = (insword & 0xF800)>>11;
	dec->operand_fmtstr = PPC_FMTSTR_FREG_C_FREG;
	return 0;
}

/* diexq FREG,FREG,FREG */
int diexq_FREG_FREG_FREG(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_DIEXQ;
	/* 111111AAAA0BBBBBCCCCx11011000100 */
	dec->operand_n = 3;
	dec->operand_types[0] = PPC_OPER_TYPE_FREG;
	dec->operand_values[0] = (insword & 0x3C00000)>>22;
	dec->operand_types[1] = PPC_OPER_TYPE_FREG;
	dec->operand_values[1] = (insword & 0x1F0000)>>16;
	dec->operand_types[2] = PPC_OPER_TYPE_FREG;
	dec->operand_values[2] = (insword & 0xF000)>>12;
	dec->operand_fmtstr = PPC_FMTSTR_FREG_C_FREG_C_FREG;
	return 0;
}

/* diexq. FREG,FREG,FREG */
int diexqD_FREG_FREG_FREG(uint32_t insword, struct ppc_decoded *dec)
{
	dec->properties |= PPC_PROPERTY_DOTTED;
	dec->mnemonic = PPC_MNEM_DIEXQ;
	/* 111111AAAA0BBBBBCCCCx11011000101 */
	dec->operand_n = 3;
	dec->operand_types[0] = PPC_OPER_TYPE_FREG;
	dec->operand_values[0] = (insword & 0x3C00000)>>22;
	dec->operand_types[1] = PPC_OPER_TYPE_FREG;
	dec->operand_values[1] = (insword & 0x1F0000)>>16;
	dec->operand_types[2] = PPC_OPER_TYPE_FREG;
	dec->operand_values[2] = (insword & 0xF000)>>12;
	dec->operand_fmtstr = PPC_FMTSTR_FREG_C_FREG_C_FREG;
	return 0;
}

/* xsiexpqp VREG,VREG,VREG */
int xsiexpqp_VREG_VREG_VREG(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_XSIEXPQP;
	/* 111111AAAAABBBBBCCCCC11011001000 */
	dec->operand_n = 3;
	dec->operand_types[0] = PPC_OPER_TYPE_VREG;
	dec->operand_values[0] = (insword & 0x3E00000)>>21;
	dec->operand_types[1] = PPC_OPER_TYPE_VREG;
	dec->operand_values[1] = (insword & 0x1F0000)>>16;
	dec->operand_types[2] = PPC_OPER_TYPE_VREG;
	dec->operand_values[2] = (insword & 0xF800)>>11;
	dec->operand_fmtstr = PPC_FMTSTR_VREG_C_VREG_C_VREG;
	return 0;
}

/* fctidu FREG,FREG */
int fctidu_FREG_FREG(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_FCTIDU;
	/* 111111AAAAA00000BBBBB11101011100 */
	dec->operand_n = 2;
	dec->operand_types[0] = PPC_OPER_TYPE_FREG;
	dec->operand_values[0] = (insword & 0x3E00000)>>21;
	dec->operand_types[1] = PPC_OPER_TYPE_FREG;
	dec->operand_values[1] = (insword & 0xF800)>>11;
	dec->operand_fmtstr = PPC_FMTSTR_FREG_C_FREG;
	return 0;
}

/* fctidu. FREG,FREG */
int fctiduD_FREG_FREG(uint32_t insword, struct ppc_decoded *dec)
{
	dec->properties |= PPC_PROPERTY_DOTTED;
	dec->mnemonic = PPC_MNEM_FCTIDU;
	/* 111111AAAAA00000BBBBB11101011101 */
	dec->operand_n = 2;
	dec->operand_types[0] = PPC_OPER_TYPE_FREG;
	dec->operand_values[0] = (insword & 0x3E00000)>>21;
	dec->operand_types[1] = PPC_OPER_TYPE_FREG;
	dec->operand_values[1] = (insword & 0xF800)>>11;
	dec->operand_fmtstr = PPC_FMTSTR_FREG_C_FREG;
	return 0;
}

/* fctiduz FREG,FREG */
int fctiduz_FREG_FREG(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_FCTIDUZ;
	/* 111111AAAAA00000BBBBB11101011110 */
	dec->operand_n = 2;
	dec->operand_types[0] = PPC_OPER_TYPE_FREG;
	dec->operand_values[0] = (insword & 0x3E00000)>>21;
	dec->operand_types[1] = PPC_OPER_TYPE_FREG;
	dec->operand_values[1] = (insword & 0xF800)>>11;
	dec->operand_fmtstr = PPC_FMTSTR_FREG_C_FREG;
	return 0;
}

/* fctiduz. FREG,FREG */
int fctiduzD_FREG_FREG(uint32_t insword, struct ppc_decoded *dec)
{
	dec->properties |= PPC_PROPERTY_DOTTED;
	dec->mnemonic = PPC_MNEM_FCTIDUZ;
	/* 111111AAAAA00000BBBBB11101011111 */
	dec->operand_n = 2;
	dec->operand_types[0] = PPC_OPER_TYPE_FREG;
	dec->operand_values[0] = (insword & 0x3E00000)>>21;
	dec->operand_types[1] = PPC_OPER_TYPE_FREG;
	dec->operand_values[1] = (insword & 0xF800)>>11;
	dec->operand_fmtstr = PPC_FMTSTR_FREG_C_FREG;
	return 0;
}

/* fmrgew FREG,FREG,FREG */
int fmrgew_FREG_FREG_FREG(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_FMRGEW;
	/* 111111AAAAABBBBBCCCCC11110001100 */
	dec->operand_n = 3;
	dec->operand_types[0] = PPC_OPER_TYPE_FREG;
	dec->operand_values[0] = (insword & 0x3E00000)>>21;
	dec->operand_types[1] = PPC_OPER_TYPE_FREG;
	dec->operand_values[1] = (insword & 0x1F0000)>>16;
	dec->operand_types[2] = PPC_OPER_TYPE_FREG;
	dec->operand_values[2] = (insword & 0xF800)>>11;
	dec->operand_fmtstr = PPC_FMTSTR_FREG_C_FREG_C_FREG;
	return 0;
}

/* fcfidu FREG,FREG */
int fcfidu_FREG_FREG(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_FCFIDU;
	/* 111111AAAAA00000BBBBB11110011100 */
	dec->operand_n = 2;
	dec->operand_types[0] = PPC_OPER_TYPE_FREG;
	dec->operand_values[0] = (insword & 0x3E00000)>>21;
	dec->operand_types[1] = PPC_OPER_TYPE_FREG;
	dec->operand_values[1] = (insword & 0xF800)>>11;
	dec->operand_fmtstr = PPC_FMTSTR_FREG_C_FREG;
	return 0;
}

/* fcfidu. FREG,FREG */
int fcfiduD_FREG_FREG(uint32_t insword, struct ppc_decoded *dec)
{
	dec->properties |= PPC_PROPERTY_DOTTED;
	dec->mnemonic = PPC_MNEM_FCFIDU;
	/* 111111AAAAA00000BBBBB11110011101 */
	dec->operand_n = 2;
	dec->operand_types[0] = PPC_OPER_TYPE_FREG;
	dec->operand_values[0] = (insword & 0x3E00000)>>21;
	dec->operand_types[1] = PPC_OPER_TYPE_FREG;
	dec->operand_values[1] = (insword & 0xF800)>>11;
	dec->operand_fmtstr = PPC_FMTSTR_FREG_C_FREG;
	return 0;
}

/* fre FREG,FREG,NUM */
int fre_FREG_FREG_NUM(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_FRE;
	/* 111111AAAAA00001BBBBB00000110000 */
	dec->operand_n = 3;
	dec->operand_types[0] = PPC_OPER_TYPE_FREG;
	dec->operand_values[0] = (insword & 0x3E00000)>>21;
	dec->operand_types[1] = PPC_OPER_TYPE_FREG;
	dec->operand_values[1] = (insword & 0xF800)>>11;
	dec->operand_types[2] = PPC_OPER_TYPE_NUM;
	dec->operand_fmtstr = PPC_FMTSTR_FREG_C_FREG_C_NUM;
	return 0;
}

/* fre. FREG,FREG,NUM */
int freD_FREG_FREG_NUM(uint32_t insword, struct ppc_decoded *dec)
{
	dec->properties |= PPC_PROPERTY_DOTTED;
	dec->mnemonic = PPC_MNEM_FRE;
	/* 111111AAAAA00001BBBBB00000110001 */
	dec->operand_n = 3;
	dec->operand_types[0] = PPC_OPER_TYPE_FREG;
	dec->operand_values[0] = (insword & 0x3E00000)>>21;
	dec->operand_types[1] = PPC_OPER_TYPE_FREG;
	dec->operand_values[1] = (insword & 0xF800)>>11;
	dec->operand_types[2] = PPC_OPER_TYPE_NUM;
	dec->operand_fmtstr = PPC_FMTSTR_FREG_C_FREG_C_NUM;
	return 0;
}

/* frsqrte FREG,FREG,NUM */
int frsqrte_FREG_FREG_NUM(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_FRSQRTE;
	/* 111111AAAAA00001BBBBB00000110100 */
	dec->operand_n = 3;
	dec->operand_types[0] = PPC_OPER_TYPE_FREG;
	dec->operand_values[0] = (insword & 0x3E00000)>>21;
	dec->operand_types[1] = PPC_OPER_TYPE_FREG;
	dec->operand_values[1] = (insword & 0xF800)>>11;
	dec->operand_types[2] = PPC_OPER_TYPE_NUM;
	dec->operand_fmtstr = PPC_FMTSTR_FREG_C_FREG_C_NUM;
	return 0;
}

/* frsqrte. FREG,FREG,NUM */
int frsqrteD_FREG_FREG_NUM(uint32_t insword, struct ppc_decoded *dec)
{
	dec->properties |= PPC_PROPERTY_DOTTED;
	dec->mnemonic = PPC_MNEM_FRSQRTE;
	/* 111111AAAAA00001BBBBB00000110101 */
	dec->operand_n = 3;
	dec->operand_types[0] = PPC_OPER_TYPE_FREG;
	dec->operand_values[0] = (insword & 0x3E00000)>>21;
	dec->operand_types[1] = PPC_OPER_TYPE_FREG;
	dec->operand_values[1] = (insword & 0xF800)>>11;
	dec->operand_types[2] = PPC_OPER_TYPE_NUM;
	dec->operand_fmtstr = PPC_FMTSTR_FREG_C_FREG_C_NUM;
	return 0;
}

/* mtfsfi NUM,NUM,NUM */
int mtfsfi_NUM_NUM_NUM(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_MTFSFI;
	/* 111111AAA0000001BBBB000100001100 */
	dec->operand_n = 3;
	dec->operand_types[0] = PPC_OPER_TYPE_NUM;
	dec->operand_values[0] = (insword & 0x3800000)>>23;
	dec->operand_types[1] = PPC_OPER_TYPE_NUM;
	dec->operand_values[1] = (insword & 0xF000)>>12;
	dec->operand_types[2] = PPC_OPER_TYPE_NUM;
	dec->operand_fmtstr = PPC_FMTSTR_NUM_C_NUM_C_NUM;
	return 0;
}

/* mtfsfi. NUM,NUM,NUM */
int mtfsfiD_NUM_NUM_NUM(uint32_t insword, struct ppc_decoded *dec)
{
	dec->properties |= PPC_PROPERTY_DOTTED;
	dec->mnemonic = PPC_MNEM_MTFSFI;
	/* 111111AAA0000001BBBB000100001101 */
	dec->operand_n = 3;
	dec->operand_types[0] = PPC_OPER_TYPE_NUM;
	dec->operand_values[0] = (insword & 0x3800000)>>23;
	dec->operand_types[1] = PPC_OPER_TYPE_NUM;
	dec->operand_values[1] = (insword & 0xF000)>>12;
	dec->operand_types[2] = PPC_OPER_TYPE_NUM;
	dec->operand_fmtstr = PPC_FMTSTR_NUM_C_NUM_C_NUM;
	return 0;
}

/* mffsce FREG */
int mffsce_FREG(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_MFFSCE;
	/* 111111AAAAA000010000010010001110 */
	dec->operand_n = 1;
	dec->operand_types[0] = PPC_OPER_TYPE_FREG;
	dec->operand_values[0] = (insword & 0x3E00000)>>21;
	dec->operand_fmtstr = PPC_FMTSTR_FREG;
	return 0;
}

/* mtfsf NUM,FREG,NUM,NUM */
int mtfsf_NUM_FREG_NUM_NUM(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_MTFSF;
	/* 111111CAAAAAAAADBBBBB10110001110 */
	dec->operand_n = 4;
	dec->operand_types[0] = PPC_OPER_TYPE_NUM;
	dec->operand_values[0] = (insword & 0x1FE0000)>>17;
	dec->operand_types[1] = PPC_OPER_TYPE_FREG;
	dec->operand_values[1] = (insword & 0xF800)>>11;
	dec->operand_types[2] = PPC_OPER_TYPE_NUM;
	dec->operand_values[2] = (insword & 0x2000000)>>25;
	dec->operand_types[3] = PPC_OPER_TYPE_NUM;
	dec->operand_values[3] = (insword & 0x10000)>>16;
	dec->operand_fmtstr = PPC_FMTSTR_NUM_C_FREG_C_NUM_C_NUM;
	return 0;
}

/* mtfsf. NUM,FREG,NUM,NUM */
int mtfsfD_NUM_FREG_NUM_NUM(uint32_t insword, struct ppc_decoded *dec)
{
	dec->properties |= PPC_PROPERTY_DOTTED;
	dec->mnemonic = PPC_MNEM_MTFSF;
	/* 111111CAAAAAAAAxBBBBB10110001111 */
	dec->operand_n = 4;
	dec->operand_types[0] = PPC_OPER_TYPE_NUM;
	dec->operand_values[0] = (insword & 0x1FE0000)>>17;
	dec->operand_types[1] = PPC_OPER_TYPE_FREG;
	dec->operand_values[1] = (insword & 0xF800)>>11;
	dec->operand_types[2] = PPC_OPER_TYPE_NUM;
	dec->operand_values[2] = (insword & 0x2000000)>>25;
	dec->operand_types[3] = PPC_OPER_TYPE_NUM;
	dec->operand_fmtstr = PPC_FMTSTR_NUM_C_FREG_C_NUM_C_NUM;
	return 0;
}

/* xscvqpuwz VREG,VREG */
int xscvqpuwz_VREG_VREG(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_XSCVQPUWZ;
	/* 111111AAAAA00001BBBBB11010001000 */
	dec->operand_n = 2;
	dec->operand_types[0] = PPC_OPER_TYPE_VREG;
	dec->operand_values[0] = (insword & 0x3E00000)>>21;
	dec->operand_types[1] = PPC_OPER_TYPE_VREG;
	dec->operand_values[1] = (insword & 0xF800)>>11;
	dec->operand_fmtstr = PPC_FMTSTR_VREG_C_VREG;
	return 0;
}

/* xsxexpqp VREG,VREG */
int xsxexpqp_VREG_VREG(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_XSXEXPQP;
	/* 111111AAAAA00010BBBBB11001001000 */
	dec->operand_n = 2;
	dec->operand_types[0] = PPC_OPER_TYPE_VREG;
	dec->operand_values[0] = (insword & 0x3E00000)>>21;
	dec->operand_types[1] = PPC_OPER_TYPE_VREG;
	dec->operand_values[1] = (insword & 0xF800)>>11;
	dec->operand_fmtstr = PPC_FMTSTR_VREG_C_VREG;
	return 0;
}

/* xscvudqp VREG,VREG */
int xscvudqp_VREG_VREG(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_XSCVUDQP;
	/* 111111AAAAA00010BBBBB11010001000 */
	dec->operand_n = 2;
	dec->operand_types[0] = PPC_OPER_TYPE_VREG;
	dec->operand_values[0] = (insword & 0x3E00000)>>21;
	dec->operand_types[1] = PPC_OPER_TYPE_VREG;
	dec->operand_values[1] = (insword & 0xF800)>>11;
	dec->operand_fmtstr = PPC_FMTSTR_VREG_C_VREG;
	return 0;
}

/* xsnabsqp VREG,VREG */
int xsnabsqp_VREG_VREG(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_XSNABSQP;
	/* 111111AAAAA01000BBBBB11001001000 */
	dec->operand_n = 2;
	dec->operand_types[0] = PPC_OPER_TYPE_VREG;
	dec->operand_values[0] = (insword & 0x3E00000)>>21;
	dec->operand_types[1] = PPC_OPER_TYPE_VREG;
	dec->operand_values[1] = (insword & 0xF800)>>11;
	dec->operand_fmtstr = PPC_FMTSTR_VREG_C_VREG;
	return 0;
}

/* xscvqpswz VREG,VREG */
int xscvqpswz_VREG_VREG(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_XSCVQPSWZ;
	/* 111111AAAAA01001BBBBB11010001000 */
	dec->operand_n = 2;
	dec->operand_types[0] = PPC_OPER_TYPE_VREG;
	dec->operand_values[0] = (insword & 0x3E00000)>>21;
	dec->operand_types[1] = PPC_OPER_TYPE_VREG;
	dec->operand_values[1] = (insword & 0xF800)>>11;
	dec->operand_fmtstr = PPC_FMTSTR_VREG_C_VREG;
	return 0;
}

/* xscvsdqp VREG,VREG */
int xscvsdqp_VREG_VREG(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_XSCVSDQP;
	/* 111111AAAAA01010BBBBB11010001000 */
	dec->operand_n = 2;
	dec->operand_types[0] = PPC_OPER_TYPE_VREG;
	dec->operand_values[0] = (insword & 0x3E00000)>>21;
	dec->operand_types[1] = PPC_OPER_TYPE_VREG;
	dec->operand_values[1] = (insword & 0xF800)>>11;
	dec->operand_fmtstr = PPC_FMTSTR_VREG_C_VREG;
	return 0;
}

/* xsnegqp VREG,VREG */
int xsnegqp_VREG_VREG(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_XSNEGQP;
	/* 111111AAAAA10000BBBBB11001001000 */
	dec->operand_n = 2;
	dec->operand_types[0] = PPC_OPER_TYPE_VREG;
	dec->operand_values[0] = (insword & 0x3E00000)>>21;
	dec->operand_types[1] = PPC_OPER_TYPE_VREG;
	dec->operand_values[1] = (insword & 0xF800)>>11;
	dec->operand_fmtstr = PPC_FMTSTR_VREG_C_VREG;
	return 0;
}

/* xscvqpudz VREG,VREG */
int xscvqpudz_VREG_VREG(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_XSCVQPUDZ;
	/* 111111AAAAA10001BBBBB11010001000 */
	dec->operand_n = 2;
	dec->operand_types[0] = PPC_OPER_TYPE_VREG;
	dec->operand_values[0] = (insword & 0x3E00000)>>21;
	dec->operand_types[1] = PPC_OPER_TYPE_VREG;
	dec->operand_values[1] = (insword & 0xF800)>>11;
	dec->operand_fmtstr = PPC_FMTSTR_VREG_C_VREG;
	return 0;
}

/* xsxsigqp VREG,VREG */
int xsxsigqp_VREG_VREG(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_XSXSIGQP;
	/* 111111AAAAA10010BBBBB11001001000 */
	dec->operand_n = 2;
	dec->operand_types[0] = PPC_OPER_TYPE_VREG;
	dec->operand_values[0] = (insword & 0x3E00000)>>21;
	dec->operand_types[1] = PPC_OPER_TYPE_VREG;
	dec->operand_values[1] = (insword & 0xF800)>>11;
	dec->operand_fmtstr = PPC_FMTSTR_VREG_C_VREG;
	return 0;
}

/* mffscdrn FREG,FREG */
int mffscdrn_FREG_FREG(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_MFFSCDRN;
	/* 111111AAAAA10100BBBBB10010001110 */
	dec->operand_n = 2;
	dec->operand_types[0] = PPC_OPER_TYPE_FREG;
	dec->operand_values[0] = (insword & 0x3E00000)>>21;
	dec->operand_types[1] = PPC_OPER_TYPE_FREG;
	dec->operand_values[1] = (insword & 0xF800)>>11;
	dec->operand_fmtstr = PPC_FMTSTR_FREG_C_FREG;
	return 0;
}

/* xscvqpdp VREG,VREG */
int xscvqpdp_VREG_VREG(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_XSCVQPDP;
	/* 111111AAAAA10100BBBBB11010001000 */
	dec->operand_n = 2;
	dec->operand_types[0] = PPC_OPER_TYPE_VREG;
	dec->operand_values[0] = (insword & 0x3E00000)>>21;
	dec->operand_types[1] = PPC_OPER_TYPE_VREG;
	dec->operand_values[1] = (insword & 0xF800)>>11;
	dec->operand_fmtstr = PPC_FMTSTR_VREG_C_VREG;
	return 0;
}

/* xscvqpdpo VREG,VREG */
int xscvqpdpo_VREG_VREG(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_XSCVQPDPO;
	/* 111111AAAAA10100BBBBB11010001001 */
	dec->operand_n = 2;
	dec->operand_types[0] = PPC_OPER_TYPE_VREG;
	dec->operand_values[0] = (insword & 0x3E00000)>>21;
	dec->operand_types[1] = PPC_OPER_TYPE_VREG;
	dec->operand_values[1] = (insword & 0xF800)>>11;
	dec->operand_fmtstr = PPC_FMTSTR_VREG_C_VREG;
	return 0;
}

/* mffscdrni FREG,NUM */
int mffscdrni_FREG_NUM(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_MFFSCDRNI;
	/* 111111AAAAA1010100BBB10010001110 */
	dec->operand_n = 2;
	dec->operand_types[0] = PPC_OPER_TYPE_FREG;
	dec->operand_values[0] = (insword & 0x3E00000)>>21;
	dec->operand_types[1] = PPC_OPER_TYPE_NUM;
	dec->operand_values[1] = (insword & 0x3800)>>11;
	dec->operand_fmtstr = PPC_FMTSTR_FREG_C_NUM;
	return 0;
}

/* mffscrn FREG,FREG */
int mffscrn_FREG_FREG(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_MFFSCRN;
	/* 111111AAAAA10110BBBBB10010001110 */
	dec->operand_n = 2;
	dec->operand_types[0] = PPC_OPER_TYPE_FREG;
	dec->operand_values[0] = (insword & 0x3E00000)>>21;
	dec->operand_types[1] = PPC_OPER_TYPE_FREG;
	dec->operand_values[1] = (insword & 0xF800)>>11;
	dec->operand_fmtstr = PPC_FMTSTR_FREG_C_FREG;
	return 0;
}

/* xscvdpqp VREG,VREG */
int xscvdpqp_VREG_VREG(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_XSCVDPQP;
	/* 111111AAAAA10110BBBBB11010001000 */
	dec->operand_n = 2;
	dec->operand_types[0] = PPC_OPER_TYPE_VREG;
	dec->operand_values[0] = (insword & 0x3E00000)>>21;
	dec->operand_types[1] = PPC_OPER_TYPE_VREG;
	dec->operand_values[1] = (insword & 0xF800)>>11;
	dec->operand_fmtstr = PPC_FMTSTR_VREG_C_VREG;
	return 0;
}

/* mffscrni FREG,NUM */
int mffscrni_FREG_NUM(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_MFFSCRNI;
	/* 111111AAAAA10111000BB10010001110 */
	dec->operand_n = 2;
	dec->operand_types[0] = PPC_OPER_TYPE_FREG;
	dec->operand_values[0] = (insword & 0x3E00000)>>21;
	dec->operand_types[1] = PPC_OPER_TYPE_NUM;
	dec->operand_values[1] = (insword & 0x1800)>>11;
	dec->operand_fmtstr = PPC_FMTSTR_FREG_C_NUM;
	return 0;
}

/* mffsl FREG */
int mffsl_FREG(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_MFFSL;
	/* 111111AAAAA110000000010010001110 */
	dec->operand_n = 1;
	dec->operand_types[0] = PPC_OPER_TYPE_FREG;
	dec->operand_values[0] = (insword & 0x3E00000)>>21;
	dec->operand_fmtstr = PPC_FMTSTR_FREG;
	return 0;
}

/* xscvqpsdz VREG,VREG */
int xscvqpsdz_VREG_VREG(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_XSCVQPSDZ;
	/* 111111AAAAA11001BBBBB11010001000 */
	dec->operand_n = 2;
	dec->operand_types[0] = PPC_OPER_TYPE_VREG;
	dec->operand_values[0] = (insword & 0x3E00000)>>21;
	dec->operand_types[1] = PPC_OPER_TYPE_VREG;
	dec->operand_values[1] = (insword & 0xF800)>>11;
	dec->operand_fmtstr = PPC_FMTSTR_VREG_C_VREG;
	return 0;
}

/* xssqrtqp VREG,VREG */
int xssqrtqp_VREG_VREG(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_XSSQRTQP;
	/* 111111AAAAA11011BBBBB11001001000 */
	dec->operand_n = 2;
	dec->operand_types[0] = PPC_OPER_TYPE_VREG;
	dec->operand_values[0] = (insword & 0x3E00000)>>21;
	dec->operand_types[1] = PPC_OPER_TYPE_VREG;
	dec->operand_values[1] = (insword & 0xF800)>>11;
	dec->operand_fmtstr = PPC_FMTSTR_VREG_C_VREG;
	return 0;
}

/* xssqrtqpo VREG,VREG */
int xssqrtqpo_VREG_VREG(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_XSSQRTQPO;
	/* 111111AAAAA11011BBBBB11001001001 */
	dec->operand_n = 2;
	dec->operand_types[0] = PPC_OPER_TYPE_VREG;
	dec->operand_values[0] = (insword & 0x3E00000)>>21;
	dec->operand_types[1] = PPC_OPER_TYPE_VREG;
	dec->operand_values[1] = (insword & 0xF800)>>11;
	dec->operand_fmtstr = PPC_FMTSTR_VREG_C_VREG;
	return 0;
}

/* mtfsb1 NUM*CREG+FLAG */
int mtfsb1_NUM_CREGPFLAG(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_MTFSB1;
	/* 111111xBBCC000000000000001001100 */
	dec->operand_n = 3;
	dec->operand_types[0] = PPC_OPER_TYPE_NUM;
	dec->operand_types[1] = PPC_OPER_TYPE_CREG;
	dec->operand_values[1] = (insword & 0x1800000)>>23;
	dec->operand_types[2] = PPC_OPER_TYPE_FLAG;
	dec->operand_values[2] = (insword & 0x600000)>>21;
	dec->operand_fmtstr = PPC_FMTSTR_NUM_MUL_CREG_POS_FLAG;
	return 0;
}

/* mtfsb1. NUM*CREG+FLAG */
int mtfsb1D_NUM_CREGPFLAG(uint32_t insword, struct ppc_decoded *dec)
{
	dec->properties |= PPC_PROPERTY_DOTTED;
	dec->mnemonic = PPC_MNEM_MTFSB1;
	/* 111111BBxCC000000000000001001101 */
	dec->operand_n = 3;
	dec->operand_types[0] = PPC_OPER_TYPE_NUM;
	dec->operand_types[1] = PPC_OPER_TYPE_CREG;
	dec->operand_values[1] = (insword & 0x3000000)>>24;
	dec->operand_types[2] = PPC_OPER_TYPE_FLAG;
	dec->operand_values[2] = (insword & 0x600000)>>21;
	dec->operand_fmtstr = PPC_FMTSTR_NUM_MUL_CREG_POS_FLAG;
	return 0;
}

/* mtfsb0 NUM*CREG+FLAG */
int mtfsb0_NUM_CREGPFLAG(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_MTFSB0;
	/* 111111BxBCC000000000000010001100 */
	dec->operand_n = 3;
	dec->operand_types[0] = PPC_OPER_TYPE_NUM;
	dec->operand_types[1] = PPC_OPER_TYPE_CREG;
	dec->operand_values[1] = ((insword & 0x2000000)>>24)|((insword & 0x800000)>>23);
	dec->operand_types[2] = PPC_OPER_TYPE_FLAG;
	dec->operand_values[2] = (insword & 0x600000)>>21;
	dec->operand_fmtstr = PPC_FMTSTR_NUM_MUL_CREG_POS_FLAG;
	return 0;
}

/* mtfsb0. NUM*CREG+FLAG */
int mtfsb0D_NUM_CREGPFLAG(uint32_t insword, struct ppc_decoded *dec)
{
	dec->properties |= PPC_PROPERTY_DOTTED;
	dec->mnemonic = PPC_MNEM_MTFSB0;
	/* 111111BBBCC000000000000010001101 */
	dec->operand_n = 3;
	dec->operand_types[0] = PPC_OPER_TYPE_NUM;
	dec->operand_types[1] = PPC_OPER_TYPE_CREG;
	dec->operand_values[1] = (insword & 0x3800000)>>23;
	dec->operand_types[2] = PPC_OPER_TYPE_FLAG;
	dec->operand_values[2] = (insword & 0x600000)>>21;
	dec->operand_fmtstr = PPC_FMTSTR_NUM_MUL_CREG_POS_FLAG;
	return 0;
}

