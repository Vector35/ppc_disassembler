#include "disassembler.h"

/* cmpw GPR,GPR */
int cmpw_GPR_GPR(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_CMPW;
	/* 01111100000AAAAABBBBB00000000000 */
	dec->operand_n = 2;
	dec->operand_types[0] = PPC_OPER_TYPE_GPR;
	dec->operand_values[0] = (insword & 0x1F0000)>>16;
	dec->operand_types[1] = PPC_OPER_TYPE_GPR;
	dec->operand_values[1] = (insword & 0xF800)>>11;
	dec->operand_fmtstr = PPC_FMTSTR_GPR_C_GPR;
	return 0;
}

/* tw NUM,GPR,GPR */
int tw_NUM_GPR_GPR(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_TW;
	/* 011111AAxAABBBBBCCCCC00000001000 */
	dec->operand_n = 3;
	dec->operand_types[0] = PPC_OPER_TYPE_NUM;
	dec->operand_values[0] = ((insword & 0x3000000)>>22)|((insword & 0x600000)>>21);
	dec->operand_types[1] = PPC_OPER_TYPE_GPR;
	dec->operand_values[1] = (insword & 0x1F0000)>>16;
	dec->operand_types[2] = PPC_OPER_TYPE_GPR;
	dec->operand_values[2] = (insword & 0xF800)>>11;
	dec->operand_fmtstr = PPC_FMTSTR_NUM_C_GPR_C_GPR;
	return 0;
}

/* lvsl VREG,NUM,GPR */
int lvsl_VREG_NUM_GPR(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_LVSL;
	/* 011111AAAAA00000CCCCC00000001100 */
	dec->operand_n = 3;
	dec->operand_types[0] = PPC_OPER_TYPE_VREG;
	dec->operand_values[0] = (insword & 0x3E00000)>>21;
	dec->operand_types[1] = PPC_OPER_TYPE_NUM;
	dec->operand_types[2] = PPC_OPER_TYPE_GPR;
	dec->operand_values[2] = (insword & 0xF800)>>11;
	dec->operand_fmtstr = PPC_FMTSTR_VREG_C_NUM_C_GPR;
	return 0;
}

/* lvebx VREG,NUM,GPR */
int lvebx_VREG_NUM_GPR(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_LVEBX;
	/* 011111AAAAA00000CCCCC00000001110 */
	dec->operand_n = 3;
	dec->operand_types[0] = PPC_OPER_TYPE_VREG;
	dec->operand_values[0] = (insword & 0x3E00000)>>21;
	dec->operand_types[1] = PPC_OPER_TYPE_NUM;
	dec->operand_types[2] = PPC_OPER_TYPE_GPR;
	dec->operand_values[2] = (insword & 0xF800)>>11;
	dec->operand_fmtstr = PPC_FMTSTR_VREG_C_NUM_C_GPR;
	return 0;
}

/* subfc GPR,GPR,GPR */
int subfc_GPR_GPR_GPR(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_SUBFC;
	/* 011111AAAAABBBBBCCCCC00000010000 */
	dec->operand_n = 3;
	dec->operand_types[0] = PPC_OPER_TYPE_GPR;
	dec->operand_values[0] = (insword & 0x3E00000)>>21;
	dec->operand_types[1] = PPC_OPER_TYPE_GPR;
	dec->operand_values[1] = (insword & 0x1F0000)>>16;
	dec->operand_types[2] = PPC_OPER_TYPE_GPR;
	dec->operand_values[2] = (insword & 0xF800)>>11;
	dec->operand_fmtstr = PPC_FMTSTR_GPR_C_GPR_C_GPR;
	return 0;
}

/* subfc. GPR,GPR,GPR */
int subfcD_GPR_GPR_GPR(uint32_t insword, struct ppc_decoded *dec)
{
	dec->properties |= PPC_PROPERTY_DOTTED;
	dec->mnemonic = PPC_MNEM_SUBFC;
	/* 011111AAAAABBBBBCCCCC00000010001 */
	dec->operand_n = 3;
	dec->operand_types[0] = PPC_OPER_TYPE_GPR;
	dec->operand_values[0] = (insword & 0x3E00000)>>21;
	dec->operand_types[1] = PPC_OPER_TYPE_GPR;
	dec->operand_values[1] = (insword & 0x1F0000)>>16;
	dec->operand_types[2] = PPC_OPER_TYPE_GPR;
	dec->operand_values[2] = (insword & 0xF800)>>11;
	dec->operand_fmtstr = PPC_FMTSTR_GPR_C_GPR_C_GPR;
	return 0;
}

/* mulhdu GPR,GPR,GPR */
int mulhdu_GPR_GPR_GPR(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_MULHDU;
	/* 011111AAAAABBBBBCCCCC00000010010 */
	dec->operand_n = 3;
	dec->operand_types[0] = PPC_OPER_TYPE_GPR;
	dec->operand_values[0] = (insword & 0x3E00000)>>21;
	dec->operand_types[1] = PPC_OPER_TYPE_GPR;
	dec->operand_values[1] = (insword & 0x1F0000)>>16;
	dec->operand_types[2] = PPC_OPER_TYPE_GPR;
	dec->operand_values[2] = (insword & 0xF800)>>11;
	dec->operand_fmtstr = PPC_FMTSTR_GPR_C_GPR_C_GPR;
	return 0;
}

/* mulhdu. GPR,GPR,GPR */
int mulhduD_GPR_GPR_GPR(uint32_t insword, struct ppc_decoded *dec)
{
	dec->properties |= PPC_PROPERTY_DOTTED;
	dec->mnemonic = PPC_MNEM_MULHDU;
	/* 011111AAAAABBBBBCCCCC00000010011 */
	dec->operand_n = 3;
	dec->operand_types[0] = PPC_OPER_TYPE_GPR;
	dec->operand_values[0] = (insword & 0x3E00000)>>21;
	dec->operand_types[1] = PPC_OPER_TYPE_GPR;
	dec->operand_values[1] = (insword & 0x1F0000)>>16;
	dec->operand_types[2] = PPC_OPER_TYPE_GPR;
	dec->operand_values[2] = (insword & 0xF800)>>11;
	dec->operand_fmtstr = PPC_FMTSTR_GPR_C_GPR_C_GPR;
	return 0;
}

/* addc GPR,GPR,GPR */
int addc_GPR_GPR_GPR(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_ADDC;
	/* 011111AAAAABBBBBCCCCC00000010100 */
	dec->operand_n = 3;
	dec->operand_types[0] = PPC_OPER_TYPE_GPR;
	dec->operand_values[0] = (insword & 0x3E00000)>>21;
	dec->operand_types[1] = PPC_OPER_TYPE_GPR;
	dec->operand_values[1] = (insword & 0x1F0000)>>16;
	dec->operand_types[2] = PPC_OPER_TYPE_GPR;
	dec->operand_values[2] = (insword & 0xF800)>>11;
	dec->operand_fmtstr = PPC_FMTSTR_GPR_C_GPR_C_GPR;
	return 0;
}

/* addc. GPR,GPR,GPR */
int addcD_GPR_GPR_GPR(uint32_t insword, struct ppc_decoded *dec)
{
	dec->properties |= PPC_PROPERTY_DOTTED;
	dec->mnemonic = PPC_MNEM_ADDC;
	/* 011111AAAAABBBBBCCCCC00000010101 */
	dec->operand_n = 3;
	dec->operand_types[0] = PPC_OPER_TYPE_GPR;
	dec->operand_values[0] = (insword & 0x3E00000)>>21;
	dec->operand_types[1] = PPC_OPER_TYPE_GPR;
	dec->operand_values[1] = (insword & 0x1F0000)>>16;
	dec->operand_types[2] = PPC_OPER_TYPE_GPR;
	dec->operand_values[2] = (insword & 0xF800)>>11;
	dec->operand_fmtstr = PPC_FMTSTR_GPR_C_GPR_C_GPR;
	return 0;
}

/* mulhwu GPR,GPR,GPR */
int mulhwu_GPR_GPR_GPR(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_MULHWU;
	/* 011111AAAAABBBBBCCCCC00000010110 */
	dec->operand_n = 3;
	dec->operand_types[0] = PPC_OPER_TYPE_GPR;
	dec->operand_values[0] = (insword & 0x3E00000)>>21;
	dec->operand_types[1] = PPC_OPER_TYPE_GPR;
	dec->operand_values[1] = (insword & 0x1F0000)>>16;
	dec->operand_types[2] = PPC_OPER_TYPE_GPR;
	dec->operand_values[2] = (insword & 0xF800)>>11;
	dec->operand_fmtstr = PPC_FMTSTR_GPR_C_GPR_C_GPR;
	return 0;
}

/* mulhwu. GPR,GPR,GPR */
int mulhwuD_GPR_GPR_GPR(uint32_t insword, struct ppc_decoded *dec)
{
	dec->properties |= PPC_PROPERTY_DOTTED;
	dec->mnemonic = PPC_MNEM_MULHWU;
	/* 011111AAAAABBBBBCCCCC00000010111 */
	dec->operand_n = 3;
	dec->operand_types[0] = PPC_OPER_TYPE_GPR;
	dec->operand_values[0] = (insword & 0x3E00000)>>21;
	dec->operand_types[1] = PPC_OPER_TYPE_GPR;
	dec->operand_values[1] = (insword & 0x1F0000)>>16;
	dec->operand_types[2] = PPC_OPER_TYPE_GPR;
	dec->operand_values[2] = (insword & 0xF800)>>11;
	dec->operand_fmtstr = PPC_FMTSTR_GPR_C_GPR_C_GPR;
	return 0;
}

/* lxsiwzx VSREG,NUM,GPR */
int lxsiwzx_VSREG_NUM_GPR(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_LXSIWZX;
	/* 011111AAAAA00000CCCCC0000001100A */
	dec->operand_n = 3;
	dec->operand_types[0] = PPC_OPER_TYPE_VSREG;
	dec->operand_values[0] = ((insword & 0x3E00000)>>20)|((insword & 0x1)>>0);
	dec->operand_types[1] = PPC_OPER_TYPE_NUM;
	dec->operand_types[2] = PPC_OPER_TYPE_GPR;
	dec->operand_values[2] = (insword & 0xF800)>>11;
	dec->operand_fmtstr = PPC_FMTSTR_VSREG_C_NUM_C_GPR;
	return 0;
}

/* isellt GPR,NUM,GPR */
int isellt_GPR_NUM_GPR(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_ISELLT;
	/* 011111AAAAA00000CCCCC00000011110 */
	dec->operand_n = 3;
	dec->operand_types[0] = PPC_OPER_TYPE_GPR;
	dec->operand_values[0] = (insword & 0x3E00000)>>21;
	dec->operand_types[1] = PPC_OPER_TYPE_NUM;
	dec->operand_types[2] = PPC_OPER_TYPE_GPR;
	dec->operand_values[2] = (insword & 0xF800)>>11;
	dec->operand_fmtstr = PPC_FMTSTR_GPR_C_NUM_C_GPR;
	return 0;
}

/* isel GPR,NUM,GPR,NUM */
int isel_GPR_NUM_GPR_NUM(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_ISEL;
	/* 011111AAAAA00000CCCCCDDxDD01111x */
	dec->operand_n = 4;
	dec->operand_types[0] = PPC_OPER_TYPE_GPR;
	dec->operand_values[0] = (insword & 0x3E00000)>>21;
	dec->operand_types[1] = PPC_OPER_TYPE_NUM;
	dec->operand_types[2] = PPC_OPER_TYPE_GPR;
	dec->operand_values[2] = (insword & 0xF800)>>11;
	dec->operand_types[3] = PPC_OPER_TYPE_NUM;
	dec->operand_values[3] = ((insword & 0x600)>>7)|((insword & 0xC0)>>6);
	dec->operand_fmtstr = PPC_FMTSTR_GPR_C_NUM_C_GPR_C_NUM;
	return 0;
}

/* tlbilxlpid */
int tlbilxlpid(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_TLBILXLPID;
	return 0;
}

/* mfcr GPR */
int mfcr_GPR(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_MFCR;
	/* 011111AAAAA000000000000000100110 */
	dec->operand_n = 1;
	dec->operand_types[0] = PPC_OPER_TYPE_GPR;
	dec->operand_values[0] = (insword & 0x3E00000)>>21;
	dec->operand_fmtstr = PPC_FMTSTR_GPR;
	return 0;
}

/* lwarx GPR,NUM,GPR */
int lwarx_GPR_NUM_GPR(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_LWARX;
	/* 011111AAAAA00000CCCCC00000101000 */
	dec->operand_n = 3;
	dec->operand_types[0] = PPC_OPER_TYPE_GPR;
	dec->operand_values[0] = (insword & 0x3E00000)>>21;
	dec->operand_types[1] = PPC_OPER_TYPE_NUM;
	dec->operand_types[2] = PPC_OPER_TYPE_GPR;
	dec->operand_values[2] = (insword & 0xF800)>>11;
	dec->operand_fmtstr = PPC_FMTSTR_GPR_C_NUM_C_GPR;
	return 0;
}

/* lwarx GPR,NUM,GPR,NUM */
int lwarx_GPR_NUM_GPR_NUM(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_LWARX;
	/* 011111AAAAA00000CCCCC00000101001 */
	dec->operand_n = 4;
	dec->operand_types[0] = PPC_OPER_TYPE_GPR;
	dec->operand_values[0] = (insword & 0x3E00000)>>21;
	dec->operand_types[1] = PPC_OPER_TYPE_NUM;
	dec->operand_types[2] = PPC_OPER_TYPE_GPR;
	dec->operand_values[2] = (insword & 0xF800)>>11;
	dec->operand_types[3] = PPC_OPER_TYPE_NUM;
	dec->operand_fmtstr = PPC_FMTSTR_GPR_C_NUM_C_GPR_C_NUM;
	return 0;
}

/* ldx GPR,NUM,GPR */
int ldx_GPR_NUM_GPR(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_LDX;
	/* 011111AAAAA00000CCCCC00000101010 */
	dec->operand_n = 3;
	dec->operand_types[0] = PPC_OPER_TYPE_GPR;
	dec->operand_values[0] = (insword & 0x3E00000)>>21;
	dec->operand_types[1] = PPC_OPER_TYPE_NUM;
	dec->operand_types[2] = PPC_OPER_TYPE_GPR;
	dec->operand_values[2] = (insword & 0xF800)>>11;
	dec->operand_fmtstr = PPC_FMTSTR_GPR_C_NUM_C_GPR;
	return 0;
}

/* icbt NUM,GPR */
int icbt_NUM_GPR(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_ICBT;
	/* 0111110000000000BBBBB00000101100 */
	dec->operand_n = 2;
	dec->operand_types[0] = PPC_OPER_TYPE_NUM;
	dec->operand_types[1] = PPC_OPER_TYPE_GPR;
	dec->operand_values[1] = (insword & 0xF800)>>11;
	dec->operand_fmtstr = PPC_FMTSTR_NUM_C_GPR;
	return 0;
}

/* lwzx GPR,NUM,GPR */
int lwzx_GPR_NUM_GPR(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_LWZX;
	/* 011111AAAAA00000CCCCC00000101110 */
	dec->operand_n = 3;
	dec->operand_types[0] = PPC_OPER_TYPE_GPR;
	dec->operand_values[0] = (insword & 0x3E00000)>>21;
	dec->operand_types[1] = PPC_OPER_TYPE_NUM;
	dec->operand_types[2] = PPC_OPER_TYPE_GPR;
	dec->operand_values[2] = (insword & 0xF800)>>11;
	dec->operand_fmtstr = PPC_FMTSTR_GPR_C_NUM_C_GPR;
	return 0;
}

/* slw GPR,GPR,GPR */
int slw_GPR_GPR_GPR(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_SLW;
	/* 011111BBBBBAAAAACCCCC00000110000 */
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

/* slw. GPR,GPR,GPR */
int slwD_GPR_GPR_GPR(uint32_t insword, struct ppc_decoded *dec)
{
	dec->properties |= PPC_PROPERTY_DOTTED;
	dec->mnemonic = PPC_MNEM_SLW;
	/* 011111BBBBBAAAAACCCCC00000110001 */
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

/* cntlzw GPR,GPR */
int cntlzw_GPR_GPR(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_CNTLZW;
	/* 011111BBBBBAAAAA0000000000110100 */
	dec->operand_n = 2;
	dec->operand_types[0] = PPC_OPER_TYPE_GPR;
	dec->operand_values[0] = (insword & 0x1F0000)>>16;
	dec->operand_types[1] = PPC_OPER_TYPE_GPR;
	dec->operand_values[1] = (insword & 0x3E00000)>>21;
	dec->operand_fmtstr = PPC_FMTSTR_GPR_C_GPR;
	return 0;
}

/* cntlzw. GPR,GPR */
int cntlzwD_GPR_GPR(uint32_t insword, struct ppc_decoded *dec)
{
	dec->properties |= PPC_PROPERTY_DOTTED;
	dec->mnemonic = PPC_MNEM_CNTLZW;
	/* 011111BBBBBAAAAA0000000000110101 */
	dec->operand_n = 2;
	dec->operand_types[0] = PPC_OPER_TYPE_GPR;
	dec->operand_values[0] = (insword & 0x1F0000)>>16;
	dec->operand_types[1] = PPC_OPER_TYPE_GPR;
	dec->operand_values[1] = (insword & 0x3E00000)>>21;
	dec->operand_fmtstr = PPC_FMTSTR_GPR_C_GPR;
	return 0;
}

/* sld GPR,GPR,GPR */
int sld_GPR_GPR_GPR(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_SLD;
	/* 011111BBBBBAAAAACCCCC00000110110 */
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

/* sld. GPR,GPR,GPR */
int sldD_GPR_GPR_GPR(uint32_t insword, struct ppc_decoded *dec)
{
	dec->properties |= PPC_PROPERTY_DOTTED;
	dec->mnemonic = PPC_MNEM_SLD;
	/* 011111BBBBBAAAAACCCCC00000110111 */
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

/* and GPR,GPR,GPR */
int and_GPR_GPR_GPR(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_AND;
	/* 011111BBBBBAAAAACCCCC00000111000 */
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

/* and. GPR,GPR,GPR */
int andD_GPR_GPR_GPR(uint32_t insword, struct ppc_decoded *dec)
{
	dec->properties |= PPC_PROPERTY_DOTTED;
	dec->mnemonic = PPC_MNEM_AND;
	/* 011111BBBBBAAAAACCCCC00000111001 */
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

/* maskg GPR,GPR,GPR */
int maskg_GPR_GPR_GPR(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_MASKG;
	/* 011111BBBBBAAAAACCCCC00000111010 */
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

/* maskg. GPR,GPR,GPR */
int maskgD_GPR_GPR_GPR(uint32_t insword, struct ppc_decoded *dec)
{
	dec->properties |= PPC_PROPERTY_DOTTED;
	dec->mnemonic = PPC_MNEM_MASKG;
	/* 011111BBBBBAAAAACCCCC00000111011 */
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

/* wait */
int wait(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_WAIT;
	return 0;
}

/* lwepx GPR,NUM,GPR */
int lwepx_GPR_NUM_GPR(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_LWEPX;
	/* 011111AAAAA00000CCCCC00000111110 */
	dec->operand_n = 3;
	dec->operand_types[0] = PPC_OPER_TYPE_GPR;
	dec->operand_values[0] = (insword & 0x3E00000)>>21;
	dec->operand_types[1] = PPC_OPER_TYPE_NUM;
	dec->operand_types[2] = PPC_OPER_TYPE_GPR;
	dec->operand_values[2] = (insword & 0xF800)>>11;
	dec->operand_fmtstr = PPC_FMTSTR_GPR_C_NUM_C_GPR;
	return 0;
}

/* cmplw GPR,GPR */
int cmplw_GPR_GPR(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_CMPLW;
	/* 01111100000AAAAABBBBB00001000000 */
	dec->operand_n = 2;
	dec->operand_types[0] = PPC_OPER_TYPE_GPR;
	dec->operand_values[0] = (insword & 0x1F0000)>>16;
	dec->operand_types[1] = PPC_OPER_TYPE_GPR;
	dec->operand_values[1] = (insword & 0xF800)>>11;
	dec->operand_fmtstr = PPC_FMTSTR_GPR_C_GPR;
	return 0;
}

/* lvsr VREG,NUM,GPR */
int lvsr_VREG_NUM_GPR(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_LVSR;
	/* 011111AAAAA00000CCCCC00001001100 */
	dec->operand_n = 3;
	dec->operand_types[0] = PPC_OPER_TYPE_VREG;
	dec->operand_values[0] = (insword & 0x3E00000)>>21;
	dec->operand_types[1] = PPC_OPER_TYPE_NUM;
	dec->operand_types[2] = PPC_OPER_TYPE_GPR;
	dec->operand_values[2] = (insword & 0xF800)>>11;
	dec->operand_fmtstr = PPC_FMTSTR_VREG_C_NUM_C_GPR;
	return 0;
}

/* lvehx VREG,NUM,GPR */
int lvehx_VREG_NUM_GPR(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_LVEHX;
	/* 011111AAAAA00000CCCCC00001001110 */
	dec->operand_n = 3;
	dec->operand_types[0] = PPC_OPER_TYPE_VREG;
	dec->operand_values[0] = (insword & 0x3E00000)>>21;
	dec->operand_types[1] = PPC_OPER_TYPE_NUM;
	dec->operand_types[2] = PPC_OPER_TYPE_GPR;
	dec->operand_values[2] = (insword & 0xF800)>>11;
	dec->operand_fmtstr = PPC_FMTSTR_VREG_C_NUM_C_GPR;
	return 0;
}

/* subf GPR,GPR,GPR */
int subf_GPR_GPR_GPR(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_SUBF;
	/* 011111AAAAABBBBBCCCCC00001010000 */
	dec->operand_n = 3;
	dec->operand_types[0] = PPC_OPER_TYPE_GPR;
	dec->operand_values[0] = (insword & 0x3E00000)>>21;
	dec->operand_types[1] = PPC_OPER_TYPE_GPR;
	dec->operand_values[1] = (insword & 0x1F0000)>>16;
	dec->operand_types[2] = PPC_OPER_TYPE_GPR;
	dec->operand_values[2] = (insword & 0xF800)>>11;
	dec->operand_fmtstr = PPC_FMTSTR_GPR_C_GPR_C_GPR;
	return 0;
}

/* subf. GPR,GPR,GPR */
int subfD_GPR_GPR_GPR(uint32_t insword, struct ppc_decoded *dec)
{
	dec->properties |= PPC_PROPERTY_DOTTED;
	dec->mnemonic = PPC_MNEM_SUBF;
	/* 011111AAAAABBBBBCCCCC00001010001 */
	dec->operand_n = 3;
	dec->operand_types[0] = PPC_OPER_TYPE_GPR;
	dec->operand_values[0] = (insword & 0x3E00000)>>21;
	dec->operand_types[1] = PPC_OPER_TYPE_GPR;
	dec->operand_values[1] = (insword & 0x1F0000)>>16;
	dec->operand_types[2] = PPC_OPER_TYPE_GPR;
	dec->operand_values[2] = (insword & 0xF800)>>11;
	dec->operand_fmtstr = PPC_FMTSTR_GPR_C_GPR_C_GPR;
	return 0;
}

/* mviwsplt VREG,GPR,GPR */
int mviwsplt_VREG_GPR_GPR(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_MVIWSPLT;
	/* 011111AAAAABBBBBCCCCC00001011100 */
	dec->operand_n = 3;
	dec->operand_types[0] = PPC_OPER_TYPE_VREG;
	dec->operand_values[0] = (insword & 0x3E00000)>>21;
	dec->operand_types[1] = PPC_OPER_TYPE_GPR;
	dec->operand_values[1] = (insword & 0x1F0000)>>16;
	dec->operand_types[2] = PPC_OPER_TYPE_GPR;
	dec->operand_values[2] = (insword & 0xF800)>>11;
	dec->operand_fmtstr = PPC_FMTSTR_VREG_C_GPR_C_GPR;
	return 0;
}

/* iselgt GPR,NUM,GPR */
int iselgt_GPR_NUM_GPR(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_ISELGT;
	/* 011111AAAAA00000CCCCC00001011110 */
	dec->operand_n = 3;
	dec->operand_types[0] = PPC_OPER_TYPE_GPR;
	dec->operand_values[0] = (insword & 0x3E00000)>>21;
	dec->operand_types[1] = PPC_OPER_TYPE_NUM;
	dec->operand_types[2] = PPC_OPER_TYPE_GPR;
	dec->operand_values[2] = (insword & 0xF800)>>11;
	dec->operand_fmtstr = PPC_FMTSTR_GPR_C_NUM_C_GPR;
	return 0;
}

/* mfvsrd GPR,VSREG */
int mfvsrd_GPR_VSREG(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_MFVSRD;
	/* 011111BBBBBAAAAA000000000110011B */
	dec->operand_n = 2;
	dec->operand_types[0] = PPC_OPER_TYPE_GPR;
	dec->operand_values[0] = (insword & 0x1F0000)>>16;
	dec->operand_types[1] = PPC_OPER_TYPE_VSREG;
	dec->operand_values[1] = ((insword & 0x3E00000)>>20)|((insword & 0x1)>>0);
	dec->operand_fmtstr = PPC_FMTSTR_GPR_C_VSREG;
	return 0;
}

/* lbarx GPR,NUM,GPR */
int lbarx_GPR_NUM_GPR(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_LBARX;
	/* 011111AAAAA00000CCCCC00001101000 */
	dec->operand_n = 3;
	dec->operand_types[0] = PPC_OPER_TYPE_GPR;
	dec->operand_values[0] = (insword & 0x3E00000)>>21;
	dec->operand_types[1] = PPC_OPER_TYPE_NUM;
	dec->operand_types[2] = PPC_OPER_TYPE_GPR;
	dec->operand_values[2] = (insword & 0xF800)>>11;
	dec->operand_fmtstr = PPC_FMTSTR_GPR_C_NUM_C_GPR;
	return 0;
}

/* lbarx GPR,NUM,GPR,NUM */
int lbarx_GPR_NUM_GPR_NUM(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_LBARX;
	/* 011111AAAAA00000CCCCC00001101001 */
	dec->operand_n = 4;
	dec->operand_types[0] = PPC_OPER_TYPE_GPR;
	dec->operand_values[0] = (insword & 0x3E00000)>>21;
	dec->operand_types[1] = PPC_OPER_TYPE_NUM;
	dec->operand_types[2] = PPC_OPER_TYPE_GPR;
	dec->operand_values[2] = (insword & 0xF800)>>11;
	dec->operand_types[3] = PPC_OPER_TYPE_NUM;
	dec->operand_fmtstr = PPC_FMTSTR_GPR_C_NUM_C_GPR_C_NUM;
	return 0;
}

/* dcbst NUM,GPR */
int dcbst_NUM_GPR(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_DCBST;
	/* 0111110000000000BBBBB00001101100 */
	dec->operand_n = 2;
	dec->operand_types[0] = PPC_OPER_TYPE_NUM;
	dec->operand_types[1] = PPC_OPER_TYPE_GPR;
	dec->operand_values[1] = (insword & 0xF800)>>11;
	dec->operand_fmtstr = PPC_FMTSTR_NUM_C_GPR;
	return 0;
}

/* lux GPR,GPR,GPR */
int lux_GPR_GPR_GPR(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_LUX;
	/* 011111xxxxxxxxxxCCCCC00001101110 */
	dec->operand_n = 3;
	dec->operand_types[0] = PPC_OPER_TYPE_GPR;
	dec->operand_types[1] = PPC_OPER_TYPE_GPR;
	dec->operand_types[2] = PPC_OPER_TYPE_GPR;
	dec->operand_values[2] = (insword & 0xF800)>>11;
	dec->operand_fmtstr = PPC_FMTSTR_GPR_C_GPR_C_GPR;
	return 0;
}

/* cntlzd GPR,GPR */
int cntlzd_GPR_GPR(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_CNTLZD;
	/* 011111BBBBBAAAAA0000000001110100 */
	dec->operand_n = 2;
	dec->operand_types[0] = PPC_OPER_TYPE_GPR;
	dec->operand_values[0] = (insword & 0x1F0000)>>16;
	dec->operand_types[1] = PPC_OPER_TYPE_GPR;
	dec->operand_values[1] = (insword & 0x3E00000)>>21;
	dec->operand_fmtstr = PPC_FMTSTR_GPR_C_GPR;
	return 0;
}

/* cntlzd. GPR,GPR */
int cntlzdD_GPR_GPR(uint32_t insword, struct ppc_decoded *dec)
{
	dec->properties |= PPC_PROPERTY_DOTTED;
	dec->mnemonic = PPC_MNEM_CNTLZD;
	/* 011111BBBBBAAAAA0000000001110101 */
	dec->operand_n = 2;
	dec->operand_types[0] = PPC_OPER_TYPE_GPR;
	dec->operand_values[0] = (insword & 0x1F0000)>>16;
	dec->operand_types[1] = PPC_OPER_TYPE_GPR;
	dec->operand_values[1] = (insword & 0x3E00000)>>21;
	dec->operand_fmtstr = PPC_FMTSTR_GPR_C_GPR;
	return 0;
}

/* andc GPR,GPR,GPR */
int andc_GPR_GPR_GPR(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_ANDC;
	/* 011111BBBBBAAAAACCCCC00001111000 */
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

/* andc. GPR,GPR,GPR */
int andcD_GPR_GPR_GPR(uint32_t insword, struct ppc_decoded *dec)
{
	dec->properties |= PPC_PROPERTY_DOTTED;
	dec->mnemonic = PPC_MNEM_ANDC;
	/* 011111BBBBBAAAAACCCCC00001111001 */
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

/* dcbstep NUM,GPR */
int dcbstep_NUM_GPR(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_DCBSTEP;
	/* 0111110000000000BBBBB00001111110 */
	dec->operand_n = 2;
	dec->operand_types[0] = PPC_OPER_TYPE_NUM;
	dec->operand_types[1] = PPC_OPER_TYPE_GPR;
	dec->operand_values[1] = (insword & 0xF800)>>11;
	dec->operand_fmtstr = PPC_FMTSTR_NUM_C_GPR;
	return 0;
}

/* td NUM,GPR,GPR */
int td_NUM_GPR_GPR(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_TD;
	/* 011111xAAAxBBBBBCCCCC00010001000 */
	dec->operand_n = 3;
	dec->operand_types[0] = PPC_OPER_TYPE_NUM;
	dec->operand_values[0] = (insword & 0x1C00000)>>22;
	dec->operand_types[1] = PPC_OPER_TYPE_GPR;
	dec->operand_values[1] = (insword & 0x1F0000)>>16;
	dec->operand_types[2] = PPC_OPER_TYPE_GPR;
	dec->operand_values[2] = (insword & 0xF800)>>11;
	dec->operand_fmtstr = PPC_FMTSTR_NUM_C_GPR_C_GPR;
	return 0;
}

/* lvewx VREG,NUM,GPR */
int lvewx_VREG_NUM_GPR(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_LVEWX;
	/* 011111AAAAA00000CCCCC00010001110 */
	dec->operand_n = 3;
	dec->operand_types[0] = PPC_OPER_TYPE_VREG;
	dec->operand_values[0] = (insword & 0x3E00000)>>21;
	dec->operand_types[1] = PPC_OPER_TYPE_NUM;
	dec->operand_types[2] = PPC_OPER_TYPE_GPR;
	dec->operand_values[2] = (insword & 0xF800)>>11;
	dec->operand_fmtstr = PPC_FMTSTR_VREG_C_NUM_C_GPR;
	return 0;
}

/* mulhd GPR,GPR,GPR */
int mulhd_GPR_GPR_GPR(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_MULHD;
	/* 011111AAAAABBBBBCCCCC00010010010 */
	dec->operand_n = 3;
	dec->operand_types[0] = PPC_OPER_TYPE_GPR;
	dec->operand_values[0] = (insword & 0x3E00000)>>21;
	dec->operand_types[1] = PPC_OPER_TYPE_GPR;
	dec->operand_values[1] = (insword & 0x1F0000)>>16;
	dec->operand_types[2] = PPC_OPER_TYPE_GPR;
	dec->operand_values[2] = (insword & 0xF800)>>11;
	dec->operand_fmtstr = PPC_FMTSTR_GPR_C_GPR_C_GPR;
	return 0;
}

/* mulhd. GPR,GPR,GPR */
int mulhdD_GPR_GPR_GPR(uint32_t insword, struct ppc_decoded *dec)
{
	dec->properties |= PPC_PROPERTY_DOTTED;
	dec->mnemonic = PPC_MNEM_MULHD;
	/* 011111AAAAABBBBBCCCCC00010010011 */
	dec->operand_n = 3;
	dec->operand_types[0] = PPC_OPER_TYPE_GPR;
	dec->operand_values[0] = (insword & 0x3E00000)>>21;
	dec->operand_types[1] = PPC_OPER_TYPE_GPR;
	dec->operand_values[1] = (insword & 0x1F0000)>>16;
	dec->operand_types[2] = PPC_OPER_TYPE_GPR;
	dec->operand_values[2] = (insword & 0xF800)>>11;
	dec->operand_fmtstr = PPC_FMTSTR_GPR_C_GPR_C_GPR;
	return 0;
}

/* addg6s GPR,GPR,GPR */
int addg6s_GPR_GPR_GPR(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_ADDG6S;
	/* 011111AAAAABBBBBCCCCC00010010100 */
	dec->operand_n = 3;
	dec->operand_types[0] = PPC_OPER_TYPE_GPR;
	dec->operand_values[0] = (insword & 0x3E00000)>>21;
	dec->operand_types[1] = PPC_OPER_TYPE_GPR;
	dec->operand_values[1] = (insword & 0x1F0000)>>16;
	dec->operand_types[2] = PPC_OPER_TYPE_GPR;
	dec->operand_values[2] = (insword & 0xF800)>>11;
	dec->operand_fmtstr = PPC_FMTSTR_GPR_C_GPR_C_GPR;
	return 0;
}

/* mulhw GPR,GPR,GPR */
int mulhw_GPR_GPR_GPR(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_MULHW;
	/* 011111AAAAABBBBBCCCCC00010010110 */
	dec->operand_n = 3;
	dec->operand_types[0] = PPC_OPER_TYPE_GPR;
	dec->operand_values[0] = (insword & 0x3E00000)>>21;
	dec->operand_types[1] = PPC_OPER_TYPE_GPR;
	dec->operand_values[1] = (insword & 0x1F0000)>>16;
	dec->operand_types[2] = PPC_OPER_TYPE_GPR;
	dec->operand_values[2] = (insword & 0xF800)>>11;
	dec->operand_fmtstr = PPC_FMTSTR_GPR_C_GPR_C_GPR;
	return 0;
}

/* mulhw. GPR,GPR,GPR */
int mulhwD_GPR_GPR_GPR(uint32_t insword, struct ppc_decoded *dec)
{
	dec->properties |= PPC_PROPERTY_DOTTED;
	dec->mnemonic = PPC_MNEM_MULHW;
	/* 011111AAAAABBBBBCCCCC00010010111 */
	dec->operand_n = 3;
	dec->operand_types[0] = PPC_OPER_TYPE_GPR;
	dec->operand_values[0] = (insword & 0x3E00000)>>21;
	dec->operand_types[1] = PPC_OPER_TYPE_GPR;
	dec->operand_values[1] = (insword & 0x1F0000)>>16;
	dec->operand_types[2] = PPC_OPER_TYPE_GPR;
	dec->operand_values[2] = (insword & 0xF800)>>11;
	dec->operand_fmtstr = PPC_FMTSTR_GPR_C_GPR_C_GPR;
	return 0;
}

/* lxsiwax VSREG,NUM,GPR */
int lxsiwax_VSREG_NUM_GPR(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_LXSIWAX;
	/* 011111AAAAA00000CCCCC0001001100A */
	dec->operand_n = 3;
	dec->operand_types[0] = PPC_OPER_TYPE_VSREG;
	dec->operand_values[0] = ((insword & 0x3E00000)>>20)|((insword & 0x1)>>0);
	dec->operand_types[1] = PPC_OPER_TYPE_NUM;
	dec->operand_types[2] = PPC_OPER_TYPE_GPR;
	dec->operand_values[2] = (insword & 0xF800)>>11;
	dec->operand_fmtstr = PPC_FMTSTR_VSREG_C_NUM_C_GPR;
	return 0;
}

/* dlmzb GPR,GPR,GPR */
int dlmzb_GPR_GPR_GPR(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_DLMZB;
	/* 011111BBBBBAAAAACCCCC00010011100 */
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

/* dlmzb. GPR,GPR,GPR */
int dlmzbD_GPR_GPR_GPR(uint32_t insword, struct ppc_decoded *dec)
{
	dec->properties |= PPC_PROPERTY_DOTTED;
	dec->mnemonic = PPC_MNEM_DLMZB;
	/* 011111BBBBBAAAAACCCCC00010011101 */
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

/* iseleq GPR,NUM,GPR */
int iseleq_GPR_NUM_GPR(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_ISELEQ;
	/* 011111AAAAA00000CCCCC00010011110 */
	dec->operand_n = 3;
	dec->operand_types[0] = PPC_OPER_TYPE_GPR;
	dec->operand_values[0] = (insword & 0x3E00000)>>21;
	dec->operand_types[1] = PPC_OPER_TYPE_NUM;
	dec->operand_types[2] = PPC_OPER_TYPE_GPR;
	dec->operand_values[2] = (insword & 0xF800)>>11;
	dec->operand_fmtstr = PPC_FMTSTR_GPR_C_NUM_C_GPR;
	return 0;
}

/* mtsrd NUM,GPR */
int mtsrd_NUM_GPR(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_MTSRD;
	/* 011111BBBBB0AAAA0000000010100100 */
	dec->operand_n = 2;
	dec->operand_types[0] = PPC_OPER_TYPE_NUM;
	dec->operand_values[0] = (insword & 0xF0000)>>16;
	dec->operand_types[1] = PPC_OPER_TYPE_GPR;
	dec->operand_values[1] = (insword & 0x3E00000)>>21;
	dec->operand_fmtstr = PPC_FMTSTR_NUM_C_GPR;
	return 0;
}

/* mfmsr GPR */
int mfmsr_GPR(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_MFMSR;
	/* 011111AAAAA000000000000010100110 */
	dec->operand_n = 1;
	dec->operand_types[0] = PPC_OPER_TYPE_GPR;
	dec->operand_values[0] = (insword & 0x3E00000)>>21;
	dec->operand_fmtstr = PPC_FMTSTR_GPR;
	return 0;
}

/* ldarx GPR,NUM,GPR */
int ldarx_GPR_NUM_GPR(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_LDARX;
	/* 011111AAAAA00000CCCCC00010101000 */
	dec->operand_n = 3;
	dec->operand_types[0] = PPC_OPER_TYPE_GPR;
	dec->operand_values[0] = (insword & 0x3E00000)>>21;
	dec->operand_types[1] = PPC_OPER_TYPE_NUM;
	dec->operand_types[2] = PPC_OPER_TYPE_GPR;
	dec->operand_values[2] = (insword & 0xF800)>>11;
	dec->operand_fmtstr = PPC_FMTSTR_GPR_C_NUM_C_GPR;
	return 0;
}

/* ldarx GPR,NUM,GPR,NUM */
int ldarx_GPR_NUM_GPR_NUM(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_LDARX;
	/* 011111AAAAA00000CCCCC00010101001 */
	dec->operand_n = 4;
	dec->operand_types[0] = PPC_OPER_TYPE_GPR;
	dec->operand_values[0] = (insword & 0x3E00000)>>21;
	dec->operand_types[1] = PPC_OPER_TYPE_NUM;
	dec->operand_types[2] = PPC_OPER_TYPE_GPR;
	dec->operand_values[2] = (insword & 0xF800)>>11;
	dec->operand_types[3] = PPC_OPER_TYPE_NUM;
	dec->operand_fmtstr = PPC_FMTSTR_GPR_C_NUM_C_GPR_C_NUM;
	return 0;
}

/* dcbf NUM,GPR */
int dcbf_NUM_GPR(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_DCBF;
	/* 0111110000000000BBBBB00010101100 */
	dec->operand_n = 2;
	dec->operand_types[0] = PPC_OPER_TYPE_NUM;
	dec->operand_types[1] = PPC_OPER_TYPE_GPR;
	dec->operand_values[1] = (insword & 0xF800)>>11;
	dec->operand_fmtstr = PPC_FMTSTR_NUM_C_GPR;
	return 0;
}

/* lbzx GPR,NUM,GPR */
int lbzx_GPR_NUM_GPR(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_LBZX;
	/* 011111AAAAA00000CCCCC00010101110 */
	dec->operand_n = 3;
	dec->operand_types[0] = PPC_OPER_TYPE_GPR;
	dec->operand_values[0] = (insword & 0x3E00000)>>21;
	dec->operand_types[1] = PPC_OPER_TYPE_NUM;
	dec->operand_types[2] = PPC_OPER_TYPE_GPR;
	dec->operand_values[2] = (insword & 0xF800)>>11;
	dec->operand_fmtstr = PPC_FMTSTR_GPR_C_NUM_C_GPR;
	return 0;
}

/* lbepx GPR,NUM,GPR */
int lbepx_GPR_NUM_GPR(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_LBEPX;
	/* 011111AAAAA00000CCCCC00010111110 */
	dec->operand_n = 3;
	dec->operand_types[0] = PPC_OPER_TYPE_GPR;
	dec->operand_values[0] = (insword & 0x3E00000)>>21;
	dec->operand_types[1] = PPC_OPER_TYPE_NUM;
	dec->operand_types[2] = PPC_OPER_TYPE_GPR;
	dec->operand_values[2] = (insword & 0xF800)>>11;
	dec->operand_fmtstr = PPC_FMTSTR_GPR_C_NUM_C_GPR;
	return 0;
}

/* dni NUM,NUM */
int dni_NUM_NUM(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_DNI;
	/* 011111AAAAABBBBB0000000011000011 */
	dec->operand_n = 2;
	dec->operand_types[0] = PPC_OPER_TYPE_NUM;
	dec->operand_values[0] = (insword & 0x3E00000)>>21;
	dec->operand_types[1] = PPC_OPER_TYPE_NUM;
	dec->operand_values[1] = (insword & 0x1F0000)>>16;
	dec->operand_fmtstr = PPC_FMTSTR_NUM_C_NUM;
	return 0;
}

/* lvx VREG,NUM,GPR */
int lvx_VREG_NUM_GPR(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_LVX;
	/* 011111AAAAA00000CCCCC00011001110 */
	dec->operand_n = 3;
	dec->operand_types[0] = PPC_OPER_TYPE_VREG;
	dec->operand_values[0] = (insword & 0x3E00000)>>21;
	dec->operand_types[1] = PPC_OPER_TYPE_NUM;
	dec->operand_types[2] = PPC_OPER_TYPE_GPR;
	dec->operand_values[2] = (insword & 0xF800)>>11;
	dec->operand_fmtstr = PPC_FMTSTR_VREG_C_NUM_C_GPR;
	return 0;
}

/* neg GPR,GPR */
int neg_GPR_GPR(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_NEG;
	/* 011111AAAAABBBBB0000000011010000 */
	dec->operand_n = 2;
	dec->operand_types[0] = PPC_OPER_TYPE_GPR;
	dec->operand_values[0] = (insword & 0x3E00000)>>21;
	dec->operand_types[1] = PPC_OPER_TYPE_GPR;
	dec->operand_values[1] = (insword & 0x1F0000)>>16;
	dec->operand_fmtstr = PPC_FMTSTR_GPR_C_GPR;
	return 0;
}

/* neg. GPR,GPR */
int negD_GPR_GPR(uint32_t insword, struct ppc_decoded *dec)
{
	dec->properties |= PPC_PROPERTY_DOTTED;
	dec->mnemonic = PPC_MNEM_NEG;
	/* 011111AAAAABBBBB0000000011010001 */
	dec->operand_n = 2;
	dec->operand_types[0] = PPC_OPER_TYPE_GPR;
	dec->operand_values[0] = (insword & 0x3E00000)>>21;
	dec->operand_types[1] = PPC_OPER_TYPE_GPR;
	dec->operand_values[1] = (insword & 0x1F0000)>>16;
	dec->operand_fmtstr = PPC_FMTSTR_GPR_C_GPR;
	return 0;
}

/* mul GPR,GPR,GPR */
int mul_GPR_GPR_GPR(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_MUL;
	/* 011111AAAAABBBBBCCCCC00011010110 */
	dec->operand_n = 3;
	dec->operand_types[0] = PPC_OPER_TYPE_GPR;
	dec->operand_values[0] = (insword & 0x3E00000)>>21;
	dec->operand_types[1] = PPC_OPER_TYPE_GPR;
	dec->operand_values[1] = (insword & 0x1F0000)>>16;
	dec->operand_types[2] = PPC_OPER_TYPE_GPR;
	dec->operand_values[2] = (insword & 0xF800)>>11;
	dec->operand_fmtstr = PPC_FMTSTR_GPR_C_GPR_C_GPR;
	return 0;
}

/* mul. GPR,GPR,GPR */
int mulD_GPR_GPR_GPR(uint32_t insword, struct ppc_decoded *dec)
{
	dec->properties |= PPC_PROPERTY_DOTTED;
	dec->mnemonic = PPC_MNEM_MUL;
	/* 011111AAAAABBBBBCCCCC00011010111 */
	dec->operand_n = 3;
	dec->operand_types[0] = PPC_OPER_TYPE_GPR;
	dec->operand_values[0] = (insword & 0x3E00000)>>21;
	dec->operand_types[1] = PPC_OPER_TYPE_GPR;
	dec->operand_values[1] = (insword & 0x1F0000)>>16;
	dec->operand_types[2] = PPC_OPER_TYPE_GPR;
	dec->operand_values[2] = (insword & 0xF800)>>11;
	dec->operand_fmtstr = PPC_FMTSTR_GPR_C_GPR_C_GPR;
	return 0;
}

/* mvidsplt VREG,GPR,GPR */
int mvidsplt_VREG_GPR_GPR(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_MVIDSPLT;
	/* 011111AAAAABBBBBCCCCC00011011100 */
	dec->operand_n = 3;
	dec->operand_types[0] = PPC_OPER_TYPE_VREG;
	dec->operand_values[0] = (insword & 0x3E00000)>>21;
	dec->operand_types[1] = PPC_OPER_TYPE_GPR;
	dec->operand_values[1] = (insword & 0x1F0000)>>16;
	dec->operand_types[2] = PPC_OPER_TYPE_GPR;
	dec->operand_values[2] = (insword & 0xF800)>>11;
	dec->operand_fmtstr = PPC_FMTSTR_VREG_C_GPR_C_GPR;
	return 0;
}

/* mtsrdin GPR,GPR */
int mtsrdin_GPR_GPR(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_MTSRDIN;
	/* 011111AAAAA00000BBBBB00011100100 */
	dec->operand_n = 2;
	dec->operand_types[0] = PPC_OPER_TYPE_GPR;
	dec->operand_values[0] = (insword & 0x3E00000)>>21;
	dec->operand_types[1] = PPC_OPER_TYPE_GPR;
	dec->operand_values[1] = (insword & 0xF800)>>11;
	dec->operand_fmtstr = PPC_FMTSTR_GPR_C_GPR;
	return 0;
}

/* mffprwz GPR,FREG */
int mffprwz_GPR_FREG(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_MFFPRWZ;
	/* 011111BBBBBAAAAA0000000011100110 */
	dec->operand_n = 2;
	dec->operand_types[0] = PPC_OPER_TYPE_GPR;
	dec->operand_values[0] = (insword & 0x1F0000)>>16;
	dec->operand_types[1] = PPC_OPER_TYPE_FREG;
	dec->operand_values[1] = (insword & 0x3E00000)>>21;
	dec->operand_fmtstr = PPC_FMTSTR_GPR_C_FREG;
	return 0;
}

/* mfvrwz GPR,VREG */
int mfvrwz_GPR_VREG(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_MFVRWZ;
	/* 011111BBBBBAAAAA0000000011100111 */
	dec->operand_n = 2;
	dec->operand_types[0] = PPC_OPER_TYPE_GPR;
	dec->operand_values[0] = (insword & 0x1F0000)>>16;
	dec->operand_types[1] = PPC_OPER_TYPE_VREG;
	dec->operand_values[1] = (insword & 0x3E00000)>>21;
	dec->operand_fmtstr = PPC_FMTSTR_GPR_C_VREG;
	return 0;
}

/* lharx GPR,NUM,GPR */
int lharx_GPR_NUM_GPR(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_LHARX;
	/* 011111AAAAA00000CCCCC00011101000 */
	dec->operand_n = 3;
	dec->operand_types[0] = PPC_OPER_TYPE_GPR;
	dec->operand_values[0] = (insword & 0x3E00000)>>21;
	dec->operand_types[1] = PPC_OPER_TYPE_NUM;
	dec->operand_types[2] = PPC_OPER_TYPE_GPR;
	dec->operand_values[2] = (insword & 0xF800)>>11;
	dec->operand_fmtstr = PPC_FMTSTR_GPR_C_NUM_C_GPR;
	return 0;
}

/* lharx GPR,NUM,GPR,NUM */
int lharx_GPR_NUM_GPR_NUM(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_LHARX;
	/* 011111AAAAA00000CCCCC00011101001 */
	dec->operand_n = 4;
	dec->operand_types[0] = PPC_OPER_TYPE_GPR;
	dec->operand_values[0] = (insword & 0x3E00000)>>21;
	dec->operand_types[1] = PPC_OPER_TYPE_NUM;
	dec->operand_types[2] = PPC_OPER_TYPE_GPR;
	dec->operand_values[2] = (insword & 0xF800)>>11;
	dec->operand_types[3] = PPC_OPER_TYPE_NUM;
	dec->operand_fmtstr = PPC_FMTSTR_GPR_C_NUM_C_GPR_C_NUM;
	return 0;
}

/* clf GPR,GPR */
int clf_GPR_GPR(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_CLF;
	/* 01111100000AAAAABBBBB00011101100 */
	dec->operand_n = 2;
	dec->operand_types[0] = PPC_OPER_TYPE_GPR;
	dec->operand_values[0] = (insword & 0x1F0000)>>16;
	dec->operand_types[1] = PPC_OPER_TYPE_GPR;
	dec->operand_values[1] = (insword & 0xF800)>>11;
	dec->operand_fmtstr = PPC_FMTSTR_GPR_C_GPR;
	return 0;
}

/* popcntb GPR,GPR */
int popcntb_GPR_GPR(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_POPCNTB;
	/* 011111BBBBBAAAAA0000000011110100 */
	dec->operand_n = 2;
	dec->operand_types[0] = PPC_OPER_TYPE_GPR;
	dec->operand_values[0] = (insword & 0x1F0000)>>16;
	dec->operand_types[1] = PPC_OPER_TYPE_GPR;
	dec->operand_values[1] = (insword & 0x3E00000)>>21;
	dec->operand_fmtstr = PPC_FMTSTR_GPR_C_GPR;
	return 0;
}

/* not GPR,GPR */
int not_GPR_GPR(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_NOT;
	/* 011111xxxxxAAAAAxxxxx00011111000 */
	dec->operand_n = 2;
	dec->operand_types[0] = PPC_OPER_TYPE_GPR;
	dec->operand_values[0] = (insword & 0x1F0000)>>16;
	dec->operand_types[1] = PPC_OPER_TYPE_GPR;
	dec->operand_fmtstr = PPC_FMTSTR_GPR_C_GPR;
	return 0;
}

/* not. GPR,GPR */
int notD_GPR_GPR(uint32_t insword, struct ppc_decoded *dec)
{
	dec->properties |= PPC_PROPERTY_DOTTED;
	dec->mnemonic = PPC_MNEM_NOT;
	/* 011111xxxxxAAAAAxxxxx00011111001 */
	dec->operand_n = 2;
	dec->operand_types[0] = PPC_OPER_TYPE_GPR;
	dec->operand_values[0] = (insword & 0x1F0000)>>16;
	dec->operand_types[1] = PPC_OPER_TYPE_GPR;
	dec->operand_fmtstr = PPC_FMTSTR_GPR_C_GPR;
	return 0;
}

/* dcbfep NUM,GPR */
int dcbfep_NUM_GPR(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_DCBFEP;
	/* 0111110000000000BBBBB00011111110 */
	dec->operand_n = 2;
	dec->operand_types[0] = PPC_OPER_TYPE_NUM;
	dec->operand_types[1] = PPC_OPER_TYPE_GPR;
	dec->operand_values[1] = (insword & 0xF800)>>11;
	dec->operand_fmtstr = PPC_FMTSTR_NUM_C_GPR;
	return 0;
}

/* setb GPR,CREG */
int setb_GPR_CREG(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_SETB;
	/* 011111AAAAABBB000000000100000000 */
	dec->operand_n = 2;
	dec->operand_types[0] = PPC_OPER_TYPE_GPR;
	dec->operand_values[0] = (insword & 0x3E00000)>>21;
	dec->operand_types[1] = PPC_OPER_TYPE_CREG;
	dec->operand_values[1] = (insword & 0x1C0000)>>18;
	dec->operand_fmtstr = PPC_FMTSTR_GPR_C_CREG;
	return 0;
}

/* wrtee GPR */
int wrtee_GPR(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_WRTEE;
	/* 011111AAAAA000000000000100000110 */
	dec->operand_n = 1;
	dec->operand_types[0] = PPC_OPER_TYPE_GPR;
	dec->operand_values[0] = (insword & 0x3E00000)>>21;
	dec->operand_fmtstr = PPC_FMTSTR_GPR;
	return 0;
}

/* dcbtstls NUM,GPR */
int dcbtstls_NUM_GPR(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_DCBTSTLS;
	/* 0111110000000000BBBBB00100001100 */
	dec->operand_n = 2;
	dec->operand_types[0] = PPC_OPER_TYPE_NUM;
	dec->operand_types[1] = PPC_OPER_TYPE_GPR;
	dec->operand_values[1] = (insword & 0xF800)>>11;
	dec->operand_fmtstr = PPC_FMTSTR_NUM_C_GPR;
	return 0;
}

/* stvebx VREG,NUM,GPR */
int stvebx_VREG_NUM_GPR(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_STVEBX;
	/* 011111AAAAA00000CCCCC00100001110 */
	dec->operand_n = 3;
	dec->operand_types[0] = PPC_OPER_TYPE_VREG;
	dec->operand_values[0] = (insword & 0x3E00000)>>21;
	dec->operand_types[1] = PPC_OPER_TYPE_NUM;
	dec->operand_types[2] = PPC_OPER_TYPE_GPR;
	dec->operand_values[2] = (insword & 0xF800)>>11;
	dec->operand_fmtstr = PPC_FMTSTR_VREG_C_NUM_C_GPR;
	return 0;
}

/* subfe GPR,GPR,GPR */
int subfe_GPR_GPR_GPR(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_SUBFE;
	/* 011111AAAAABBBBBCCCCC00100010000 */
	dec->operand_n = 3;
	dec->operand_types[0] = PPC_OPER_TYPE_GPR;
	dec->operand_values[0] = (insword & 0x3E00000)>>21;
	dec->operand_types[1] = PPC_OPER_TYPE_GPR;
	dec->operand_values[1] = (insword & 0x1F0000)>>16;
	dec->operand_types[2] = PPC_OPER_TYPE_GPR;
	dec->operand_values[2] = (insword & 0xF800)>>11;
	dec->operand_fmtstr = PPC_FMTSTR_GPR_C_GPR_C_GPR;
	return 0;
}

/* subfe. GPR,GPR,GPR */
int subfeD_GPR_GPR_GPR(uint32_t insword, struct ppc_decoded *dec)
{
	dec->properties |= PPC_PROPERTY_DOTTED;
	dec->mnemonic = PPC_MNEM_SUBFE;
	/* 011111AAAAABBBBBCCCCC00100010001 */
	dec->operand_n = 3;
	dec->operand_types[0] = PPC_OPER_TYPE_GPR;
	dec->operand_values[0] = (insword & 0x3E00000)>>21;
	dec->operand_types[1] = PPC_OPER_TYPE_GPR;
	dec->operand_values[1] = (insword & 0x1F0000)>>16;
	dec->operand_types[2] = PPC_OPER_TYPE_GPR;
	dec->operand_values[2] = (insword & 0xF800)>>11;
	dec->operand_fmtstr = PPC_FMTSTR_GPR_C_GPR_C_GPR;
	return 0;
}

/* adde GPR,GPR,GPR */
int adde_GPR_GPR_GPR(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_ADDE;
	/* 011111AAAAABBBBBCCCCC00100010100 */
	dec->operand_n = 3;
	dec->operand_types[0] = PPC_OPER_TYPE_GPR;
	dec->operand_values[0] = (insword & 0x3E00000)>>21;
	dec->operand_types[1] = PPC_OPER_TYPE_GPR;
	dec->operand_values[1] = (insword & 0x1F0000)>>16;
	dec->operand_types[2] = PPC_OPER_TYPE_GPR;
	dec->operand_values[2] = (insword & 0xF800)>>11;
	dec->operand_fmtstr = PPC_FMTSTR_GPR_C_GPR_C_GPR;
	return 0;
}

/* adde. GPR,GPR,GPR */
int addeD_GPR_GPR_GPR(uint32_t insword, struct ppc_decoded *dec)
{
	dec->properties |= PPC_PROPERTY_DOTTED;
	dec->mnemonic = PPC_MNEM_ADDE;
	/* 011111AAAAABBBBBCCCCC00100010101 */
	dec->operand_n = 3;
	dec->operand_types[0] = PPC_OPER_TYPE_GPR;
	dec->operand_values[0] = (insword & 0x3E00000)>>21;
	dec->operand_types[1] = PPC_OPER_TYPE_GPR;
	dec->operand_values[1] = (insword & 0x1F0000)>>16;
	dec->operand_types[2] = PPC_OPER_TYPE_GPR;
	dec->operand_values[2] = (insword & 0xF800)>>11;
	dec->operand_fmtstr = PPC_FMTSTR_GPR_C_GPR_C_GPR;
	return 0;
}

/* stxsiwx VSREG,NUM,GPR */
int stxsiwx_VSREG_NUM_GPR(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_STXSIWX;
	/* 011111AAAAA00000CCCCC0010001100A */
	dec->operand_n = 3;
	dec->operand_types[0] = PPC_OPER_TYPE_VSREG;
	dec->operand_values[0] = ((insword & 0x3E00000)>>20)|((insword & 0x1)>>0);
	dec->operand_types[1] = PPC_OPER_TYPE_NUM;
	dec->operand_types[2] = PPC_OPER_TYPE_GPR;
	dec->operand_values[2] = (insword & 0xF800)>>11;
	dec->operand_fmtstr = PPC_FMTSTR_VSREG_C_NUM_C_GPR;
	return 0;
}

/* msgsndp GPR */
int msgsndp_GPR(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_MSGSNDP;
	/* 0111110000000000AAAAA00100011100 */
	dec->operand_n = 1;
	dec->operand_types[0] = PPC_OPER_TYPE_GPR;
	dec->operand_values[0] = (insword & 0xF800)>>11;
	dec->operand_fmtstr = PPC_FMTSTR_GPR;
	return 0;
}

/* mtcrf NUM,GPR */
int mtcrf_NUM_GPR(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_MTCRF;
	/* 011111BBBBB0AAAxAAAA000100100000 */
	dec->operand_n = 2;
	dec->operand_types[0] = PPC_OPER_TYPE_NUM;
	dec->operand_values[0] = ((insword & 0xE0000)>>13)|((insword & 0xF000)>>12);
	dec->operand_types[1] = PPC_OPER_TYPE_GPR;
	dec->operand_values[1] = (insword & 0x3E00000)>>21;
	dec->operand_fmtstr = PPC_FMTSTR_NUM_C_GPR;
	return 0;
}

/* mtmsr GPR */
int mtmsr_GPR(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_MTMSR;
	/* 011111AAAAA000000000000100100100 */
	dec->operand_n = 1;
	dec->operand_types[0] = PPC_OPER_TYPE_GPR;
	dec->operand_values[0] = (insword & 0x3E00000)>>21;
	dec->operand_fmtstr = PPC_FMTSTR_GPR;
	return 0;
}

/* mtsle NUM */
int mtsle_NUM(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_MTSLE;
	/* 0111110000A000000000000100100110 */
	dec->operand_n = 1;
	dec->operand_types[0] = PPC_OPER_TYPE_NUM;
	dec->operand_values[0] = (insword & 0x200000)>>21;
	dec->operand_fmtstr = PPC_FMTSTR_NUM;
	return 0;
}

/* eratsx. GPR,NUM,GPR */
int eratsxD_GPR_NUM_GPR(uint32_t insword, struct ppc_decoded *dec)
{
	dec->properties |= PPC_PROPERTY_DOTTED;
	dec->mnemonic = PPC_MNEM_ERATSX;
	/* 011111AAAAA00000CCCCC00100100111 */
	dec->operand_n = 3;
	dec->operand_types[0] = PPC_OPER_TYPE_GPR;
	dec->operand_values[0] = (insword & 0x3E00000)>>21;
	dec->operand_types[1] = PPC_OPER_TYPE_NUM;
	dec->operand_types[2] = PPC_OPER_TYPE_GPR;
	dec->operand_values[2] = (insword & 0xF800)>>11;
	dec->operand_fmtstr = PPC_FMTSTR_GPR_C_NUM_C_GPR;
	return 0;
}

/* stdx GPR,NUM,GPR */
int stdx_GPR_NUM_GPR(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_STDX;
	/* 011111AAAAA00000CCCCC00100101010 */
	dec->operand_n = 3;
	dec->operand_types[0] = PPC_OPER_TYPE_GPR;
	dec->operand_values[0] = (insword & 0x3E00000)>>21;
	dec->operand_types[1] = PPC_OPER_TYPE_NUM;
	dec->operand_types[2] = PPC_OPER_TYPE_GPR;
	dec->operand_values[2] = (insword & 0xF800)>>11;
	dec->operand_fmtstr = PPC_FMTSTR_GPR_C_NUM_C_GPR;
	return 0;
}

/* stwcx. GPR,NUM,GPR */
int stwcxD_GPR_NUM_GPR(uint32_t insword, struct ppc_decoded *dec)
{
	dec->properties |= PPC_PROPERTY_DOTTED;
	dec->mnemonic = PPC_MNEM_STWCX;
	/* 011111AAAAA00000CCCCC00100101101 */
	dec->operand_n = 3;
	dec->operand_types[0] = PPC_OPER_TYPE_GPR;
	dec->operand_values[0] = (insword & 0x3E00000)>>21;
	dec->operand_types[1] = PPC_OPER_TYPE_NUM;
	dec->operand_types[2] = PPC_OPER_TYPE_GPR;
	dec->operand_values[2] = (insword & 0xF800)>>11;
	dec->operand_fmtstr = PPC_FMTSTR_GPR_C_NUM_C_GPR;
	return 0;
}

/* stwx GPR,NUM,GPR */
int stwx_GPR_NUM_GPR(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_STWX;
	/* 011111AAAAA00000CCCCC00100101110 */
	dec->operand_n = 3;
	dec->operand_types[0] = PPC_OPER_TYPE_GPR;
	dec->operand_values[0] = (insword & 0x3E00000)>>21;
	dec->operand_types[1] = PPC_OPER_TYPE_NUM;
	dec->operand_types[2] = PPC_OPER_TYPE_GPR;
	dec->operand_values[2] = (insword & 0xF800)>>11;
	dec->operand_fmtstr = PPC_FMTSTR_GPR_C_NUM_C_GPR;
	return 0;
}

/* slq GPR,GPR,GPR */
int slq_GPR_GPR_GPR(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_SLQ;
	/* 011111BBBBBAAAAACCCCC00100110000 */
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

/* slq. GPR,GPR,GPR */
int slqD_GPR_GPR_GPR(uint32_t insword, struct ppc_decoded *dec)
{
	dec->properties |= PPC_PROPERTY_DOTTED;
	dec->mnemonic = PPC_MNEM_SLQ;
	/* 011111BBBBBAAAAACCCCC00100110001 */
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

/* sle GPR,GPR,GPR */
int sle_GPR_GPR_GPR(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_SLE;
	/* 011111BBBBBAAAAACCCCC00100110010 */
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

/* sle. GPR,GPR,GPR */
int sleD_GPR_GPR_GPR(uint32_t insword, struct ppc_decoded *dec)
{
	dec->properties |= PPC_PROPERTY_DOTTED;
	dec->mnemonic = PPC_MNEM_SLE;
	/* 011111BBBBBAAAAACCCCC00100110011 */
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

/* prtyw GPR,GPR */
int prtyw_GPR_GPR(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_PRTYW;
	/* 011111BBBBBAAAAA0000000100110100 */
	dec->operand_n = 2;
	dec->operand_types[0] = PPC_OPER_TYPE_GPR;
	dec->operand_values[0] = (insword & 0x1F0000)>>16;
	dec->operand_types[1] = PPC_OPER_TYPE_GPR;
	dec->operand_values[1] = (insword & 0x3E00000)>>21;
	dec->operand_fmtstr = PPC_FMTSTR_GPR_C_GPR;
	return 0;
}

/* stdepx GPR,NUM,GPR */
int stdepx_GPR_NUM_GPR(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_STDEPX;
	/* 011111AAAAA00000CCCCC00100111010 */
	dec->operand_n = 3;
	dec->operand_types[0] = PPC_OPER_TYPE_GPR;
	dec->operand_values[0] = (insword & 0x3E00000)>>21;
	dec->operand_types[1] = PPC_OPER_TYPE_NUM;
	dec->operand_types[2] = PPC_OPER_TYPE_GPR;
	dec->operand_values[2] = (insword & 0xF800)>>11;
	dec->operand_fmtstr = PPC_FMTSTR_GPR_C_NUM_C_GPR;
	return 0;
}

/* stwepx GPR,NUM,GPR */
int stwepx_GPR_NUM_GPR(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_STWEPX;
	/* 011111AAAAA00000CCCCC00100111110 */
	dec->operand_n = 3;
	dec->operand_types[0] = PPC_OPER_TYPE_GPR;
	dec->operand_values[0] = (insword & 0x3E00000)>>21;
	dec->operand_types[1] = PPC_OPER_TYPE_NUM;
	dec->operand_types[2] = PPC_OPER_TYPE_GPR;
	dec->operand_values[2] = (insword & 0xF800)>>11;
	dec->operand_fmtstr = PPC_FMTSTR_GPR_C_NUM_C_GPR;
	return 0;
}

/* wrteei NUM */
int wrteei_NUM(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_WRTEEI;
	/* 0111110000000000A000000101000110 */
	dec->operand_n = 1;
	dec->operand_types[0] = PPC_OPER_TYPE_NUM;
	dec->operand_values[0] = (insword & 0x8000)>>15;
	dec->operand_fmtstr = PPC_FMTSTR_NUM;
	return 0;
}

/* dcbtls NUM,GPR */
int dcbtls_NUM_GPR(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_DCBTLS;
	/* 0111110000000000BBBBB00101001100 */
	dec->operand_n = 2;
	dec->operand_types[0] = PPC_OPER_TYPE_NUM;
	dec->operand_types[1] = PPC_OPER_TYPE_GPR;
	dec->operand_values[1] = (insword & 0xF800)>>11;
	dec->operand_fmtstr = PPC_FMTSTR_NUM_C_GPR;
	return 0;
}

/* stvehx VREG,NUM,GPR */
int stvehx_VREG_NUM_GPR(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_STVEHX;
	/* 011111AAAAA00000CCCCC00101001110 */
	dec->operand_n = 3;
	dec->operand_types[0] = PPC_OPER_TYPE_VREG;
	dec->operand_values[0] = (insword & 0x3E00000)>>21;
	dec->operand_types[1] = PPC_OPER_TYPE_NUM;
	dec->operand_types[2] = PPC_OPER_TYPE_GPR;
	dec->operand_values[2] = (insword & 0xF800)>>11;
	dec->operand_fmtstr = PPC_FMTSTR_VREG_C_NUM_C_GPR;
	return 0;
}

/* addex GPR,GPR,GPR,NUM */
int addex_GPR_GPR_GPR_NUM(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_ADDEX;
	/* 011111AAAAABBBBBCCCCCDD101010100 */
	dec->operand_n = 4;
	dec->operand_types[0] = PPC_OPER_TYPE_GPR;
	dec->operand_values[0] = (insword & 0x3E00000)>>21;
	dec->operand_types[1] = PPC_OPER_TYPE_GPR;
	dec->operand_values[1] = (insword & 0x1F0000)>>16;
	dec->operand_types[2] = PPC_OPER_TYPE_GPR;
	dec->operand_values[2] = (insword & 0xF800)>>11;
	dec->operand_types[3] = PPC_OPER_TYPE_NUM;
	dec->operand_values[3] = (insword & 0x600)>>9;
	dec->operand_fmtstr = PPC_FMTSTR_GPR_C_GPR_C_GPR_C_NUM;
	return 0;
}

/* msgclrp GPR */
int msgclrp_GPR(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_MSGCLRP;
	/* 0111110000000000AAAAA00101011100 */
	dec->operand_n = 1;
	dec->operand_types[0] = PPC_OPER_TYPE_GPR;
	dec->operand_values[0] = (insword & 0xF800)>>11;
	dec->operand_fmtstr = PPC_FMTSTR_GPR;
	return 0;
}

/* mtmsrd GPR */
int mtmsrd_GPR(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_MTMSRD;
	/* 011111AAAAA000000000000101100100 */
	dec->operand_n = 1;
	dec->operand_types[0] = PPC_OPER_TYPE_GPR;
	dec->operand_values[0] = (insword & 0x3E00000)>>21;
	dec->operand_fmtstr = PPC_FMTSTR_GPR;
	return 0;
}

/* mtvsrd VSREG,GPR */
int mtvsrd_VSREG_GPR(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_MTVSRD;
	/* 011111AAAAABBBBB000000010110011A */
	dec->operand_n = 2;
	dec->operand_types[0] = PPC_OPER_TYPE_VSREG;
	dec->operand_values[0] = ((insword & 0x3E00000)>>20)|((insword & 0x1)>>0);
	dec->operand_types[1] = PPC_OPER_TYPE_GPR;
	dec->operand_values[1] = (insword & 0x1F0000)>>16;
	dec->operand_fmtstr = PPC_FMTSTR_VSREG_C_GPR;
	return 0;
}

/* wchkall */
int wchkall(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_WCHKALL;
	return 0;
}

/* stqcx. GPR,NUM,GPR */
int stqcxD_GPR_NUM_GPR(uint32_t insword, struct ppc_decoded *dec)
{
	dec->properties |= PPC_PROPERTY_DOTTED;
	dec->mnemonic = PPC_MNEM_STQCX;
	/* 011111AAAA000000CCCCC00101101101 */
	dec->operand_n = 3;
	dec->operand_types[0] = PPC_OPER_TYPE_GPR;
	dec->operand_values[0] = (insword & 0x3C00000)>>22;
	dec->operand_types[1] = PPC_OPER_TYPE_NUM;
	dec->operand_types[2] = PPC_OPER_TYPE_GPR;
	dec->operand_values[2] = (insword & 0xF800)>>11;
	dec->operand_fmtstr = PPC_FMTSTR_GPR_C_NUM_C_GPR;
	return 0;
}

/* stux GPR,NUM,GPR */
int stux_GPR_NUM_GPR(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_STUX;
	/* 011111AAAAA00000CCCCC00101101110 */
	dec->operand_n = 3;
	dec->operand_types[0] = PPC_OPER_TYPE_GPR;
	dec->operand_values[0] = (insword & 0x3E00000)>>21;
	dec->operand_types[1] = PPC_OPER_TYPE_NUM;
	dec->operand_types[2] = PPC_OPER_TYPE_GPR;
	dec->operand_values[2] = (insword & 0xF800)>>11;
	dec->operand_fmtstr = PPC_FMTSTR_GPR_C_NUM_C_GPR;
	return 0;
}

/* sliq GPR,GPR,NUM */
int sliq_GPR_GPR_NUM(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_SLIQ;
	/* 011111BBBBBAAAAACCCCC00101110000 */
	dec->operand_n = 3;
	dec->operand_types[0] = PPC_OPER_TYPE_GPR;
	dec->operand_values[0] = (insword & 0x1F0000)>>16;
	dec->operand_types[1] = PPC_OPER_TYPE_GPR;
	dec->operand_values[1] = (insword & 0x3E00000)>>21;
	dec->operand_types[2] = PPC_OPER_TYPE_NUM;
	dec->operand_values[2] = (insword & 0xF800)>>11;
	dec->operand_fmtstr = PPC_FMTSTR_GPR_C_GPR_C_NUM;
	return 0;
}

/* sliq. GPR,GPR,NUM */
int sliqD_GPR_GPR_NUM(uint32_t insword, struct ppc_decoded *dec)
{
	dec->properties |= PPC_PROPERTY_DOTTED;
	dec->mnemonic = PPC_MNEM_SLIQ;
	/* 011111BBBBBAAAAACCCCC00101110001 */
	dec->operand_n = 3;
	dec->operand_types[0] = PPC_OPER_TYPE_GPR;
	dec->operand_values[0] = (insword & 0x1F0000)>>16;
	dec->operand_types[1] = PPC_OPER_TYPE_GPR;
	dec->operand_values[1] = (insword & 0x3E00000)>>21;
	dec->operand_types[2] = PPC_OPER_TYPE_NUM;
	dec->operand_values[2] = (insword & 0xF800)>>11;
	dec->operand_fmtstr = PPC_FMTSTR_GPR_C_GPR_C_NUM;
	return 0;
}

/* prtyd GPR,GPR */
int prtyd_GPR_GPR(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_PRTYD;
	/* 011111BBBBBAAAAA0000000101110100 */
	dec->operand_n = 2;
	dec->operand_types[0] = PPC_OPER_TYPE_GPR;
	dec->operand_values[0] = (insword & 0x1F0000)>>16;
	dec->operand_types[1] = PPC_OPER_TYPE_GPR;
	dec->operand_values[1] = (insword & 0x3E00000)>>21;
	dec->operand_fmtstr = PPC_FMTSTR_GPR_C_GPR;
	return 0;
}

/* cmprb CREG,NUM,GPR,GPR */
int cmprb_CREG_NUM_GPR_GPR(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_CMPRB;
	/* 011111AAA0BCCCCCDDDDD00110000000 */
	dec->operand_n = 4;
	dec->operand_types[0] = PPC_OPER_TYPE_CREG;
	dec->operand_values[0] = (insword & 0x3800000)>>23;
	dec->operand_types[1] = PPC_OPER_TYPE_NUM;
	dec->operand_values[1] = (insword & 0x200000)>>21;
	dec->operand_types[2] = PPC_OPER_TYPE_GPR;
	dec->operand_values[2] = (insword & 0x1F0000)>>16;
	dec->operand_types[3] = PPC_OPER_TYPE_GPR;
	dec->operand_values[3] = (insword & 0xF800)>>11;
	dec->operand_fmtstr = PPC_FMTSTR_CREG_C_NUM_C_GPR_C_GPR;
	return 0;
}

/* icblq. NUM,GPR */
int icblqD_NUM_GPR(uint32_t insword, struct ppc_decoded *dec)
{
	dec->properties |= PPC_PROPERTY_DOTTED;
	dec->mnemonic = PPC_MNEM_ICBLQ;
	/* 0111110000000000BBBBB00110001101 */
	dec->operand_n = 2;
	dec->operand_types[0] = PPC_OPER_TYPE_NUM;
	dec->operand_types[1] = PPC_OPER_TYPE_GPR;
	dec->operand_values[1] = (insword & 0xF800)>>11;
	dec->operand_fmtstr = PPC_FMTSTR_NUM_C_GPR;
	return 0;
}

/* stvewx VREG,NUM,GPR */
int stvewx_VREG_NUM_GPR(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_STVEWX;
	/* 011111AAAAA00000CCCCC00110001110 */
	dec->operand_n = 3;
	dec->operand_types[0] = PPC_OPER_TYPE_VREG;
	dec->operand_values[0] = (insword & 0x3E00000)>>21;
	dec->operand_types[1] = PPC_OPER_TYPE_NUM;
	dec->operand_types[2] = PPC_OPER_TYPE_GPR;
	dec->operand_values[2] = (insword & 0xF800)>>11;
	dec->operand_fmtstr = PPC_FMTSTR_VREG_C_NUM_C_GPR;
	return 0;
}

/* subfze GPR,GPR */
int subfze_GPR_GPR(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_SUBFZE;
	/* 011111AAAAABBBBB0000000110010000 */
	dec->operand_n = 2;
	dec->operand_types[0] = PPC_OPER_TYPE_GPR;
	dec->operand_values[0] = (insword & 0x3E00000)>>21;
	dec->operand_types[1] = PPC_OPER_TYPE_GPR;
	dec->operand_values[1] = (insword & 0x1F0000)>>16;
	dec->operand_fmtstr = PPC_FMTSTR_GPR_C_GPR;
	return 0;
}

/* subfze. GPR,GPR */
int subfzeD_GPR_GPR(uint32_t insword, struct ppc_decoded *dec)
{
	dec->properties |= PPC_PROPERTY_DOTTED;
	dec->mnemonic = PPC_MNEM_SUBFZE;
	/* 011111AAAAABBBBB0000000110010001 */
	dec->operand_n = 2;
	dec->operand_types[0] = PPC_OPER_TYPE_GPR;
	dec->operand_values[0] = (insword & 0x3E00000)>>21;
	dec->operand_types[1] = PPC_OPER_TYPE_GPR;
	dec->operand_values[1] = (insword & 0x1F0000)>>16;
	dec->operand_fmtstr = PPC_FMTSTR_GPR_C_GPR;
	return 0;
}

/* addze GPR,GPR */
int addze_GPR_GPR(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_ADDZE;
	/* 011111AAAAABBBBB0000000110010100 */
	dec->operand_n = 2;
	dec->operand_types[0] = PPC_OPER_TYPE_GPR;
	dec->operand_values[0] = (insword & 0x3E00000)>>21;
	dec->operand_types[1] = PPC_OPER_TYPE_GPR;
	dec->operand_values[1] = (insword & 0x1F0000)>>16;
	dec->operand_fmtstr = PPC_FMTSTR_GPR_C_GPR;
	return 0;
}

/* addze. GPR,GPR */
int addzeD_GPR_GPR(uint32_t insword, struct ppc_decoded *dec)
{
	dec->properties |= PPC_PROPERTY_DOTTED;
	dec->mnemonic = PPC_MNEM_ADDZE;
	/* 011111AAAAABBBBB0000000110010101 */
	dec->operand_n = 2;
	dec->operand_types[0] = PPC_OPER_TYPE_GPR;
	dec->operand_values[0] = (insword & 0x3E00000)>>21;
	dec->operand_types[1] = PPC_OPER_TYPE_GPR;
	dec->operand_values[1] = (insword & 0x1F0000)>>16;
	dec->operand_fmtstr = PPC_FMTSTR_GPR_C_GPR;
	return 0;
}

/* msgsnd GPR */
int msgsnd_GPR(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_MSGSND;
	/* 0111110000000000AAAAA00110011100 */
	dec->operand_n = 1;
	dec->operand_types[0] = PPC_OPER_TYPE_GPR;
	dec->operand_values[0] = (insword & 0xF800)>>11;
	dec->operand_fmtstr = PPC_FMTSTR_GPR;
	return 0;
}

/* mtsr NUM,GPR */
int mtsr_NUM_GPR(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_MTSR;
	/* 011111BBBBB0AAAA0000000110100100 */
	dec->operand_n = 2;
	dec->operand_types[0] = PPC_OPER_TYPE_NUM;
	dec->operand_values[0] = (insword & 0xF0000)>>16;
	dec->operand_types[1] = PPC_OPER_TYPE_GPR;
	dec->operand_values[1] = (insword & 0x3E00000)>>21;
	dec->operand_fmtstr = PPC_FMTSTR_NUM_C_GPR;
	return 0;
}

/* mtfprwa FREG,GPR */
int mtfprwa_FREG_GPR(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_MTFPRWA;
	/* 011111AAAAABBBBB0000000110100110 */
	dec->operand_n = 2;
	dec->operand_types[0] = PPC_OPER_TYPE_FREG;
	dec->operand_values[0] = (insword & 0x3E00000)>>21;
	dec->operand_types[1] = PPC_OPER_TYPE_GPR;
	dec->operand_values[1] = (insword & 0x1F0000)>>16;
	dec->operand_fmtstr = PPC_FMTSTR_FREG_C_GPR;
	return 0;
}

/* mtvrwa VREG,GPR */
int mtvrwa_VREG_GPR(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_MTVRWA;
	/* 011111AAAAABBBBB0000000110100111 */
	dec->operand_n = 2;
	dec->operand_types[0] = PPC_OPER_TYPE_VREG;
	dec->operand_values[0] = (insword & 0x3E00000)>>21;
	dec->operand_types[1] = PPC_OPER_TYPE_GPR;
	dec->operand_values[1] = (insword & 0x1F0000)>>16;
	dec->operand_fmtstr = PPC_FMTSTR_VREG_C_GPR;
	return 0;
}

/* ldawx. GPR,NUM,GPR */
int ldawxD_GPR_NUM_GPR(uint32_t insword, struct ppc_decoded *dec)
{
	dec->properties |= PPC_PROPERTY_DOTTED;
	dec->mnemonic = PPC_MNEM_LDAWX;
	/* 011111AAAAA00000CCCCC00110101001 */
	dec->operand_n = 3;
	dec->operand_types[0] = PPC_OPER_TYPE_GPR;
	dec->operand_values[0] = (insword & 0x3E00000)>>21;
	dec->operand_types[1] = PPC_OPER_TYPE_NUM;
	dec->operand_types[2] = PPC_OPER_TYPE_GPR;
	dec->operand_values[2] = (insword & 0xF800)>>11;
	dec->operand_fmtstr = PPC_FMTSTR_GPR_C_NUM_C_GPR;
	return 0;
}

/* stdcx. GPR,NUM,GPR */
int stdcxD_GPR_NUM_GPR(uint32_t insword, struct ppc_decoded *dec)
{
	dec->properties |= PPC_PROPERTY_DOTTED;
	dec->mnemonic = PPC_MNEM_STDCX;
	/* 011111AAAAA00000CCCCC00110101101 */
	dec->operand_n = 3;
	dec->operand_types[0] = PPC_OPER_TYPE_GPR;
	dec->operand_values[0] = (insword & 0x3E00000)>>21;
	dec->operand_types[1] = PPC_OPER_TYPE_NUM;
	dec->operand_types[2] = PPC_OPER_TYPE_GPR;
	dec->operand_values[2] = (insword & 0xF800)>>11;
	dec->operand_fmtstr = PPC_FMTSTR_GPR_C_NUM_C_GPR;
	return 0;
}

/* stbx GPR,NUM,GPR */
int stbx_GPR_NUM_GPR(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_STBX;
	/* 011111AAAAA00000CCCCC00110101110 */
	dec->operand_n = 3;
	dec->operand_types[0] = PPC_OPER_TYPE_GPR;
	dec->operand_values[0] = (insword & 0x3E00000)>>21;
	dec->operand_types[1] = PPC_OPER_TYPE_NUM;
	dec->operand_types[2] = PPC_OPER_TYPE_GPR;
	dec->operand_values[2] = (insword & 0xF800)>>11;
	dec->operand_fmtstr = PPC_FMTSTR_GPR_C_NUM_C_GPR;
	return 0;
}

/* sllq GPR,GPR,GPR */
int sllq_GPR_GPR_GPR(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_SLLQ;
	/* 011111BBBBBAAAAACCCCC00110110000 */
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

/* sllq. GPR,GPR,GPR */
int sllqD_GPR_GPR_GPR(uint32_t insword, struct ppc_decoded *dec)
{
	dec->properties |= PPC_PROPERTY_DOTTED;
	dec->mnemonic = PPC_MNEM_SLLQ;
	/* 011111BBBBBAAAAACCCCC00110110001 */
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

/* sleq GPR,GPR,GPR */
int sleq_GPR_GPR_GPR(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_SLEQ;
	/* 011111BBBBBAAAAACCCCC00110110010 */
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

/* sleq. GPR,GPR,GPR */
int sleqD_GPR_GPR_GPR(uint32_t insword, struct ppc_decoded *dec)
{
	dec->properties |= PPC_PROPERTY_DOTTED;
	dec->mnemonic = PPC_MNEM_SLEQ;
	/* 011111BBBBBAAAAACCCCC00110110011 */
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

/* stbepx GPR,NUM,GPR */
int stbepx_GPR_NUM_GPR(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_STBEPX;
	/* 011111AAAAA00000CCCCC00110111110 */
	dec->operand_n = 3;
	dec->operand_types[0] = PPC_OPER_TYPE_GPR;
	dec->operand_values[0] = (insword & 0x3E00000)>>21;
	dec->operand_types[1] = PPC_OPER_TYPE_NUM;
	dec->operand_types[2] = PPC_OPER_TYPE_GPR;
	dec->operand_values[2] = (insword & 0xF800)>>11;
	dec->operand_fmtstr = PPC_FMTSTR_GPR_C_NUM_C_GPR;
	return 0;
}

/* cmpeqb CREG,GPR,GPR */
int cmpeqb_CREG_GPR_GPR(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_CMPEQB;
	/* 011111AAA00BBBBBCCCCC00111000000 */
	dec->operand_n = 3;
	dec->operand_types[0] = PPC_OPER_TYPE_CREG;
	dec->operand_values[0] = (insword & 0x3800000)>>23;
	dec->operand_types[1] = PPC_OPER_TYPE_GPR;
	dec->operand_values[1] = (insword & 0x1F0000)>>16;
	dec->operand_types[2] = PPC_OPER_TYPE_GPR;
	dec->operand_values[2] = (insword & 0xF800)>>11;
	dec->operand_fmtstr = PPC_FMTSTR_CREG_C_GPR_C_GPR;
	return 0;
}

/* icblc NUM,GPR */
int icblc_NUM_GPR(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_ICBLC;
	/* 0111110000000000BBBBB00111001100 */
	dec->operand_n = 2;
	dec->operand_types[0] = PPC_OPER_TYPE_NUM;
	dec->operand_types[1] = PPC_OPER_TYPE_GPR;
	dec->operand_values[1] = (insword & 0xF800)>>11;
	dec->operand_fmtstr = PPC_FMTSTR_NUM_C_GPR;
	return 0;
}

/* stvx VREG,NUM,GPR */
int stvx_VREG_NUM_GPR(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_STVX;
	/* 011111AAAAA00000CCCCC00111001110 */
	dec->operand_n = 3;
	dec->operand_types[0] = PPC_OPER_TYPE_VREG;
	dec->operand_values[0] = (insword & 0x3E00000)>>21;
	dec->operand_types[1] = PPC_OPER_TYPE_NUM;
	dec->operand_types[2] = PPC_OPER_TYPE_GPR;
	dec->operand_values[2] = (insword & 0xF800)>>11;
	dec->operand_fmtstr = PPC_FMTSTR_VREG_C_NUM_C_GPR;
	return 0;
}

/* subfme GPR,GPR */
int subfme_GPR_GPR(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_SUBFME;
	/* 011111AAAAABBBBB0000000111010000 */
	dec->operand_n = 2;
	dec->operand_types[0] = PPC_OPER_TYPE_GPR;
	dec->operand_values[0] = (insword & 0x3E00000)>>21;
	dec->operand_types[1] = PPC_OPER_TYPE_GPR;
	dec->operand_values[1] = (insword & 0x1F0000)>>16;
	dec->operand_fmtstr = PPC_FMTSTR_GPR_C_GPR;
	return 0;
}

/* subfme. GPR,GPR */
int subfmeD_GPR_GPR(uint32_t insword, struct ppc_decoded *dec)
{
	dec->properties |= PPC_PROPERTY_DOTTED;
	dec->mnemonic = PPC_MNEM_SUBFME;
	/* 011111AAAAABBBBB0000000111010001 */
	dec->operand_n = 2;
	dec->operand_types[0] = PPC_OPER_TYPE_GPR;
	dec->operand_values[0] = (insword & 0x3E00000)>>21;
	dec->operand_types[1] = PPC_OPER_TYPE_GPR;
	dec->operand_values[1] = (insword & 0x1F0000)>>16;
	dec->operand_fmtstr = PPC_FMTSTR_GPR_C_GPR;
	return 0;
}

/* mulld GPR,GPR,GPR */
int mulld_GPR_GPR_GPR(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_MULLD;
	/* 011111AAAAABBBBBCCCCC00111010010 */
	dec->operand_n = 3;
	dec->operand_types[0] = PPC_OPER_TYPE_GPR;
	dec->operand_values[0] = (insword & 0x3E00000)>>21;
	dec->operand_types[1] = PPC_OPER_TYPE_GPR;
	dec->operand_values[1] = (insword & 0x1F0000)>>16;
	dec->operand_types[2] = PPC_OPER_TYPE_GPR;
	dec->operand_values[2] = (insword & 0xF800)>>11;
	dec->operand_fmtstr = PPC_FMTSTR_GPR_C_GPR_C_GPR;
	return 0;
}

/* mulld. GPR,GPR,GPR */
int mulldD_GPR_GPR_GPR(uint32_t insword, struct ppc_decoded *dec)
{
	dec->properties |= PPC_PROPERTY_DOTTED;
	dec->mnemonic = PPC_MNEM_MULLD;
	/* 011111AAAAABBBBBCCCCC00111010011 */
	dec->operand_n = 3;
	dec->operand_types[0] = PPC_OPER_TYPE_GPR;
	dec->operand_values[0] = (insword & 0x3E00000)>>21;
	dec->operand_types[1] = PPC_OPER_TYPE_GPR;
	dec->operand_values[1] = (insword & 0x1F0000)>>16;
	dec->operand_types[2] = PPC_OPER_TYPE_GPR;
	dec->operand_values[2] = (insword & 0xF800)>>11;
	dec->operand_fmtstr = PPC_FMTSTR_GPR_C_GPR_C_GPR;
	return 0;
}

/* addme GPR,GPR */
int addme_GPR_GPR(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_ADDME;
	/* 011111AAAAABBBBB0000000111010100 */
	dec->operand_n = 2;
	dec->operand_types[0] = PPC_OPER_TYPE_GPR;
	dec->operand_values[0] = (insword & 0x3E00000)>>21;
	dec->operand_types[1] = PPC_OPER_TYPE_GPR;
	dec->operand_values[1] = (insword & 0x1F0000)>>16;
	dec->operand_fmtstr = PPC_FMTSTR_GPR_C_GPR;
	return 0;
}

/* addme. GPR,GPR */
int addmeD_GPR_GPR(uint32_t insword, struct ppc_decoded *dec)
{
	dec->properties |= PPC_PROPERTY_DOTTED;
	dec->mnemonic = PPC_MNEM_ADDME;
	/* 011111AAAAABBBBB0000000111010101 */
	dec->operand_n = 2;
	dec->operand_types[0] = PPC_OPER_TYPE_GPR;
	dec->operand_values[0] = (insword & 0x3E00000)>>21;
	dec->operand_types[1] = PPC_OPER_TYPE_GPR;
	dec->operand_values[1] = (insword & 0x1F0000)>>16;
	dec->operand_fmtstr = PPC_FMTSTR_GPR_C_GPR;
	return 0;
}

/* mullw GPR,GPR,GPR */
int mullw_GPR_GPR_GPR(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_MULLW;
	/* 011111AAAAABBBBBCCCCC00111010110 */
	dec->operand_n = 3;
	dec->operand_types[0] = PPC_OPER_TYPE_GPR;
	dec->operand_values[0] = (insword & 0x3E00000)>>21;
	dec->operand_types[1] = PPC_OPER_TYPE_GPR;
	dec->operand_values[1] = (insword & 0x1F0000)>>16;
	dec->operand_types[2] = PPC_OPER_TYPE_GPR;
	dec->operand_values[2] = (insword & 0xF800)>>11;
	dec->operand_fmtstr = PPC_FMTSTR_GPR_C_GPR_C_GPR;
	return 0;
}

/* mullw. GPR,GPR,GPR */
int mullwD_GPR_GPR_GPR(uint32_t insword, struct ppc_decoded *dec)
{
	dec->properties |= PPC_PROPERTY_DOTTED;
	dec->mnemonic = PPC_MNEM_MULLW;
	/* 011111AAAAABBBBBCCCCC00111010111 */
	dec->operand_n = 3;
	dec->operand_types[0] = PPC_OPER_TYPE_GPR;
	dec->operand_values[0] = (insword & 0x3E00000)>>21;
	dec->operand_types[1] = PPC_OPER_TYPE_GPR;
	dec->operand_values[1] = (insword & 0x1F0000)>>16;
	dec->operand_types[2] = PPC_OPER_TYPE_GPR;
	dec->operand_values[2] = (insword & 0xF800)>>11;
	dec->operand_fmtstr = PPC_FMTSTR_GPR_C_GPR_C_GPR;
	return 0;
}

/* msgclr GPR */
int msgclr_GPR(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_MSGCLR;
	/* 0111110000000000AAAAA00111011100 */
	dec->operand_n = 1;
	dec->operand_types[0] = PPC_OPER_TYPE_GPR;
	dec->operand_values[0] = (insword & 0xF800)>>11;
	dec->operand_fmtstr = PPC_FMTSTR_GPR;
	return 0;
}

/* mtsrin GPR,GPR */
int mtsrin_GPR_GPR(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_MTSRIN;
	/* 011111AAAAA00000BBBBB00111100100 */
	dec->operand_n = 2;
	dec->operand_types[0] = PPC_OPER_TYPE_GPR;
	dec->operand_values[0] = (insword & 0x3E00000)>>21;
	dec->operand_types[1] = PPC_OPER_TYPE_GPR;
	dec->operand_values[1] = (insword & 0xF800)>>11;
	dec->operand_fmtstr = PPC_FMTSTR_GPR_C_GPR;
	return 0;
}

/* mtfprwz FREG,GPR */
int mtfprwz_FREG_GPR(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_MTFPRWZ;
	/* 011111AAAAABBBBB0000000111100110 */
	dec->operand_n = 2;
	dec->operand_types[0] = PPC_OPER_TYPE_FREG;
	dec->operand_values[0] = (insword & 0x3E00000)>>21;
	dec->operand_types[1] = PPC_OPER_TYPE_GPR;
	dec->operand_values[1] = (insword & 0x1F0000)>>16;
	dec->operand_fmtstr = PPC_FMTSTR_FREG_C_GPR;
	return 0;
}

/* mtvrwz VREG,GPR */
int mtvrwz_VREG_GPR(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_MTVRWZ;
	/* 011111AAAAABBBBB0000000111100111 */
	dec->operand_n = 2;
	dec->operand_types[0] = PPC_OPER_TYPE_VREG;
	dec->operand_values[0] = (insword & 0x3E00000)>>21;
	dec->operand_types[1] = PPC_OPER_TYPE_GPR;
	dec->operand_values[1] = (insword & 0x1F0000)>>16;
	dec->operand_fmtstr = PPC_FMTSTR_VREG_C_GPR;
	return 0;
}

/* dcbtst NUM,GPR */
int dcbtst_NUM_GPR(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_DCBTST;
	/* 0111110000000000BBBBB00111101100 */
	dec->operand_n = 2;
	dec->operand_types[0] = PPC_OPER_TYPE_NUM;
	dec->operand_types[1] = PPC_OPER_TYPE_GPR;
	dec->operand_values[1] = (insword & 0xF800)>>11;
	dec->operand_fmtstr = PPC_FMTSTR_NUM_C_GPR;
	return 0;
}

/* slliq GPR,GPR,NUM */
int slliq_GPR_GPR_NUM(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_SLLIQ;
	/* 011111BBBBBAAAAACCCCC00111110000 */
	dec->operand_n = 3;
	dec->operand_types[0] = PPC_OPER_TYPE_GPR;
	dec->operand_values[0] = (insword & 0x1F0000)>>16;
	dec->operand_types[1] = PPC_OPER_TYPE_GPR;
	dec->operand_values[1] = (insword & 0x3E00000)>>21;
	dec->operand_types[2] = PPC_OPER_TYPE_NUM;
	dec->operand_values[2] = (insword & 0xF800)>>11;
	dec->operand_fmtstr = PPC_FMTSTR_GPR_C_GPR_C_NUM;
	return 0;
}

/* slliq. GPR,GPR,NUM */
int slliqD_GPR_GPR_NUM(uint32_t insword, struct ppc_decoded *dec)
{
	dec->properties |= PPC_PROPERTY_DOTTED;
	dec->mnemonic = PPC_MNEM_SLLIQ;
	/* 011111BBBBBAAAAACCCCC00111110001 */
	dec->operand_n = 3;
	dec->operand_types[0] = PPC_OPER_TYPE_GPR;
	dec->operand_values[0] = (insword & 0x1F0000)>>16;
	dec->operand_types[1] = PPC_OPER_TYPE_GPR;
	dec->operand_values[1] = (insword & 0x3E00000)>>21;
	dec->operand_types[2] = PPC_OPER_TYPE_NUM;
	dec->operand_values[2] = (insword & 0xF800)>>11;
	dec->operand_fmtstr = PPC_FMTSTR_GPR_C_GPR_C_NUM;
	return 0;
}

/* bpermd GPR,GPR,GPR */
int bpermd_GPR_GPR_GPR(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_BPERMD;
	/* 011111BBBBBAAAAACCCCC00111111000 */
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

/* dcbtstep GPR,NUM,GPR */
int dcbtstep_GPR_NUM_GPR(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_DCBTSTEP;
	/* 011111AAAAA00000CCCCC00111111110 */
	dec->operand_n = 3;
	dec->operand_types[0] = PPC_OPER_TYPE_GPR;
	dec->operand_values[0] = (insword & 0x3E00000)>>21;
	dec->operand_types[1] = PPC_OPER_TYPE_NUM;
	dec->operand_types[2] = PPC_OPER_TYPE_GPR;
	dec->operand_values[2] = (insword & 0xF800)>>11;
	dec->operand_fmtstr = PPC_FMTSTR_GPR_C_NUM_C_GPR;
	return 0;
}

/* mfdcrx GPR,GPR */
int mfdcrx_GPR_GPR(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_MFDCRX;
	/* 011111AAAAABBBBBxxxxx01000000110 */
	dec->operand_n = 2;
	dec->operand_types[0] = PPC_OPER_TYPE_GPR;
	dec->operand_values[0] = (insword & 0x3E00000)>>21;
	dec->operand_types[1] = PPC_OPER_TYPE_GPR;
	dec->operand_values[1] = (insword & 0x1F0000)>>16;
	dec->operand_fmtstr = PPC_FMTSTR_GPR_C_GPR;
	return 0;
}

/* mfdcrx. GPR,GPR */
int mfdcrxD_GPR_GPR(uint32_t insword, struct ppc_decoded *dec)
{
	dec->properties |= PPC_PROPERTY_DOTTED;
	dec->mnemonic = PPC_MNEM_MFDCRX;
	/* 011111AAAAABBBBBxxxxx01000000111 */
	dec->operand_n = 2;
	dec->operand_types[0] = PPC_OPER_TYPE_GPR;
	dec->operand_values[0] = (insword & 0x3E00000)>>21;
	dec->operand_types[1] = PPC_OPER_TYPE_GPR;
	dec->operand_values[1] = (insword & 0x1F0000)>>16;
	dec->operand_fmtstr = PPC_FMTSTR_GPR_C_GPR;
	return 0;
}

/* lvexbx VREG,NUM,GPR */
int lvexbx_VREG_NUM_GPR(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_LVEXBX;
	/* 011111AAAAA00000CCCCC01000001010 */
	dec->operand_n = 3;
	dec->operand_types[0] = PPC_OPER_TYPE_VREG;
	dec->operand_values[0] = (insword & 0x3E00000)>>21;
	dec->operand_types[1] = PPC_OPER_TYPE_NUM;
	dec->operand_types[2] = PPC_OPER_TYPE_GPR;
	dec->operand_values[2] = (insword & 0xF800)>>11;
	dec->operand_fmtstr = PPC_FMTSTR_VREG_C_NUM_C_GPR;
	return 0;
}

/* icbt GPR,GPR */
int icbt_GPR_GPR(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_ICBT;
	/* 01111100000AAAAABBBBB0x000x01100 */
	dec->operand_n = 2;
	dec->operand_types[0] = PPC_OPER_TYPE_GPR;
	dec->operand_values[0] = (insword & 0x1F0000)>>16;
	dec->operand_types[1] = PPC_OPER_TYPE_GPR;
	dec->operand_values[1] = (insword & 0xF800)>>11;
	dec->operand_fmtstr = PPC_FMTSTR_GPR_C_GPR;
	return 0;
}

/* lvepxl VREG,NUM,GPR */
int lvepxl_VREG_NUM_GPR(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_LVEPXL;
	/* 011111AAAAA00000CCCCC01000001110 */
	dec->operand_n = 3;
	dec->operand_types[0] = PPC_OPER_TYPE_VREG;
	dec->operand_values[0] = (insword & 0x3E00000)>>21;
	dec->operand_types[1] = PPC_OPER_TYPE_NUM;
	dec->operand_types[2] = PPC_OPER_TYPE_GPR;
	dec->operand_values[2] = (insword & 0xF800)>>11;
	dec->operand_fmtstr = PPC_FMTSTR_VREG_C_NUM_C_GPR;
	return 0;
}

/* doz GPR,GPR,GPR */
int doz_GPR_GPR_GPR(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_DOZ;
	/* 011111AAAAABBBBBCCCCC01000010000 */
	dec->operand_n = 3;
	dec->operand_types[0] = PPC_OPER_TYPE_GPR;
	dec->operand_values[0] = (insword & 0x3E00000)>>21;
	dec->operand_types[1] = PPC_OPER_TYPE_GPR;
	dec->operand_values[1] = (insword & 0x1F0000)>>16;
	dec->operand_types[2] = PPC_OPER_TYPE_GPR;
	dec->operand_values[2] = (insword & 0xF800)>>11;
	dec->operand_fmtstr = PPC_FMTSTR_GPR_C_GPR_C_GPR;
	return 0;
}

/* doz. GPR,GPR,GPR */
int dozD_GPR_GPR_GPR(uint32_t insword, struct ppc_decoded *dec)
{
	dec->properties |= PPC_PROPERTY_DOTTED;
	dec->mnemonic = PPC_MNEM_DOZ;
	/* 011111AAAAABBBBBCCCCC01000010001 */
	dec->operand_n = 3;
	dec->operand_types[0] = PPC_OPER_TYPE_GPR;
	dec->operand_values[0] = (insword & 0x3E00000)>>21;
	dec->operand_types[1] = PPC_OPER_TYPE_GPR;
	dec->operand_values[1] = (insword & 0x1F0000)>>16;
	dec->operand_types[2] = PPC_OPER_TYPE_GPR;
	dec->operand_values[2] = (insword & 0xF800)>>11;
	dec->operand_fmtstr = PPC_FMTSTR_GPR_C_GPR_C_GPR;
	return 0;
}

/* modud GPR,GPR,GPR */
int modud_GPR_GPR_GPR(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_MODUD;
	/* 011111AAAAABBBBBCCCCC01000010010 */
	dec->operand_n = 3;
	dec->operand_types[0] = PPC_OPER_TYPE_GPR;
	dec->operand_values[0] = (insword & 0x3E00000)>>21;
	dec->operand_types[1] = PPC_OPER_TYPE_GPR;
	dec->operand_values[1] = (insword & 0x1F0000)>>16;
	dec->operand_types[2] = PPC_OPER_TYPE_GPR;
	dec->operand_values[2] = (insword & 0xF800)>>11;
	dec->operand_fmtstr = PPC_FMTSTR_GPR_C_GPR_C_GPR;
	return 0;
}

/* add GPR,GPR,GPR */
int add_GPR_GPR_GPR(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_ADD;
	/* 011111AAAAABBBBBCCCCC01000010100 */
	dec->operand_n = 3;
	dec->operand_types[0] = PPC_OPER_TYPE_GPR;
	dec->operand_values[0] = (insword & 0x3E00000)>>21;
	dec->operand_types[1] = PPC_OPER_TYPE_GPR;
	dec->operand_values[1] = (insword & 0x1F0000)>>16;
	dec->operand_types[2] = PPC_OPER_TYPE_GPR;
	dec->operand_values[2] = (insword & 0xF800)>>11;
	dec->operand_fmtstr = PPC_FMTSTR_GPR_C_GPR_C_GPR;
	return 0;
}

/* add. GPR,GPR,GPR */
int addD_GPR_GPR_GPR(uint32_t insword, struct ppc_decoded *dec)
{
	dec->properties |= PPC_PROPERTY_DOTTED;
	dec->mnemonic = PPC_MNEM_ADD;
	/* 011111AAAAABBBBBCCCCC01000010101 */
	dec->operand_n = 3;
	dec->operand_types[0] = PPC_OPER_TYPE_GPR;
	dec->operand_values[0] = (insword & 0x3E00000)>>21;
	dec->operand_types[1] = PPC_OPER_TYPE_GPR;
	dec->operand_values[1] = (insword & 0x1F0000)>>16;
	dec->operand_types[2] = PPC_OPER_TYPE_GPR;
	dec->operand_values[2] = (insword & 0xF800)>>11;
	dec->operand_fmtstr = PPC_FMTSTR_GPR_C_GPR_C_GPR;
	return 0;
}

/* moduw GPR,GPR,GPR */
int moduw_GPR_GPR_GPR(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_MODUW;
	/* 011111AAAAABBBBBCCCCC01000010110 */
	dec->operand_n = 3;
	dec->operand_types[0] = PPC_OPER_TYPE_GPR;
	dec->operand_values[0] = (insword & 0x3E00000)>>21;
	dec->operand_types[1] = PPC_OPER_TYPE_GPR;
	dec->operand_values[1] = (insword & 0x1F0000)>>16;
	dec->operand_types[2] = PPC_OPER_TYPE_GPR;
	dec->operand_values[2] = (insword & 0xF800)>>11;
	dec->operand_fmtstr = PPC_FMTSTR_GPR_C_GPR_C_GPR;
	return 0;
}

/* lxvx VSREG,NUM,GPR */
int lxvx_VSREG_NUM_GPR(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_LXVX;
	/* 011111AAAAA00000CCCCC0100001100A */
	dec->operand_n = 3;
	dec->operand_types[0] = PPC_OPER_TYPE_VSREG;
	dec->operand_values[0] = ((insword & 0x3E00000)>>20)|((insword & 0x1)>>0);
	dec->operand_types[1] = PPC_OPER_TYPE_NUM;
	dec->operand_types[2] = PPC_OPER_TYPE_GPR;
	dec->operand_values[2] = (insword & 0xF800)>>11;
	dec->operand_fmtstr = PPC_FMTSTR_VSREG_C_NUM_C_GPR;
	return 0;
}

/* lxvl VSREG,NUM,GPR */
int lxvl_VSREG_NUM_GPR(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_LXVL;
	/* 011111AAAAA00000CCCCC0100001101A */
	dec->operand_n = 3;
	dec->operand_types[0] = PPC_OPER_TYPE_VSREG;
	dec->operand_values[0] = ((insword & 0x3E00000)>>20)|((insword & 0x1)>>0);
	dec->operand_types[1] = PPC_OPER_TYPE_NUM;
	dec->operand_types[2] = PPC_OPER_TYPE_GPR;
	dec->operand_values[2] = (insword & 0xF800)>>11;
	dec->operand_fmtstr = PPC_FMTSTR_VSREG_C_NUM_C_GPR;
	return 0;
}

/* ehpriv */
int ehpriv(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_EHPRIV;
	return 0;
}

/* tlbiel GPR */
int tlbiel_GPR(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_TLBIEL;
	/* 0111110000000000AAAAA01000100100 */
	dec->operand_n = 1;
	dec->operand_types[0] = PPC_OPER_TYPE_GPR;
	dec->operand_values[0] = (insword & 0xF800)>>11;
	dec->operand_fmtstr = PPC_FMTSTR_GPR;
	return 0;
}

/* mfapidi GPR,GPR */
int mfapidi_GPR_GPR(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_MFAPIDI;
	/* 011111AAAAABBBBBxxxxx01000100110 */
	dec->operand_n = 2;
	dec->operand_types[0] = PPC_OPER_TYPE_GPR;
	dec->operand_values[0] = (insword & 0x3E00000)>>21;
	dec->operand_types[1] = PPC_OPER_TYPE_GPR;
	dec->operand_values[1] = (insword & 0x1F0000)>>16;
	dec->operand_fmtstr = PPC_FMTSTR_GPR_C_GPR;
	return 0;
}

/* lscbx GPR,GPR,GPR */
int lscbx_GPR_GPR_GPR(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_LSCBX;
	/* 011111AAAAABBBBBCCCCC01000101010 */
	dec->operand_n = 3;
	dec->operand_types[0] = PPC_OPER_TYPE_GPR;
	dec->operand_values[0] = (insword & 0x3E00000)>>21;
	dec->operand_types[1] = PPC_OPER_TYPE_GPR;
	dec->operand_values[1] = (insword & 0x1F0000)>>16;
	dec->operand_types[2] = PPC_OPER_TYPE_GPR;
	dec->operand_values[2] = (insword & 0xF800)>>11;
	dec->operand_fmtstr = PPC_FMTSTR_GPR_C_GPR_C_GPR;
	return 0;
}

/* lscbx. GPR,GPR,GPR */
int lscbxD_GPR_GPR_GPR(uint32_t insword, struct ppc_decoded *dec)
{
	dec->properties |= PPC_PROPERTY_DOTTED;
	dec->mnemonic = PPC_MNEM_LSCBX;
	/* 011111AAAAABBBBBCCCCC01000101011 */
	dec->operand_n = 3;
	dec->operand_types[0] = PPC_OPER_TYPE_GPR;
	dec->operand_values[0] = (insword & 0x3E00000)>>21;
	dec->operand_types[1] = PPC_OPER_TYPE_GPR;
	dec->operand_values[1] = (insword & 0x1F0000)>>16;
	dec->operand_types[2] = PPC_OPER_TYPE_GPR;
	dec->operand_values[2] = (insword & 0xF800)>>11;
	dec->operand_fmtstr = PPC_FMTSTR_GPR_C_GPR_C_GPR;
	return 0;
}

/* dcbt NUM,GPR */
int dcbt_NUM_GPR(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_DCBT;
	/* 0111110000000000BBBBB01000101100 */
	dec->operand_n = 2;
	dec->operand_types[0] = PPC_OPER_TYPE_NUM;
	dec->operand_types[1] = PPC_OPER_TYPE_GPR;
	dec->operand_values[1] = (insword & 0xF800)>>11;
	dec->operand_fmtstr = PPC_FMTSTR_NUM_C_GPR;
	return 0;
}

/* lhzx GPR,NUM,GPR */
int lhzx_GPR_NUM_GPR(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_LHZX;
	/* 011111AAAAA00000CCCCC01000101110 */
	dec->operand_n = 3;
	dec->operand_types[0] = PPC_OPER_TYPE_GPR;
	dec->operand_values[0] = (insword & 0x3E00000)>>21;
	dec->operand_types[1] = PPC_OPER_TYPE_NUM;
	dec->operand_types[2] = PPC_OPER_TYPE_GPR;
	dec->operand_values[2] = (insword & 0xF800)>>11;
	dec->operand_fmtstr = PPC_FMTSTR_GPR_C_NUM_C_GPR;
	return 0;
}

/* cdtbcd GPR,GPR */
int cdtbcd_GPR_GPR(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_CDTBCD;
	/* 011111BBBBBAAAAA0000001000110100 */
	dec->operand_n = 2;
	dec->operand_types[0] = PPC_OPER_TYPE_GPR;
	dec->operand_values[0] = (insword & 0x1F0000)>>16;
	dec->operand_types[1] = PPC_OPER_TYPE_GPR;
	dec->operand_values[1] = (insword & 0x3E00000)>>21;
	dec->operand_fmtstr = PPC_FMTSTR_GPR_C_GPR;
	return 0;
}

/* eqv GPR,GPR,GPR */
int eqv_GPR_GPR_GPR(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_EQV;
	/* 011111BBBBBAAAAACCCCC01000111000 */
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

/* eqv. GPR,GPR,GPR */
int eqvD_GPR_GPR_GPR(uint32_t insword, struct ppc_decoded *dec)
{
	dec->properties |= PPC_PROPERTY_DOTTED;
	dec->mnemonic = PPC_MNEM_EQV;
	/* 011111BBBBBAAAAACCCCC01000111001 */
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

/* lhepx GPR,NUM,GPR */
int lhepx_GPR_NUM_GPR(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_LHEPX;
	/* 011111AAAAA00000CCCCC01000111110 */
	dec->operand_n = 3;
	dec->operand_types[0] = PPC_OPER_TYPE_GPR;
	dec->operand_values[0] = (insword & 0x3E00000)>>21;
	dec->operand_types[1] = PPC_OPER_TYPE_NUM;
	dec->operand_types[2] = PPC_OPER_TYPE_GPR;
	dec->operand_values[2] = (insword & 0xF800)>>11;
	dec->operand_fmtstr = PPC_FMTSTR_GPR_C_NUM_C_GPR;
	return 0;
}

/* mfdcrux GPR,GPR */
int mfdcrux_GPR_GPR(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_MFDCRUX;
	/* 011111AAAAABBBBBxxxxx01001000110 */
	dec->operand_n = 2;
	dec->operand_types[0] = PPC_OPER_TYPE_GPR;
	dec->operand_values[0] = (insword & 0x3E00000)>>21;
	dec->operand_types[1] = PPC_OPER_TYPE_GPR;
	dec->operand_values[1] = (insword & 0x1F0000)>>16;
	dec->operand_fmtstr = PPC_FMTSTR_GPR_C_GPR;
	return 0;
}

/* lvexhx VREG,NUM,GPR */
int lvexhx_VREG_NUM_GPR(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_LVEXHX;
	/* 011111AAAAA00000CCCCC01001001010 */
	dec->operand_n = 3;
	dec->operand_types[0] = PPC_OPER_TYPE_VREG;
	dec->operand_values[0] = (insword & 0x3E00000)>>21;
	dec->operand_types[1] = PPC_OPER_TYPE_NUM;
	dec->operand_types[2] = PPC_OPER_TYPE_GPR;
	dec->operand_values[2] = (insword & 0xF800)>>11;
	dec->operand_fmtstr = PPC_FMTSTR_VREG_C_NUM_C_GPR;
	return 0;
}

/* lvepx VREG,NUM,GPR */
int lvepx_VREG_NUM_GPR(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_LVEPX;
	/* 011111AAAAA00000CCCCC01001001110 */
	dec->operand_n = 3;
	dec->operand_types[0] = PPC_OPER_TYPE_VREG;
	dec->operand_values[0] = (insword & 0x3E00000)>>21;
	dec->operand_types[1] = PPC_OPER_TYPE_NUM;
	dec->operand_types[2] = PPC_OPER_TYPE_GPR;
	dec->operand_values[2] = (insword & 0xF800)>>11;
	dec->operand_fmtstr = PPC_FMTSTR_VREG_C_NUM_C_GPR;
	return 0;
}

/* lxvll VSREG,NUM,GPR */
int lxvll_VSREG_NUM_GPR(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_LXVLL;
	/* 011111AAAAA00000CCCCC0100101101A */
	dec->operand_n = 3;
	dec->operand_types[0] = PPC_OPER_TYPE_VSREG;
	dec->operand_values[0] = ((insword & 0x3E00000)>>20)|((insword & 0x1)>>0);
	dec->operand_types[1] = PPC_OPER_TYPE_NUM;
	dec->operand_types[2] = PPC_OPER_TYPE_GPR;
	dec->operand_values[2] = (insword & 0xF800)>>11;
	dec->operand_fmtstr = PPC_FMTSTR_VSREG_C_NUM_C_GPR;
	return 0;
}

/* mfbhrbe GPR,NUM */
int mfbhrbe_GPR_NUM(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_MFBHRBE;
	/* 011111AAAAABBBBBBBBBB01001011100 */
	dec->operand_n = 2;
	dec->operand_types[0] = PPC_OPER_TYPE_GPR;
	dec->operand_values[0] = (insword & 0x3E00000)>>21;
	dec->operand_types[1] = PPC_OPER_TYPE_NUM;
	dec->operand_values[1] = (insword & 0x1FF800)>>11;
	dec->operand_fmtstr = PPC_FMTSTR_GPR_C_NUM;
	return 0;
}

/* tlbie GPR,GPR */
int tlbie_GPR_GPR(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_TLBIE;
	/* 011111BBBBB00000AAAAA01001100100 */
	dec->operand_n = 2;
	dec->operand_types[0] = PPC_OPER_TYPE_GPR;
	dec->operand_values[0] = (insword & 0xF800)>>11;
	dec->operand_types[1] = PPC_OPER_TYPE_GPR;
	dec->operand_values[1] = (insword & 0x3E00000)>>21;
	dec->operand_fmtstr = PPC_FMTSTR_GPR_C_GPR;
	return 0;
}

/* mfvsrld GPR,VSREG */
int mfvsrld_GPR_VSREG(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_MFVSRLD;
	/* 011111BBBBBAAAAA000000100110011B */
	dec->operand_n = 2;
	dec->operand_types[0] = PPC_OPER_TYPE_GPR;
	dec->operand_values[0] = (insword & 0x1F0000)>>16;
	dec->operand_types[1] = PPC_OPER_TYPE_VSREG;
	dec->operand_values[1] = ((insword & 0x3E00000)>>20)|((insword & 0x1)>>0);
	dec->operand_fmtstr = PPC_FMTSTR_GPR_C_VSREG;
	return 0;
}

/* ldmx GPR,NUM,GPR */
int ldmx_GPR_NUM_GPR(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_LDMX;
	/* 011111AAAAA00000CCCCC01001101010 */
	dec->operand_n = 3;
	dec->operand_types[0] = PPC_OPER_TYPE_GPR;
	dec->operand_values[0] = (insword & 0x3E00000)>>21;
	dec->operand_types[1] = PPC_OPER_TYPE_NUM;
	dec->operand_types[2] = PPC_OPER_TYPE_GPR;
	dec->operand_values[2] = (insword & 0xF800)>>11;
	dec->operand_fmtstr = PPC_FMTSTR_GPR_C_NUM_C_GPR;
	return 0;
}

/* eciwx GPR,NUM,GPR */
int eciwx_GPR_NUM_GPR(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_ECIWX;
	/* 011111AAAAA00000CCCCC01001101100 */
	dec->operand_n = 3;
	dec->operand_types[0] = PPC_OPER_TYPE_GPR;
	dec->operand_values[0] = (insword & 0x3E00000)>>21;
	dec->operand_types[1] = PPC_OPER_TYPE_NUM;
	dec->operand_types[2] = PPC_OPER_TYPE_GPR;
	dec->operand_values[2] = (insword & 0xF800)>>11;
	dec->operand_fmtstr = PPC_FMTSTR_GPR_C_NUM_C_GPR;
	return 0;
}

/* cbcdtd GPR,GPR */
int cbcdtd_GPR_GPR(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_CBCDTD;
	/* 011111BBBBBAAAAA0000001001110100 */
	dec->operand_n = 2;
	dec->operand_types[0] = PPC_OPER_TYPE_GPR;
	dec->operand_values[0] = (insword & 0x1F0000)>>16;
	dec->operand_types[1] = PPC_OPER_TYPE_GPR;
	dec->operand_values[1] = (insword & 0x3E00000)>>21;
	dec->operand_fmtstr = PPC_FMTSTR_GPR_C_GPR;
	return 0;
}

/* xor GPR,GPR,GPR */
int xor_GPR_GPR_GPR(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_XOR;
	/* 011111BBBBBAAAAACCCCC01001111000 */
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

/* xor. GPR,GPR,GPR */
int xorD_GPR_GPR_GPR(uint32_t insword, struct ppc_decoded *dec)
{
	dec->properties |= PPC_PROPERTY_DOTTED;
	dec->mnemonic = PPC_MNEM_XOR;
	/* 011111BBBBBAAAAACCCCC01001111001 */
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

/* dcbtep GPR,NUM,GPR */
int dcbtep_GPR_NUM_GPR(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_DCBTEP;
	/* 011111AAAAA00000CCCCC01001111110 */
	dec->operand_n = 3;
	dec->operand_types[0] = PPC_OPER_TYPE_GPR;
	dec->operand_values[0] = (insword & 0x3E00000)>>21;
	dec->operand_types[1] = PPC_OPER_TYPE_NUM;
	dec->operand_types[2] = PPC_OPER_TYPE_GPR;
	dec->operand_values[2] = (insword & 0xF800)>>11;
	dec->operand_fmtstr = PPC_FMTSTR_GPR_C_NUM_C_GPR;
	return 0;
}

/* mfdcr GPR,NUM */
int mfdcr_GPR_NUM(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_MFDCR;
	/* 011111AAAAABBBBBBBBBB01010000110 */
	dec->operand_n = 2;
	dec->operand_types[0] = PPC_OPER_TYPE_GPR;
	dec->operand_values[0] = (insword & 0x3E00000)>>21;
	dec->operand_types[1] = PPC_OPER_TYPE_NUM;
	dec->operand_values[1] = (insword & 0x1FF800)>>11;
	dec->operand_fmtstr = PPC_FMTSTR_GPR_C_NUM;
	return 0;
}

/* mfdcr. GPR,NUM */
int mfdcrD_GPR_NUM(uint32_t insword, struct ppc_decoded *dec)
{
	dec->properties |= PPC_PROPERTY_DOTTED;
	dec->mnemonic = PPC_MNEM_MFDCR;
	/* 011111AAAAABBBBBBBBBB01010000111 */
	dec->operand_n = 2;
	dec->operand_types[0] = PPC_OPER_TYPE_GPR;
	dec->operand_values[0] = (insword & 0x3E00000)>>21;
	dec->operand_types[1] = PPC_OPER_TYPE_NUM;
	dec->operand_values[1] = (insword & 0x1FF800)>>11;
	dec->operand_fmtstr = PPC_FMTSTR_GPR_C_NUM;
	return 0;
}

/* lvexwx VREG,NUM,GPR */
int lvexwx_VREG_NUM_GPR(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_LVEXWX;
	/* 011111AAAAA00000CCCCC01010001010 */
	dec->operand_n = 3;
	dec->operand_types[0] = PPC_OPER_TYPE_VREG;
	dec->operand_values[0] = (insword & 0x3E00000)>>21;
	dec->operand_types[1] = PPC_OPER_TYPE_NUM;
	dec->operand_types[2] = PPC_OPER_TYPE_GPR;
	dec->operand_values[2] = (insword & 0xF800)>>11;
	dec->operand_fmtstr = PPC_FMTSTR_VREG_C_NUM_C_GPR;
	return 0;
}

/* dcread GPR,NUM,GPR */
int dcread_GPR_NUM_GPR(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_DCREAD;
	/* 011111AAAAA00000CCCCC01x1x001100 */
	dec->operand_n = 3;
	dec->operand_types[0] = PPC_OPER_TYPE_GPR;
	dec->operand_values[0] = (insword & 0x3E00000)>>21;
	dec->operand_types[1] = PPC_OPER_TYPE_NUM;
	dec->operand_types[2] = PPC_OPER_TYPE_GPR;
	dec->operand_values[2] = (insword & 0xF800)>>11;
	dec->operand_fmtstr = PPC_FMTSTR_GPR_C_NUM_C_GPR;
	return 0;
}

/* div GPR,GPR,GPR */
int div_GPR_GPR_GPR(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_DIV;
	/* 011111AAAAABBBBBCCCCC01010010110 */
	dec->operand_n = 3;
	dec->operand_types[0] = PPC_OPER_TYPE_GPR;
	dec->operand_values[0] = (insword & 0x3E00000)>>21;
	dec->operand_types[1] = PPC_OPER_TYPE_GPR;
	dec->operand_values[1] = (insword & 0x1F0000)>>16;
	dec->operand_types[2] = PPC_OPER_TYPE_GPR;
	dec->operand_values[2] = (insword & 0xF800)>>11;
	dec->operand_fmtstr = PPC_FMTSTR_GPR_C_GPR_C_GPR;
	return 0;
}

/* div. GPR,GPR,GPR */
int divD_GPR_GPR_GPR(uint32_t insword, struct ppc_decoded *dec)
{
	dec->properties |= PPC_PROPERTY_DOTTED;
	dec->mnemonic = PPC_MNEM_DIV;
	/* 011111AAAAABBBBBCCCCC01010010111 */
	dec->operand_n = 3;
	dec->operand_types[0] = PPC_OPER_TYPE_GPR;
	dec->operand_values[0] = (insword & 0x3E00000)>>21;
	dec->operand_types[1] = PPC_OPER_TYPE_GPR;
	dec->operand_values[1] = (insword & 0x1F0000)>>16;
	dec->operand_types[2] = PPC_OPER_TYPE_GPR;
	dec->operand_values[2] = (insword & 0xF800)>>11;
	dec->operand_fmtstr = PPC_FMTSTR_GPR_C_GPR_C_GPR;
	return 0;
}

/* lxvdsx VSREG,NUM,GPR */
int lxvdsx_VSREG_NUM_GPR(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_LXVDSX;
	/* 011111AAAAA00000CCCCC0101001100A */
	dec->operand_n = 3;
	dec->operand_types[0] = PPC_OPER_TYPE_VSREG;
	dec->operand_values[0] = ((insword & 0x3E00000)>>20)|((insword & 0x1)>>0);
	dec->operand_types[1] = PPC_OPER_TYPE_NUM;
	dec->operand_types[2] = PPC_OPER_TYPE_GPR;
	dec->operand_values[2] = (insword & 0xF800)>>11;
	dec->operand_fmtstr = PPC_FMTSTR_VSREG_C_NUM_C_GPR;
	return 0;
}

/* mfpmr GPR,NUM */
int mfpmr_GPR_NUM(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_MFPMR;
	/* 011111AAAAABBBBBBBBBB01010011100 */
	dec->operand_n = 2;
	dec->operand_types[0] = PPC_OPER_TYPE_GPR;
	dec->operand_values[0] = (insword & 0x3E00000)>>21;
	dec->operand_types[1] = PPC_OPER_TYPE_NUM;
	dec->operand_values[1] = (insword & 0x1FF800)>>11;
	dec->operand_fmtstr = PPC_FMTSTR_GPR_C_NUM;
	return 0;
}

/* slbsync */
int slbsync(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_SLBSYNC;
	return 0;
}

/* mfspr GPR,NUM */
int mfspr_GPR_NUM(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_MFSPR;
	/* 011111AAAAABBBBBBBBBB01010100110 */
	dec->operand_n = 2;
	dec->operand_types[0] = PPC_OPER_TYPE_GPR;
	dec->operand_values[0] = (insword & 0x3E00000)>>21;
	dec->operand_types[1] = PPC_OPER_TYPE_NUM;
	dec->operand_values[1] = (insword & 0x1FF800)>>11;
	dec->operand_fmtstr = PPC_FMTSTR_GPR_C_NUM;
	return 0;
}

/* lwax GPR,NUM,GPR */
int lwax_GPR_NUM_GPR(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_LWAX;
	/* 011111AAAAA00000CCCCC01010101010 */
	dec->operand_n = 3;
	dec->operand_types[0] = PPC_OPER_TYPE_GPR;
	dec->operand_values[0] = (insword & 0x3E00000)>>21;
	dec->operand_types[1] = PPC_OPER_TYPE_NUM;
	dec->operand_types[2] = PPC_OPER_TYPE_GPR;
	dec->operand_values[2] = (insword & 0xF800)>>11;
	dec->operand_fmtstr = PPC_FMTSTR_GPR_C_NUM_C_GPR;
	return 0;
}

/* dst GPR,GPR,NUM */
int dst_GPR_GPR_NUM(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_DST;
	/* 0111110xxCCAAAAABBBBB0101010110x */
	dec->operand_n = 3;
	dec->operand_types[0] = PPC_OPER_TYPE_GPR;
	dec->operand_values[0] = (insword & 0x1F0000)>>16;
	dec->operand_types[1] = PPC_OPER_TYPE_GPR;
	dec->operand_values[1] = (insword & 0xF800)>>11;
	dec->operand_types[2] = PPC_OPER_TYPE_NUM;
	dec->operand_values[2] = (insword & 0x600000)>>21;
	dec->operand_fmtstr = PPC_FMTSTR_GPR_C_GPR_C_NUM;
	return 0;
}

/* lhax GPR,NUM,GPR */
int lhax_GPR_NUM_GPR(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_LHAX;
	/* 011111AAAAA00000CCCCC01010101110 */
	dec->operand_n = 3;
	dec->operand_types[0] = PPC_OPER_TYPE_GPR;
	dec->operand_values[0] = (insword & 0x3E00000)>>21;
	dec->operand_types[1] = PPC_OPER_TYPE_NUM;
	dec->operand_types[2] = PPC_OPER_TYPE_GPR;
	dec->operand_values[2] = (insword & 0xF800)>>11;
	dec->operand_fmtstr = PPC_FMTSTR_GPR_C_NUM_C_GPR;
	return 0;
}

/* lvxl VREG,NUM,GPR */
int lvxl_VREG_NUM_GPR(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_LVXL;
	/* 011111AAAAA00000CCCCC01011001110 */
	dec->operand_n = 3;
	dec->operand_types[0] = PPC_OPER_TYPE_VREG;
	dec->operand_values[0] = (insword & 0x3E00000)>>21;
	dec->operand_types[1] = PPC_OPER_TYPE_NUM;
	dec->operand_types[2] = PPC_OPER_TYPE_GPR;
	dec->operand_values[2] = (insword & 0xF800)>>11;
	dec->operand_fmtstr = PPC_FMTSTR_VREG_C_NUM_C_GPR;
	return 0;
}

/* abs GPR,GPR */
int abs_GPR_GPR(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_ABS;
	/* 011111AAAAABBBBB0000001011010000 */
	dec->operand_n = 2;
	dec->operand_types[0] = PPC_OPER_TYPE_GPR;
	dec->operand_values[0] = (insword & 0x3E00000)>>21;
	dec->operand_types[1] = PPC_OPER_TYPE_GPR;
	dec->operand_values[1] = (insword & 0x1F0000)>>16;
	dec->operand_fmtstr = PPC_FMTSTR_GPR_C_GPR;
	return 0;
}

/* abs. GPR,GPR */
int absD_GPR_GPR(uint32_t insword, struct ppc_decoded *dec)
{
	dec->properties |= PPC_PROPERTY_DOTTED;
	dec->mnemonic = PPC_MNEM_ABS;
	/* 011111AAAAABBBBB0000001011010001 */
	dec->operand_n = 2;
	dec->operand_types[0] = PPC_OPER_TYPE_GPR;
	dec->operand_values[0] = (insword & 0x3E00000)>>21;
	dec->operand_types[1] = PPC_OPER_TYPE_GPR;
	dec->operand_values[1] = (insword & 0x1F0000)>>16;
	dec->operand_fmtstr = PPC_FMTSTR_GPR_C_GPR;
	return 0;
}

/* divs GPR,GPR,GPR */
int divs_GPR_GPR_GPR(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_DIVS;
	/* 011111AAAAABBBBBCCCCC01011010110 */
	dec->operand_n = 3;
	dec->operand_types[0] = PPC_OPER_TYPE_GPR;
	dec->operand_values[0] = (insword & 0x3E00000)>>21;
	dec->operand_types[1] = PPC_OPER_TYPE_GPR;
	dec->operand_values[1] = (insword & 0x1F0000)>>16;
	dec->operand_types[2] = PPC_OPER_TYPE_GPR;
	dec->operand_values[2] = (insword & 0xF800)>>11;
	dec->operand_fmtstr = PPC_FMTSTR_GPR_C_GPR_C_GPR;
	return 0;
}

/* divs. GPR,GPR,GPR */
int divsD_GPR_GPR_GPR(uint32_t insword, struct ppc_decoded *dec)
{
	dec->properties |= PPC_PROPERTY_DOTTED;
	dec->mnemonic = PPC_MNEM_DIVS;
	/* 011111AAAAABBBBBCCCCC01011010111 */
	dec->operand_n = 3;
	dec->operand_types[0] = PPC_OPER_TYPE_GPR;
	dec->operand_values[0] = (insword & 0x3E00000)>>21;
	dec->operand_types[1] = PPC_OPER_TYPE_GPR;
	dec->operand_values[1] = (insword & 0x1F0000)>>16;
	dec->operand_types[2] = PPC_OPER_TYPE_GPR;
	dec->operand_values[2] = (insword & 0xF800)>>11;
	dec->operand_fmtstr = PPC_FMTSTR_GPR_C_GPR_C_GPR;
	return 0;
}

/* lxvwsx VSREG,NUM,GPR */
int lxvwsx_VSREG_NUM_GPR(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_LXVWSX;
	/* 011111AAAAA00000CCCCC0101101100A */
	dec->operand_n = 3;
	dec->operand_types[0] = PPC_OPER_TYPE_VSREG;
	dec->operand_values[0] = ((insword & 0x3E00000)>>20)|((insword & 0x1)>>0);
	dec->operand_types[1] = PPC_OPER_TYPE_NUM;
	dec->operand_types[2] = PPC_OPER_TYPE_GPR;
	dec->operand_values[2] = (insword & 0xF800)>>11;
	dec->operand_fmtstr = PPC_FMTSTR_VSREG_C_NUM_C_GPR;
	return 0;
}

/* mftmr GPR,NUM */
int mftmr_GPR_NUM(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_MFTMR;
	/* 011111AAAAABBBBBBBBBB01011011100 */
	dec->operand_n = 2;
	dec->operand_types[0] = PPC_OPER_TYPE_GPR;
	dec->operand_values[0] = (insword & 0x3E00000)>>21;
	dec->operand_types[1] = PPC_OPER_TYPE_NUM;
	dec->operand_values[1] = (insword & 0x1FF800)>>11;
	dec->operand_fmtstr = PPC_FMTSTR_GPR_C_NUM;
	return 0;
}

/* tlbia */
int tlbia(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_TLBIA;
	return 0;
}

/* dstst GPR,GPR,NUM */
int dstst_GPR_GPR_NUM(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_DSTST;
	/* 0111110xxCCAAAAABBBBB0101110110x */
	dec->operand_n = 3;
	dec->operand_types[0] = PPC_OPER_TYPE_GPR;
	dec->operand_values[0] = (insword & 0x1F0000)>>16;
	dec->operand_types[1] = PPC_OPER_TYPE_GPR;
	dec->operand_values[1] = (insword & 0xF800)>>11;
	dec->operand_types[2] = PPC_OPER_TYPE_NUM;
	dec->operand_values[2] = (insword & 0x600000)>>21;
	dec->operand_fmtstr = PPC_FMTSTR_GPR_C_GPR_C_NUM;
	return 0;
}

/* popcntw GPR,GPR */
int popcntw_GPR_GPR(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_POPCNTW;
	/* 011111BBBBBAAAAA0000001011110100 */
	dec->operand_n = 2;
	dec->operand_types[0] = PPC_OPER_TYPE_GPR;
	dec->operand_values[0] = (insword & 0x1F0000)>>16;
	dec->operand_types[1] = PPC_OPER_TYPE_GPR;
	dec->operand_values[1] = (insword & 0x3E00000)>>21;
	dec->operand_fmtstr = PPC_FMTSTR_GPR_C_GPR;
	return 0;
}

/* mtdcrx GPR,GPR */
int mtdcrx_GPR_GPR(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_MTDCRX;
	/* 011111BBBBBAAAAAxxxxx01100000110 */
	dec->operand_n = 2;
	dec->operand_types[0] = PPC_OPER_TYPE_GPR;
	dec->operand_values[0] = (insword & 0x1F0000)>>16;
	dec->operand_types[1] = PPC_OPER_TYPE_GPR;
	dec->operand_values[1] = (insword & 0x3E00000)>>21;
	dec->operand_fmtstr = PPC_FMTSTR_GPR_C_GPR;
	return 0;
}

/* mtdcrx. GPR,GPR */
int mtdcrxD_GPR_GPR(uint32_t insword, struct ppc_decoded *dec)
{
	dec->properties |= PPC_PROPERTY_DOTTED;
	dec->mnemonic = PPC_MNEM_MTDCRX;
	/* 011111BBBBBAAAAAxxxxx01100000111 */
	dec->operand_n = 2;
	dec->operand_types[0] = PPC_OPER_TYPE_GPR;
	dec->operand_values[0] = (insword & 0x1F0000)>>16;
	dec->operand_types[1] = PPC_OPER_TYPE_GPR;
	dec->operand_values[1] = (insword & 0x3E00000)>>21;
	dec->operand_fmtstr = PPC_FMTSTR_GPR_C_GPR;
	return 0;
}

/* stvexbx VREG,NUM,GPR */
int stvexbx_VREG_NUM_GPR(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_STVEXBX;
	/* 011111AAAAA00000CCCCC01100001010 */
	dec->operand_n = 3;
	dec->operand_types[0] = PPC_OPER_TYPE_VREG;
	dec->operand_values[0] = (insword & 0x3E00000)>>21;
	dec->operand_types[1] = PPC_OPER_TYPE_NUM;
	dec->operand_types[2] = PPC_OPER_TYPE_GPR;
	dec->operand_values[2] = (insword & 0xF800)>>11;
	dec->operand_fmtstr = PPC_FMTSTR_VREG_C_NUM_C_GPR;
	return 0;
}

/* dcblc NUM,GPR */
int dcblc_NUM_GPR(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_DCBLC;
	/* 0111110000000000BBBBB01100001100 */
	dec->operand_n = 2;
	dec->operand_types[0] = PPC_OPER_TYPE_NUM;
	dec->operand_types[1] = PPC_OPER_TYPE_GPR;
	dec->operand_values[1] = (insword & 0xF800)>>11;
	dec->operand_fmtstr = PPC_FMTSTR_NUM_C_GPR;
	return 0;
}

/* stdfcmx FCREG,GPR,GPR */
int stdfcmx_FCREG_GPR_GPR(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_STDFCMX;
	/* 011111AAAAABBBBBCCCCC01100001110 */
	dec->operand_n = 3;
	dec->operand_types[0] = PPC_OPER_TYPE_FCREG;
	dec->operand_values[0] = (insword & 0x3E00000)>>21;
	dec->operand_types[1] = PPC_OPER_TYPE_GPR;
	dec->operand_values[1] = (insword & 0x1F0000)>>16;
	dec->operand_types[2] = PPC_OPER_TYPE_GPR;
	dec->operand_values[2] = (insword & 0xF800)>>11;
	dec->operand_fmtstr = PPC_FMTSTR_FCREG_C_GPR_C_GPR;
	return 0;
}

/* divdeu GPR,GPR,GPR */
int divdeu_GPR_GPR_GPR(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_DIVDEU;
	/* 011111AAAAABBBBBCCCCC01100010010 */
	dec->operand_n = 3;
	dec->operand_types[0] = PPC_OPER_TYPE_GPR;
	dec->operand_values[0] = (insword & 0x3E00000)>>21;
	dec->operand_types[1] = PPC_OPER_TYPE_GPR;
	dec->operand_values[1] = (insword & 0x1F0000)>>16;
	dec->operand_types[2] = PPC_OPER_TYPE_GPR;
	dec->operand_values[2] = (insword & 0xF800)>>11;
	dec->operand_fmtstr = PPC_FMTSTR_GPR_C_GPR_C_GPR;
	return 0;
}

/* divdeu. GPR,GPR,GPR */
int divdeuD_GPR_GPR_GPR(uint32_t insword, struct ppc_decoded *dec)
{
	dec->properties |= PPC_PROPERTY_DOTTED;
	dec->mnemonic = PPC_MNEM_DIVDEU;
	/* 011111AAAAABBBBBCCCCC01100010011 */
	dec->operand_n = 3;
	dec->operand_types[0] = PPC_OPER_TYPE_GPR;
	dec->operand_values[0] = (insword & 0x3E00000)>>21;
	dec->operand_types[1] = PPC_OPER_TYPE_GPR;
	dec->operand_values[1] = (insword & 0x1F0000)>>16;
	dec->operand_types[2] = PPC_OPER_TYPE_GPR;
	dec->operand_values[2] = (insword & 0xF800)>>11;
	dec->operand_fmtstr = PPC_FMTSTR_GPR_C_GPR_C_GPR;
	return 0;
}

/* divweu GPR,GPR,GPR */
int divweu_GPR_GPR_GPR(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_DIVWEU;
	/* 011111AAAAABBBBBCCCCC01100010110 */
	dec->operand_n = 3;
	dec->operand_types[0] = PPC_OPER_TYPE_GPR;
	dec->operand_values[0] = (insword & 0x3E00000)>>21;
	dec->operand_types[1] = PPC_OPER_TYPE_GPR;
	dec->operand_values[1] = (insword & 0x1F0000)>>16;
	dec->operand_types[2] = PPC_OPER_TYPE_GPR;
	dec->operand_values[2] = (insword & 0xF800)>>11;
	dec->operand_fmtstr = PPC_FMTSTR_GPR_C_GPR_C_GPR;
	return 0;
}

/* divweu. GPR,GPR,GPR */
int divweuD_GPR_GPR_GPR(uint32_t insword, struct ppc_decoded *dec)
{
	dec->properties |= PPC_PROPERTY_DOTTED;
	dec->mnemonic = PPC_MNEM_DIVWEU;
	/* 011111AAAAABBBBBCCCCC01100010111 */
	dec->operand_n = 3;
	dec->operand_types[0] = PPC_OPER_TYPE_GPR;
	dec->operand_values[0] = (insword & 0x3E00000)>>21;
	dec->operand_types[1] = PPC_OPER_TYPE_GPR;
	dec->operand_values[1] = (insword & 0x1F0000)>>16;
	dec->operand_types[2] = PPC_OPER_TYPE_GPR;
	dec->operand_values[2] = (insword & 0xF800)>>11;
	dec->operand_fmtstr = PPC_FMTSTR_GPR_C_GPR_C_GPR;
	return 0;
}

/* stxvx VSREG,NUM,GPR */
int stxvx_VSREG_NUM_GPR(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_STXVX;
	/* 011111AAAAA00000CCCCC0110001100A */
	dec->operand_n = 3;
	dec->operand_types[0] = PPC_OPER_TYPE_VSREG;
	dec->operand_values[0] = ((insword & 0x3E00000)>>20)|((insword & 0x1)>>0);
	dec->operand_types[1] = PPC_OPER_TYPE_NUM;
	dec->operand_types[2] = PPC_OPER_TYPE_GPR;
	dec->operand_values[2] = (insword & 0xF800)>>11;
	dec->operand_fmtstr = PPC_FMTSTR_VSREG_C_NUM_C_GPR;
	return 0;
}

/* stxvl VSREG,NUM,GPR */
int stxvl_VSREG_NUM_GPR(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_STXVL;
	/* 011111AAAAA00000CCCCC0110001101A */
	dec->operand_n = 3;
	dec->operand_types[0] = PPC_OPER_TYPE_VSREG;
	dec->operand_values[0] = ((insword & 0x3E00000)>>20)|((insword & 0x1)>>0);
	dec->operand_types[1] = PPC_OPER_TYPE_NUM;
	dec->operand_types[2] = PPC_OPER_TYPE_GPR;
	dec->operand_values[2] = (insword & 0xF800)>>11;
	dec->operand_fmtstr = PPC_FMTSTR_VSREG_C_NUM_C_GPR;
	return 0;
}

/* dcblce GPR,GPR */
int dcblce_GPR_GPR(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_DCBLCE;
	/* 01111100000AAAAABBBBB01100011100 */
	dec->operand_n = 2;
	dec->operand_types[0] = PPC_OPER_TYPE_GPR;
	dec->operand_values[0] = (insword & 0x1F0000)>>16;
	dec->operand_types[1] = PPC_OPER_TYPE_GPR;
	dec->operand_values[1] = (insword & 0xF800)>>11;
	dec->operand_fmtstr = PPC_FMTSTR_GPR_C_GPR;
	return 0;
}

/* slbmte GPR,GPR */
int slbmte_GPR_GPR(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_SLBMTE;
	/* 011111AAAAA00000BBBBB01100100100 */
	dec->operand_n = 2;
	dec->operand_types[0] = PPC_OPER_TYPE_GPR;
	dec->operand_values[0] = (insword & 0x3E00000)>>21;
	dec->operand_types[1] = PPC_OPER_TYPE_GPR;
	dec->operand_values[1] = (insword & 0xF800)>>11;
	dec->operand_fmtstr = PPC_FMTSTR_GPR_C_GPR;
	return 0;
}

/* mtvsrws VSREG,GPR */
int mtvsrws_VSREG_GPR(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_MTVSRWS;
	/* 011111AAAAABBBBB000000110010011A */
	dec->operand_n = 2;
	dec->operand_types[0] = PPC_OPER_TYPE_VSREG;
	dec->operand_values[0] = ((insword & 0x3E00000)>>20)|((insword & 0x1)>>0);
	dec->operand_types[1] = PPC_OPER_TYPE_GPR;
	dec->operand_values[1] = (insword & 0x1F0000)>>16;
	dec->operand_fmtstr = PPC_FMTSTR_VSREG_C_GPR;
	return 0;
}

/* pbt. GPR,NUM,GPR */
int pbtD_GPR_NUM_GPR(uint32_t insword, struct ppc_decoded *dec)
{
	dec->properties |= PPC_PROPERTY_DOTTED;
	dec->mnemonic = PPC_MNEM_PBT;
	/* 011111AAAAA00000CCCCC01100101001 */
	dec->operand_n = 3;
	dec->operand_types[0] = PPC_OPER_TYPE_GPR;
	dec->operand_values[0] = (insword & 0x3E00000)>>21;
	dec->operand_types[1] = PPC_OPER_TYPE_NUM;
	dec->operand_types[2] = PPC_OPER_TYPE_GPR;
	dec->operand_values[2] = (insword & 0xF800)>>11;
	dec->operand_fmtstr = PPC_FMTSTR_GPR_C_NUM_C_GPR;
	return 0;
}

/* icswx GPR,GPR,GPR */
int icswx_GPR_GPR_GPR(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_ICSWX;
	/* 011111AAAAABBBBBCCCCC01100101100 */
	dec->operand_n = 3;
	dec->operand_types[0] = PPC_OPER_TYPE_GPR;
	dec->operand_values[0] = (insword & 0x3E00000)>>21;
	dec->operand_types[1] = PPC_OPER_TYPE_GPR;
	dec->operand_values[1] = (insword & 0x1F0000)>>16;
	dec->operand_types[2] = PPC_OPER_TYPE_GPR;
	dec->operand_values[2] = (insword & 0xF800)>>11;
	dec->operand_fmtstr = PPC_FMTSTR_GPR_C_GPR_C_GPR;
	return 0;
}

/* icswx. GPR,GPR,GPR */
int icswxD_GPR_GPR_GPR(uint32_t insword, struct ppc_decoded *dec)
{
	dec->properties |= PPC_PROPERTY_DOTTED;
	dec->mnemonic = PPC_MNEM_ICSWX;
	/* 011111AAAAABBBBBCCCCC01100101101 */
	dec->operand_n = 3;
	dec->operand_types[0] = PPC_OPER_TYPE_GPR;
	dec->operand_values[0] = (insword & 0x3E00000)>>21;
	dec->operand_types[1] = PPC_OPER_TYPE_GPR;
	dec->operand_values[1] = (insword & 0x1F0000)>>16;
	dec->operand_types[2] = PPC_OPER_TYPE_GPR;
	dec->operand_values[2] = (insword & 0xF800)>>11;
	dec->operand_fmtstr = PPC_FMTSTR_GPR_C_GPR_C_GPR;
	return 0;
}

/* sthx GPR,NUM,GPR */
int sthx_GPR_NUM_GPR(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_STHX;
	/* 011111AAAAA00000CCCCC01100101110 */
	dec->operand_n = 3;
	dec->operand_types[0] = PPC_OPER_TYPE_GPR;
	dec->operand_values[0] = (insword & 0x3E00000)>>21;
	dec->operand_types[1] = PPC_OPER_TYPE_NUM;
	dec->operand_types[2] = PPC_OPER_TYPE_GPR;
	dec->operand_values[2] = (insword & 0xF800)>>11;
	dec->operand_fmtstr = PPC_FMTSTR_GPR_C_NUM_C_GPR;
	return 0;
}

/* orc GPR,GPR,GPR */
int orc_GPR_GPR_GPR(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_ORC;
	/* 011111BBBBBAAAAACCCCC01100111000 */
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

/* orc. GPR,GPR,GPR */
int orcD_GPR_GPR_GPR(uint32_t insword, struct ppc_decoded *dec)
{
	dec->properties |= PPC_PROPERTY_DOTTED;
	dec->mnemonic = PPC_MNEM_ORC;
	/* 011111BBBBBAAAAACCCCC01100111001 */
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

/* sthepx GPR,NUM,GPR */
int sthepx_GPR_NUM_GPR(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_STHEPX;
	/* 011111AAAAA00000CCCCC01100111110 */
	dec->operand_n = 3;
	dec->operand_types[0] = PPC_OPER_TYPE_GPR;
	dec->operand_values[0] = (insword & 0x3E00000)>>21;
	dec->operand_types[1] = PPC_OPER_TYPE_NUM;
	dec->operand_types[2] = PPC_OPER_TYPE_GPR;
	dec->operand_values[2] = (insword & 0xF800)>>11;
	dec->operand_fmtstr = PPC_FMTSTR_GPR_C_NUM_C_GPR;
	return 0;
}

/* mtdcrux GPR,GPR */
int mtdcrux_GPR_GPR(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_MTDCRUX;
	/* 011111BBBBBAAAAAxxxxx01101000110 */
	dec->operand_n = 2;
	dec->operand_types[0] = PPC_OPER_TYPE_GPR;
	dec->operand_values[0] = (insword & 0x1F0000)>>16;
	dec->operand_types[1] = PPC_OPER_TYPE_GPR;
	dec->operand_values[1] = (insword & 0x3E00000)>>21;
	dec->operand_fmtstr = PPC_FMTSTR_GPR_C_GPR;
	return 0;
}

/* stvexhx VREG,NUM,GPR */
int stvexhx_VREG_NUM_GPR(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_STVEXHX;
	/* 011111AAAAA00000CCCCC01101001010 */
	dec->operand_n = 3;
	dec->operand_types[0] = PPC_OPER_TYPE_VREG;
	dec->operand_values[0] = (insword & 0x3E00000)>>21;
	dec->operand_types[1] = PPC_OPER_TYPE_NUM;
	dec->operand_types[2] = PPC_OPER_TYPE_GPR;
	dec->operand_values[2] = (insword & 0xF800)>>11;
	dec->operand_fmtstr = PPC_FMTSTR_VREG_C_NUM_C_GPR;
	return 0;
}

/* dcblq. NUM,GPR */
int dcblqD_NUM_GPR(uint32_t insword, struct ppc_decoded *dec)
{
	dec->properties |= PPC_PROPERTY_DOTTED;
	dec->mnemonic = PPC_MNEM_DCBLQ;
	/* 0111110000000000BBBBB01101001101 */
	dec->operand_n = 2;
	dec->operand_types[0] = PPC_OPER_TYPE_NUM;
	dec->operand_types[1] = PPC_OPER_TYPE_GPR;
	dec->operand_values[1] = (insword & 0xF800)>>11;
	dec->operand_fmtstr = PPC_FMTSTR_NUM_C_GPR;
	return 0;
}

/* divde GPR,GPR,GPR */
int divde_GPR_GPR_GPR(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_DIVDE;
	/* 011111AAAAABBBBBCCCCC01101010010 */
	dec->operand_n = 3;
	dec->operand_types[0] = PPC_OPER_TYPE_GPR;
	dec->operand_values[0] = (insword & 0x3E00000)>>21;
	dec->operand_types[1] = PPC_OPER_TYPE_GPR;
	dec->operand_values[1] = (insword & 0x1F0000)>>16;
	dec->operand_types[2] = PPC_OPER_TYPE_GPR;
	dec->operand_values[2] = (insword & 0xF800)>>11;
	dec->operand_fmtstr = PPC_FMTSTR_GPR_C_GPR_C_GPR;
	return 0;
}

/* divde. GPR,GPR,GPR */
int divdeD_GPR_GPR_GPR(uint32_t insword, struct ppc_decoded *dec)
{
	dec->properties |= PPC_PROPERTY_DOTTED;
	dec->mnemonic = PPC_MNEM_DIVDE;
	/* 011111AAAAABBBBBCCCCC01101010011 */
	dec->operand_n = 3;
	dec->operand_types[0] = PPC_OPER_TYPE_GPR;
	dec->operand_values[0] = (insword & 0x3E00000)>>21;
	dec->operand_types[1] = PPC_OPER_TYPE_GPR;
	dec->operand_values[1] = (insword & 0x1F0000)>>16;
	dec->operand_types[2] = PPC_OPER_TYPE_GPR;
	dec->operand_values[2] = (insword & 0xF800)>>11;
	dec->operand_fmtstr = PPC_FMTSTR_GPR_C_GPR_C_GPR;
	return 0;
}

/* divwe GPR,GPR,GPR */
int divwe_GPR_GPR_GPR(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_DIVWE;
	/* 011111AAAAABBBBBCCCCC01101010110 */
	dec->operand_n = 3;
	dec->operand_types[0] = PPC_OPER_TYPE_GPR;
	dec->operand_values[0] = (insword & 0x3E00000)>>21;
	dec->operand_types[1] = PPC_OPER_TYPE_GPR;
	dec->operand_values[1] = (insword & 0x1F0000)>>16;
	dec->operand_types[2] = PPC_OPER_TYPE_GPR;
	dec->operand_values[2] = (insword & 0xF800)>>11;
	dec->operand_fmtstr = PPC_FMTSTR_GPR_C_GPR_C_GPR;
	return 0;
}

/* divwe. GPR,GPR,GPR */
int divweD_GPR_GPR_GPR(uint32_t insword, struct ppc_decoded *dec)
{
	dec->properties |= PPC_PROPERTY_DOTTED;
	dec->mnemonic = PPC_MNEM_DIVWE;
	/* 011111AAAAABBBBBCCCCC01101010111 */
	dec->operand_n = 3;
	dec->operand_types[0] = PPC_OPER_TYPE_GPR;
	dec->operand_values[0] = (insword & 0x3E00000)>>21;
	dec->operand_types[1] = PPC_OPER_TYPE_GPR;
	dec->operand_values[1] = (insword & 0x1F0000)>>16;
	dec->operand_types[2] = PPC_OPER_TYPE_GPR;
	dec->operand_values[2] = (insword & 0xF800)>>11;
	dec->operand_fmtstr = PPC_FMTSTR_GPR_C_GPR_C_GPR;
	return 0;
}

/* stxvll VSREG,NUM,GPR */
int stxvll_VSREG_NUM_GPR(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_STXVLL;
	/* 011111AAAAA00000CCCCC0110101101A */
	dec->operand_n = 3;
	dec->operand_types[0] = PPC_OPER_TYPE_VSREG;
	dec->operand_values[0] = ((insword & 0x3E00000)>>20)|((insword & 0x1)>>0);
	dec->operand_types[1] = PPC_OPER_TYPE_NUM;
	dec->operand_types[2] = PPC_OPER_TYPE_GPR;
	dec->operand_values[2] = (insword & 0xF800)>>11;
	dec->operand_fmtstr = PPC_FMTSTR_VSREG_C_NUM_C_GPR;
	return 0;
}

/* clrbhrb */
int clrbhrb(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_CLRBHRB;
	return 0;
}

/* slbie GPR */
int slbie_GPR(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_SLBIE;
	/* 0111110000000000AAAAA01101100100 */
	dec->operand_n = 1;
	dec->operand_types[0] = PPC_OPER_TYPE_GPR;
	dec->operand_values[0] = (insword & 0xF800)>>11;
	dec->operand_fmtstr = PPC_FMTSTR_GPR;
	return 0;
}

/* mtvsrdd VSREG,NUM,GPR */
int mtvsrdd_VSREG_NUM_GPR(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_MTVSRDD;
	/* 011111AAAAA00000CCCCC0110110011A */
	dec->operand_n = 3;
	dec->operand_types[0] = PPC_OPER_TYPE_VSREG;
	dec->operand_values[0] = ((insword & 0x3E00000)>>20)|((insword & 0x1)>>0);
	dec->operand_types[1] = PPC_OPER_TYPE_NUM;
	dec->operand_types[2] = PPC_OPER_TYPE_GPR;
	dec->operand_values[2] = (insword & 0xF800)>>11;
	dec->operand_fmtstr = PPC_FMTSTR_VSREG_C_NUM_C_GPR;
	return 0;
}

/* ecowx GPR,NUM,GPR */
int ecowx_GPR_NUM_GPR(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_ECOWX;
	/* 011111AAAAA00000CCCCC01101101100 */
	dec->operand_n = 3;
	dec->operand_types[0] = PPC_OPER_TYPE_GPR;
	dec->operand_values[0] = (insword & 0x3E00000)>>21;
	dec->operand_types[1] = PPC_OPER_TYPE_NUM;
	dec->operand_types[2] = PPC_OPER_TYPE_GPR;
	dec->operand_values[2] = (insword & 0xF800)>>11;
	dec->operand_fmtstr = PPC_FMTSTR_GPR_C_NUM_C_GPR;
	return 0;
}

/* mr GPR,GPR */
int mr_GPR_GPR(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_MR;
	/* 011111xxxxxAAAAAxxxxx01101111000 */
	dec->operand_n = 2;
	dec->operand_types[0] = PPC_OPER_TYPE_GPR;
	dec->operand_values[0] = (insword & 0x1F0000)>>16;
	dec->operand_types[1] = PPC_OPER_TYPE_GPR;
	dec->operand_fmtstr = PPC_FMTSTR_GPR_C_GPR;
	return 0;
}

/* mr. GPR,GPR */
int mrD_GPR_GPR(uint32_t insword, struct ppc_decoded *dec)
{
	dec->properties |= PPC_PROPERTY_DOTTED;
	dec->mnemonic = PPC_MNEM_MR;
	/* 011111xxxxxAAAAAxxxxx01101111001 */
	dec->operand_n = 2;
	dec->operand_types[0] = PPC_OPER_TYPE_GPR;
	dec->operand_values[0] = (insword & 0x1F0000)>>16;
	dec->operand_types[1] = PPC_OPER_TYPE_GPR;
	dec->operand_fmtstr = PPC_FMTSTR_GPR_C_GPR;
	return 0;
}

/* mtdcr NUM,GPR */
int mtdcr_NUM_GPR(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_MTDCR;
	/* 011111BBBBBAAAAAAAAAA01110000110 */
	dec->operand_n = 2;
	dec->operand_types[0] = PPC_OPER_TYPE_NUM;
	dec->operand_values[0] = (insword & 0x1FF800)>>11;
	dec->operand_types[1] = PPC_OPER_TYPE_GPR;
	dec->operand_values[1] = (insword & 0x3E00000)>>21;
	dec->operand_fmtstr = PPC_FMTSTR_NUM_C_GPR;
	return 0;
}

/* mtdcr. NUM,GPR */
int mtdcrD_NUM_GPR(uint32_t insword, struct ppc_decoded *dec)
{
	dec->properties |= PPC_PROPERTY_DOTTED;
	dec->mnemonic = PPC_MNEM_MTDCR;
	/* 011111BBBBBAAAAAAAAAA01110000111 */
	dec->operand_n = 2;
	dec->operand_types[0] = PPC_OPER_TYPE_NUM;
	dec->operand_values[0] = (insword & 0x1FF800)>>11;
	dec->operand_types[1] = PPC_OPER_TYPE_GPR;
	dec->operand_values[1] = (insword & 0x3E00000)>>21;
	dec->operand_fmtstr = PPC_FMTSTR_NUM_C_GPR;
	return 0;
}

/* stvexwx VREG,NUM,GPR */
int stvexwx_VREG_NUM_GPR(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_STVEXWX;
	/* 011111AAAAA00000CCCCC01110001010 */
	dec->operand_n = 3;
	dec->operand_types[0] = PPC_OPER_TYPE_VREG;
	dec->operand_values[0] = (insword & 0x3E00000)>>21;
	dec->operand_types[1] = PPC_OPER_TYPE_NUM;
	dec->operand_types[2] = PPC_OPER_TYPE_GPR;
	dec->operand_values[2] = (insword & 0xF800)>>11;
	dec->operand_fmtstr = PPC_FMTSTR_VREG_C_NUM_C_GPR;
	return 0;
}

/* dccci */
int dccci(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_DCCCI;
	return 0;
}

/* divdu GPR,GPR,GPR */
int divdu_GPR_GPR_GPR(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_DIVDU;
	/* 011111AAAAABBBBBCCCCC01110010010 */
	dec->operand_n = 3;
	dec->operand_types[0] = PPC_OPER_TYPE_GPR;
	dec->operand_values[0] = (insword & 0x3E00000)>>21;
	dec->operand_types[1] = PPC_OPER_TYPE_GPR;
	dec->operand_values[1] = (insword & 0x1F0000)>>16;
	dec->operand_types[2] = PPC_OPER_TYPE_GPR;
	dec->operand_values[2] = (insword & 0xF800)>>11;
	dec->operand_fmtstr = PPC_FMTSTR_GPR_C_GPR_C_GPR;
	return 0;
}

/* divdu. GPR,GPR,GPR */
int divduD_GPR_GPR_GPR(uint32_t insword, struct ppc_decoded *dec)
{
	dec->properties |= PPC_PROPERTY_DOTTED;
	dec->mnemonic = PPC_MNEM_DIVDU;
	/* 011111AAAAABBBBBCCCCC01110010011 */
	dec->operand_n = 3;
	dec->operand_types[0] = PPC_OPER_TYPE_GPR;
	dec->operand_values[0] = (insword & 0x3E00000)>>21;
	dec->operand_types[1] = PPC_OPER_TYPE_GPR;
	dec->operand_values[1] = (insword & 0x1F0000)>>16;
	dec->operand_types[2] = PPC_OPER_TYPE_GPR;
	dec->operand_values[2] = (insword & 0xF800)>>11;
	dec->operand_fmtstr = PPC_FMTSTR_GPR_C_GPR_C_GPR;
	return 0;
}

/* divwu GPR,GPR,GPR */
int divwu_GPR_GPR_GPR(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_DIVWU;
	/* 011111AAAAABBBBBCCCCC01110010110 */
	dec->operand_n = 3;
	dec->operand_types[0] = PPC_OPER_TYPE_GPR;
	dec->operand_values[0] = (insword & 0x3E00000)>>21;
	dec->operand_types[1] = PPC_OPER_TYPE_GPR;
	dec->operand_values[1] = (insword & 0x1F0000)>>16;
	dec->operand_types[2] = PPC_OPER_TYPE_GPR;
	dec->operand_values[2] = (insword & 0xF800)>>11;
	dec->operand_fmtstr = PPC_FMTSTR_GPR_C_GPR_C_GPR;
	return 0;
}

/* divwu. GPR,GPR,GPR */
int divwuD_GPR_GPR_GPR(uint32_t insword, struct ppc_decoded *dec)
{
	dec->properties |= PPC_PROPERTY_DOTTED;
	dec->mnemonic = PPC_MNEM_DIVWU;
	/* 011111AAAAABBBBBCCCCC01110010111 */
	dec->operand_n = 3;
	dec->operand_types[0] = PPC_OPER_TYPE_GPR;
	dec->operand_values[0] = (insword & 0x3E00000)>>21;
	dec->operand_types[1] = PPC_OPER_TYPE_GPR;
	dec->operand_values[1] = (insword & 0x1F0000)>>16;
	dec->operand_types[2] = PPC_OPER_TYPE_GPR;
	dec->operand_values[2] = (insword & 0xF800)>>11;
	dec->operand_fmtstr = PPC_FMTSTR_GPR_C_GPR_C_GPR;
	return 0;
}

/* mtpmr NUM,GPR */
int mtpmr_NUM_GPR(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_MTPMR;
	/* 011111BBBBBAAAAAAAAAA01110011100 */
	dec->operand_n = 2;
	dec->operand_types[0] = PPC_OPER_TYPE_NUM;
	dec->operand_values[0] = (insword & 0x1FF800)>>11;
	dec->operand_types[1] = PPC_OPER_TYPE_GPR;
	dec->operand_values[1] = (insword & 0x3E00000)>>21;
	dec->operand_fmtstr = PPC_FMTSTR_NUM_C_GPR;
	return 0;
}

/* slbieg GPR,GPR */
int slbieg_GPR_GPR(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_SLBIEG;
	/* 011111AAAAA00000BBBBB01110100100 */
	dec->operand_n = 2;
	dec->operand_types[0] = PPC_OPER_TYPE_GPR;
	dec->operand_values[0] = (insword & 0x3E00000)>>21;
	dec->operand_types[1] = PPC_OPER_TYPE_GPR;
	dec->operand_values[1] = (insword & 0xF800)>>11;
	dec->operand_fmtstr = PPC_FMTSTR_GPR_C_GPR;
	return 0;
}

/* mtspr NUM,GPR */
int mtspr_NUM_GPR(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_MTSPR;
	/* 011111BBBBBAAAAAAAAAA01110100110 */
	dec->operand_n = 2;
	dec->operand_types[0] = PPC_OPER_TYPE_NUM;
	dec->operand_values[0] = (insword & 0x1FF800)>>11;
	dec->operand_types[1] = PPC_OPER_TYPE_GPR;
	dec->operand_values[1] = (insword & 0x3E00000)>>21;
	dec->operand_fmtstr = PPC_FMTSTR_NUM_C_GPR;
	return 0;
}

/* dcbi NUM,GPR */
int dcbi_NUM_GPR(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_DCBI;
	/* 0111110000000000BBBBB01110101100 */
	dec->operand_n = 2;
	dec->operand_types[0] = PPC_OPER_TYPE_NUM;
	dec->operand_types[1] = PPC_OPER_TYPE_GPR;
	dec->operand_values[1] = (insword & 0xF800)>>11;
	dec->operand_fmtstr = PPC_FMTSTR_NUM_C_GPR;
	return 0;
}

/* nand GPR,GPR,GPR */
int nand_GPR_GPR_GPR(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_NAND;
	/* 011111BBBBBAAAAACCCCC01110111000 */
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

/* nand. GPR,GPR,GPR */
int nandD_GPR_GPR_GPR(uint32_t insword, struct ppc_decoded *dec)
{
	dec->properties |= PPC_PROPERTY_DOTTED;
	dec->mnemonic = PPC_MNEM_NAND;
	/* 011111BBBBBAAAAACCCCC01110111001 */
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

/* dsn GPR,GPR */
int dsn_GPR_GPR(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_DSN;
	/* 01111100000AAAAABBBBB01111000110 */
	dec->operand_n = 2;
	dec->operand_types[0] = PPC_OPER_TYPE_GPR;
	dec->operand_values[0] = (insword & 0x1F0000)>>16;
	dec->operand_types[1] = PPC_OPER_TYPE_GPR;
	dec->operand_values[1] = (insword & 0xF800)>>11;
	dec->operand_fmtstr = PPC_FMTSTR_GPR_C_GPR;
	return 0;
}

/* stvxl VREG,NUM,GPR */
int stvxl_VREG_NUM_GPR(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_STVXL;
	/* 011111AAAAA00000CCCCC01111001110 */
	dec->operand_n = 3;
	dec->operand_types[0] = PPC_OPER_TYPE_VREG;
	dec->operand_values[0] = (insword & 0x3E00000)>>21;
	dec->operand_types[1] = PPC_OPER_TYPE_NUM;
	dec->operand_types[2] = PPC_OPER_TYPE_GPR;
	dec->operand_values[2] = (insword & 0xF800)>>11;
	dec->operand_fmtstr = PPC_FMTSTR_VREG_C_NUM_C_GPR;
	return 0;
}

/* nabs GPR,GPR */
int nabs_GPR_GPR(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_NABS;
	/* 011111AAAAABBBBB0000001111010000 */
	dec->operand_n = 2;
	dec->operand_types[0] = PPC_OPER_TYPE_GPR;
	dec->operand_values[0] = (insword & 0x3E00000)>>21;
	dec->operand_types[1] = PPC_OPER_TYPE_GPR;
	dec->operand_values[1] = (insword & 0x1F0000)>>16;
	dec->operand_fmtstr = PPC_FMTSTR_GPR_C_GPR;
	return 0;
}

/* nabs. GPR,GPR */
int nabsD_GPR_GPR(uint32_t insword, struct ppc_decoded *dec)
{
	dec->properties |= PPC_PROPERTY_DOTTED;
	dec->mnemonic = PPC_MNEM_NABS;
	/* 011111AAAAABBBBB0000001111010001 */
	dec->operand_n = 2;
	dec->operand_types[0] = PPC_OPER_TYPE_GPR;
	dec->operand_values[0] = (insword & 0x3E00000)>>21;
	dec->operand_types[1] = PPC_OPER_TYPE_GPR;
	dec->operand_values[1] = (insword & 0x1F0000)>>16;
	dec->operand_fmtstr = PPC_FMTSTR_GPR_C_GPR;
	return 0;
}

/* divd GPR,GPR,GPR */
int divd_GPR_GPR_GPR(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_DIVD;
	/* 011111AAAAABBBBBCCCCC01111010010 */
	dec->operand_n = 3;
	dec->operand_types[0] = PPC_OPER_TYPE_GPR;
	dec->operand_values[0] = (insword & 0x3E00000)>>21;
	dec->operand_types[1] = PPC_OPER_TYPE_GPR;
	dec->operand_values[1] = (insword & 0x1F0000)>>16;
	dec->operand_types[2] = PPC_OPER_TYPE_GPR;
	dec->operand_values[2] = (insword & 0xF800)>>11;
	dec->operand_fmtstr = PPC_FMTSTR_GPR_C_GPR_C_GPR;
	return 0;
}

/* divd. GPR,GPR,GPR */
int divdD_GPR_GPR_GPR(uint32_t insword, struct ppc_decoded *dec)
{
	dec->properties |= PPC_PROPERTY_DOTTED;
	dec->mnemonic = PPC_MNEM_DIVD;
	/* 011111AAAAABBBBBCCCCC01111010011 */
	dec->operand_n = 3;
	dec->operand_types[0] = PPC_OPER_TYPE_GPR;
	dec->operand_values[0] = (insword & 0x3E00000)>>21;
	dec->operand_types[1] = PPC_OPER_TYPE_GPR;
	dec->operand_values[1] = (insword & 0x1F0000)>>16;
	dec->operand_types[2] = PPC_OPER_TYPE_GPR;
	dec->operand_values[2] = (insword & 0xF800)>>11;
	dec->operand_fmtstr = PPC_FMTSTR_GPR_C_GPR_C_GPR;
	return 0;
}

/* divw GPR,GPR,GPR */
int divw_GPR_GPR_GPR(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_DIVW;
	/* 011111AAAAABBBBBCCCCC01111010110 */
	dec->operand_n = 3;
	dec->operand_types[0] = PPC_OPER_TYPE_GPR;
	dec->operand_values[0] = (insword & 0x3E00000)>>21;
	dec->operand_types[1] = PPC_OPER_TYPE_GPR;
	dec->operand_values[1] = (insword & 0x1F0000)>>16;
	dec->operand_types[2] = PPC_OPER_TYPE_GPR;
	dec->operand_values[2] = (insword & 0xF800)>>11;
	dec->operand_fmtstr = PPC_FMTSTR_GPR_C_GPR_C_GPR;
	return 0;
}

/* divw. GPR,GPR,GPR */
int divwD_GPR_GPR_GPR(uint32_t insword, struct ppc_decoded *dec)
{
	dec->properties |= PPC_PROPERTY_DOTTED;
	dec->mnemonic = PPC_MNEM_DIVW;
	/* 011111AAAAABBBBBCCCCC01111010111 */
	dec->operand_n = 3;
	dec->operand_types[0] = PPC_OPER_TYPE_GPR;
	dec->operand_values[0] = (insword & 0x3E00000)>>21;
	dec->operand_types[1] = PPC_OPER_TYPE_GPR;
	dec->operand_values[1] = (insword & 0x1F0000)>>16;
	dec->operand_types[2] = PPC_OPER_TYPE_GPR;
	dec->operand_values[2] = (insword & 0xF800)>>11;
	dec->operand_fmtstr = PPC_FMTSTR_GPR_C_GPR_C_GPR;
	return 0;
}

/* mttmr NUM,GPR */
int mttmr_NUM_GPR(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_MTTMR;
	/* 011111BBBBBAAAAAAAAAA01111011100 */
	dec->operand_n = 2;
	dec->operand_types[0] = PPC_OPER_TYPE_NUM;
	dec->operand_values[0] = (insword & 0x1FF800)>>11;
	dec->operand_types[1] = PPC_OPER_TYPE_GPR;
	dec->operand_values[1] = (insword & 0x3E00000)>>21;
	dec->operand_fmtstr = PPC_FMTSTR_NUM_C_GPR;
	return 0;
}

/* slbia */
int slbia(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_SLBIA;
	return 0;
}

/* cli GPR,GPR */
int cli_GPR_GPR(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_CLI;
	/* 011111AAAAABBBBB0000001111101100 */
	dec->operand_n = 2;
	dec->operand_types[0] = PPC_OPER_TYPE_GPR;
	dec->operand_values[0] = (insword & 0x3E00000)>>21;
	dec->operand_types[1] = PPC_OPER_TYPE_GPR;
	dec->operand_values[1] = (insword & 0x1F0000)>>16;
	dec->operand_fmtstr = PPC_FMTSTR_GPR_C_GPR;
	return 0;
}

/* popcntd GPR,GPR */
int popcntd_GPR_GPR(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_POPCNTD;
	/* 011111BBBBBAAAAA0000001111110100 */
	dec->operand_n = 2;
	dec->operand_types[0] = PPC_OPER_TYPE_GPR;
	dec->operand_values[0] = (insword & 0x1F0000)>>16;
	dec->operand_types[1] = PPC_OPER_TYPE_GPR;
	dec->operand_values[1] = (insword & 0x3E00000)>>21;
	dec->operand_fmtstr = PPC_FMTSTR_GPR_C_GPR;
	return 0;
}

/* cmpb GPR,GPR,GPR */
int cmpb_GPR_GPR_GPR(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_CMPB;
	/* 011111BBBBBAAAAACCCCC01111111000 */
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

/* mcrxr CREG */
int mcrxr_CREG(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_MCRXR;
	/* 011111AAA00000000000010000000000 */
	dec->operand_n = 1;
	dec->operand_types[0] = PPC_OPER_TYPE_CREG;
	dec->operand_values[0] = (insword & 0x3800000)>>23;
	dec->operand_fmtstr = PPC_FMTSTR_CREG;
	return 0;
}

/* lbdcbx GPR,GPR,GPR */
int lbdcbx_GPR_GPR_GPR(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_LBDCBX;
	/* 011111AAAAABBBBBCCCCC10000000100 */
	dec->operand_n = 3;
	dec->operand_types[0] = PPC_OPER_TYPE_GPR;
	dec->operand_values[0] = (insword & 0x3E00000)>>21;
	dec->operand_types[1] = PPC_OPER_TYPE_GPR;
	dec->operand_values[1] = (insword & 0x1F0000)>>16;
	dec->operand_types[2] = PPC_OPER_TYPE_GPR;
	dec->operand_values[2] = (insword & 0xF800)>>11;
	dec->operand_fmtstr = PPC_FMTSTR_GPR_C_GPR_C_GPR;
	return 0;
}

/* lbdx GPR,GPR,GPR */
int lbdx_GPR_GPR_GPR(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_LBDX;
	/* 011111AAAAABBBBBCCCCC10000000110 */
	dec->operand_n = 3;
	dec->operand_types[0] = PPC_OPER_TYPE_GPR;
	dec->operand_values[0] = (insword & 0x3E00000)>>21;
	dec->operand_types[1] = PPC_OPER_TYPE_GPR;
	dec->operand_values[1] = (insword & 0x1F0000)>>16;
	dec->operand_types[2] = PPC_OPER_TYPE_GPR;
	dec->operand_values[2] = (insword & 0xF800)>>11;
	dec->operand_fmtstr = PPC_FMTSTR_GPR_C_GPR_C_GPR;
	return 0;
}

/* bblels */
int bblels(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_BBLELS;
	return 0;
}

/* lvlx VREG,NUM,GPR */
int lvlx_VREG_NUM_GPR(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_LVLX;
	/* 011111AAAAA00000CCCCC10000001110 */
	dec->operand_n = 3;
	dec->operand_types[0] = PPC_OPER_TYPE_VREG;
	dec->operand_values[0] = (insword & 0x3E00000)>>21;
	dec->operand_types[1] = PPC_OPER_TYPE_NUM;
	dec->operand_types[2] = PPC_OPER_TYPE_GPR;
	dec->operand_values[2] = (insword & 0xF800)>>11;
	dec->operand_fmtstr = PPC_FMTSTR_VREG_C_NUM_C_GPR;
	return 0;
}

/* subfco GPR,GPR,GPR */
int subfco_GPR_GPR_GPR(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_SUBFCO;
	/* 011111AAAAABBBBBCCCCC10000010000 */
	dec->operand_n = 3;
	dec->operand_types[0] = PPC_OPER_TYPE_GPR;
	dec->operand_values[0] = (insword & 0x3E00000)>>21;
	dec->operand_types[1] = PPC_OPER_TYPE_GPR;
	dec->operand_values[1] = (insword & 0x1F0000)>>16;
	dec->operand_types[2] = PPC_OPER_TYPE_GPR;
	dec->operand_values[2] = (insword & 0xF800)>>11;
	dec->operand_fmtstr = PPC_FMTSTR_GPR_C_GPR_C_GPR;
	return 0;
}

/* subfco. GPR,GPR,GPR */
int subfcoD_GPR_GPR_GPR(uint32_t insword, struct ppc_decoded *dec)
{
	dec->properties |= PPC_PROPERTY_DOTTED;
	dec->mnemonic = PPC_MNEM_SUBFCO;
	/* 011111AAAAABBBBBCCCCC10000010001 */
	dec->operand_n = 3;
	dec->operand_types[0] = PPC_OPER_TYPE_GPR;
	dec->operand_values[0] = (insword & 0x3E00000)>>21;
	dec->operand_types[1] = PPC_OPER_TYPE_GPR;
	dec->operand_values[1] = (insword & 0x1F0000)>>16;
	dec->operand_types[2] = PPC_OPER_TYPE_GPR;
	dec->operand_values[2] = (insword & 0xF800)>>11;
	dec->operand_fmtstr = PPC_FMTSTR_GPR_C_GPR_C_GPR;
	return 0;
}

/* addco GPR,GPR,GPR */
int addco_GPR_GPR_GPR(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_ADDCO;
	/* 011111AAAAABBBBBCCCCC10000010100 */
	dec->operand_n = 3;
	dec->operand_types[0] = PPC_OPER_TYPE_GPR;
	dec->operand_values[0] = (insword & 0x3E00000)>>21;
	dec->operand_types[1] = PPC_OPER_TYPE_GPR;
	dec->operand_values[1] = (insword & 0x1F0000)>>16;
	dec->operand_types[2] = PPC_OPER_TYPE_GPR;
	dec->operand_values[2] = (insword & 0xF800)>>11;
	dec->operand_fmtstr = PPC_FMTSTR_GPR_C_GPR_C_GPR;
	return 0;
}

/* addco. GPR,GPR,GPR */
int addcoD_GPR_GPR_GPR(uint32_t insword, struct ppc_decoded *dec)
{
	dec->properties |= PPC_PROPERTY_DOTTED;
	dec->mnemonic = PPC_MNEM_ADDCO;
	/* 011111AAAAABBBBBCCCCC10000010101 */
	dec->operand_n = 3;
	dec->operand_types[0] = PPC_OPER_TYPE_GPR;
	dec->operand_values[0] = (insword & 0x3E00000)>>21;
	dec->operand_types[1] = PPC_OPER_TYPE_GPR;
	dec->operand_values[1] = (insword & 0x1F0000)>>16;
	dec->operand_types[2] = PPC_OPER_TYPE_GPR;
	dec->operand_values[2] = (insword & 0xF800)>>11;
	dec->operand_fmtstr = PPC_FMTSTR_GPR_C_GPR_C_GPR;
	return 0;
}

/* lxsspx VSREG,NUM,GPR */
int lxsspx_VSREG_NUM_GPR(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_LXSSPX;
	/* 011111AAAAA00000CCCCC1000001100A */
	dec->operand_n = 3;
	dec->operand_types[0] = PPC_OPER_TYPE_VSREG;
	dec->operand_values[0] = ((insword & 0x3E00000)>>20)|((insword & 0x1)>>0);
	dec->operand_types[1] = PPC_OPER_TYPE_NUM;
	dec->operand_types[2] = PPC_OPER_TYPE_GPR;
	dec->operand_values[2] = (insword & 0xF800)>>11;
	dec->operand_fmtstr = PPC_FMTSTR_VSREG_C_NUM_C_GPR;
	return 0;
}

/* clcs GPR,GPR */
int clcs_GPR_GPR(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_CLCS;
	/* 011111AAAAABBBBB0000010000100110 */
	dec->operand_n = 2;
	dec->operand_types[0] = PPC_OPER_TYPE_GPR;
	dec->operand_values[0] = (insword & 0x3E00000)>>21;
	dec->operand_types[1] = PPC_OPER_TYPE_GPR;
	dec->operand_values[1] = (insword & 0x1F0000)>>16;
	dec->operand_fmtstr = PPC_FMTSTR_GPR_C_GPR;
	return 0;
}

/* ldbrx GPR,NUM,GPR */
int ldbrx_GPR_NUM_GPR(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_LDBRX;
	/* 011111AAAAA00000CCCCC10000101000 */
	dec->operand_n = 3;
	dec->operand_types[0] = PPC_OPER_TYPE_GPR;
	dec->operand_values[0] = (insword & 0x3E00000)>>21;
	dec->operand_types[1] = PPC_OPER_TYPE_NUM;
	dec->operand_types[2] = PPC_OPER_TYPE_GPR;
	dec->operand_values[2] = (insword & 0xF800)>>11;
	dec->operand_fmtstr = PPC_FMTSTR_GPR_C_NUM_C_GPR;
	return 0;
}

/* lsx GPR,GPR,GPR */
int lsx_GPR_GPR_GPR(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_LSX;
	/* 011111xxxxxxxxxxCCCCC10000101010 */
	dec->operand_n = 3;
	dec->operand_types[0] = PPC_OPER_TYPE_GPR;
	dec->operand_types[1] = PPC_OPER_TYPE_GPR;
	dec->operand_types[2] = PPC_OPER_TYPE_GPR;
	dec->operand_values[2] = (insword & 0xF800)>>11;
	dec->operand_fmtstr = PPC_FMTSTR_GPR_C_GPR_C_GPR;
	return 0;
}

/* lwbrx GPR,NUM,GPR */
int lwbrx_GPR_NUM_GPR(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_LWBRX;
	/* 011111AAAAA00000CCCCC10000101100 */
	dec->operand_n = 3;
	dec->operand_types[0] = PPC_OPER_TYPE_GPR;
	dec->operand_values[0] = (insword & 0x3E00000)>>21;
	dec->operand_types[1] = PPC_OPER_TYPE_NUM;
	dec->operand_types[2] = PPC_OPER_TYPE_GPR;
	dec->operand_values[2] = (insword & 0xF800)>>11;
	dec->operand_fmtstr = PPC_FMTSTR_GPR_C_NUM_C_GPR;
	return 0;
}

/* lfsx FREG,NUM,GPR */
int lfsx_FREG_NUM_GPR(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_LFSX;
	/* 011111AAAAA00000CCCCC10000101110 */
	dec->operand_n = 3;
	dec->operand_types[0] = PPC_OPER_TYPE_FREG;
	dec->operand_values[0] = (insword & 0x3E00000)>>21;
	dec->operand_types[1] = PPC_OPER_TYPE_NUM;
	dec->operand_types[2] = PPC_OPER_TYPE_GPR;
	dec->operand_values[2] = (insword & 0xF800)>>11;
	dec->operand_fmtstr = PPC_FMTSTR_FREG_C_NUM_C_GPR;
	return 0;
}

/* srw GPR,GPR,GPR */
int srw_GPR_GPR_GPR(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_SRW;
	/* 011111BBBBBAAAAACCCCC10000110000 */
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

/* srw. GPR,GPR,GPR */
int srwD_GPR_GPR_GPR(uint32_t insword, struct ppc_decoded *dec)
{
	dec->properties |= PPC_PROPERTY_DOTTED;
	dec->mnemonic = PPC_MNEM_SRW;
	/* 011111BBBBBAAAAACCCCC10000110001 */
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

/* rrib GPR,GPR,GPR */
int rrib_GPR_GPR_GPR(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_RRIB;
	/* 011111BBBBBAAAAACCCCC10000110010 */
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

/* rrib. GPR,GPR,GPR */
int rribD_GPR_GPR_GPR(uint32_t insword, struct ppc_decoded *dec)
{
	dec->properties |= PPC_PROPERTY_DOTTED;
	dec->mnemonic = PPC_MNEM_RRIB;
	/* 011111BBBBBAAAAACCCCC10000110011 */
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

/* cnttzw GPR,GPR */
int cnttzw_GPR_GPR(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_CNTTZW;
	/* 011111BBBBBAAAAA0000010000110100 */
	dec->operand_n = 2;
	dec->operand_types[0] = PPC_OPER_TYPE_GPR;
	dec->operand_values[0] = (insword & 0x1F0000)>>16;
	dec->operand_types[1] = PPC_OPER_TYPE_GPR;
	dec->operand_values[1] = (insword & 0x3E00000)>>21;
	dec->operand_fmtstr = PPC_FMTSTR_GPR_C_GPR;
	return 0;
}

/* cnttzw. GPR,GPR */
int cnttzwD_GPR_GPR(uint32_t insword, struct ppc_decoded *dec)
{
	dec->properties |= PPC_PROPERTY_DOTTED;
	dec->mnemonic = PPC_MNEM_CNTTZW;
	/* 011111BBBBBAAAAA0000010000110101 */
	dec->operand_n = 2;
	dec->operand_types[0] = PPC_OPER_TYPE_GPR;
	dec->operand_values[0] = (insword & 0x1F0000)>>16;
	dec->operand_types[1] = PPC_OPER_TYPE_GPR;
	dec->operand_values[1] = (insword & 0x3E00000)>>21;
	dec->operand_fmtstr = PPC_FMTSTR_GPR_C_GPR;
	return 0;
}

/* srd GPR,GPR,GPR */
int srd_GPR_GPR_GPR(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_SRD;
	/* 011111BBBBBAAAAACCCCC10000110110 */
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

/* srd. GPR,GPR,GPR */
int srdD_GPR_GPR_GPR(uint32_t insword, struct ppc_decoded *dec)
{
	dec->properties |= PPC_PROPERTY_DOTTED;
	dec->mnemonic = PPC_MNEM_SRD;
	/* 011111BBBBBAAAAACCCCC10000110111 */
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

/* maskir GPR,GPR,GPR */
int maskir_GPR_GPR_GPR(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_MASKIR;
	/* 011111BBBBBAAAAACCCCC10000111010 */
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

/* maskir. GPR,GPR,GPR */
int maskirD_GPR_GPR_GPR(uint32_t insword, struct ppc_decoded *dec)
{
	dec->properties |= PPC_PROPERTY_DOTTED;
	dec->mnemonic = PPC_MNEM_MASKIR;
	/* 011111BBBBBAAAAACCCCC10000111011 */
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

/* lhdcbx GPR,GPR,GPR */
int lhdcbx_GPR_GPR_GPR(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_LHDCBX;
	/* 011111AAAAABBBBBCCCCC10001000100 */
	dec->operand_n = 3;
	dec->operand_types[0] = PPC_OPER_TYPE_GPR;
	dec->operand_values[0] = (insword & 0x3E00000)>>21;
	dec->operand_types[1] = PPC_OPER_TYPE_GPR;
	dec->operand_values[1] = (insword & 0x1F0000)>>16;
	dec->operand_types[2] = PPC_OPER_TYPE_GPR;
	dec->operand_values[2] = (insword & 0xF800)>>11;
	dec->operand_fmtstr = PPC_FMTSTR_GPR_C_GPR_C_GPR;
	return 0;
}

/* lhdx GPR,GPR,GPR */
int lhdx_GPR_GPR_GPR(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_LHDX;
	/* 011111AAAAABBBBBCCCCC10001000110 */
	dec->operand_n = 3;
	dec->operand_types[0] = PPC_OPER_TYPE_GPR;
	dec->operand_values[0] = (insword & 0x3E00000)>>21;
	dec->operand_types[1] = PPC_OPER_TYPE_GPR;
	dec->operand_values[1] = (insword & 0x1F0000)>>16;
	dec->operand_types[2] = PPC_OPER_TYPE_GPR;
	dec->operand_values[2] = (insword & 0xF800)>>11;
	dec->operand_fmtstr = PPC_FMTSTR_GPR_C_GPR_C_GPR;
	return 0;
}

/* lvtrx VREG,NUM,GPR */
int lvtrx_VREG_NUM_GPR(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_LVTRX;
	/* 011111AAAAA00000CCCCC10001001010 */
	dec->operand_n = 3;
	dec->operand_types[0] = PPC_OPER_TYPE_VREG;
	dec->operand_values[0] = (insword & 0x3E00000)>>21;
	dec->operand_types[1] = PPC_OPER_TYPE_NUM;
	dec->operand_types[2] = PPC_OPER_TYPE_GPR;
	dec->operand_values[2] = (insword & 0xF800)>>11;
	dec->operand_fmtstr = PPC_FMTSTR_VREG_C_NUM_C_GPR;
	return 0;
}

/* bbelr */
int bbelr(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_BBELR;
	return 0;
}

/* lvrx VREG,NUM,GPR */
int lvrx_VREG_NUM_GPR(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_LVRX;
	/* 011111AAAAA00000CCCCC10001001110 */
	dec->operand_n = 3;
	dec->operand_types[0] = PPC_OPER_TYPE_VREG;
	dec->operand_values[0] = (insword & 0x3E00000)>>21;
	dec->operand_types[1] = PPC_OPER_TYPE_NUM;
	dec->operand_types[2] = PPC_OPER_TYPE_GPR;
	dec->operand_values[2] = (insword & 0xF800)>>11;
	dec->operand_fmtstr = PPC_FMTSTR_VREG_C_NUM_C_GPR;
	return 0;
}

/* subfo GPR,GPR,GPR */
int subfo_GPR_GPR_GPR(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_SUBFO;
	/* 011111AAAAABBBBBCCCCC10001010000 */
	dec->operand_n = 3;
	dec->operand_types[0] = PPC_OPER_TYPE_GPR;
	dec->operand_values[0] = (insword & 0x3E00000)>>21;
	dec->operand_types[1] = PPC_OPER_TYPE_GPR;
	dec->operand_values[1] = (insword & 0x1F0000)>>16;
	dec->operand_types[2] = PPC_OPER_TYPE_GPR;
	dec->operand_values[2] = (insword & 0xF800)>>11;
	dec->operand_fmtstr = PPC_FMTSTR_GPR_C_GPR_C_GPR;
	return 0;
}

/* subfo. GPR,GPR,GPR */
int subfoD_GPR_GPR_GPR(uint32_t insword, struct ppc_decoded *dec)
{
	dec->properties |= PPC_PROPERTY_DOTTED;
	dec->mnemonic = PPC_MNEM_SUBFO;
	/* 011111AAAAABBBBBCCCCC10001010001 */
	dec->operand_n = 3;
	dec->operand_types[0] = PPC_OPER_TYPE_GPR;
	dec->operand_values[0] = (insword & 0x3E00000)>>21;
	dec->operand_types[1] = PPC_OPER_TYPE_GPR;
	dec->operand_values[1] = (insword & 0x1F0000)>>16;
	dec->operand_types[2] = PPC_OPER_TYPE_GPR;
	dec->operand_values[2] = (insword & 0xF800)>>11;
	dec->operand_fmtstr = PPC_FMTSTR_GPR_C_GPR_C_GPR;
	return 0;
}

/* tlbsync */
int tlbsync(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_TLBSYNC;
	return 0;
}

/* cnttzd GPR,GPR */
int cnttzd_GPR_GPR(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_CNTTZD;
	/* 011111BBBBBAAAAA0000010001110100 */
	dec->operand_n = 2;
	dec->operand_types[0] = PPC_OPER_TYPE_GPR;
	dec->operand_values[0] = (insword & 0x1F0000)>>16;
	dec->operand_types[1] = PPC_OPER_TYPE_GPR;
	dec->operand_values[1] = (insword & 0x3E00000)>>21;
	dec->operand_fmtstr = PPC_FMTSTR_GPR_C_GPR;
	return 0;
}

/* cnttzd. GPR,GPR */
int cnttzdD_GPR_GPR(uint32_t insword, struct ppc_decoded *dec)
{
	dec->properties |= PPC_PROPERTY_DOTTED;
	dec->mnemonic = PPC_MNEM_CNTTZD;
	/* 011111BBBBBAAAAA0000010001110101 */
	dec->operand_n = 2;
	dec->operand_types[0] = PPC_OPER_TYPE_GPR;
	dec->operand_values[0] = (insword & 0x1F0000)>>16;
	dec->operand_types[1] = PPC_OPER_TYPE_GPR;
	dec->operand_values[1] = (insword & 0x3E00000)>>21;
	dec->operand_fmtstr = PPC_FMTSTR_GPR_C_GPR;
	return 0;
}

/* mcrxrx CREG */
int mcrxrx_CREG(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_MCRXRX;
	/* 011111AAA00000000000010010000000 */
	dec->operand_n = 1;
	dec->operand_types[0] = PPC_OPER_TYPE_CREG;
	dec->operand_values[0] = (insword & 0x3800000)>>23;
	dec->operand_fmtstr = PPC_FMTSTR_CREG;
	return 0;
}

/* lwdcbx GPR,GPR,GPR */
int lwdcbx_GPR_GPR_GPR(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_LWDCBX;
	/* 011111AAAAABBBBBCCCCC10010000100 */
	dec->operand_n = 3;
	dec->operand_types[0] = PPC_OPER_TYPE_GPR;
	dec->operand_values[0] = (insword & 0x3E00000)>>21;
	dec->operand_types[1] = PPC_OPER_TYPE_GPR;
	dec->operand_values[1] = (insword & 0x1F0000)>>16;
	dec->operand_types[2] = PPC_OPER_TYPE_GPR;
	dec->operand_values[2] = (insword & 0xF800)>>11;
	dec->operand_fmtstr = PPC_FMTSTR_GPR_C_GPR_C_GPR;
	return 0;
}

/* lwdx GPR,GPR,GPR */
int lwdx_GPR_GPR_GPR(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_LWDX;
	/* 011111AAAAABBBBBCCCCC10010000110 */
	dec->operand_n = 3;
	dec->operand_types[0] = PPC_OPER_TYPE_GPR;
	dec->operand_values[0] = (insword & 0x3E00000)>>21;
	dec->operand_types[1] = PPC_OPER_TYPE_GPR;
	dec->operand_values[1] = (insword & 0x1F0000)>>16;
	dec->operand_types[2] = PPC_OPER_TYPE_GPR;
	dec->operand_values[2] = (insword & 0xF800)>>11;
	dec->operand_fmtstr = PPC_FMTSTR_GPR_C_GPR_C_GPR;
	return 0;
}

/* lvtlx VREG,NUM,GPR */
int lvtlx_VREG_NUM_GPR(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_LVTLX;
	/* 011111AAAAA00000CCCCC10010001010 */
	dec->operand_n = 3;
	dec->operand_types[0] = PPC_OPER_TYPE_VREG;
	dec->operand_values[0] = (insword & 0x3E00000)>>21;
	dec->operand_types[1] = PPC_OPER_TYPE_NUM;
	dec->operand_types[2] = PPC_OPER_TYPE_GPR;
	dec->operand_values[2] = (insword & 0xF800)>>11;
	dec->operand_fmtstr = PPC_FMTSTR_VREG_C_NUM_C_GPR;
	return 0;
}

/* lwat GPR,NUM,NUM */
int lwat_GPR_NUM_NUM(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_LWAT;
	/* 011111AAAAA00000CCCCC10010001100 */
	dec->operand_n = 3;
	dec->operand_types[0] = PPC_OPER_TYPE_GPR;
	dec->operand_values[0] = (insword & 0x3E00000)>>21;
	dec->operand_types[1] = PPC_OPER_TYPE_NUM;
	dec->operand_types[2] = PPC_OPER_TYPE_NUM;
	dec->operand_values[2] = (insword & 0xF800)>>11;
	dec->operand_fmtstr = PPC_FMTSTR_GPR_C_NUM_C_NUM;
	return 0;
}

/* lwfcmux FCREG,GPR,GPR */
int lwfcmux_FCREG_GPR_GPR(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_LWFCMUX;
	/* 011111AAAAABBBBBCCCCC10010001110 */
	dec->operand_n = 3;
	dec->operand_types[0] = PPC_OPER_TYPE_FCREG;
	dec->operand_values[0] = (insword & 0x3E00000)>>21;
	dec->operand_types[1] = PPC_OPER_TYPE_GPR;
	dec->operand_values[1] = (insword & 0x1F0000)>>16;
	dec->operand_types[2] = PPC_OPER_TYPE_GPR;
	dec->operand_values[2] = (insword & 0xF800)>>11;
	dec->operand_fmtstr = PPC_FMTSTR_FCREG_C_GPR_C_GPR;
	return 0;
}

/* lxsdx VSREG,NUM,GPR */
int lxsdx_VSREG_NUM_GPR(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_LXSDX;
	/* 011111AAAAA00000CCCCC1001001100A */
	dec->operand_n = 3;
	dec->operand_types[0] = PPC_OPER_TYPE_VSREG;
	dec->operand_values[0] = ((insword & 0x3E00000)>>20)|((insword & 0x1)>>0);
	dec->operand_types[1] = PPC_OPER_TYPE_NUM;
	dec->operand_types[2] = PPC_OPER_TYPE_GPR;
	dec->operand_values[2] = (insword & 0xF800)>>11;
	dec->operand_fmtstr = PPC_FMTSTR_VSREG_C_NUM_C_GPR;
	return 0;
}

/* mfsr GPR,NUM */
int mfsr_GPR_NUM(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_MFSR;
	/* 011111AAAAA0BBBB0000010010100110 */
	dec->operand_n = 2;
	dec->operand_types[0] = PPC_OPER_TYPE_GPR;
	dec->operand_values[0] = (insword & 0x3E00000)>>21;
	dec->operand_types[1] = PPC_OPER_TYPE_NUM;
	dec->operand_values[1] = (insword & 0xF0000)>>16;
	dec->operand_fmtstr = PPC_FMTSTR_GPR_C_NUM;
	return 0;
}

/* lsi GPR,NUM,NUM */
int lsi_GPR_NUM_NUM(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_LSI;
	/* 0111110000000000CCCCC10010101010 */
	dec->operand_n = 3;
	dec->operand_types[0] = PPC_OPER_TYPE_GPR;
	dec->operand_types[1] = PPC_OPER_TYPE_NUM;
	dec->operand_types[2] = PPC_OPER_TYPE_NUM;
	dec->operand_values[2] = (insword & 0xF800)>>11;
	dec->operand_fmtstr = PPC_FMTSTR_GPR_C_NUM_C_NUM;
	return 0;
}

/* hwsync */
int hwsync(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_HWSYNC;
	return 0;
}

/* lfdx FREG,NUM,GPR */
int lfdx_FREG_NUM_GPR(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_LFDX;
	/* 011111AAAAA00000CCCCC10010101110 */
	dec->operand_n = 3;
	dec->operand_types[0] = PPC_OPER_TYPE_FREG;
	dec->operand_values[0] = (insword & 0x3E00000)>>21;
	dec->operand_types[1] = PPC_OPER_TYPE_NUM;
	dec->operand_types[2] = PPC_OPER_TYPE_GPR;
	dec->operand_values[2] = (insword & 0xF800)>>11;
	dec->operand_fmtstr = PPC_FMTSTR_FREG_C_NUM_C_GPR;
	return 0;
}

/* mffgpr FREG,GPR */
int mffgpr_FREG_GPR(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_MFFGPR;
	/* 011111AAAAA00000BBBBB10010111110 */
	dec->operand_n = 2;
	dec->operand_types[0] = PPC_OPER_TYPE_FREG;
	dec->operand_values[0] = (insword & 0x3E00000)>>21;
	dec->operand_types[1] = PPC_OPER_TYPE_GPR;
	dec->operand_values[1] = (insword & 0xF800)>>11;
	dec->operand_fmtstr = PPC_FMTSTR_FREG_C_GPR;
	return 0;
}

/* lddx GPR,GPR,GPR */
int lddx_GPR_GPR_GPR(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_LDDX;
	/* 011111AAAAABBBBBCCCCC10011000110 */
	dec->operand_n = 3;
	dec->operand_types[0] = PPC_OPER_TYPE_GPR;
	dec->operand_values[0] = (insword & 0x3E00000)>>21;
	dec->operand_types[1] = PPC_OPER_TYPE_GPR;
	dec->operand_values[1] = (insword & 0x1F0000)>>16;
	dec->operand_types[2] = PPC_OPER_TYPE_GPR;
	dec->operand_values[2] = (insword & 0xF800)>>11;
	dec->operand_fmtstr = PPC_FMTSTR_GPR_C_GPR_C_GPR;
	return 0;
}

/* lvswx VREG,NUM,GPR */
int lvswx_VREG_NUM_GPR(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_LVSWX;
	/* 011111AAAAA00000CCCCC10011001010 */
	dec->operand_n = 3;
	dec->operand_types[0] = PPC_OPER_TYPE_VREG;
	dec->operand_values[0] = (insword & 0x3E00000)>>21;
	dec->operand_types[1] = PPC_OPER_TYPE_NUM;
	dec->operand_types[2] = PPC_OPER_TYPE_GPR;
	dec->operand_values[2] = (insword & 0xF800)>>11;
	dec->operand_fmtstr = PPC_FMTSTR_VREG_C_NUM_C_GPR;
	return 0;
}

/* ldat GPR,NUM,NUM */
int ldat_GPR_NUM_NUM(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_LDAT;
	/* 011111AAAAA00000CCCCC10011001100 */
	dec->operand_n = 3;
	dec->operand_types[0] = PPC_OPER_TYPE_GPR;
	dec->operand_values[0] = (insword & 0x3E00000)>>21;
	dec->operand_types[1] = PPC_OPER_TYPE_NUM;
	dec->operand_types[2] = PPC_OPER_TYPE_NUM;
	dec->operand_values[2] = (insword & 0xF800)>>11;
	dec->operand_fmtstr = PPC_FMTSTR_GPR_C_NUM_C_NUM;
	return 0;
}

/* lqfcmux FCREG,GPR,GPR */
int lqfcmux_FCREG_GPR_GPR(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_LQFCMUX;
	/* 011111AAAAABBBBBCCCCC10011001110 */
	dec->operand_n = 3;
	dec->operand_types[0] = PPC_OPER_TYPE_FCREG;
	dec->operand_values[0] = (insword & 0x3E00000)>>21;
	dec->operand_types[1] = PPC_OPER_TYPE_GPR;
	dec->operand_values[1] = (insword & 0x1F0000)>>16;
	dec->operand_types[2] = PPC_OPER_TYPE_GPR;
	dec->operand_values[2] = (insword & 0xF800)>>11;
	dec->operand_fmtstr = PPC_FMTSTR_FCREG_C_GPR_C_GPR;
	return 0;
}

/* nego GPR,GPR */
int nego_GPR_GPR(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_NEGO;
	/* 011111AAAAABBBBB0000010011010000 */
	dec->operand_n = 2;
	dec->operand_types[0] = PPC_OPER_TYPE_GPR;
	dec->operand_values[0] = (insword & 0x3E00000)>>21;
	dec->operand_types[1] = PPC_OPER_TYPE_GPR;
	dec->operand_values[1] = (insword & 0x1F0000)>>16;
	dec->operand_fmtstr = PPC_FMTSTR_GPR_C_GPR;
	return 0;
}

/* nego. GPR,GPR */
int negoD_GPR_GPR(uint32_t insword, struct ppc_decoded *dec)
{
	dec->properties |= PPC_PROPERTY_DOTTED;
	dec->mnemonic = PPC_MNEM_NEGO;
	/* 011111AAAAABBBBB0000010011010001 */
	dec->operand_n = 2;
	dec->operand_types[0] = PPC_OPER_TYPE_GPR;
	dec->operand_values[0] = (insword & 0x3E00000)>>21;
	dec->operand_types[1] = PPC_OPER_TYPE_GPR;
	dec->operand_values[1] = (insword & 0x1F0000)>>16;
	dec->operand_fmtstr = PPC_FMTSTR_GPR_C_GPR;
	return 0;
}

/* mulo GPR,GPR,GPR */
int mulo_GPR_GPR_GPR(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_MULO;
	/* 011111AAAAABBBBBCCCCC10011010110 */
	dec->operand_n = 3;
	dec->operand_types[0] = PPC_OPER_TYPE_GPR;
	dec->operand_values[0] = (insword & 0x3E00000)>>21;
	dec->operand_types[1] = PPC_OPER_TYPE_GPR;
	dec->operand_values[1] = (insword & 0x1F0000)>>16;
	dec->operand_types[2] = PPC_OPER_TYPE_GPR;
	dec->operand_values[2] = (insword & 0xF800)>>11;
	dec->operand_fmtstr = PPC_FMTSTR_GPR_C_GPR_C_GPR;
	return 0;
}

/* mulo. GPR,GPR,GPR */
int muloD_GPR_GPR_GPR(uint32_t insword, struct ppc_decoded *dec)
{
	dec->properties |= PPC_PROPERTY_DOTTED;
	dec->mnemonic = PPC_MNEM_MULO;
	/* 011111AAAAABBBBBCCCCC10011010111 */
	dec->operand_n = 3;
	dec->operand_types[0] = PPC_OPER_TYPE_GPR;
	dec->operand_values[0] = (insword & 0x3E00000)>>21;
	dec->operand_types[1] = PPC_OPER_TYPE_GPR;
	dec->operand_values[1] = (insword & 0x1F0000)>>16;
	dec->operand_types[2] = PPC_OPER_TYPE_GPR;
	dec->operand_values[2] = (insword & 0xF800)>>11;
	dec->operand_fmtstr = PPC_FMTSTR_GPR_C_GPR_C_GPR;
	return 0;
}

/* mfsri GPR,GPR,GPR */
int mfsri_GPR_GPR_GPR(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_MFSRI;
	/* 011111AAAAABBBBBCCCCC10011100110 */
	dec->operand_n = 3;
	dec->operand_types[0] = PPC_OPER_TYPE_GPR;
	dec->operand_values[0] = (insword & 0x3E00000)>>21;
	dec->operand_types[1] = PPC_OPER_TYPE_GPR;
	dec->operand_values[1] = (insword & 0x1F0000)>>16;
	dec->operand_types[2] = PPC_OPER_TYPE_GPR;
	dec->operand_values[2] = (insword & 0xF800)>>11;
	dec->operand_fmtstr = PPC_FMTSTR_GPR_C_GPR_C_GPR;
	return 0;
}

/* dclst GPR,GPR */
int dclst_GPR_GPR(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_DCLST;
	/* 011111AAAAABBBBB0000010011101100 */
	dec->operand_n = 2;
	dec->operand_types[0] = PPC_OPER_TYPE_GPR;
	dec->operand_values[0] = (insword & 0x3E00000)>>21;
	dec->operand_types[1] = PPC_OPER_TYPE_GPR;
	dec->operand_values[1] = (insword & 0x1F0000)>>16;
	dec->operand_fmtstr = PPC_FMTSTR_GPR_C_GPR;
	return 0;
}

/* stbdcbx GPR,GPR,GPR */
int stbdcbx_GPR_GPR_GPR(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_STBDCBX;
	/* 011111AAAAABBBBBCCCCC10100000100 */
	dec->operand_n = 3;
	dec->operand_types[0] = PPC_OPER_TYPE_GPR;
	dec->operand_values[0] = (insword & 0x3E00000)>>21;
	dec->operand_types[1] = PPC_OPER_TYPE_GPR;
	dec->operand_values[1] = (insword & 0x1F0000)>>16;
	dec->operand_types[2] = PPC_OPER_TYPE_GPR;
	dec->operand_values[2] = (insword & 0xF800)>>11;
	dec->operand_fmtstr = PPC_FMTSTR_GPR_C_GPR_C_GPR;
	return 0;
}

/* stbdx GPR,GPR,GPR */
int stbdx_GPR_GPR_GPR(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_STBDX;
	/* 011111AAAAABBBBBCCCCC10100000110 */
	dec->operand_n = 3;
	dec->operand_types[0] = PPC_OPER_TYPE_GPR;
	dec->operand_values[0] = (insword & 0x3E00000)>>21;
	dec->operand_types[1] = PPC_OPER_TYPE_GPR;
	dec->operand_values[1] = (insword & 0x1F0000)>>16;
	dec->operand_types[2] = PPC_OPER_TYPE_GPR;
	dec->operand_values[2] = (insword & 0xF800)>>11;
	dec->operand_fmtstr = PPC_FMTSTR_GPR_C_GPR_C_GPR;
	return 0;
}

/* stvlx VREG,NUM,GPR */
int stvlx_VREG_NUM_GPR(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_STVLX;
	/* 011111AAAAA00000CCCCC10100001110 */
	dec->operand_n = 3;
	dec->operand_types[0] = PPC_OPER_TYPE_VREG;
	dec->operand_values[0] = (insword & 0x3E00000)>>21;
	dec->operand_types[1] = PPC_OPER_TYPE_NUM;
	dec->operand_types[2] = PPC_OPER_TYPE_GPR;
	dec->operand_values[2] = (insword & 0xF800)>>11;
	dec->operand_fmtstr = PPC_FMTSTR_VREG_C_NUM_C_GPR;
	return 0;
}

/* subfeo GPR,GPR,GPR */
int subfeo_GPR_GPR_GPR(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_SUBFEO;
	/* 011111AAAAABBBBBCCCCC10100010000 */
	dec->operand_n = 3;
	dec->operand_types[0] = PPC_OPER_TYPE_GPR;
	dec->operand_values[0] = (insword & 0x3E00000)>>21;
	dec->operand_types[1] = PPC_OPER_TYPE_GPR;
	dec->operand_values[1] = (insword & 0x1F0000)>>16;
	dec->operand_types[2] = PPC_OPER_TYPE_GPR;
	dec->operand_values[2] = (insword & 0xF800)>>11;
	dec->operand_fmtstr = PPC_FMTSTR_GPR_C_GPR_C_GPR;
	return 0;
}

/* subfeo. GPR,GPR,GPR */
int subfeoD_GPR_GPR_GPR(uint32_t insword, struct ppc_decoded *dec)
{
	dec->properties |= PPC_PROPERTY_DOTTED;
	dec->mnemonic = PPC_MNEM_SUBFEO;
	/* 011111AAAAABBBBBCCCCC10100010001 */
	dec->operand_n = 3;
	dec->operand_types[0] = PPC_OPER_TYPE_GPR;
	dec->operand_values[0] = (insword & 0x3E00000)>>21;
	dec->operand_types[1] = PPC_OPER_TYPE_GPR;
	dec->operand_values[1] = (insword & 0x1F0000)>>16;
	dec->operand_types[2] = PPC_OPER_TYPE_GPR;
	dec->operand_values[2] = (insword & 0xF800)>>11;
	dec->operand_fmtstr = PPC_FMTSTR_GPR_C_GPR_C_GPR;
	return 0;
}

/* addeo GPR,GPR,GPR */
int addeo_GPR_GPR_GPR(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_ADDEO;
	/* 011111AAAAABBBBBCCCCC10100010100 */
	dec->operand_n = 3;
	dec->operand_types[0] = PPC_OPER_TYPE_GPR;
	dec->operand_values[0] = (insword & 0x3E00000)>>21;
	dec->operand_types[1] = PPC_OPER_TYPE_GPR;
	dec->operand_values[1] = (insword & 0x1F0000)>>16;
	dec->operand_types[2] = PPC_OPER_TYPE_GPR;
	dec->operand_values[2] = (insword & 0xF800)>>11;
	dec->operand_fmtstr = PPC_FMTSTR_GPR_C_GPR_C_GPR;
	return 0;
}

/* addeo. GPR,GPR,GPR */
int addeoD_GPR_GPR_GPR(uint32_t insword, struct ppc_decoded *dec)
{
	dec->properties |= PPC_PROPERTY_DOTTED;
	dec->mnemonic = PPC_MNEM_ADDEO;
	/* 011111AAAAABBBBBCCCCC10100010101 */
	dec->operand_n = 3;
	dec->operand_types[0] = PPC_OPER_TYPE_GPR;
	dec->operand_values[0] = (insword & 0x3E00000)>>21;
	dec->operand_types[1] = PPC_OPER_TYPE_GPR;
	dec->operand_values[1] = (insword & 0x1F0000)>>16;
	dec->operand_types[2] = PPC_OPER_TYPE_GPR;
	dec->operand_values[2] = (insword & 0xF800)>>11;
	dec->operand_fmtstr = PPC_FMTSTR_GPR_C_GPR_C_GPR;
	return 0;
}

/* stxsspx VSREG,NUM,GPR */
int stxsspx_VSREG_NUM_GPR(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_STXSSPX;
	/* 011111AAAAA00000CCCCC1010001100A */
	dec->operand_n = 3;
	dec->operand_types[0] = PPC_OPER_TYPE_VSREG;
	dec->operand_values[0] = ((insword & 0x3E00000)>>20)|((insword & 0x1)>>0);
	dec->operand_types[1] = PPC_OPER_TYPE_NUM;
	dec->operand_types[2] = PPC_OPER_TYPE_GPR;
	dec->operand_values[2] = (insword & 0xF800)>>11;
	dec->operand_fmtstr = PPC_FMTSTR_VSREG_C_NUM_C_GPR;
	return 0;
}

/* tbegin. */
int tbeginD(uint32_t insword, struct ppc_decoded *dec)
{
	dec->properties |= PPC_PROPERTY_DOTTED;
	dec->mnemonic = PPC_MNEM_TBEGIN;
	return 0;
}

/* mfsrin GPR,GPR */
int mfsrin_GPR_GPR(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_MFSRIN;
	/* 011111AAAAA00000BBBBB10100100110 */
	dec->operand_n = 2;
	dec->operand_types[0] = PPC_OPER_TYPE_GPR;
	dec->operand_values[0] = (insword & 0x3E00000)>>21;
	dec->operand_types[1] = PPC_OPER_TYPE_GPR;
	dec->operand_values[1] = (insword & 0xF800)>>11;
	dec->operand_fmtstr = PPC_FMTSTR_GPR_C_GPR;
	return 0;
}

/* stdbrx GPR,NUM,GPR */
int stdbrx_GPR_NUM_GPR(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_STDBRX;
	/* 011111AAAAA00000CCCCC10100101000 */
	dec->operand_n = 3;
	dec->operand_types[0] = PPC_OPER_TYPE_GPR;
	dec->operand_values[0] = (insword & 0x3E00000)>>21;
	dec->operand_types[1] = PPC_OPER_TYPE_NUM;
	dec->operand_types[2] = PPC_OPER_TYPE_GPR;
	dec->operand_values[2] = (insword & 0xF800)>>11;
	dec->operand_fmtstr = PPC_FMTSTR_GPR_C_NUM_C_GPR;
	return 0;
}

/* stswx GPR,NUM,GPR */
int stswx_GPR_NUM_GPR(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_STSWX;
	/* 011111AAAAA00000CCCCC10100101010 */
	dec->operand_n = 3;
	dec->operand_types[0] = PPC_OPER_TYPE_GPR;
	dec->operand_values[0] = (insword & 0x3E00000)>>21;
	dec->operand_types[1] = PPC_OPER_TYPE_NUM;
	dec->operand_types[2] = PPC_OPER_TYPE_GPR;
	dec->operand_values[2] = (insword & 0xF800)>>11;
	dec->operand_fmtstr = PPC_FMTSTR_GPR_C_NUM_C_GPR;
	return 0;
}

/* stwbrx GPR,NUM,GPR */
int stwbrx_GPR_NUM_GPR(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_STWBRX;
	/* 011111AAAAA00000CCCCC10100101100 */
	dec->operand_n = 3;
	dec->operand_types[0] = PPC_OPER_TYPE_GPR;
	dec->operand_values[0] = (insword & 0x3E00000)>>21;
	dec->operand_types[1] = PPC_OPER_TYPE_NUM;
	dec->operand_types[2] = PPC_OPER_TYPE_GPR;
	dec->operand_values[2] = (insword & 0xF800)>>11;
	dec->operand_fmtstr = PPC_FMTSTR_GPR_C_NUM_C_GPR;
	return 0;
}

/* stfsx FREG,NUM,GPR */
int stfsx_FREG_NUM_GPR(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_STFSX;
	/* 011111AAAAA00000CCCCC10100101110 */
	dec->operand_n = 3;
	dec->operand_types[0] = PPC_OPER_TYPE_FREG;
	dec->operand_values[0] = (insword & 0x3E00000)>>21;
	dec->operand_types[1] = PPC_OPER_TYPE_NUM;
	dec->operand_types[2] = PPC_OPER_TYPE_GPR;
	dec->operand_values[2] = (insword & 0xF800)>>11;
	dec->operand_fmtstr = PPC_FMTSTR_FREG_C_NUM_C_GPR;
	return 0;
}

/* srq GPR,GPR,GPR */
int srq_GPR_GPR_GPR(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_SRQ;
	/* 011111BBBBBAAAAACCCCC10100110000 */
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

/* srq. GPR,GPR,GPR */
int srqD_GPR_GPR_GPR(uint32_t insword, struct ppc_decoded *dec)
{
	dec->properties |= PPC_PROPERTY_DOTTED;
	dec->mnemonic = PPC_MNEM_SRQ;
	/* 011111BBBBBAAAAACCCCC10100110001 */
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

/* sre GPR,GPR,GPR */
int sre_GPR_GPR_GPR(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_SRE;
	/* 011111BBBBBAAAAACCCCC10100110010 */
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

/* sre. GPR,GPR,GPR */
int sreD_GPR_GPR_GPR(uint32_t insword, struct ppc_decoded *dec)
{
	dec->properties |= PPC_PROPERTY_DOTTED;
	dec->mnemonic = PPC_MNEM_SRE;
	/* 011111BBBBBAAAAACCCCC10100110011 */
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

/* sthdcbx GPR,GPR,GPR */
int sthdcbx_GPR_GPR_GPR(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_STHDCBX;
	/* 011111AAAAABBBBBCCCCC10101000100 */
	dec->operand_n = 3;
	dec->operand_types[0] = PPC_OPER_TYPE_GPR;
	dec->operand_values[0] = (insword & 0x3E00000)>>21;
	dec->operand_types[1] = PPC_OPER_TYPE_GPR;
	dec->operand_values[1] = (insword & 0x1F0000)>>16;
	dec->operand_types[2] = PPC_OPER_TYPE_GPR;
	dec->operand_values[2] = (insword & 0xF800)>>11;
	dec->operand_fmtstr = PPC_FMTSTR_GPR_C_GPR_C_GPR;
	return 0;
}

/* sthdx GPR,GPR,GPR */
int sthdx_GPR_GPR_GPR(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_STHDX;
	/* 011111AAAAABBBBBCCCCC10101000110 */
	dec->operand_n = 3;
	dec->operand_types[0] = PPC_OPER_TYPE_GPR;
	dec->operand_values[0] = (insword & 0x3E00000)>>21;
	dec->operand_types[1] = PPC_OPER_TYPE_GPR;
	dec->operand_values[1] = (insword & 0x1F0000)>>16;
	dec->operand_types[2] = PPC_OPER_TYPE_GPR;
	dec->operand_values[2] = (insword & 0xF800)>>11;
	dec->operand_fmtstr = PPC_FMTSTR_GPR_C_GPR_C_GPR;
	return 0;
}

/* stvfrx VREG,NUM,GPR */
int stvfrx_VREG_NUM_GPR(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_STVFRX;
	/* 011111AAAAA00000CCCCC10101001010 */
	dec->operand_n = 3;
	dec->operand_types[0] = PPC_OPER_TYPE_VREG;
	dec->operand_values[0] = (insword & 0x3E00000)>>21;
	dec->operand_types[1] = PPC_OPER_TYPE_NUM;
	dec->operand_types[2] = PPC_OPER_TYPE_GPR;
	dec->operand_values[2] = (insword & 0xF800)>>11;
	dec->operand_fmtstr = PPC_FMTSTR_VREG_C_NUM_C_GPR;
	return 0;
}

/* stvrx VREG,NUM,GPR */
int stvrx_VREG_NUM_GPR(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_STVRX;
	/* 011111AAAAA00000CCCCC10101001110 */
	dec->operand_n = 3;
	dec->operand_types[0] = PPC_OPER_TYPE_VREG;
	dec->operand_values[0] = (insword & 0x3E00000)>>21;
	dec->operand_types[1] = PPC_OPER_TYPE_NUM;
	dec->operand_types[2] = PPC_OPER_TYPE_GPR;
	dec->operand_values[2] = (insword & 0xF800)>>11;
	dec->operand_fmtstr = PPC_FMTSTR_VREG_C_NUM_C_GPR;
	return 0;
}

/* tend. */
int tendD(uint32_t insword, struct ppc_decoded *dec)
{
	dec->properties |= PPC_PROPERTY_DOTTED;
	dec->mnemonic = PPC_MNEM_TEND;
	return 0;
}

/* stbcx. GPR,NUM,GPR */
int stbcxD_GPR_NUM_GPR(uint32_t insword, struct ppc_decoded *dec)
{
	dec->properties |= PPC_PROPERTY_DOTTED;
	dec->mnemonic = PPC_MNEM_STBCX;
	/* 011111AAAAA00000CCCCC10101101101 */
	dec->operand_n = 3;
	dec->operand_types[0] = PPC_OPER_TYPE_GPR;
	dec->operand_values[0] = (insword & 0x3E00000)>>21;
	dec->operand_types[1] = PPC_OPER_TYPE_NUM;
	dec->operand_types[2] = PPC_OPER_TYPE_GPR;
	dec->operand_values[2] = (insword & 0xF800)>>11;
	dec->operand_fmtstr = PPC_FMTSTR_GPR_C_NUM_C_GPR;
	return 0;
}

/* sriq GPR,GPR,NUM */
int sriq_GPR_GPR_NUM(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_SRIQ;
	/* 011111BBBBBAAAAACCCCC10101110000 */
	dec->operand_n = 3;
	dec->operand_types[0] = PPC_OPER_TYPE_GPR;
	dec->operand_values[0] = (insword & 0x1F0000)>>16;
	dec->operand_types[1] = PPC_OPER_TYPE_GPR;
	dec->operand_values[1] = (insword & 0x3E00000)>>21;
	dec->operand_types[2] = PPC_OPER_TYPE_NUM;
	dec->operand_values[2] = (insword & 0xF800)>>11;
	dec->operand_fmtstr = PPC_FMTSTR_GPR_C_GPR_C_NUM;
	return 0;
}

/* sriq. GPR,GPR,NUM */
int sriqD_GPR_GPR_NUM(uint32_t insword, struct ppc_decoded *dec)
{
	dec->properties |= PPC_PROPERTY_DOTTED;
	dec->mnemonic = PPC_MNEM_SRIQ;
	/* 011111BBBBBAAAAACCCCC10101110001 */
	dec->operand_n = 3;
	dec->operand_types[0] = PPC_OPER_TYPE_GPR;
	dec->operand_values[0] = (insword & 0x1F0000)>>16;
	dec->operand_types[1] = PPC_OPER_TYPE_GPR;
	dec->operand_values[1] = (insword & 0x3E00000)>>21;
	dec->operand_types[2] = PPC_OPER_TYPE_NUM;
	dec->operand_values[2] = (insword & 0xF800)>>11;
	dec->operand_fmtstr = PPC_FMTSTR_GPR_C_GPR_C_NUM;
	return 0;
}

/* stwdcbx GPR,GPR,GPR */
int stwdcbx_GPR_GPR_GPR(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_STWDCBX;
	/* 011111AAAAABBBBBCCCCC10110000100 */
	dec->operand_n = 3;
	dec->operand_types[0] = PPC_OPER_TYPE_GPR;
	dec->operand_values[0] = (insword & 0x3E00000)>>21;
	dec->operand_types[1] = PPC_OPER_TYPE_GPR;
	dec->operand_values[1] = (insword & 0x1F0000)>>16;
	dec->operand_types[2] = PPC_OPER_TYPE_GPR;
	dec->operand_values[2] = (insword & 0xF800)>>11;
	dec->operand_fmtstr = PPC_FMTSTR_GPR_C_GPR_C_GPR;
	return 0;
}

/* stwdx GPR,GPR,GPR */
int stwdx_GPR_GPR_GPR(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_STWDX;
	/* 011111AAAAABBBBBCCCCC10110000110 */
	dec->operand_n = 3;
	dec->operand_types[0] = PPC_OPER_TYPE_GPR;
	dec->operand_values[0] = (insword & 0x3E00000)>>21;
	dec->operand_types[1] = PPC_OPER_TYPE_GPR;
	dec->operand_values[1] = (insword & 0x1F0000)>>16;
	dec->operand_types[2] = PPC_OPER_TYPE_GPR;
	dec->operand_values[2] = (insword & 0xF800)>>11;
	dec->operand_fmtstr = PPC_FMTSTR_GPR_C_GPR_C_GPR;
	return 0;
}

/* stvflx VREG,NUM,GPR */
int stvflx_VREG_NUM_GPR(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_STVFLX;
	/* 011111AAAAA00000CCCCC10110001010 */
	dec->operand_n = 3;
	dec->operand_types[0] = PPC_OPER_TYPE_VREG;
	dec->operand_values[0] = (insword & 0x3E00000)>>21;
	dec->operand_types[1] = PPC_OPER_TYPE_NUM;
	dec->operand_types[2] = PPC_OPER_TYPE_GPR;
	dec->operand_values[2] = (insword & 0xF800)>>11;
	dec->operand_fmtstr = PPC_FMTSTR_VREG_C_NUM_C_GPR;
	return 0;
}

/* stwat GPR,NUM,NUM */
int stwat_GPR_NUM_NUM(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_STWAT;
	/* 011111AAAAA00000CCCCC10110001100 */
	dec->operand_n = 3;
	dec->operand_types[0] = PPC_OPER_TYPE_GPR;
	dec->operand_values[0] = (insword & 0x3E00000)>>21;
	dec->operand_types[1] = PPC_OPER_TYPE_NUM;
	dec->operand_types[2] = PPC_OPER_TYPE_NUM;
	dec->operand_values[2] = (insword & 0xF800)>>11;
	dec->operand_fmtstr = PPC_FMTSTR_GPR_C_NUM_C_NUM;
	return 0;
}

/* stwfcmux FCREG,GPR,GPR */
int stwfcmux_FCREG_GPR_GPR(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_STWFCMUX;
	/* 011111AAAAABBBBBCCCCC10110001110 */
	dec->operand_n = 3;
	dec->operand_types[0] = PPC_OPER_TYPE_FCREG;
	dec->operand_values[0] = (insword & 0x3E00000)>>21;
	dec->operand_types[1] = PPC_OPER_TYPE_GPR;
	dec->operand_values[1] = (insword & 0x1F0000)>>16;
	dec->operand_types[2] = PPC_OPER_TYPE_GPR;
	dec->operand_values[2] = (insword & 0xF800)>>11;
	dec->operand_fmtstr = PPC_FMTSTR_FCREG_C_GPR_C_GPR;
	return 0;
}

/* subfzeo GPR,GPR */
int subfzeo_GPR_GPR(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_SUBFZEO;
	/* 011111AAAAABBBBB0000010110010000 */
	dec->operand_n = 2;
	dec->operand_types[0] = PPC_OPER_TYPE_GPR;
	dec->operand_values[0] = (insword & 0x3E00000)>>21;
	dec->operand_types[1] = PPC_OPER_TYPE_GPR;
	dec->operand_values[1] = (insword & 0x1F0000)>>16;
	dec->operand_fmtstr = PPC_FMTSTR_GPR_C_GPR;
	return 0;
}

/* subfzeo. GPR,GPR */
int subfzeoD_GPR_GPR(uint32_t insword, struct ppc_decoded *dec)
{
	dec->properties |= PPC_PROPERTY_DOTTED;
	dec->mnemonic = PPC_MNEM_SUBFZEO;
	/* 011111AAAAABBBBB0000010110010001 */
	dec->operand_n = 2;
	dec->operand_types[0] = PPC_OPER_TYPE_GPR;
	dec->operand_values[0] = (insword & 0x3E00000)>>21;
	dec->operand_types[1] = PPC_OPER_TYPE_GPR;
	dec->operand_values[1] = (insword & 0x1F0000)>>16;
	dec->operand_fmtstr = PPC_FMTSTR_GPR_C_GPR;
	return 0;
}

/* addzeo GPR,GPR */
int addzeo_GPR_GPR(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_ADDZEO;
	/* 011111AAAAABBBBB0000010110010100 */
	dec->operand_n = 2;
	dec->operand_types[0] = PPC_OPER_TYPE_GPR;
	dec->operand_values[0] = (insword & 0x3E00000)>>21;
	dec->operand_types[1] = PPC_OPER_TYPE_GPR;
	dec->operand_values[1] = (insword & 0x1F0000)>>16;
	dec->operand_fmtstr = PPC_FMTSTR_GPR_C_GPR;
	return 0;
}

/* addzeo. GPR,GPR */
int addzeoD_GPR_GPR(uint32_t insword, struct ppc_decoded *dec)
{
	dec->properties |= PPC_PROPERTY_DOTTED;
	dec->mnemonic = PPC_MNEM_ADDZEO;
	/* 011111AAAAABBBBB0000010110010101 */
	dec->operand_n = 2;
	dec->operand_types[0] = PPC_OPER_TYPE_GPR;
	dec->operand_values[0] = (insword & 0x3E00000)>>21;
	dec->operand_types[1] = PPC_OPER_TYPE_GPR;
	dec->operand_values[1] = (insword & 0x1F0000)>>16;
	dec->operand_fmtstr = PPC_FMTSTR_GPR_C_GPR;
	return 0;
}

/* stxsdx VSREG,NUM,GPR */
int stxsdx_VSREG_NUM_GPR(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_STXSDX;
	/* 011111AAAAA00000CCCCC1011001100A */
	dec->operand_n = 3;
	dec->operand_types[0] = PPC_OPER_TYPE_VSREG;
	dec->operand_values[0] = ((insword & 0x3E00000)>>20)|((insword & 0x1)>>0);
	dec->operand_types[1] = PPC_OPER_TYPE_NUM;
	dec->operand_types[2] = PPC_OPER_TYPE_GPR;
	dec->operand_values[2] = (insword & 0xF800)>>11;
	dec->operand_fmtstr = PPC_FMTSTR_VSREG_C_NUM_C_GPR;
	return 0;
}

/* tcheck CREG */
int tcheck_CREG(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_TCHECK;
	/* 011111AAA00000000000010110011100 */
	dec->operand_n = 1;
	dec->operand_types[0] = PPC_OPER_TYPE_CREG;
	dec->operand_values[0] = (insword & 0x3800000)>>23;
	dec->operand_fmtstr = PPC_FMTSTR_CREG;
	return 0;
}

/* stswi GPR,NUM,NUM */
int stswi_GPR_NUM_NUM(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_STSWI;
	/* 011111AAAAA00000CCCCC10110101010 */
	dec->operand_n = 3;
	dec->operand_types[0] = PPC_OPER_TYPE_GPR;
	dec->operand_values[0] = (insword & 0x3E00000)>>21;
	dec->operand_types[1] = PPC_OPER_TYPE_NUM;
	dec->operand_types[2] = PPC_OPER_TYPE_NUM;
	dec->operand_values[2] = (insword & 0xF800)>>11;
	dec->operand_fmtstr = PPC_FMTSTR_GPR_C_NUM_C_NUM;
	return 0;
}

/* sthcx. GPR,NUM,GPR */
int sthcxD_GPR_NUM_GPR(uint32_t insword, struct ppc_decoded *dec)
{
	dec->properties |= PPC_PROPERTY_DOTTED;
	dec->mnemonic = PPC_MNEM_STHCX;
	/* 011111AAAAA00000CCCCC10110101101 */
	dec->operand_n = 3;
	dec->operand_types[0] = PPC_OPER_TYPE_GPR;
	dec->operand_values[0] = (insword & 0x3E00000)>>21;
	dec->operand_types[1] = PPC_OPER_TYPE_NUM;
	dec->operand_types[2] = PPC_OPER_TYPE_GPR;
	dec->operand_values[2] = (insword & 0xF800)>>11;
	dec->operand_fmtstr = PPC_FMTSTR_GPR_C_NUM_C_GPR;
	return 0;
}

/* stfdx FREG,NUM,GPR */
int stfdx_FREG_NUM_GPR(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_STFDX;
	/* 011111AAAAA00000CCCCC10110101110 */
	dec->operand_n = 3;
	dec->operand_types[0] = PPC_OPER_TYPE_FREG;
	dec->operand_values[0] = (insword & 0x3E00000)>>21;
	dec->operand_types[1] = PPC_OPER_TYPE_NUM;
	dec->operand_types[2] = PPC_OPER_TYPE_GPR;
	dec->operand_values[2] = (insword & 0xF800)>>11;
	dec->operand_fmtstr = PPC_FMTSTR_FREG_C_NUM_C_GPR;
	return 0;
}

/* srlq GPR,GPR,GPR */
int srlq_GPR_GPR_GPR(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_SRLQ;
	/* 011111BBBBBAAAAACCCCC10110110000 */
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

/* srlq. GPR,GPR,GPR */
int srlqD_GPR_GPR_GPR(uint32_t insword, struct ppc_decoded *dec)
{
	dec->properties |= PPC_PROPERTY_DOTTED;
	dec->mnemonic = PPC_MNEM_SRLQ;
	/* 011111BBBBBAAAAACCCCC10110110001 */
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

/* sreq GPR,GPR,GPR */
int sreq_GPR_GPR_GPR(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_SREQ;
	/* 011111BBBBBAAAAACCCCC10110110010 */
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

/* sreq. GPR,GPR,GPR */
int sreqD_GPR_GPR_GPR(uint32_t insword, struct ppc_decoded *dec)
{
	dec->properties |= PPC_PROPERTY_DOTTED;
	dec->mnemonic = PPC_MNEM_SREQ;
	/* 011111BBBBBAAAAACCCCC10110110011 */
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

/* mftgpr GPR,FREG */
int mftgpr_GPR_FREG(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_MFTGPR;
	/* 011111AAAAA00000BBBBB10110111110 */
	dec->operand_n = 2;
	dec->operand_types[0] = PPC_OPER_TYPE_GPR;
	dec->operand_values[0] = (insword & 0x3E00000)>>21;
	dec->operand_types[1] = PPC_OPER_TYPE_FREG;
	dec->operand_values[1] = (insword & 0xF800)>>11;
	dec->operand_fmtstr = PPC_FMTSTR_GPR_C_FREG;
	return 0;
}

/* stddx GPR,GPR,GPR */
int stddx_GPR_GPR_GPR(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_STDDX;
	/* 011111AAAAABBBBBCCCCC10111000110 */
	dec->operand_n = 3;
	dec->operand_types[0] = PPC_OPER_TYPE_GPR;
	dec->operand_values[0] = (insword & 0x3E00000)>>21;
	dec->operand_types[1] = PPC_OPER_TYPE_GPR;
	dec->operand_values[1] = (insword & 0x1F0000)>>16;
	dec->operand_types[2] = PPC_OPER_TYPE_GPR;
	dec->operand_values[2] = (insword & 0xF800)>>11;
	dec->operand_fmtstr = PPC_FMTSTR_GPR_C_GPR_C_GPR;
	return 0;
}

/* stvswx VREG,NUM,GPR */
int stvswx_VREG_NUM_GPR(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_STVSWX;
	/* 011111AAAAA00000CCCCC10111001010 */
	dec->operand_n = 3;
	dec->operand_types[0] = PPC_OPER_TYPE_VREG;
	dec->operand_values[0] = (insword & 0x3E00000)>>21;
	dec->operand_types[1] = PPC_OPER_TYPE_NUM;
	dec->operand_types[2] = PPC_OPER_TYPE_GPR;
	dec->operand_values[2] = (insword & 0xF800)>>11;
	dec->operand_fmtstr = PPC_FMTSTR_VREG_C_NUM_C_GPR;
	return 0;
}

/* stdat GPR,NUM,NUM */
int stdat_GPR_NUM_NUM(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_STDAT;
	/* 011111AAAAA00000CCCCC10111001100 */
	dec->operand_n = 3;
	dec->operand_types[0] = PPC_OPER_TYPE_GPR;
	dec->operand_values[0] = (insword & 0x3E00000)>>21;
	dec->operand_types[1] = PPC_OPER_TYPE_NUM;
	dec->operand_types[2] = PPC_OPER_TYPE_NUM;
	dec->operand_values[2] = (insword & 0xF800)>>11;
	dec->operand_fmtstr = PPC_FMTSTR_GPR_C_NUM_C_NUM;
	return 0;
}

/* stqfcmux FCREG,GPR,GPR */
int stqfcmux_FCREG_GPR_GPR(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_STQFCMUX;
	/* 011111AAAAABBBBBCCCCC10111001110 */
	dec->operand_n = 3;
	dec->operand_types[0] = PPC_OPER_TYPE_FCREG;
	dec->operand_values[0] = (insword & 0x3E00000)>>21;
	dec->operand_types[1] = PPC_OPER_TYPE_GPR;
	dec->operand_values[1] = (insword & 0x1F0000)>>16;
	dec->operand_types[2] = PPC_OPER_TYPE_GPR;
	dec->operand_values[2] = (insword & 0xF800)>>11;
	dec->operand_fmtstr = PPC_FMTSTR_FCREG_C_GPR_C_GPR;
	return 0;
}

/* subfmeo GPR,GPR */
int subfmeo_GPR_GPR(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_SUBFMEO;
	/* 011111AAAAABBBBB0000010111010000 */
	dec->operand_n = 2;
	dec->operand_types[0] = PPC_OPER_TYPE_GPR;
	dec->operand_values[0] = (insword & 0x3E00000)>>21;
	dec->operand_types[1] = PPC_OPER_TYPE_GPR;
	dec->operand_values[1] = (insword & 0x1F0000)>>16;
	dec->operand_fmtstr = PPC_FMTSTR_GPR_C_GPR;
	return 0;
}

/* subfmeo. GPR,GPR */
int subfmeoD_GPR_GPR(uint32_t insword, struct ppc_decoded *dec)
{
	dec->properties |= PPC_PROPERTY_DOTTED;
	dec->mnemonic = PPC_MNEM_SUBFMEO;
	/* 011111AAAAABBBBB0000010111010001 */
	dec->operand_n = 2;
	dec->operand_types[0] = PPC_OPER_TYPE_GPR;
	dec->operand_values[0] = (insword & 0x3E00000)>>21;
	dec->operand_types[1] = PPC_OPER_TYPE_GPR;
	dec->operand_values[1] = (insword & 0x1F0000)>>16;
	dec->operand_fmtstr = PPC_FMTSTR_GPR_C_GPR;
	return 0;
}

/* mulldo GPR,GPR,GPR */
int mulldo_GPR_GPR_GPR(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_MULLDO;
	/* 011111AAAAABBBBBCCCCC10111010010 */
	dec->operand_n = 3;
	dec->operand_types[0] = PPC_OPER_TYPE_GPR;
	dec->operand_values[0] = (insword & 0x3E00000)>>21;
	dec->operand_types[1] = PPC_OPER_TYPE_GPR;
	dec->operand_values[1] = (insword & 0x1F0000)>>16;
	dec->operand_types[2] = PPC_OPER_TYPE_GPR;
	dec->operand_values[2] = (insword & 0xF800)>>11;
	dec->operand_fmtstr = PPC_FMTSTR_GPR_C_GPR_C_GPR;
	return 0;
}

/* mulldo. GPR,GPR,GPR */
int mulldoD_GPR_GPR_GPR(uint32_t insword, struct ppc_decoded *dec)
{
	dec->properties |= PPC_PROPERTY_DOTTED;
	dec->mnemonic = PPC_MNEM_MULLDO;
	/* 011111AAAAABBBBBCCCCC10111010011 */
	dec->operand_n = 3;
	dec->operand_types[0] = PPC_OPER_TYPE_GPR;
	dec->operand_values[0] = (insword & 0x3E00000)>>21;
	dec->operand_types[1] = PPC_OPER_TYPE_GPR;
	dec->operand_values[1] = (insword & 0x1F0000)>>16;
	dec->operand_types[2] = PPC_OPER_TYPE_GPR;
	dec->operand_values[2] = (insword & 0xF800)>>11;
	dec->operand_fmtstr = PPC_FMTSTR_GPR_C_GPR_C_GPR;
	return 0;
}

/* addmeo GPR,GPR */
int addmeo_GPR_GPR(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_ADDMEO;
	/* 011111AAAAABBBBB0000010111010100 */
	dec->operand_n = 2;
	dec->operand_types[0] = PPC_OPER_TYPE_GPR;
	dec->operand_values[0] = (insword & 0x3E00000)>>21;
	dec->operand_types[1] = PPC_OPER_TYPE_GPR;
	dec->operand_values[1] = (insword & 0x1F0000)>>16;
	dec->operand_fmtstr = PPC_FMTSTR_GPR_C_GPR;
	return 0;
}

/* addmeo. GPR,GPR */
int addmeoD_GPR_GPR(uint32_t insword, struct ppc_decoded *dec)
{
	dec->properties |= PPC_PROPERTY_DOTTED;
	dec->mnemonic = PPC_MNEM_ADDMEO;
	/* 011111AAAAABBBBB0000010111010101 */
	dec->operand_n = 2;
	dec->operand_types[0] = PPC_OPER_TYPE_GPR;
	dec->operand_values[0] = (insword & 0x3E00000)>>21;
	dec->operand_types[1] = PPC_OPER_TYPE_GPR;
	dec->operand_values[1] = (insword & 0x1F0000)>>16;
	dec->operand_fmtstr = PPC_FMTSTR_GPR_C_GPR;
	return 0;
}

/* mullwo GPR,GPR,GPR */
int mullwo_GPR_GPR_GPR(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_MULLWO;
	/* 011111AAAAABBBBBCCCCC10111010110 */
	dec->operand_n = 3;
	dec->operand_types[0] = PPC_OPER_TYPE_GPR;
	dec->operand_values[0] = (insword & 0x3E00000)>>21;
	dec->operand_types[1] = PPC_OPER_TYPE_GPR;
	dec->operand_values[1] = (insword & 0x1F0000)>>16;
	dec->operand_types[2] = PPC_OPER_TYPE_GPR;
	dec->operand_values[2] = (insword & 0xF800)>>11;
	dec->operand_fmtstr = PPC_FMTSTR_GPR_C_GPR_C_GPR;
	return 0;
}

/* mullwo. GPR,GPR,GPR */
int mullwoD_GPR_GPR_GPR(uint32_t insword, struct ppc_decoded *dec)
{
	dec->properties |= PPC_PROPERTY_DOTTED;
	dec->mnemonic = PPC_MNEM_MULLWO;
	/* 011111AAAAABBBBBCCCCC10111010111 */
	dec->operand_n = 3;
	dec->operand_types[0] = PPC_OPER_TYPE_GPR;
	dec->operand_values[0] = (insword & 0x3E00000)>>21;
	dec->operand_types[1] = PPC_OPER_TYPE_GPR;
	dec->operand_values[1] = (insword & 0x1F0000)>>16;
	dec->operand_types[2] = PPC_OPER_TYPE_GPR;
	dec->operand_values[2] = (insword & 0xF800)>>11;
	dec->operand_fmtstr = PPC_FMTSTR_GPR_C_GPR_C_GPR;
	return 0;
}

/* tsuspend. */
int tsuspendD(uint32_t insword, struct ppc_decoded *dec)
{
	dec->properties |= PPC_PROPERTY_DOTTED;
	dec->mnemonic = PPC_MNEM_TSUSPEND;
	return 0;
}

/* darn GPR,NUM */
int darn_GPR_NUM(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_DARN;
	/* 011111AAAAA000BB0000010111100110 */
	dec->operand_n = 2;
	dec->operand_types[0] = PPC_OPER_TYPE_GPR;
	dec->operand_values[0] = (insword & 0x3E00000)>>21;
	dec->operand_types[1] = PPC_OPER_TYPE_NUM;
	dec->operand_values[1] = (insword & 0x30000)>>16;
	dec->operand_fmtstr = PPC_FMTSTR_GPR_C_NUM;
	return 0;
}

/* dcba NUM,GPR */
int dcba_NUM_GPR(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_DCBA;
	/* 0111110000000000BBBBB10111101100 */
	dec->operand_n = 2;
	dec->operand_types[0] = PPC_OPER_TYPE_NUM;
	dec->operand_types[1] = PPC_OPER_TYPE_GPR;
	dec->operand_values[1] = (insword & 0xF800)>>11;
	dec->operand_fmtstr = PPC_FMTSTR_NUM_C_GPR;
	return 0;
}

/* srliq GPR,GPR,NUM */
int srliq_GPR_GPR_NUM(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_SRLIQ;
	/* 011111BBBBBAAAAACCCCC10111110000 */
	dec->operand_n = 3;
	dec->operand_types[0] = PPC_OPER_TYPE_GPR;
	dec->operand_values[0] = (insword & 0x1F0000)>>16;
	dec->operand_types[1] = PPC_OPER_TYPE_GPR;
	dec->operand_values[1] = (insword & 0x3E00000)>>21;
	dec->operand_types[2] = PPC_OPER_TYPE_NUM;
	dec->operand_values[2] = (insword & 0xF800)>>11;
	dec->operand_fmtstr = PPC_FMTSTR_GPR_C_GPR_C_NUM;
	return 0;
}

/* srliq. GPR,GPR,NUM */
int srliqD_GPR_GPR_NUM(uint32_t insword, struct ppc_decoded *dec)
{
	dec->properties |= PPC_PROPERTY_DOTTED;
	dec->mnemonic = PPC_MNEM_SRLIQ;
	/* 011111BBBBBAAAAACCCCC10111110001 */
	dec->operand_n = 3;
	dec->operand_types[0] = PPC_OPER_TYPE_GPR;
	dec->operand_values[0] = (insword & 0x1F0000)>>16;
	dec->operand_types[1] = PPC_OPER_TYPE_GPR;
	dec->operand_values[1] = (insword & 0x3E00000)>>21;
	dec->operand_types[2] = PPC_OPER_TYPE_NUM;
	dec->operand_values[2] = (insword & 0xF800)>>11;
	dec->operand_fmtstr = PPC_FMTSTR_GPR_C_GPR_C_NUM;
	return 0;
}

/* lvsm VREG,NUM,GPR */
int lvsm_VREG_NUM_GPR(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_LVSM;
	/* 011111AAAAA00000CCCCC11000001010 */
	dec->operand_n = 3;
	dec->operand_types[0] = PPC_OPER_TYPE_VREG;
	dec->operand_values[0] = (insword & 0x3E00000)>>21;
	dec->operand_types[1] = PPC_OPER_TYPE_NUM;
	dec->operand_types[2] = PPC_OPER_TYPE_GPR;
	dec->operand_values[2] = (insword & 0xF800)>>11;
	dec->operand_fmtstr = PPC_FMTSTR_VREG_C_NUM_C_GPR;
	return 0;
}

/* stvepxl VREG,NUM,GPR */
int stvepxl_VREG_NUM_GPR(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_STVEPXL;
	/* 011111AAAAA00000CCCCC11000001110 */
	dec->operand_n = 3;
	dec->operand_types[0] = PPC_OPER_TYPE_VREG;
	dec->operand_values[0] = (insword & 0x3E00000)>>21;
	dec->operand_types[1] = PPC_OPER_TYPE_NUM;
	dec->operand_types[2] = PPC_OPER_TYPE_GPR;
	dec->operand_values[2] = (insword & 0xF800)>>11;
	dec->operand_fmtstr = PPC_FMTSTR_VREG_C_NUM_C_GPR;
	return 0;
}

/* dozo GPR,GPR,GPR */
int dozo_GPR_GPR_GPR(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_DOZO;
	/* 011111AAAAABBBBBCCCCC11000010000 */
	dec->operand_n = 3;
	dec->operand_types[0] = PPC_OPER_TYPE_GPR;
	dec->operand_values[0] = (insword & 0x3E00000)>>21;
	dec->operand_types[1] = PPC_OPER_TYPE_GPR;
	dec->operand_values[1] = (insword & 0x1F0000)>>16;
	dec->operand_types[2] = PPC_OPER_TYPE_GPR;
	dec->operand_values[2] = (insword & 0xF800)>>11;
	dec->operand_fmtstr = PPC_FMTSTR_GPR_C_GPR_C_GPR;
	return 0;
}

/* dozo. GPR,GPR,GPR */
int dozoD_GPR_GPR_GPR(uint32_t insword, struct ppc_decoded *dec)
{
	dec->properties |= PPC_PROPERTY_DOTTED;
	dec->mnemonic = PPC_MNEM_DOZO;
	/* 011111AAAAABBBBBCCCCC11000010001 */
	dec->operand_n = 3;
	dec->operand_types[0] = PPC_OPER_TYPE_GPR;
	dec->operand_values[0] = (insword & 0x3E00000)>>21;
	dec->operand_types[1] = PPC_OPER_TYPE_GPR;
	dec->operand_values[1] = (insword & 0x1F0000)>>16;
	dec->operand_types[2] = PPC_OPER_TYPE_GPR;
	dec->operand_values[2] = (insword & 0xF800)>>11;
	dec->operand_fmtstr = PPC_FMTSTR_GPR_C_GPR_C_GPR;
	return 0;
}

/* modsd GPR,GPR,GPR */
int modsd_GPR_GPR_GPR(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_MODSD;
	/* 011111AAAAABBBBBCCCCC11000010010 */
	dec->operand_n = 3;
	dec->operand_types[0] = PPC_OPER_TYPE_GPR;
	dec->operand_values[0] = (insword & 0x3E00000)>>21;
	dec->operand_types[1] = PPC_OPER_TYPE_GPR;
	dec->operand_values[1] = (insword & 0x1F0000)>>16;
	dec->operand_types[2] = PPC_OPER_TYPE_GPR;
	dec->operand_values[2] = (insword & 0xF800)>>11;
	dec->operand_fmtstr = PPC_FMTSTR_GPR_C_GPR_C_GPR;
	return 0;
}

/* addo GPR,GPR,GPR */
int addo_GPR_GPR_GPR(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_ADDO;
	/* 011111AAAAABBBBBCCCCC11000010100 */
	dec->operand_n = 3;
	dec->operand_types[0] = PPC_OPER_TYPE_GPR;
	dec->operand_values[0] = (insword & 0x3E00000)>>21;
	dec->operand_types[1] = PPC_OPER_TYPE_GPR;
	dec->operand_values[1] = (insword & 0x1F0000)>>16;
	dec->operand_types[2] = PPC_OPER_TYPE_GPR;
	dec->operand_values[2] = (insword & 0xF800)>>11;
	dec->operand_fmtstr = PPC_FMTSTR_GPR_C_GPR_C_GPR;
	return 0;
}

/* addo. GPR,GPR,GPR */
int addoD_GPR_GPR_GPR(uint32_t insword, struct ppc_decoded *dec)
{
	dec->properties |= PPC_PROPERTY_DOTTED;
	dec->mnemonic = PPC_MNEM_ADDO;
	/* 011111AAAAABBBBBCCCCC11000010101 */
	dec->operand_n = 3;
	dec->operand_types[0] = PPC_OPER_TYPE_GPR;
	dec->operand_values[0] = (insword & 0x3E00000)>>21;
	dec->operand_types[1] = PPC_OPER_TYPE_GPR;
	dec->operand_values[1] = (insword & 0x1F0000)>>16;
	dec->operand_types[2] = PPC_OPER_TYPE_GPR;
	dec->operand_values[2] = (insword & 0xF800)>>11;
	dec->operand_fmtstr = PPC_FMTSTR_GPR_C_GPR_C_GPR;
	return 0;
}

/* modsw GPR,GPR,GPR */
int modsw_GPR_GPR_GPR(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_MODSW;
	/* 011111AAAAABBBBBCCCCC11000010110 */
	dec->operand_n = 3;
	dec->operand_types[0] = PPC_OPER_TYPE_GPR;
	dec->operand_values[0] = (insword & 0x3E00000)>>21;
	dec->operand_types[1] = PPC_OPER_TYPE_GPR;
	dec->operand_values[1] = (insword & 0x1F0000)>>16;
	dec->operand_types[2] = PPC_OPER_TYPE_GPR;
	dec->operand_values[2] = (insword & 0xF800)>>11;
	dec->operand_fmtstr = PPC_FMTSTR_GPR_C_GPR_C_GPR;
	return 0;
}

/* lxvw4x VSREG,NUM,GPR */
int lxvw4x_VSREG_NUM_GPR(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_LXVW4X;
	/* 011111AAAAA00000CCCCC1100001100A */
	dec->operand_n = 3;
	dec->operand_types[0] = PPC_OPER_TYPE_VSREG;
	dec->operand_values[0] = ((insword & 0x3E00000)>>20)|((insword & 0x1)>>0);
	dec->operand_types[1] = PPC_OPER_TYPE_NUM;
	dec->operand_types[2] = PPC_OPER_TYPE_GPR;
	dec->operand_values[2] = (insword & 0xF800)>>11;
	dec->operand_fmtstr = PPC_FMTSTR_VSREG_C_NUM_C_GPR;
	return 0;
}

/* lxsibzx VSREG,NUM,GPR */
int lxsibzx_VSREG_NUM_GPR(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_LXSIBZX;
	/* 011111AAAAA00000CCCCC1100001101A */
	dec->operand_n = 3;
	dec->operand_types[0] = PPC_OPER_TYPE_VSREG;
	dec->operand_values[0] = ((insword & 0x3E00000)>>20)|((insword & 0x1)>>0);
	dec->operand_types[1] = PPC_OPER_TYPE_NUM;
	dec->operand_types[2] = PPC_OPER_TYPE_GPR;
	dec->operand_values[2] = (insword & 0xF800)>>11;
	dec->operand_fmtstr = PPC_FMTSTR_VSREG_C_NUM_C_GPR;
	return 0;
}

/* tabortwc. NUM,GPR,GPR */
int tabortwcD_NUM_GPR_GPR(uint32_t insword, struct ppc_decoded *dec)
{
	dec->properties |= PPC_PROPERTY_DOTTED;
	dec->mnemonic = PPC_MNEM_TABORTWC;
	/* 011111AAAAABBBBBCCCCC11000011101 */
	dec->operand_n = 3;
	dec->operand_types[0] = PPC_OPER_TYPE_NUM;
	dec->operand_values[0] = (insword & 0x3E00000)>>21;
	dec->operand_types[1] = PPC_OPER_TYPE_GPR;
	dec->operand_values[1] = (insword & 0x1F0000)>>16;
	dec->operand_types[2] = PPC_OPER_TYPE_GPR;
	dec->operand_values[2] = (insword & 0xF800)>>11;
	dec->operand_fmtstr = PPC_FMTSTR_NUM_C_GPR_C_GPR;
	return 0;
}

/* tlbivax NUM,GPR */
int tlbivax_NUM_GPR(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_TLBIVAX;
	/* 0111110000000000BBBBB11000100100 */
	dec->operand_n = 2;
	dec->operand_types[0] = PPC_OPER_TYPE_NUM;
	dec->operand_types[1] = PPC_OPER_TYPE_GPR;
	dec->operand_values[1] = (insword & 0xF800)>>11;
	dec->operand_fmtstr = PPC_FMTSTR_NUM_C_GPR;
	return 0;
}

/* lwzcix GPR,NUM,GPR */
int lwzcix_GPR_NUM_GPR(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_LWZCIX;
	/* 011111AAAAA00000CCCCC11000101010 */
	dec->operand_n = 3;
	dec->operand_types[0] = PPC_OPER_TYPE_GPR;
	dec->operand_values[0] = (insword & 0x3E00000)>>21;
	dec->operand_types[1] = PPC_OPER_TYPE_NUM;
	dec->operand_types[2] = PPC_OPER_TYPE_GPR;
	dec->operand_values[2] = (insword & 0xF800)>>11;
	dec->operand_fmtstr = PPC_FMTSTR_GPR_C_NUM_C_GPR;
	return 0;
}

/* lhbrx GPR,NUM,GPR */
int lhbrx_GPR_NUM_GPR(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_LHBRX;
	/* 011111AAAAA00000CCCCC11000101100 */
	dec->operand_n = 3;
	dec->operand_types[0] = PPC_OPER_TYPE_GPR;
	dec->operand_values[0] = (insword & 0x3E00000)>>21;
	dec->operand_types[1] = PPC_OPER_TYPE_NUM;
	dec->operand_types[2] = PPC_OPER_TYPE_GPR;
	dec->operand_values[2] = (insword & 0xF800)>>11;
	dec->operand_fmtstr = PPC_FMTSTR_GPR_C_NUM_C_GPR;
	return 0;
}

/* lfdpx FREG,NUM,GPR */
int lfdpx_FREG_NUM_GPR(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_LFDPX;
	/* 011111AAAA000000CCCCC11000101110 */
	dec->operand_n = 3;
	dec->operand_types[0] = PPC_OPER_TYPE_FREG;
	dec->operand_values[0] = (insword & 0x3C00000)>>22;
	dec->operand_types[1] = PPC_OPER_TYPE_NUM;
	dec->operand_types[2] = PPC_OPER_TYPE_GPR;
	dec->operand_values[2] = (insword & 0xF800)>>11;
	dec->operand_fmtstr = PPC_FMTSTR_FREG_C_NUM_C_GPR;
	return 0;
}

/* sraw GPR,GPR,GPR */
int sraw_GPR_GPR_GPR(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_SRAW;
	/* 011111BBBBBAAAAACCCCC11000110000 */
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

/* sraw. GPR,GPR,GPR */
int srawD_GPR_GPR_GPR(uint32_t insword, struct ppc_decoded *dec)
{
	dec->properties |= PPC_PROPERTY_DOTTED;
	dec->mnemonic = PPC_MNEM_SRAW;
	/* 011111BBBBBAAAAACCCCC11000110001 */
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

/* srad GPR,GPR,GPR */
int srad_GPR_GPR_GPR(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_SRAD;
	/* 011111BBBBBAAAAACCCCC11000110100 */
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

/* srad. GPR,GPR,GPR */
int sradD_GPR_GPR_GPR(uint32_t insword, struct ppc_decoded *dec)
{
	dec->properties |= PPC_PROPERTY_DOTTED;
	dec->mnemonic = PPC_MNEM_SRAD;
	/* 011111BBBBBAAAAACCCCC11000110101 */
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

/* evlddepx GPR,GPR,GPR */
int evlddepx_GPR_GPR_GPR(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_EVLDDEPX;
	/* 011111AAAAABBBBBCCCCC11000111110 */
	dec->operand_n = 3;
	dec->operand_types[0] = PPC_OPER_TYPE_GPR;
	dec->operand_values[0] = (insword & 0x3E00000)>>21;
	dec->operand_types[1] = PPC_OPER_TYPE_GPR;
	dec->operand_values[1] = (insword & 0x1F0000)>>16;
	dec->operand_types[2] = PPC_OPER_TYPE_GPR;
	dec->operand_values[2] = (insword & 0xF800)>>11;
	dec->operand_fmtstr = PPC_FMTSTR_GPR_C_GPR_C_GPR;
	return 0;
}

/* lfddx FREG,GPR,GPR */
int lfddx_FREG_GPR_GPR(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_LFDDX;
	/* 011111AAAAABBBBBCCCCC11001000110 */
	dec->operand_n = 3;
	dec->operand_types[0] = PPC_OPER_TYPE_FREG;
	dec->operand_values[0] = (insword & 0x3E00000)>>21;
	dec->operand_types[1] = PPC_OPER_TYPE_GPR;
	dec->operand_values[1] = (insword & 0x1F0000)>>16;
	dec->operand_types[2] = PPC_OPER_TYPE_GPR;
	dec->operand_values[2] = (insword & 0xF800)>>11;
	dec->operand_fmtstr = PPC_FMTSTR_FREG_C_GPR_C_GPR;
	return 0;
}

/* lvtrxl VREG,NUM,GPR */
int lvtrxl_VREG_NUM_GPR(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_LVTRXL;
	/* 011111AAAAA00000CCCCC11001001010 */
	dec->operand_n = 3;
	dec->operand_types[0] = PPC_OPER_TYPE_VREG;
	dec->operand_values[0] = (insword & 0x3E00000)>>21;
	dec->operand_types[1] = PPC_OPER_TYPE_NUM;
	dec->operand_types[2] = PPC_OPER_TYPE_GPR;
	dec->operand_values[2] = (insword & 0xF800)>>11;
	dec->operand_fmtstr = PPC_FMTSTR_VREG_C_NUM_C_GPR;
	return 0;
}

/* stvepx VREG,NUM,GPR */
int stvepx_VREG_NUM_GPR(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_STVEPX;
	/* 011111AAAAA00000CCCCC11001001110 */
	dec->operand_n = 3;
	dec->operand_types[0] = PPC_OPER_TYPE_VREG;
	dec->operand_values[0] = (insword & 0x3E00000)>>21;
	dec->operand_types[1] = PPC_OPER_TYPE_NUM;
	dec->operand_types[2] = PPC_OPER_TYPE_GPR;
	dec->operand_values[2] = (insword & 0xF800)>>11;
	dec->operand_fmtstr = PPC_FMTSTR_VREG_C_NUM_C_GPR;
	return 0;
}

/* lxvh8x VSREG,NUM,GPR */
int lxvh8x_VSREG_NUM_GPR(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_LXVH8X;
	/* 011111AAAAA00000CCCCC1100101100A */
	dec->operand_n = 3;
	dec->operand_types[0] = PPC_OPER_TYPE_VSREG;
	dec->operand_values[0] = ((insword & 0x3E00000)>>20)|((insword & 0x1)>>0);
	dec->operand_types[1] = PPC_OPER_TYPE_NUM;
	dec->operand_types[2] = PPC_OPER_TYPE_GPR;
	dec->operand_values[2] = (insword & 0xF800)>>11;
	dec->operand_fmtstr = PPC_FMTSTR_VSREG_C_NUM_C_GPR;
	return 0;
}

/* lxsihzx VSREG,NUM,GPR */
int lxsihzx_VSREG_NUM_GPR(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_LXSIHZX;
	/* 011111AAAAA00000CCCCC1100101101A */
	dec->operand_n = 3;
	dec->operand_types[0] = PPC_OPER_TYPE_VSREG;
	dec->operand_values[0] = ((insword & 0x3E00000)>>20)|((insword & 0x1)>>0);
	dec->operand_types[1] = PPC_OPER_TYPE_NUM;
	dec->operand_types[2] = PPC_OPER_TYPE_GPR;
	dec->operand_values[2] = (insword & 0xF800)>>11;
	dec->operand_fmtstr = PPC_FMTSTR_VSREG_C_NUM_C_GPR;
	return 0;
}

/* tabortdc. NUM,GPR,GPR */
int tabortdcD_NUM_GPR_GPR(uint32_t insword, struct ppc_decoded *dec)
{
	dec->properties |= PPC_PROPERTY_DOTTED;
	dec->mnemonic = PPC_MNEM_TABORTDC;
	/* 011111AAAAABBBBBCCCCC11001011101 */
	dec->operand_n = 3;
	dec->operand_types[0] = PPC_OPER_TYPE_NUM;
	dec->operand_values[0] = (insword & 0x3E00000)>>21;
	dec->operand_types[1] = PPC_OPER_TYPE_GPR;
	dec->operand_values[1] = (insword & 0x1F0000)>>16;
	dec->operand_types[2] = PPC_OPER_TYPE_GPR;
	dec->operand_values[2] = (insword & 0xF800)>>11;
	dec->operand_fmtstr = PPC_FMTSTR_NUM_C_GPR_C_GPR;
	return 0;
}

/* rac GPR,GPR,GPR */
int rac_GPR_GPR_GPR(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_RAC;
	/* 011111AAAAABBBBBCCCCC11001100100 */
	dec->operand_n = 3;
	dec->operand_types[0] = PPC_OPER_TYPE_GPR;
	dec->operand_values[0] = (insword & 0x3E00000)>>21;
	dec->operand_types[1] = PPC_OPER_TYPE_GPR;
	dec->operand_values[1] = (insword & 0x1F0000)>>16;
	dec->operand_types[2] = PPC_OPER_TYPE_GPR;
	dec->operand_values[2] = (insword & 0xF800)>>11;
	dec->operand_fmtstr = PPC_FMTSTR_GPR_C_GPR_C_GPR;
	return 0;
}

/* erativax GPR,NUM,GPR */
int erativax_GPR_NUM_GPR(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_ERATIVAX;
	/* 011111AAAAA00000CCCCC11001100110 */
	dec->operand_n = 3;
	dec->operand_types[0] = PPC_OPER_TYPE_GPR;
	dec->operand_values[0] = (insword & 0x3E00000)>>21;
	dec->operand_types[1] = PPC_OPER_TYPE_NUM;
	dec->operand_types[2] = PPC_OPER_TYPE_GPR;
	dec->operand_values[2] = (insword & 0xF800)>>11;
	dec->operand_fmtstr = PPC_FMTSTR_GPR_C_NUM_C_GPR;
	return 0;
}

/* lhzcix GPR,NUM,GPR */
int lhzcix_GPR_NUM_GPR(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_LHZCIX;
	/* 011111AAAAA00000CCCCC11001101010 */
	dec->operand_n = 3;
	dec->operand_types[0] = PPC_OPER_TYPE_GPR;
	dec->operand_values[0] = (insword & 0x3E00000)>>21;
	dec->operand_types[1] = PPC_OPER_TYPE_NUM;
	dec->operand_types[2] = PPC_OPER_TYPE_GPR;
	dec->operand_values[2] = (insword & 0xF800)>>11;
	dec->operand_fmtstr = PPC_FMTSTR_GPR_C_NUM_C_GPR;
	return 0;
}

/* dss NUM */
int dss_NUM(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_DSS;
	/* 0111110xxAAxxxxxxxxxx1100110110x */
	dec->operand_n = 1;
	dec->operand_types[0] = PPC_OPER_TYPE_NUM;
	dec->operand_values[0] = (insword & 0x600000)>>21;
	dec->operand_fmtstr = PPC_FMTSTR_NUM;
	return 0;
}

/* lfqux FREG,GPR,GPR */
int lfqux_FREG_GPR_GPR(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_LFQUX;
	/* 011111AAAAABBBBBCCCCC11001101110 */
	dec->operand_n = 3;
	dec->operand_types[0] = PPC_OPER_TYPE_FREG;
	dec->operand_values[0] = (insword & 0x3E00000)>>21;
	dec->operand_types[1] = PPC_OPER_TYPE_GPR;
	dec->operand_values[1] = (insword & 0x1F0000)>>16;
	dec->operand_types[2] = PPC_OPER_TYPE_GPR;
	dec->operand_values[2] = (insword & 0xF800)>>11;
	dec->operand_fmtstr = PPC_FMTSTR_FREG_C_GPR_C_GPR;
	return 0;
}

/* srawi GPR,GPR,NUM */
int srawi_GPR_GPR_NUM(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_SRAWI;
	/* 011111BBBBBAAAAACCCCC11001110000 */
	dec->operand_n = 3;
	dec->operand_types[0] = PPC_OPER_TYPE_GPR;
	dec->operand_values[0] = (insword & 0x1F0000)>>16;
	dec->operand_types[1] = PPC_OPER_TYPE_GPR;
	dec->operand_values[1] = (insword & 0x3E00000)>>21;
	dec->operand_types[2] = PPC_OPER_TYPE_NUM;
	dec->operand_values[2] = (insword & 0xF800)>>11;
	dec->operand_fmtstr = PPC_FMTSTR_GPR_C_GPR_C_NUM;
	return 0;
}

/* srawi. GPR,GPR,NUM */
int srawiD_GPR_GPR_NUM(uint32_t insword, struct ppc_decoded *dec)
{
	dec->properties |= PPC_PROPERTY_DOTTED;
	dec->mnemonic = PPC_MNEM_SRAWI;
	/* 011111BBBBBAAAAACCCCC11001110001 */
	dec->operand_n = 3;
	dec->operand_types[0] = PPC_OPER_TYPE_GPR;
	dec->operand_values[0] = (insword & 0x1F0000)>>16;
	dec->operand_types[1] = PPC_OPER_TYPE_GPR;
	dec->operand_values[1] = (insword & 0x3E00000)>>21;
	dec->operand_types[2] = PPC_OPER_TYPE_NUM;
	dec->operand_values[2] = (insword & 0xF800)>>11;
	dec->operand_fmtstr = PPC_FMTSTR_GPR_C_GPR_C_NUM;
	return 0;
}

/* sradi GPR,GPR,NUM */
int sradi_GPR_GPR_NUM(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_SRADI;
	/* 011111BBBBBAAAAACCCCC110011101C0 */
	dec->operand_n = 3;
	dec->operand_types[0] = PPC_OPER_TYPE_GPR;
	dec->operand_values[0] = (insword & 0x1F0000)>>16;
	dec->operand_types[1] = PPC_OPER_TYPE_GPR;
	dec->operand_values[1] = (insword & 0x3E00000)>>21;
	dec->operand_types[2] = PPC_OPER_TYPE_NUM;
	dec->operand_values[2] = ((insword & 0xF800)>>10)|((insword & 0x2)>>1);
	dec->operand_fmtstr = PPC_FMTSTR_GPR_C_GPR_C_NUM;
	return 0;
}

/* sradi. GPR,GPR,NUM */
int sradiD_GPR_GPR_NUM(uint32_t insword, struct ppc_decoded *dec)
{
	dec->properties |= PPC_PROPERTY_DOTTED;
	dec->mnemonic = PPC_MNEM_SRADI;
	/* 011111BBBBBAAAAACCCCC110011101C1 */
	dec->operand_n = 3;
	dec->operand_types[0] = PPC_OPER_TYPE_GPR;
	dec->operand_values[0] = (insword & 0x1F0000)>>16;
	dec->operand_types[1] = PPC_OPER_TYPE_GPR;
	dec->operand_values[1] = (insword & 0x3E00000)>>21;
	dec->operand_types[2] = PPC_OPER_TYPE_NUM;
	dec->operand_values[2] = ((insword & 0xF800)>>10)|((insword & 0x2)>>1);
	dec->operand_fmtstr = PPC_FMTSTR_GPR_C_GPR_C_NUM;
	return 0;
}

/* lvtlxl VREG,NUM,GPR */
int lvtlxl_VREG_NUM_GPR(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_LVTLXL;
	/* 011111AAAAA00000CCCCC11010001010 */
	dec->operand_n = 3;
	dec->operand_types[0] = PPC_OPER_TYPE_VREG;
	dec->operand_values[0] = (insword & 0x3E00000)>>21;
	dec->operand_types[1] = PPC_OPER_TYPE_NUM;
	dec->operand_types[2] = PPC_OPER_TYPE_GPR;
	dec->operand_values[2] = (insword & 0xF800)>>11;
	dec->operand_fmtstr = PPC_FMTSTR_VREG_C_NUM_C_GPR;
	return 0;
}

/* cpabort */
int cpabort(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_CPABORT;
	return 0;
}

/* divo GPR,GPR,GPR */
int divo_GPR_GPR_GPR(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_DIVO;
	/* 011111AAAAABBBBBCCCCC11010010110 */
	dec->operand_n = 3;
	dec->operand_types[0] = PPC_OPER_TYPE_GPR;
	dec->operand_values[0] = (insword & 0x3E00000)>>21;
	dec->operand_types[1] = PPC_OPER_TYPE_GPR;
	dec->operand_values[1] = (insword & 0x1F0000)>>16;
	dec->operand_types[2] = PPC_OPER_TYPE_GPR;
	dec->operand_values[2] = (insword & 0xF800)>>11;
	dec->operand_fmtstr = PPC_FMTSTR_GPR_C_GPR_C_GPR;
	return 0;
}

/* divo. GPR,GPR,GPR */
int divoD_GPR_GPR_GPR(uint32_t insword, struct ppc_decoded *dec)
{
	dec->properties |= PPC_PROPERTY_DOTTED;
	dec->mnemonic = PPC_MNEM_DIVO;
	/* 011111AAAAABBBBBCCCCC11010010111 */
	dec->operand_n = 3;
	dec->operand_types[0] = PPC_OPER_TYPE_GPR;
	dec->operand_values[0] = (insword & 0x3E00000)>>21;
	dec->operand_types[1] = PPC_OPER_TYPE_GPR;
	dec->operand_values[1] = (insword & 0x1F0000)>>16;
	dec->operand_types[2] = PPC_OPER_TYPE_GPR;
	dec->operand_values[2] = (insword & 0xF800)>>11;
	dec->operand_fmtstr = PPC_FMTSTR_GPR_C_GPR_C_GPR;
	return 0;
}

/* lxvd2x VSREG,NUM,GPR */
int lxvd2x_VSREG_NUM_GPR(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_LXVD2X;
	/* 011111AAAAA00000CCCCC1101001100A */
	dec->operand_n = 3;
	dec->operand_types[0] = PPC_OPER_TYPE_VSREG;
	dec->operand_values[0] = ((insword & 0x3E00000)>>20)|((insword & 0x1)>>0);
	dec->operand_types[1] = PPC_OPER_TYPE_NUM;
	dec->operand_types[2] = PPC_OPER_TYPE_GPR;
	dec->operand_values[2] = (insword & 0xF800)>>11;
	dec->operand_fmtstr = PPC_FMTSTR_VSREG_C_NUM_C_GPR;
	return 0;
}

/* tabortwci. NUM,GPR,NUM */
int tabortwciD_NUM_GPR_NUM(uint32_t insword, struct ppc_decoded *dec)
{
	dec->properties |= PPC_PROPERTY_DOTTED;
	dec->mnemonic = PPC_MNEM_TABORTWCI;
	/* 011111AAAAABBBBBCCCCC11010011101 */
	dec->operand_n = 3;
	dec->operand_types[0] = PPC_OPER_TYPE_NUM;
	dec->operand_values[0] = (insword & 0x3E00000)>>21;
	dec->operand_types[1] = PPC_OPER_TYPE_GPR;
	dec->operand_values[1] = (insword & 0x1F0000)>>16;
	dec->operand_types[2] = PPC_OPER_TYPE_NUM;
	dec->operand_values[2] = (insword & 0xF800)>>11;
	dec->operand_fmtstr = PPC_FMTSTR_NUM_C_GPR_C_NUM;
	return 0;
}

/* slbiag GPR */
int slbiag_GPR(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_SLBIAG;
	/* 011111AAAAA000000000011010100100 */
	dec->operand_n = 1;
	dec->operand_types[0] = PPC_OPER_TYPE_GPR;
	dec->operand_values[0] = (insword & 0x3E00000)>>21;
	dec->operand_fmtstr = PPC_FMTSTR_GPR;
	return 0;
}

/* tlbsrx. NUM,GPR */
int tlbsrxD_NUM_GPR(uint32_t insword, struct ppc_decoded *dec)
{
	dec->properties |= PPC_PROPERTY_DOTTED;
	dec->mnemonic = PPC_MNEM_TLBSRX;
	/* 0111110000000000BBBBB11010100101 */
	dec->operand_n = 2;
	dec->operand_types[0] = PPC_OPER_TYPE_NUM;
	dec->operand_types[1] = PPC_OPER_TYPE_GPR;
	dec->operand_values[1] = (insword & 0xF800)>>11;
	dec->operand_fmtstr = PPC_FMTSTR_NUM_C_GPR;
	return 0;
}

/* slbmfev GPR,GPR */
int slbmfev_GPR_GPR(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_SLBMFEV;
	/* 011111AAAAA00000BBBBB11010100110 */
	dec->operand_n = 2;
	dec->operand_types[0] = PPC_OPER_TYPE_GPR;
	dec->operand_values[0] = (insword & 0x3E00000)>>21;
	dec->operand_types[1] = PPC_OPER_TYPE_GPR;
	dec->operand_values[1] = (insword & 0xF800)>>11;
	dec->operand_fmtstr = PPC_FMTSTR_GPR_C_GPR;
	return 0;
}

/* lbzcix GPR,NUM,GPR */
int lbzcix_GPR_NUM_GPR(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_LBZCIX;
	/* 011111AAAAA00000CCCCC11010101010 */
	dec->operand_n = 3;
	dec->operand_types[0] = PPC_OPER_TYPE_GPR;
	dec->operand_values[0] = (insword & 0x3E00000)>>21;
	dec->operand_types[1] = PPC_OPER_TYPE_NUM;
	dec->operand_types[2] = PPC_OPER_TYPE_GPR;
	dec->operand_values[2] = (insword & 0xF800)>>11;
	dec->operand_fmtstr = PPC_FMTSTR_GPR_C_NUM_C_GPR;
	return 0;
}

/* eieio */
int eieio(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_EIEIO;
	return 0;
}

/* lfiwax FREG,NUM,GPR */
int lfiwax_FREG_NUM_GPR(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_LFIWAX;
	/* 011111AAAAA00000CCCCC11010101110 */
	dec->operand_n = 3;
	dec->operand_types[0] = PPC_OPER_TYPE_FREG;
	dec->operand_values[0] = (insword & 0x3E00000)>>21;
	dec->operand_types[1] = PPC_OPER_TYPE_NUM;
	dec->operand_types[2] = PPC_OPER_TYPE_GPR;
	dec->operand_values[2] = (insword & 0xF800)>>11;
	dec->operand_fmtstr = PPC_FMTSTR_FREG_C_NUM_C_GPR;
	return 0;
}

/* lvswxl VREG,NUM,GPR */
int lvswxl_VREG_NUM_GPR(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_LVSWXL;
	/* 011111AAAAA00000CCCCC11011001010 */
	dec->operand_n = 3;
	dec->operand_types[0] = PPC_OPER_TYPE_VREG;
	dec->operand_values[0] = (insword & 0x3E00000)>>21;
	dec->operand_types[1] = PPC_OPER_TYPE_NUM;
	dec->operand_types[2] = PPC_OPER_TYPE_GPR;
	dec->operand_values[2] = (insword & 0xF800)>>11;
	dec->operand_fmtstr = PPC_FMTSTR_VREG_C_NUM_C_GPR;
	return 0;
}

/* abso GPR,GPR */
int abso_GPR_GPR(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_ABSO;
	/* 011111AAAAABBBBB0000011011010000 */
	dec->operand_n = 2;
	dec->operand_types[0] = PPC_OPER_TYPE_GPR;
	dec->operand_values[0] = (insword & 0x3E00000)>>21;
	dec->operand_types[1] = PPC_OPER_TYPE_GPR;
	dec->operand_values[1] = (insword & 0x1F0000)>>16;
	dec->operand_fmtstr = PPC_FMTSTR_GPR_C_GPR;
	return 0;
}

/* abso. GPR,GPR */
int absoD_GPR_GPR(uint32_t insword, struct ppc_decoded *dec)
{
	dec->properties |= PPC_PROPERTY_DOTTED;
	dec->mnemonic = PPC_MNEM_ABSO;
	/* 011111AAAAABBBBB0000011011010001 */
	dec->operand_n = 2;
	dec->operand_types[0] = PPC_OPER_TYPE_GPR;
	dec->operand_values[0] = (insword & 0x3E00000)>>21;
	dec->operand_types[1] = PPC_OPER_TYPE_GPR;
	dec->operand_values[1] = (insword & 0x1F0000)>>16;
	dec->operand_fmtstr = PPC_FMTSTR_GPR_C_GPR;
	return 0;
}

/* divso GPR,GPR,GPR */
int divso_GPR_GPR_GPR(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_DIVSO;
	/* 011111AAAAABBBBBCCCCC11011010110 */
	dec->operand_n = 3;
	dec->operand_types[0] = PPC_OPER_TYPE_GPR;
	dec->operand_values[0] = (insword & 0x3E00000)>>21;
	dec->operand_types[1] = PPC_OPER_TYPE_GPR;
	dec->operand_values[1] = (insword & 0x1F0000)>>16;
	dec->operand_types[2] = PPC_OPER_TYPE_GPR;
	dec->operand_values[2] = (insword & 0xF800)>>11;
	dec->operand_fmtstr = PPC_FMTSTR_GPR_C_GPR_C_GPR;
	return 0;
}

/* divso. GPR,GPR,GPR */
int divsoD_GPR_GPR_GPR(uint32_t insword, struct ppc_decoded *dec)
{
	dec->properties |= PPC_PROPERTY_DOTTED;
	dec->mnemonic = PPC_MNEM_DIVSO;
	/* 011111AAAAABBBBBCCCCC11011010111 */
	dec->operand_n = 3;
	dec->operand_types[0] = PPC_OPER_TYPE_GPR;
	dec->operand_values[0] = (insword & 0x3E00000)>>21;
	dec->operand_types[1] = PPC_OPER_TYPE_GPR;
	dec->operand_values[1] = (insword & 0x1F0000)>>16;
	dec->operand_types[2] = PPC_OPER_TYPE_GPR;
	dec->operand_values[2] = (insword & 0xF800)>>11;
	dec->operand_fmtstr = PPC_FMTSTR_GPR_C_GPR_C_GPR;
	return 0;
}

/* lxvb16x VSREG,NUM,GPR */
int lxvb16x_VSREG_NUM_GPR(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_LXVB16X;
	/* 011111AAAAA00000CCCCC1101101100A */
	dec->operand_n = 3;
	dec->operand_types[0] = PPC_OPER_TYPE_VSREG;
	dec->operand_values[0] = ((insword & 0x3E00000)>>20)|((insword & 0x1)>>0);
	dec->operand_types[1] = PPC_OPER_TYPE_NUM;
	dec->operand_types[2] = PPC_OPER_TYPE_GPR;
	dec->operand_values[2] = (insword & 0xF800)>>11;
	dec->operand_fmtstr = PPC_FMTSTR_VSREG_C_NUM_C_GPR;
	return 0;
}

/* tabortdci. NUM,GPR,NUM */
int tabortdciD_NUM_GPR_NUM(uint32_t insword, struct ppc_decoded *dec)
{
	dec->properties |= PPC_PROPERTY_DOTTED;
	dec->mnemonic = PPC_MNEM_TABORTDCI;
	/* 011111AAAAABBBBBCCCCC11011011101 */
	dec->operand_n = 3;
	dec->operand_types[0] = PPC_OPER_TYPE_NUM;
	dec->operand_values[0] = (insword & 0x3E00000)>>21;
	dec->operand_types[1] = PPC_OPER_TYPE_GPR;
	dec->operand_values[1] = (insword & 0x1F0000)>>16;
	dec->operand_types[2] = PPC_OPER_TYPE_NUM;
	dec->operand_values[2] = (insword & 0xF800)>>11;
	dec->operand_fmtstr = PPC_FMTSTR_NUM_C_GPR_C_NUM;
	return 0;
}

/* rmieg GPR */
int rmieg_GPR(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_RMIEG;
	/* 0111110000000000AAAAA11011100100 */
	dec->operand_n = 1;
	dec->operand_types[0] = PPC_OPER_TYPE_GPR;
	dec->operand_values[0] = (insword & 0xF800)>>11;
	dec->operand_fmtstr = PPC_FMTSTR_GPR;
	return 0;
}

/* ldcix GPR,NUM,GPR */
int ldcix_GPR_NUM_GPR(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_LDCIX;
	/* 011111AAAAA00000CCCCC11011101010 */
	dec->operand_n = 3;
	dec->operand_types[0] = PPC_OPER_TYPE_GPR;
	dec->operand_values[0] = (insword & 0x3E00000)>>21;
	dec->operand_types[1] = PPC_OPER_TYPE_NUM;
	dec->operand_types[2] = PPC_OPER_TYPE_GPR;
	dec->operand_values[2] = (insword & 0xF800)>>11;
	dec->operand_fmtstr = PPC_FMTSTR_GPR_C_NUM_C_GPR;
	return 0;
}

/* msgsync */
int msgsync(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_MSGSYNC;
	return 0;
}

/* lfiwzx FREG,NUM,GPR */
int lfiwzx_FREG_NUM_GPR(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_LFIWZX;
	/* 011111AAAAA00000CCCCC11011101110 */
	dec->operand_n = 3;
	dec->operand_types[0] = PPC_OPER_TYPE_FREG;
	dec->operand_values[0] = (insword & 0x3E00000)>>21;
	dec->operand_types[1] = PPC_OPER_TYPE_NUM;
	dec->operand_types[2] = PPC_OPER_TYPE_GPR;
	dec->operand_values[2] = (insword & 0xF800)>>11;
	dec->operand_fmtstr = PPC_FMTSTR_FREG_C_NUM_C_GPR;
	return 0;
}

/* extswsli GPR,GPR,NUM */
int extswsli_GPR_GPR_NUM(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_EXTSWSLI;
	/* 011111BBBBBAAAAACCCCC110111101C0 */
	dec->operand_n = 3;
	dec->operand_types[0] = PPC_OPER_TYPE_GPR;
	dec->operand_values[0] = (insword & 0x1F0000)>>16;
	dec->operand_types[1] = PPC_OPER_TYPE_GPR;
	dec->operand_values[1] = (insword & 0x3E00000)>>21;
	dec->operand_types[2] = PPC_OPER_TYPE_NUM;
	dec->operand_values[2] = ((insword & 0xF800)>>10)|((insword & 0x2)>>1);
	dec->operand_fmtstr = PPC_FMTSTR_GPR_C_GPR_C_NUM;
	return 0;
}

/* extswsli. GPR,GPR,NUM */
int extswsliD_GPR_GPR_NUM(uint32_t insword, struct ppc_decoded *dec)
{
	dec->properties |= PPC_PROPERTY_DOTTED;
	dec->mnemonic = PPC_MNEM_EXTSWSLI;
	/* 011111BBBBBAAAAACCCCC110111101C1 */
	dec->operand_n = 3;
	dec->operand_types[0] = PPC_OPER_TYPE_GPR;
	dec->operand_values[0] = (insword & 0x1F0000)>>16;
	dec->operand_types[1] = PPC_OPER_TYPE_GPR;
	dec->operand_values[1] = (insword & 0x3E00000)>>21;
	dec->operand_types[2] = PPC_OPER_TYPE_NUM;
	dec->operand_values[2] = ((insword & 0xF800)>>10)|((insword & 0x2)>>1);
	dec->operand_fmtstr = PPC_FMTSTR_GPR_C_GPR_C_NUM;
	return 0;
}

/* stvlxl VREG,NUM,GPR */
int stvlxl_VREG_NUM_GPR(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_STVLXL;
	/* 011111AAAAA00000CCCCC11100001110 */
	dec->operand_n = 3;
	dec->operand_types[0] = PPC_OPER_TYPE_VREG;
	dec->operand_values[0] = (insword & 0x3E00000)>>21;
	dec->operand_types[1] = PPC_OPER_TYPE_NUM;
	dec->operand_types[2] = PPC_OPER_TYPE_GPR;
	dec->operand_values[2] = (insword & 0xF800)>>11;
	dec->operand_fmtstr = PPC_FMTSTR_VREG_C_NUM_C_GPR;
	return 0;
}

/* divdeuo GPR,GPR,GPR */
int divdeuo_GPR_GPR_GPR(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_DIVDEUO;
	/* 011111AAAAABBBBBCCCCC11100010010 */
	dec->operand_n = 3;
	dec->operand_types[0] = PPC_OPER_TYPE_GPR;
	dec->operand_values[0] = (insword & 0x3E00000)>>21;
	dec->operand_types[1] = PPC_OPER_TYPE_GPR;
	dec->operand_values[1] = (insword & 0x1F0000)>>16;
	dec->operand_types[2] = PPC_OPER_TYPE_GPR;
	dec->operand_values[2] = (insword & 0xF800)>>11;
	dec->operand_fmtstr = PPC_FMTSTR_GPR_C_GPR_C_GPR;
	return 0;
}

/* divdeuo. GPR,GPR,GPR */
int divdeuoD_GPR_GPR_GPR(uint32_t insword, struct ppc_decoded *dec)
{
	dec->properties |= PPC_PROPERTY_DOTTED;
	dec->mnemonic = PPC_MNEM_DIVDEUO;
	/* 011111AAAAABBBBBCCCCC11100010011 */
	dec->operand_n = 3;
	dec->operand_types[0] = PPC_OPER_TYPE_GPR;
	dec->operand_values[0] = (insword & 0x3E00000)>>21;
	dec->operand_types[1] = PPC_OPER_TYPE_GPR;
	dec->operand_values[1] = (insword & 0x1F0000)>>16;
	dec->operand_types[2] = PPC_OPER_TYPE_GPR;
	dec->operand_values[2] = (insword & 0xF800)>>11;
	dec->operand_fmtstr = PPC_FMTSTR_GPR_C_GPR_C_GPR;
	return 0;
}

/* divweuo GPR,GPR,GPR */
int divweuo_GPR_GPR_GPR(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_DIVWEUO;
	/* 011111AAAAABBBBBCCCCC11100010110 */
	dec->operand_n = 3;
	dec->operand_types[0] = PPC_OPER_TYPE_GPR;
	dec->operand_values[0] = (insword & 0x3E00000)>>21;
	dec->operand_types[1] = PPC_OPER_TYPE_GPR;
	dec->operand_values[1] = (insword & 0x1F0000)>>16;
	dec->operand_types[2] = PPC_OPER_TYPE_GPR;
	dec->operand_values[2] = (insword & 0xF800)>>11;
	dec->operand_fmtstr = PPC_FMTSTR_GPR_C_GPR_C_GPR;
	return 0;
}

/* divweuo. GPR,GPR,GPR */
int divweuoD_GPR_GPR_GPR(uint32_t insword, struct ppc_decoded *dec)
{
	dec->properties |= PPC_PROPERTY_DOTTED;
	dec->mnemonic = PPC_MNEM_DIVWEUO;
	/* 011111AAAAABBBBBCCCCC11100010111 */
	dec->operand_n = 3;
	dec->operand_types[0] = PPC_OPER_TYPE_GPR;
	dec->operand_values[0] = (insword & 0x3E00000)>>21;
	dec->operand_types[1] = PPC_OPER_TYPE_GPR;
	dec->operand_values[1] = (insword & 0x1F0000)>>16;
	dec->operand_types[2] = PPC_OPER_TYPE_GPR;
	dec->operand_values[2] = (insword & 0xF800)>>11;
	dec->operand_fmtstr = PPC_FMTSTR_GPR_C_GPR_C_GPR;
	return 0;
}

/* stxvw4x VSREG,NUM,GPR */
int stxvw4x_VSREG_NUM_GPR(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_STXVW4X;
	/* 011111AAAAA00000CCCCC1110001100A */
	dec->operand_n = 3;
	dec->operand_types[0] = PPC_OPER_TYPE_VSREG;
	dec->operand_values[0] = ((insword & 0x3E00000)>>20)|((insword & 0x1)>>0);
	dec->operand_types[1] = PPC_OPER_TYPE_NUM;
	dec->operand_types[2] = PPC_OPER_TYPE_GPR;
	dec->operand_values[2] = (insword & 0xF800)>>11;
	dec->operand_fmtstr = PPC_FMTSTR_VSREG_C_NUM_C_GPR;
	return 0;
}

/* stxsibx VSREG,NUM,GPR */
int stxsibx_VSREG_NUM_GPR(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_STXSIBX;
	/* 011111AAAAA00000CCCCC1110001101A */
	dec->operand_n = 3;
	dec->operand_types[0] = PPC_OPER_TYPE_VSREG;
	dec->operand_values[0] = ((insword & 0x3E00000)>>20)|((insword & 0x1)>>0);
	dec->operand_types[1] = PPC_OPER_TYPE_NUM;
	dec->operand_types[2] = PPC_OPER_TYPE_GPR;
	dec->operand_values[2] = (insword & 0xF800)>>11;
	dec->operand_fmtstr = PPC_FMTSTR_VSREG_C_NUM_C_GPR;
	return 0;
}

/* tabort. GPR */
int tabortD_GPR(uint32_t insword, struct ppc_decoded *dec)
{
	dec->properties |= PPC_PROPERTY_DOTTED;
	dec->mnemonic = PPC_MNEM_TABORT;
	/* 01111100000AAAAA0000011100011101 */
	dec->operand_n = 1;
	dec->operand_types[0] = PPC_OPER_TYPE_GPR;
	dec->operand_values[0] = (insword & 0x1F0000)>>16;
	dec->operand_fmtstr = PPC_FMTSTR_GPR;
	return 0;
}

/* tlbsx NUM,GPR */
int tlbsx_NUM_GPR(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_TLBSX;
	/* 0111110000000000BBBBB11100100100 */
	dec->operand_n = 2;
	dec->operand_types[0] = PPC_OPER_TYPE_NUM;
	dec->operand_types[1] = PPC_OPER_TYPE_GPR;
	dec->operand_values[1] = (insword & 0xF800)>>11;
	dec->operand_fmtstr = PPC_FMTSTR_NUM_C_GPR;
	return 0;
}

/* tlbsx. NUM,GPR */
int tlbsxD_NUM_GPR(uint32_t insword, struct ppc_decoded *dec)
{
	dec->properties |= PPC_PROPERTY_DOTTED;
	dec->mnemonic = PPC_MNEM_TLBSX;
	/* 0111110000000000BBBBB11100100101 */
	dec->operand_n = 2;
	dec->operand_types[0] = PPC_OPER_TYPE_NUM;
	dec->operand_types[1] = PPC_OPER_TYPE_GPR;
	dec->operand_values[1] = (insword & 0xF800)>>11;
	dec->operand_fmtstr = PPC_FMTSTR_NUM_C_GPR;
	return 0;
}

/* slbmfee GPR,GPR */
int slbmfee_GPR_GPR(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_SLBMFEE;
	/* 011111AAAAA00000BBBBB11100100110 */
	dec->operand_n = 2;
	dec->operand_types[0] = PPC_OPER_TYPE_GPR;
	dec->operand_values[0] = (insword & 0x3E00000)>>21;
	dec->operand_types[1] = PPC_OPER_TYPE_GPR;
	dec->operand_values[1] = (insword & 0xF800)>>11;
	dec->operand_fmtstr = PPC_FMTSTR_GPR_C_GPR;
	return 0;
}

/* stwcix GPR,NUM,GPR */
int stwcix_GPR_NUM_GPR(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_STWCIX;
	/* 011111AAAAA00000CCCCC11100101010 */
	dec->operand_n = 3;
	dec->operand_types[0] = PPC_OPER_TYPE_GPR;
	dec->operand_values[0] = (insword & 0x3E00000)>>21;
	dec->operand_types[1] = PPC_OPER_TYPE_NUM;
	dec->operand_types[2] = PPC_OPER_TYPE_GPR;
	dec->operand_values[2] = (insword & 0xF800)>>11;
	dec->operand_fmtstr = PPC_FMTSTR_GPR_C_NUM_C_GPR;
	return 0;
}

/* sthbrx GPR,NUM,GPR */
int sthbrx_GPR_NUM_GPR(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_STHBRX;
	/* 011111AAAAA00000CCCCC11100101100 */
	dec->operand_n = 3;
	dec->operand_types[0] = PPC_OPER_TYPE_GPR;
	dec->operand_values[0] = (insword & 0x3E00000)>>21;
	dec->operand_types[1] = PPC_OPER_TYPE_NUM;
	dec->operand_types[2] = PPC_OPER_TYPE_GPR;
	dec->operand_values[2] = (insword & 0xF800)>>11;
	dec->operand_fmtstr = PPC_FMTSTR_GPR_C_NUM_C_GPR;
	return 0;
}

/* stfdpx FREG,NUM,GPR */
int stfdpx_FREG_NUM_GPR(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_STFDPX;
	/* 011111AAAA000000CCCCC11100101110 */
	dec->operand_n = 3;
	dec->operand_types[0] = PPC_OPER_TYPE_FREG;
	dec->operand_values[0] = (insword & 0x3C00000)>>22;
	dec->operand_types[1] = PPC_OPER_TYPE_NUM;
	dec->operand_types[2] = PPC_OPER_TYPE_GPR;
	dec->operand_values[2] = (insword & 0xF800)>>11;
	dec->operand_fmtstr = PPC_FMTSTR_FREG_C_NUM_C_GPR;
	return 0;
}

/* sraq GPR,GPR,GPR */
int sraq_GPR_GPR_GPR(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_SRAQ;
	/* 011111BBBBBAAAAACCCCC11100110000 */
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

/* sraq. GPR,GPR,GPR */
int sraqD_GPR_GPR_GPR(uint32_t insword, struct ppc_decoded *dec)
{
	dec->properties |= PPC_PROPERTY_DOTTED;
	dec->mnemonic = PPC_MNEM_SRAQ;
	/* 011111BBBBBAAAAACCCCC11100110001 */
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

/* srea GPR,GPR,GPR */
int srea_GPR_GPR_GPR(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_SREA;
	/* 011111BBBBBAAAAACCCCC11100110010 */
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

/* srea. GPR,GPR,GPR */
int sreaD_GPR_GPR_GPR(uint32_t insword, struct ppc_decoded *dec)
{
	dec->properties |= PPC_PROPERTY_DOTTED;
	dec->mnemonic = PPC_MNEM_SREA;
	/* 011111BBBBBAAAAACCCCC11100110011 */
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

/* extsh GPR,GPR */
int extsh_GPR_GPR(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_EXTSH;
	/* 011111BBBBBAAAAA0000011100110100 */
	dec->operand_n = 2;
	dec->operand_types[0] = PPC_OPER_TYPE_GPR;
	dec->operand_values[0] = (insword & 0x1F0000)>>16;
	dec->operand_types[1] = PPC_OPER_TYPE_GPR;
	dec->operand_values[1] = (insword & 0x3E00000)>>21;
	dec->operand_fmtstr = PPC_FMTSTR_GPR_C_GPR;
	return 0;
}

/* extsh. GPR,GPR */
int extshD_GPR_GPR(uint32_t insword, struct ppc_decoded *dec)
{
	dec->properties |= PPC_PROPERTY_DOTTED;
	dec->mnemonic = PPC_MNEM_EXTSH;
	/* 011111BBBBBAAAAA0000011100110101 */
	dec->operand_n = 2;
	dec->operand_types[0] = PPC_OPER_TYPE_GPR;
	dec->operand_values[0] = (insword & 0x1F0000)>>16;
	dec->operand_types[1] = PPC_OPER_TYPE_GPR;
	dec->operand_values[1] = (insword & 0x3E00000)>>21;
	dec->operand_fmtstr = PPC_FMTSTR_GPR_C_GPR;
	return 0;
}

/* evstddepx GPR,GPR,GPR */
int evstddepx_GPR_GPR_GPR(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_EVSTDDEPX;
	/* 011111AAAAABBBBBCCCCC11100111110 */
	dec->operand_n = 3;
	dec->operand_types[0] = PPC_OPER_TYPE_GPR;
	dec->operand_values[0] = (insword & 0x3E00000)>>21;
	dec->operand_types[1] = PPC_OPER_TYPE_GPR;
	dec->operand_values[1] = (insword & 0x1F0000)>>16;
	dec->operand_types[2] = PPC_OPER_TYPE_GPR;
	dec->operand_values[2] = (insword & 0xF800)>>11;
	dec->operand_fmtstr = PPC_FMTSTR_GPR_C_GPR_C_GPR;
	return 0;
}

/* stfddx FREG,GPR,GPR */
int stfddx_FREG_GPR_GPR(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_STFDDX;
	/* 011111AAAAABBBBBCCCCC11101000110 */
	dec->operand_n = 3;
	dec->operand_types[0] = PPC_OPER_TYPE_FREG;
	dec->operand_values[0] = (insword & 0x3E00000)>>21;
	dec->operand_types[1] = PPC_OPER_TYPE_GPR;
	dec->operand_values[1] = (insword & 0x1F0000)>>16;
	dec->operand_types[2] = PPC_OPER_TYPE_GPR;
	dec->operand_values[2] = (insword & 0xF800)>>11;
	dec->operand_fmtstr = PPC_FMTSTR_FREG_C_GPR_C_GPR;
	return 0;
}

/* stvfrxl VREG,NUM,GPR */
int stvfrxl_VREG_NUM_GPR(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_STVFRXL;
	/* 011111AAAAA00000CCCCC11101001010 */
	dec->operand_n = 3;
	dec->operand_types[0] = PPC_OPER_TYPE_VREG;
	dec->operand_values[0] = (insword & 0x3E00000)>>21;
	dec->operand_types[1] = PPC_OPER_TYPE_NUM;
	dec->operand_types[2] = PPC_OPER_TYPE_GPR;
	dec->operand_values[2] = (insword & 0xF800)>>11;
	dec->operand_fmtstr = PPC_FMTSTR_VREG_C_NUM_C_GPR;
	return 0;
}

/* wclrall NUM */
int wclrall_NUM(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_WCLRALL;
	/* 011111xxxAA000000000011101001100 */
	dec->operand_n = 1;
	dec->operand_types[0] = PPC_OPER_TYPE_NUM;
	dec->operand_values[0] = (insword & 0x600000)>>21;
	dec->operand_fmtstr = PPC_FMTSTR_NUM;
	return 0;
}

/* stvrxl VREG,NUM,GPR */
int stvrxl_VREG_NUM_GPR(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_STVRXL;
	/* 011111AAAAA00000CCCCC11101001110 */
	dec->operand_n = 3;
	dec->operand_types[0] = PPC_OPER_TYPE_VREG;
	dec->operand_values[0] = (insword & 0x3E00000)>>21;
	dec->operand_types[1] = PPC_OPER_TYPE_NUM;
	dec->operand_types[2] = PPC_OPER_TYPE_GPR;
	dec->operand_values[2] = (insword & 0xF800)>>11;
	dec->operand_fmtstr = PPC_FMTSTR_VREG_C_NUM_C_GPR;
	return 0;
}

/* divdeo GPR,GPR,GPR */
int divdeo_GPR_GPR_GPR(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_DIVDEO;
	/* 011111AAAAABBBBBCCCCC11101010010 */
	dec->operand_n = 3;
	dec->operand_types[0] = PPC_OPER_TYPE_GPR;
	dec->operand_values[0] = (insword & 0x3E00000)>>21;
	dec->operand_types[1] = PPC_OPER_TYPE_GPR;
	dec->operand_values[1] = (insword & 0x1F0000)>>16;
	dec->operand_types[2] = PPC_OPER_TYPE_GPR;
	dec->operand_values[2] = (insword & 0xF800)>>11;
	dec->operand_fmtstr = PPC_FMTSTR_GPR_C_GPR_C_GPR;
	return 0;
}

/* divdeo. GPR,GPR,GPR */
int divdeoD_GPR_GPR_GPR(uint32_t insword, struct ppc_decoded *dec)
{
	dec->properties |= PPC_PROPERTY_DOTTED;
	dec->mnemonic = PPC_MNEM_DIVDEO;
	/* 011111AAAAABBBBBCCCCC11101010011 */
	dec->operand_n = 3;
	dec->operand_types[0] = PPC_OPER_TYPE_GPR;
	dec->operand_values[0] = (insword & 0x3E00000)>>21;
	dec->operand_types[1] = PPC_OPER_TYPE_GPR;
	dec->operand_values[1] = (insword & 0x1F0000)>>16;
	dec->operand_types[2] = PPC_OPER_TYPE_GPR;
	dec->operand_values[2] = (insword & 0xF800)>>11;
	dec->operand_fmtstr = PPC_FMTSTR_GPR_C_GPR_C_GPR;
	return 0;
}

/* divweo GPR,GPR,GPR */
int divweo_GPR_GPR_GPR(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_DIVWEO;
	/* 011111AAAAABBBBBCCCCC11101010110 */
	dec->operand_n = 3;
	dec->operand_types[0] = PPC_OPER_TYPE_GPR;
	dec->operand_values[0] = (insword & 0x3E00000)>>21;
	dec->operand_types[1] = PPC_OPER_TYPE_GPR;
	dec->operand_values[1] = (insword & 0x1F0000)>>16;
	dec->operand_types[2] = PPC_OPER_TYPE_GPR;
	dec->operand_values[2] = (insword & 0xF800)>>11;
	dec->operand_fmtstr = PPC_FMTSTR_GPR_C_GPR_C_GPR;
	return 0;
}

/* divweo. GPR,GPR,GPR */
int divweoD_GPR_GPR_GPR(uint32_t insword, struct ppc_decoded *dec)
{
	dec->properties |= PPC_PROPERTY_DOTTED;
	dec->mnemonic = PPC_MNEM_DIVWEO;
	/* 011111AAAAABBBBBCCCCC11101010111 */
	dec->operand_n = 3;
	dec->operand_types[0] = PPC_OPER_TYPE_GPR;
	dec->operand_values[0] = (insword & 0x3E00000)>>21;
	dec->operand_types[1] = PPC_OPER_TYPE_GPR;
	dec->operand_values[1] = (insword & 0x1F0000)>>16;
	dec->operand_types[2] = PPC_OPER_TYPE_GPR;
	dec->operand_values[2] = (insword & 0xF800)>>11;
	dec->operand_fmtstr = PPC_FMTSTR_GPR_C_GPR_C_GPR;
	return 0;
}

/* stxvh8x VSREG,NUM,GPR */
int stxvh8x_VSREG_NUM_GPR(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_STXVH8X;
	/* 011111AAAAA00000CCCCC1110101100A */
	dec->operand_n = 3;
	dec->operand_types[0] = PPC_OPER_TYPE_VSREG;
	dec->operand_values[0] = ((insword & 0x3E00000)>>20)|((insword & 0x1)>>0);
	dec->operand_types[1] = PPC_OPER_TYPE_NUM;
	dec->operand_types[2] = PPC_OPER_TYPE_GPR;
	dec->operand_values[2] = (insword & 0xF800)>>11;
	dec->operand_fmtstr = PPC_FMTSTR_VSREG_C_NUM_C_GPR;
	return 0;
}

/* stxsihx VSREG,NUM,GPR */
int stxsihx_VSREG_NUM_GPR(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_STXSIHX;
	/* 011111AAAAA00000CCCCC1110101101A */
	dec->operand_n = 3;
	dec->operand_types[0] = PPC_OPER_TYPE_VSREG;
	dec->operand_values[0] = ((insword & 0x3E00000)>>20)|((insword & 0x1)>>0);
	dec->operand_types[1] = PPC_OPER_TYPE_NUM;
	dec->operand_types[2] = PPC_OPER_TYPE_GPR;
	dec->operand_values[2] = (insword & 0xF800)>>11;
	dec->operand_fmtstr = PPC_FMTSTR_VSREG_C_NUM_C_GPR;
	return 0;
}

/* treclaim. GPR */
int treclaimD_GPR(uint32_t insword, struct ppc_decoded *dec)
{
	dec->properties |= PPC_PROPERTY_DOTTED;
	dec->mnemonic = PPC_MNEM_TRECLAIM;
	/* 01111100000AAAAA0000011101011101 */
	dec->operand_n = 1;
	dec->operand_types[0] = PPC_OPER_TYPE_GPR;
	dec->operand_values[0] = (insword & 0x1F0000)>>16;
	dec->operand_fmtstr = PPC_FMTSTR_GPR;
	return 0;
}

/* tlbrehi GPR,GPR */
int tlbrehi_GPR_GPR(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_TLBREHI;
	/* 011111AAAAABBBBB0000011101100100 */
	dec->operand_n = 2;
	dec->operand_types[0] = PPC_OPER_TYPE_GPR;
	dec->operand_values[0] = (insword & 0x3E00000)>>21;
	dec->operand_types[1] = PPC_OPER_TYPE_GPR;
	dec->operand_values[1] = (insword & 0x1F0000)>>16;
	dec->operand_fmtstr = PPC_FMTSTR_GPR_C_GPR;
	return 0;
}

/* sthcix GPR,NUM,GPR */
int sthcix_GPR_NUM_GPR(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_STHCIX;
	/* 011111AAAAA00000CCCCC11101101010 */
	dec->operand_n = 3;
	dec->operand_types[0] = PPC_OPER_TYPE_GPR;
	dec->operand_values[0] = (insword & 0x3E00000)>>21;
	dec->operand_types[1] = PPC_OPER_TYPE_NUM;
	dec->operand_types[2] = PPC_OPER_TYPE_GPR;
	dec->operand_values[2] = (insword & 0xF800)>>11;
	dec->operand_fmtstr = PPC_FMTSTR_GPR_C_NUM_C_GPR;
	return 0;
}

/* icswepx GPR,GPR,GPR */
int icswepx_GPR_GPR_GPR(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_ICSWEPX;
	/* 011111AAAAABBBBBCCCCC11101101100 */
	dec->operand_n = 3;
	dec->operand_types[0] = PPC_OPER_TYPE_GPR;
	dec->operand_values[0] = (insword & 0x3E00000)>>21;
	dec->operand_types[1] = PPC_OPER_TYPE_GPR;
	dec->operand_values[1] = (insword & 0x1F0000)>>16;
	dec->operand_types[2] = PPC_OPER_TYPE_GPR;
	dec->operand_values[2] = (insword & 0xF800)>>11;
	dec->operand_fmtstr = PPC_FMTSTR_GPR_C_GPR_C_GPR;
	return 0;
}

/* icswepx. GPR,GPR,GPR */
int icswepxD_GPR_GPR_GPR(uint32_t insword, struct ppc_decoded *dec)
{
	dec->properties |= PPC_PROPERTY_DOTTED;
	dec->mnemonic = PPC_MNEM_ICSWEPX;
	/* 011111AAAAABBBBBCCCCC11101101101 */
	dec->operand_n = 3;
	dec->operand_types[0] = PPC_OPER_TYPE_GPR;
	dec->operand_values[0] = (insword & 0x3E00000)>>21;
	dec->operand_types[1] = PPC_OPER_TYPE_GPR;
	dec->operand_values[1] = (insword & 0x1F0000)>>16;
	dec->operand_types[2] = PPC_OPER_TYPE_GPR;
	dec->operand_values[2] = (insword & 0xF800)>>11;
	dec->operand_fmtstr = PPC_FMTSTR_GPR_C_GPR_C_GPR;
	return 0;
}

/* stfqux FREG,GPR,GPR */
int stfqux_FREG_GPR_GPR(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_STFQUX;
	/* 011111AAAAABBBBBCCCCC11101101110 */
	dec->operand_n = 3;
	dec->operand_types[0] = PPC_OPER_TYPE_FREG;
	dec->operand_values[0] = (insword & 0x3E00000)>>21;
	dec->operand_types[1] = PPC_OPER_TYPE_GPR;
	dec->operand_values[1] = (insword & 0x1F0000)>>16;
	dec->operand_types[2] = PPC_OPER_TYPE_GPR;
	dec->operand_values[2] = (insword & 0xF800)>>11;
	dec->operand_fmtstr = PPC_FMTSTR_FREG_C_GPR_C_GPR;
	return 0;
}

/* sraiq GPR,GPR,NUM */
int sraiq_GPR_GPR_NUM(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_SRAIQ;
	/* 011111BBBBBAAAAACCCCC11101110000 */
	dec->operand_n = 3;
	dec->operand_types[0] = PPC_OPER_TYPE_GPR;
	dec->operand_values[0] = (insword & 0x1F0000)>>16;
	dec->operand_types[1] = PPC_OPER_TYPE_GPR;
	dec->operand_values[1] = (insword & 0x3E00000)>>21;
	dec->operand_types[2] = PPC_OPER_TYPE_NUM;
	dec->operand_values[2] = (insword & 0xF800)>>11;
	dec->operand_fmtstr = PPC_FMTSTR_GPR_C_GPR_C_NUM;
	return 0;
}

/* sraiq. GPR,GPR,NUM */
int sraiqD_GPR_GPR_NUM(uint32_t insword, struct ppc_decoded *dec)
{
	dec->properties |= PPC_PROPERTY_DOTTED;
	dec->mnemonic = PPC_MNEM_SRAIQ;
	/* 011111BBBBBAAAAACCCCC11101110001 */
	dec->operand_n = 3;
	dec->operand_types[0] = PPC_OPER_TYPE_GPR;
	dec->operand_values[0] = (insword & 0x1F0000)>>16;
	dec->operand_types[1] = PPC_OPER_TYPE_GPR;
	dec->operand_values[1] = (insword & 0x3E00000)>>21;
	dec->operand_types[2] = PPC_OPER_TYPE_NUM;
	dec->operand_values[2] = (insword & 0xF800)>>11;
	dec->operand_fmtstr = PPC_FMTSTR_GPR_C_GPR_C_NUM;
	return 0;
}

/* extsb GPR,GPR */
int extsb_GPR_GPR(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_EXTSB;
	/* 011111BBBBBAAAAA0000011101110100 */
	dec->operand_n = 2;
	dec->operand_types[0] = PPC_OPER_TYPE_GPR;
	dec->operand_values[0] = (insword & 0x1F0000)>>16;
	dec->operand_types[1] = PPC_OPER_TYPE_GPR;
	dec->operand_values[1] = (insword & 0x3E00000)>>21;
	dec->operand_fmtstr = PPC_FMTSTR_GPR_C_GPR;
	return 0;
}

/* extsb. GPR,GPR */
int extsbD_GPR_GPR(uint32_t insword, struct ppc_decoded *dec)
{
	dec->properties |= PPC_PROPERTY_DOTTED;
	dec->mnemonic = PPC_MNEM_EXTSB;
	/* 011111BBBBBAAAAA0000011101110101 */
	dec->operand_n = 2;
	dec->operand_types[0] = PPC_OPER_TYPE_GPR;
	dec->operand_values[0] = (insword & 0x1F0000)>>16;
	dec->operand_types[1] = PPC_OPER_TYPE_GPR;
	dec->operand_values[1] = (insword & 0x3E00000)>>21;
	dec->operand_fmtstr = PPC_FMTSTR_GPR_C_GPR;
	return 0;
}

/* stvflxl VREG,NUM,GPR */
int stvflxl_VREG_NUM_GPR(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_STVFLXL;
	/* 011111AAAAA00000CCCCC11110001010 */
	dec->operand_n = 3;
	dec->operand_types[0] = PPC_OPER_TYPE_VREG;
	dec->operand_values[0] = (insword & 0x3E00000)>>21;
	dec->operand_types[1] = PPC_OPER_TYPE_NUM;
	dec->operand_types[2] = PPC_OPER_TYPE_GPR;
	dec->operand_values[2] = (insword & 0xF800)>>11;
	dec->operand_fmtstr = PPC_FMTSTR_VREG_C_NUM_C_GPR;
	return 0;
}

/* iccci */
int iccci(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_ICCCI;
	return 0;
}

/* divduo GPR,GPR,GPR */
int divduo_GPR_GPR_GPR(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_DIVDUO;
	/* 011111AAAAABBBBBCCCCC11110010010 */
	dec->operand_n = 3;
	dec->operand_types[0] = PPC_OPER_TYPE_GPR;
	dec->operand_values[0] = (insword & 0x3E00000)>>21;
	dec->operand_types[1] = PPC_OPER_TYPE_GPR;
	dec->operand_values[1] = (insword & 0x1F0000)>>16;
	dec->operand_types[2] = PPC_OPER_TYPE_GPR;
	dec->operand_values[2] = (insword & 0xF800)>>11;
	dec->operand_fmtstr = PPC_FMTSTR_GPR_C_GPR_C_GPR;
	return 0;
}

/* divduo. GPR,GPR,GPR */
int divduoD_GPR_GPR_GPR(uint32_t insword, struct ppc_decoded *dec)
{
	dec->properties |= PPC_PROPERTY_DOTTED;
	dec->mnemonic = PPC_MNEM_DIVDUO;
	/* 011111AAAAABBBBBCCCCC11110010011 */
	dec->operand_n = 3;
	dec->operand_types[0] = PPC_OPER_TYPE_GPR;
	dec->operand_values[0] = (insword & 0x3E00000)>>21;
	dec->operand_types[1] = PPC_OPER_TYPE_GPR;
	dec->operand_values[1] = (insword & 0x1F0000)>>16;
	dec->operand_types[2] = PPC_OPER_TYPE_GPR;
	dec->operand_values[2] = (insword & 0xF800)>>11;
	dec->operand_fmtstr = PPC_FMTSTR_GPR_C_GPR_C_GPR;
	return 0;
}

/* divwuo GPR,GPR,GPR */
int divwuo_GPR_GPR_GPR(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_DIVWUO;
	/* 011111AAAAABBBBBCCCCC11110010110 */
	dec->operand_n = 3;
	dec->operand_types[0] = PPC_OPER_TYPE_GPR;
	dec->operand_values[0] = (insword & 0x3E00000)>>21;
	dec->operand_types[1] = PPC_OPER_TYPE_GPR;
	dec->operand_values[1] = (insword & 0x1F0000)>>16;
	dec->operand_types[2] = PPC_OPER_TYPE_GPR;
	dec->operand_values[2] = (insword & 0xF800)>>11;
	dec->operand_fmtstr = PPC_FMTSTR_GPR_C_GPR_C_GPR;
	return 0;
}

/* divwuo. GPR,GPR,GPR */
int divwuoD_GPR_GPR_GPR(uint32_t insword, struct ppc_decoded *dec)
{
	dec->properties |= PPC_PROPERTY_DOTTED;
	dec->mnemonic = PPC_MNEM_DIVWUO;
	/* 011111AAAAABBBBBCCCCC11110010111 */
	dec->operand_n = 3;
	dec->operand_types[0] = PPC_OPER_TYPE_GPR;
	dec->operand_values[0] = (insword & 0x3E00000)>>21;
	dec->operand_types[1] = PPC_OPER_TYPE_GPR;
	dec->operand_values[1] = (insword & 0x1F0000)>>16;
	dec->operand_types[2] = PPC_OPER_TYPE_GPR;
	dec->operand_values[2] = (insword & 0xF800)>>11;
	dec->operand_fmtstr = PPC_FMTSTR_GPR_C_GPR_C_GPR;
	return 0;
}

/* stxvd2x VSREG,NUM,GPR */
int stxvd2x_VSREG_NUM_GPR(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_STXVD2X;
	/* 011111AAAAA00000CCCCC1111001100A */
	dec->operand_n = 3;
	dec->operand_types[0] = PPC_OPER_TYPE_VSREG;
	dec->operand_values[0] = ((insword & 0x3E00000)>>20)|((insword & 0x1)>>0);
	dec->operand_types[1] = PPC_OPER_TYPE_NUM;
	dec->operand_types[2] = PPC_OPER_TYPE_GPR;
	dec->operand_values[2] = (insword & 0xF800)>>11;
	dec->operand_fmtstr = PPC_FMTSTR_VSREG_C_NUM_C_GPR;
	return 0;
}

/* tlbld GPR */
int tlbld_GPR(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_TLBLD;
	/* 0111110000000000AAAAA11110100100 */
	dec->operand_n = 1;
	dec->operand_types[0] = PPC_OPER_TYPE_GPR;
	dec->operand_values[0] = (insword & 0xF800)>>11;
	dec->operand_fmtstr = PPC_FMTSTR_GPR;
	return 0;
}

/* slbfee. GPR,GPR */
int slbfeeD_GPR_GPR(uint32_t insword, struct ppc_decoded *dec)
{
	dec->properties |= PPC_PROPERTY_DOTTED;
	dec->mnemonic = PPC_MNEM_SLBFEE;
	/* 011111AAAAA00000BBBBB11110100111 */
	dec->operand_n = 2;
	dec->operand_types[0] = PPC_OPER_TYPE_GPR;
	dec->operand_values[0] = (insword & 0x3E00000)>>21;
	dec->operand_types[1] = PPC_OPER_TYPE_GPR;
	dec->operand_values[1] = (insword & 0xF800)>>11;
	dec->operand_fmtstr = PPC_FMTSTR_GPR_C_GPR;
	return 0;
}

/* stbcix GPR,NUM,GPR */
int stbcix_GPR_NUM_GPR(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_STBCIX;
	/* 011111AAAAA00000CCCCC11110101010 */
	dec->operand_n = 3;
	dec->operand_types[0] = PPC_OPER_TYPE_GPR;
	dec->operand_values[0] = (insword & 0x3E00000)>>21;
	dec->operand_types[1] = PPC_OPER_TYPE_NUM;
	dec->operand_types[2] = PPC_OPER_TYPE_GPR;
	dec->operand_values[2] = (insword & 0xF800)>>11;
	dec->operand_fmtstr = PPC_FMTSTR_GPR_C_NUM_C_GPR;
	return 0;
}

/* icbi NUM,GPR */
int icbi_NUM_GPR(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_ICBI;
	/* 0111110000000000BBBBB11110101100 */
	dec->operand_n = 2;
	dec->operand_types[0] = PPC_OPER_TYPE_NUM;
	dec->operand_types[1] = PPC_OPER_TYPE_GPR;
	dec->operand_values[1] = (insword & 0xF800)>>11;
	dec->operand_fmtstr = PPC_FMTSTR_NUM_C_GPR;
	return 0;
}

/* stfiwx FREG,NUM,GPR */
int stfiwx_FREG_NUM_GPR(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_STFIWX;
	/* 011111AAAAA00000CCCCC11110101110 */
	dec->operand_n = 3;
	dec->operand_types[0] = PPC_OPER_TYPE_FREG;
	dec->operand_values[0] = (insword & 0x3E00000)>>21;
	dec->operand_types[1] = PPC_OPER_TYPE_NUM;
	dec->operand_types[2] = PPC_OPER_TYPE_GPR;
	dec->operand_values[2] = (insword & 0xF800)>>11;
	dec->operand_fmtstr = PPC_FMTSTR_FREG_C_NUM_C_GPR;
	return 0;
}

/* extsw GPR,GPR */
int extsw_GPR_GPR(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_EXTSW;
	/* 011111BBBBBAAAAA0000011110110100 */
	dec->operand_n = 2;
	dec->operand_types[0] = PPC_OPER_TYPE_GPR;
	dec->operand_values[0] = (insword & 0x1F0000)>>16;
	dec->operand_types[1] = PPC_OPER_TYPE_GPR;
	dec->operand_values[1] = (insword & 0x3E00000)>>21;
	dec->operand_fmtstr = PPC_FMTSTR_GPR_C_GPR;
	return 0;
}

/* extsw. GPR,GPR */
int extswD_GPR_GPR(uint32_t insword, struct ppc_decoded *dec)
{
	dec->properties |= PPC_PROPERTY_DOTTED;
	dec->mnemonic = PPC_MNEM_EXTSW;
	/* 011111BBBBBAAAAA0000011110110101 */
	dec->operand_n = 2;
	dec->operand_types[0] = PPC_OPER_TYPE_GPR;
	dec->operand_values[0] = (insword & 0x1F0000)>>16;
	dec->operand_types[1] = PPC_OPER_TYPE_GPR;
	dec->operand_values[1] = (insword & 0x3E00000)>>21;
	dec->operand_fmtstr = PPC_FMTSTR_GPR_C_GPR;
	return 0;
}

/* icbiep NUM,GPR */
int icbiep_NUM_GPR(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_ICBIEP;
	/* 0111110000000000BBBBB11110111110 */
	dec->operand_n = 2;
	dec->operand_types[0] = PPC_OPER_TYPE_NUM;
	dec->operand_types[1] = PPC_OPER_TYPE_GPR;
	dec->operand_values[1] = (insword & 0xF800)>>11;
	dec->operand_fmtstr = PPC_FMTSTR_NUM_C_GPR;
	return 0;
}

/* stvswxl VREG,NUM,GPR */
int stvswxl_VREG_NUM_GPR(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_STVSWXL;
	/* 011111AAAAA00000CCCCC11111001010 */
	dec->operand_n = 3;
	dec->operand_types[0] = PPC_OPER_TYPE_VREG;
	dec->operand_values[0] = (insword & 0x3E00000)>>21;
	dec->operand_types[1] = PPC_OPER_TYPE_NUM;
	dec->operand_types[2] = PPC_OPER_TYPE_GPR;
	dec->operand_values[2] = (insword & 0xF800)>>11;
	dec->operand_fmtstr = PPC_FMTSTR_VREG_C_NUM_C_GPR;
	return 0;
}

/* icread NUM,GPR */
int icread_NUM_GPR(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_ICREAD;
	/* 0111110000000000BBBBB11111001100 */
	dec->operand_n = 2;
	dec->operand_types[0] = PPC_OPER_TYPE_NUM;
	dec->operand_types[1] = PPC_OPER_TYPE_GPR;
	dec->operand_values[1] = (insword & 0xF800)>>11;
	dec->operand_fmtstr = PPC_FMTSTR_NUM_C_GPR;
	return 0;
}

/* nabso GPR,GPR */
int nabso_GPR_GPR(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_NABSO;
	/* 011111AAAAABBBBB0000011111010000 */
	dec->operand_n = 2;
	dec->operand_types[0] = PPC_OPER_TYPE_GPR;
	dec->operand_values[0] = (insword & 0x3E00000)>>21;
	dec->operand_types[1] = PPC_OPER_TYPE_GPR;
	dec->operand_values[1] = (insword & 0x1F0000)>>16;
	dec->operand_fmtstr = PPC_FMTSTR_GPR_C_GPR;
	return 0;
}

/* nabso. GPR,GPR */
int nabsoD_GPR_GPR(uint32_t insword, struct ppc_decoded *dec)
{
	dec->properties |= PPC_PROPERTY_DOTTED;
	dec->mnemonic = PPC_MNEM_NABSO;
	/* 011111AAAAABBBBB0000011111010001 */
	dec->operand_n = 2;
	dec->operand_types[0] = PPC_OPER_TYPE_GPR;
	dec->operand_values[0] = (insword & 0x3E00000)>>21;
	dec->operand_types[1] = PPC_OPER_TYPE_GPR;
	dec->operand_values[1] = (insword & 0x1F0000)>>16;
	dec->operand_fmtstr = PPC_FMTSTR_GPR_C_GPR;
	return 0;
}

/* divdo GPR,GPR,GPR */
int divdo_GPR_GPR_GPR(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_DIVDO;
	/* 011111AAAAABBBBBCCCCC11111010010 */
	dec->operand_n = 3;
	dec->operand_types[0] = PPC_OPER_TYPE_GPR;
	dec->operand_values[0] = (insword & 0x3E00000)>>21;
	dec->operand_types[1] = PPC_OPER_TYPE_GPR;
	dec->operand_values[1] = (insword & 0x1F0000)>>16;
	dec->operand_types[2] = PPC_OPER_TYPE_GPR;
	dec->operand_values[2] = (insword & 0xF800)>>11;
	dec->operand_fmtstr = PPC_FMTSTR_GPR_C_GPR_C_GPR;
	return 0;
}

/* divdo. GPR,GPR,GPR */
int divdoD_GPR_GPR_GPR(uint32_t insword, struct ppc_decoded *dec)
{
	dec->properties |= PPC_PROPERTY_DOTTED;
	dec->mnemonic = PPC_MNEM_DIVDO;
	/* 011111AAAAABBBBBCCCCC11111010011 */
	dec->operand_n = 3;
	dec->operand_types[0] = PPC_OPER_TYPE_GPR;
	dec->operand_values[0] = (insword & 0x3E00000)>>21;
	dec->operand_types[1] = PPC_OPER_TYPE_GPR;
	dec->operand_values[1] = (insword & 0x1F0000)>>16;
	dec->operand_types[2] = PPC_OPER_TYPE_GPR;
	dec->operand_values[2] = (insword & 0xF800)>>11;
	dec->operand_fmtstr = PPC_FMTSTR_GPR_C_GPR_C_GPR;
	return 0;
}

/* divwo GPR,GPR,GPR */
int divwo_GPR_GPR_GPR(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_DIVWO;
	/* 011111AAAAABBBBBCCCCC11111010110 */
	dec->operand_n = 3;
	dec->operand_types[0] = PPC_OPER_TYPE_GPR;
	dec->operand_values[0] = (insword & 0x3E00000)>>21;
	dec->operand_types[1] = PPC_OPER_TYPE_GPR;
	dec->operand_values[1] = (insword & 0x1F0000)>>16;
	dec->operand_types[2] = PPC_OPER_TYPE_GPR;
	dec->operand_values[2] = (insword & 0xF800)>>11;
	dec->operand_fmtstr = PPC_FMTSTR_GPR_C_GPR_C_GPR;
	return 0;
}

/* divwo. GPR,GPR,GPR */
int divwoD_GPR_GPR_GPR(uint32_t insword, struct ppc_decoded *dec)
{
	dec->properties |= PPC_PROPERTY_DOTTED;
	dec->mnemonic = PPC_MNEM_DIVWO;
	/* 011111AAAAABBBBBCCCCC11111010111 */
	dec->operand_n = 3;
	dec->operand_types[0] = PPC_OPER_TYPE_GPR;
	dec->operand_values[0] = (insword & 0x3E00000)>>21;
	dec->operand_types[1] = PPC_OPER_TYPE_GPR;
	dec->operand_values[1] = (insword & 0x1F0000)>>16;
	dec->operand_types[2] = PPC_OPER_TYPE_GPR;
	dec->operand_values[2] = (insword & 0xF800)>>11;
	dec->operand_fmtstr = PPC_FMTSTR_GPR_C_GPR_C_GPR;
	return 0;
}

/* stxvb16x VSREG,NUM,GPR */
int stxvb16x_VSREG_NUM_GPR(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_STXVB16X;
	/* 011111AAAAA00000CCCCC1111101100A */
	dec->operand_n = 3;
	dec->operand_types[0] = PPC_OPER_TYPE_VSREG;
	dec->operand_values[0] = ((insword & 0x3E00000)>>20)|((insword & 0x1)>>0);
	dec->operand_types[1] = PPC_OPER_TYPE_NUM;
	dec->operand_types[2] = PPC_OPER_TYPE_GPR;
	dec->operand_values[2] = (insword & 0xF800)>>11;
	dec->operand_fmtstr = PPC_FMTSTR_VSREG_C_NUM_C_GPR;
	return 0;
}

/* trechkpt. */
int trechkptD(uint32_t insword, struct ppc_decoded *dec)
{
	dec->properties |= PPC_PROPERTY_DOTTED;
	dec->mnemonic = PPC_MNEM_TRECHKPT;
	return 0;
}

/* tlbli GPR */
int tlbli_GPR(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_TLBLI;
	/* 0111110000000000AAAAA11111100100 */
	dec->operand_n = 1;
	dec->operand_types[0] = PPC_OPER_TYPE_GPR;
	dec->operand_values[0] = (insword & 0xF800)>>11;
	dec->operand_fmtstr = PPC_FMTSTR_GPR;
	return 0;
}

/* stdcix GPR,NUM,GPR */
int stdcix_GPR_NUM_GPR(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_STDCIX;
	/* 011111AAAAA00000CCCCC11111101010 */
	dec->operand_n = 3;
	dec->operand_types[0] = PPC_OPER_TYPE_GPR;
	dec->operand_values[0] = (insword & 0x3E00000)>>21;
	dec->operand_types[1] = PPC_OPER_TYPE_NUM;
	dec->operand_types[2] = PPC_OPER_TYPE_GPR;
	dec->operand_values[2] = (insword & 0xF800)>>11;
	dec->operand_fmtstr = PPC_FMTSTR_GPR_C_NUM_C_GPR;
	return 0;
}

/* dcbz NUM,GPR */
int dcbz_NUM_GPR(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_DCBZ;
	/* 0111110000000000BBBBB11111101100 */
	dec->operand_n = 2;
	dec->operand_types[0] = PPC_OPER_TYPE_NUM;
	dec->operand_types[1] = PPC_OPER_TYPE_GPR;
	dec->operand_values[1] = (insword & 0xF800)>>11;
	dec->operand_fmtstr = PPC_FMTSTR_NUM_C_GPR;
	return 0;
}

/* dcbzep NUM,GPR */
int dcbzep_NUM_GPR(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_DCBZEP;
	/* 0111110000000000BBBBB11111111110 */
	dec->operand_n = 2;
	dec->operand_types[0] = PPC_OPER_TYPE_NUM;
	dec->operand_types[1] = PPC_OPER_TYPE_GPR;
	dec->operand_values[1] = (insword & 0xF800)>>11;
	dec->operand_fmtstr = PPC_FMTSTR_NUM_C_GPR;
	return 0;
}

/* eratilx NUM,GPR,GPR */
int eratilx_NUM_GPR_GPR(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_ERATILX;
	/* 011111xxAAABBBBBCCCCC00001100110 */
	dec->operand_n = 3;
	dec->operand_types[0] = PPC_OPER_TYPE_NUM;
	dec->operand_values[0] = (insword & 0xE00000)>>21;
	dec->operand_types[1] = PPC_OPER_TYPE_GPR;
	dec->operand_values[1] = (insword & 0x1F0000)>>16;
	dec->operand_types[2] = PPC_OPER_TYPE_GPR;
	dec->operand_values[2] = (insword & 0xF800)>>11;
	dec->operand_fmtstr = PPC_FMTSTR_NUM_C_GPR_C_GPR;
	return 0;
}

/* nor GPR,GPR,GPR */
int nor_GPR_GPR_GPR(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_NOR;
	/* 011111BBBBBAAAAACCCCC00011111000 */
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

/* nor. GPR,GPR,GPR */
int norD_GPR_GPR_GPR(uint32_t insword, struct ppc_decoded *dec)
{
	dec->properties |= PPC_PROPERTY_DOTTED;
	dec->mnemonic = PPC_MNEM_NOR;
	/* 011111BBBBBAAAAACCCCC00011111001 */
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

/* eratsx GPR,NUM,GPR */
int eratsx_GPR_NUM_GPR(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_ERATSX;
	/* 011111AAAAA00000CCCCC00100100110 */
	dec->operand_n = 3;
	dec->operand_types[0] = PPC_OPER_TYPE_GPR;
	dec->operand_values[0] = (insword & 0x3E00000)>>21;
	dec->operand_types[1] = PPC_OPER_TYPE_NUM;
	dec->operand_types[2] = PPC_OPER_TYPE_GPR;
	dec->operand_values[2] = (insword & 0xF800)>>11;
	dec->operand_fmtstr = PPC_FMTSTR_GPR_C_NUM_C_GPR;
	return 0;
}

/* eratre GPR,GPR,NUM */
int eratre_GPR_GPR_NUM(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_ERATRE;
	/* 011111AAAAABBBBBxxCCC00101100110 */
	dec->operand_n = 3;
	dec->operand_types[0] = PPC_OPER_TYPE_GPR;
	dec->operand_values[0] = (insword & 0x3E00000)>>21;
	dec->operand_types[1] = PPC_OPER_TYPE_GPR;
	dec->operand_values[1] = (insword & 0x1F0000)>>16;
	dec->operand_types[2] = PPC_OPER_TYPE_NUM;
	dec->operand_values[2] = (insword & 0x3800)>>11;
	dec->operand_fmtstr = PPC_FMTSTR_GPR_C_GPR_C_NUM;
	return 0;
}

/* eratwe GPR,GPR,NUM */
int eratwe_GPR_GPR_NUM(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_ERATWE;
	/* 011111AAAAABBBBBxxCCC00110100110 */
	dec->operand_n = 3;
	dec->operand_types[0] = PPC_OPER_TYPE_GPR;
	dec->operand_values[0] = (insword & 0x3E00000)>>21;
	dec->operand_types[1] = PPC_OPER_TYPE_GPR;
	dec->operand_values[1] = (insword & 0x1F0000)>>16;
	dec->operand_types[2] = PPC_OPER_TYPE_NUM;
	dec->operand_values[2] = (insword & 0x3800)>>11;
	dec->operand_fmtstr = PPC_FMTSTR_GPR_C_GPR_C_NUM;
	return 0;
}

/* or GPR,GPR,GPR */
int or_GPR_GPR_GPR(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_OR;
	/* 011111BBBBBAAAAACCCCC01101111000 */
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

/* or. GPR,GPR,GPR */
int orD_GPR_GPR_GPR(uint32_t insword, struct ppc_decoded *dec)
{
	dec->properties |= PPC_PROPERTY_DOTTED;
	dec->mnemonic = PPC_MNEM_OR;
	/* 011111BBBBxAAAAACCCCx01101111001 */
	dec->operand_n = 3;
	dec->operand_types[0] = PPC_OPER_TYPE_GPR;
	dec->operand_values[0] = (insword & 0x1F0000)>>16;
	dec->operand_types[1] = PPC_OPER_TYPE_GPR;
	dec->operand_values[1] = (insword & 0x3C00000)>>22;
	dec->operand_types[2] = PPC_OPER_TYPE_GPR;
	dec->operand_values[2] = (insword & 0xF000)>>12;
	dec->operand_fmtstr = PPC_FMTSTR_GPR_C_GPR_C_GPR;
	return 0;
}

/* dccci GPR,GPR */
int dccci_GPR_GPR(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_DCCCI;
	/* 01111100000AAAAABBBBB01110001100 */
	dec->operand_n = 2;
	dec->operand_types[0] = PPC_OPER_TYPE_GPR;
	dec->operand_values[0] = (insword & 0x1F0000)>>16;
	dec->operand_types[1] = PPC_OPER_TYPE_GPR;
	dec->operand_values[1] = (insword & 0xF800)>>11;
	dec->operand_fmtstr = PPC_FMTSTR_GPR_C_GPR;
	return 0;
}

/* mbar */
int mbar(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_MBAR;
	return 0;
}

/* wclr NUM,NUM,GPR */
int wclr_NUM_NUM_GPR(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_WCLR;
	/* 011111xxxAA00000CCCCC11101001100 */
	dec->operand_n = 3;
	dec->operand_types[0] = PPC_OPER_TYPE_NUM;
	dec->operand_values[0] = (insword & 0x600000)>>21;
	dec->operand_types[1] = PPC_OPER_TYPE_NUM;
	dec->operand_types[2] = PPC_OPER_TYPE_GPR;
	dec->operand_values[2] = (insword & 0xF800)>>11;
	dec->operand_fmtstr = PPC_FMTSTR_NUM_C_NUM_C_GPR;
	return 0;
}

/* tlbrelo GPR,GPR */
int tlbrelo_GPR_GPR(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_TLBRELO;
	/* 011111AAAAABBBBB0000111101100100 */
	dec->operand_n = 2;
	dec->operand_types[0] = PPC_OPER_TYPE_GPR;
	dec->operand_values[0] = (insword & 0x3E00000)>>21;
	dec->operand_types[1] = PPC_OPER_TYPE_GPR;
	dec->operand_values[1] = (insword & 0x1F0000)>>16;
	dec->operand_fmtstr = PPC_FMTSTR_GPR_C_GPR;
	return 0;
}

/* iccci GPR,GPR */
int iccci_GPR_GPR(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_ICCCI;
	/* 01111100000AAAAABBBBB11110001100 */
	dec->operand_n = 2;
	dec->operand_types[0] = PPC_OPER_TYPE_GPR;
	dec->operand_values[0] = (insword & 0x1F0000)>>16;
	dec->operand_types[1] = PPC_OPER_TYPE_GPR;
	dec->operand_values[1] = (insword & 0xF800)>>11;
	dec->operand_fmtstr = PPC_FMTSTR_GPR_C_GPR;
	return 0;
}

/* mfexisr GPR */
int mfexisr_GPR(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_MFEXISR;
	/* 011111AAAAA000000001001010000110 */
	dec->operand_n = 1;
	dec->operand_types[0] = PPC_OPER_TYPE_GPR;
	dec->operand_values[0] = (insword & 0x3E00000)>>21;
	dec->operand_fmtstr = PPC_FMTSTR_GPR;
	return 0;
}

/* mtexisr GPR */
int mtexisr_GPR(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_MTEXISR;
	/* 011111AAAAA000000001001110000110 */
	dec->operand_n = 1;
	dec->operand_types[0] = PPC_OPER_TYPE_GPR;
	dec->operand_values[0] = (insword & 0x3E00000)>>21;
	dec->operand_fmtstr = PPC_FMTSTR_GPR;
	return 0;
}

/* tlbre GPR,GPR,NUM */
int tlbre_GPR_GPR_NUM(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_TLBRE;
	/* 011111AAAAABBBBBCCCCC11101100100 */
	dec->operand_n = 3;
	dec->operand_types[0] = PPC_OPER_TYPE_GPR;
	dec->operand_values[0] = (insword & 0x3E00000)>>21;
	dec->operand_types[1] = PPC_OPER_TYPE_GPR;
	dec->operand_values[1] = (insword & 0x1F0000)>>16;
	dec->operand_types[2] = PPC_OPER_TYPE_NUM;
	dec->operand_values[2] = (insword & 0xF800)>>11;
	dec->operand_fmtstr = PPC_FMTSTR_GPR_C_GPR_C_NUM;
	return 0;
}

/* mfbr0 GPR */
int mfbr0_GPR(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_MFBR0;
	/* 011111AAAAA000000010001010000110 */
	dec->operand_n = 1;
	dec->operand_types[0] = PPC_OPER_TYPE_GPR;
	dec->operand_values[0] = (insword & 0x3E00000)>>21;
	dec->operand_fmtstr = PPC_FMTSTR_GPR;
	return 0;
}

/* mtbr0 GPR */
int mtbr0_GPR(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_MTBR0;
	/* 011111AAAAA000000010001110000110 */
	dec->operand_n = 1;
	dec->operand_types[0] = PPC_OPER_TYPE_GPR;
	dec->operand_values[0] = (insword & 0x3E00000)>>21;
	dec->operand_fmtstr = PPC_FMTSTR_GPR;
	return 0;
}

/* mfiocr GPR */
int mfiocr_GPR(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_MFIOCR;
	/* 011111AAAAA000000010101010000110 */
	dec->operand_n = 1;
	dec->operand_types[0] = PPC_OPER_TYPE_GPR;
	dec->operand_values[0] = (insword & 0x3E00000)>>21;
	dec->operand_fmtstr = PPC_FMTSTR_GPR;
	return 0;
}

/* mtiocr GPR */
int mtiocr_GPR(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_MTIOCR;
	/* 011111AAAAA000000010101110000110 */
	dec->operand_n = 1;
	dec->operand_types[0] = PPC_OPER_TYPE_GPR;
	dec->operand_values[0] = (insword & 0x3E00000)>>21;
	dec->operand_fmtstr = PPC_FMTSTR_GPR;
	return 0;
}

/* mfdmacr0 GPR */
int mfdmacr0_GPR(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_MFDMACR0;
	/* 011111AAAAA000000011001010000110 */
	dec->operand_n = 1;
	dec->operand_types[0] = PPC_OPER_TYPE_GPR;
	dec->operand_values[0] = (insword & 0x3E00000)>>21;
	dec->operand_fmtstr = PPC_FMTSTR_GPR;
	return 0;
}

/* mtdmacr0 GPR */
int mtdmacr0_GPR(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_MTDMACR0;
	/* 011111AAAAA000000011001110000110 */
	dec->operand_n = 1;
	dec->operand_types[0] = PPC_OPER_TYPE_GPR;
	dec->operand_values[0] = (insword & 0x3E00000)>>21;
	dec->operand_fmtstr = PPC_FMTSTR_GPR;
	return 0;
}

/* mfdmasr GPR */
int mfdmasr_GPR(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_MFDMASR;
	/* 011111AAAAA000000011101010000110 */
	dec->operand_n = 1;
	dec->operand_types[0] = PPC_OPER_TYPE_GPR;
	dec->operand_values[0] = (insword & 0x3E00000)>>21;
	dec->operand_fmtstr = PPC_FMTSTR_GPR;
	return 0;
}

/* mtdmasr GPR */
int mtdmasr_GPR(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_MTDMASR;
	/* 011111AAAAA000000011101110000110 */
	dec->operand_n = 1;
	dec->operand_types[0] = PPC_OPER_TYPE_GPR;
	dec->operand_values[0] = (insword & 0x3E00000)>>21;
	dec->operand_fmtstr = PPC_FMTSTR_GPR;
	return 0;
}

/* mfvrsave GPR */
int mfvrsave_GPR(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_MFVRSAVE;
	/* 011111AAAAA000000100001010100110 */
	dec->operand_n = 1;
	dec->operand_types[0] = PPC_OPER_TYPE_GPR;
	dec->operand_values[0] = (insword & 0x3E00000)>>21;
	dec->operand_fmtstr = PPC_FMTSTR_GPR;
	return 0;
}

/* mtvrsave GPR */
int mtvrsave_GPR(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_MTVRSAVE;
	/* 011111AAAAA000000100001110100110 */
	dec->operand_n = 1;
	dec->operand_types[0] = PPC_OPER_TYPE_GPR;
	dec->operand_values[0] = (insword & 0x3E00000)>>21;
	dec->operand_fmtstr = PPC_FMTSTR_GPR;
	return 0;
}

/* mfppr GPR */
int mfppr_GPR(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_MFPPR;
	/* 011111AAAAA000001110001010100110 */
	dec->operand_n = 1;
	dec->operand_types[0] = PPC_OPER_TYPE_GPR;
	dec->operand_values[0] = (insword & 0x3E00000)>>21;
	dec->operand_fmtstr = PPC_FMTSTR_GPR;
	return 0;
}

/* mtppr GPR */
int mtppr_GPR(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_MTPPR;
	/* 011111AAAAA000001110001110100110 */
	dec->operand_n = 1;
	dec->operand_types[0] = PPC_OPER_TYPE_GPR;
	dec->operand_values[0] = (insword & 0x3E00000)>>21;
	dec->operand_fmtstr = PPC_FMTSTR_GPR;
	return 0;
}

/* lvsl VREG,GPR,GPR */
int lvsl_VREG_GPR_GPR(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_LVSL;
	/* 011111AAAAABBBBBCCCCC00000001100 */
	dec->operand_n = 3;
	dec->operand_types[0] = PPC_OPER_TYPE_VREG;
	dec->operand_values[0] = (insword & 0x3E00000)>>21;
	dec->operand_types[1] = PPC_OPER_TYPE_GPR;
	dec->operand_values[1] = (insword & 0x1F0000)>>16;
	dec->operand_types[2] = PPC_OPER_TYPE_GPR;
	dec->operand_values[2] = (insword & 0xF800)>>11;
	dec->operand_fmtstr = PPC_FMTSTR_VREG_C_GPR_C_GPR;
	return 0;
}

/* lvebx VREG,GPR,GPR */
int lvebx_VREG_GPR_GPR(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_LVEBX;
	/* 011111AAAAABxBBBCCCCC00000001110 */
	dec->operand_n = 3;
	dec->operand_types[0] = PPC_OPER_TYPE_VREG;
	dec->operand_values[0] = (insword & 0x3E00000)>>21;
	dec->operand_types[1] = PPC_OPER_TYPE_GPR;
	dec->operand_values[1] = ((insword & 0x100000)>>17)|((insword & 0x70000)>>16);
	dec->operand_types[2] = PPC_OPER_TYPE_GPR;
	dec->operand_values[2] = (insword & 0xF800)>>11;
	dec->operand_fmtstr = PPC_FMTSTR_VREG_C_GPR_C_GPR;
	return 0;
}

/* lxsiwzx VSREG,GPR,GPR */
int lxsiwzx_VSREG_GPR_GPR(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_LXSIWZX;
	/* 011111AAAAAxBBBBCCCCC0000001100A */
	dec->operand_n = 3;
	dec->operand_types[0] = PPC_OPER_TYPE_VSREG;
	dec->operand_values[0] = ((insword & 0x3E00000)>>20)|((insword & 0x1)>>0);
	dec->operand_types[1] = PPC_OPER_TYPE_GPR;
	dec->operand_values[1] = (insword & 0xF0000)>>16;
	dec->operand_types[2] = PPC_OPER_TYPE_GPR;
	dec->operand_values[2] = (insword & 0xF800)>>11;
	dec->operand_fmtstr = PPC_FMTSTR_VSREG_C_GPR_C_GPR;
	return 0;
}

/* isellt GPR,GPR,GPR */
int isellt_GPR_GPR_GPR(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_ISELLT;
	/* 011111AAAAABBBBBCCCCC00000011110 */
	dec->operand_n = 3;
	dec->operand_types[0] = PPC_OPER_TYPE_GPR;
	dec->operand_values[0] = (insword & 0x3E00000)>>21;
	dec->operand_types[1] = PPC_OPER_TYPE_GPR;
	dec->operand_values[1] = (insword & 0x1F0000)>>16;
	dec->operand_types[2] = PPC_OPER_TYPE_GPR;
	dec->operand_values[2] = (insword & 0xF800)>>11;
	dec->operand_fmtstr = PPC_FMTSTR_GPR_C_GPR_C_GPR;
	return 0;
}

/* isel GPR,GPR,GPR,NUM */
int isel_GPR_GPR_GPR_NUM(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_ISEL;
	/* 011111AAAAABBBBBCCCCCDDDDD01111x */
	dec->operand_n = 4;
	dec->operand_types[0] = PPC_OPER_TYPE_GPR;
	dec->operand_values[0] = (insword & 0x3E00000)>>21;
	dec->operand_types[1] = PPC_OPER_TYPE_GPR;
	dec->operand_values[1] = (insword & 0x1F0000)>>16;
	dec->operand_types[2] = PPC_OPER_TYPE_GPR;
	dec->operand_values[2] = (insword & 0xF800)>>11;
	dec->operand_types[3] = PPC_OPER_TYPE_NUM;
	dec->operand_values[3] = (insword & 0x7C0)>>6;
	dec->operand_fmtstr = PPC_FMTSTR_GPR_C_GPR_C_GPR_C_NUM;
	return 0;
}

/* lwarx GPR,GPR,GPR */
int lwarx_GPR_GPR_GPR(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_LWARX;
	/* 011111AAAAABBBBBCCCCC00000101000 */
	dec->operand_n = 3;
	dec->operand_types[0] = PPC_OPER_TYPE_GPR;
	dec->operand_values[0] = (insword & 0x3E00000)>>21;
	dec->operand_types[1] = PPC_OPER_TYPE_GPR;
	dec->operand_values[1] = (insword & 0x1F0000)>>16;
	dec->operand_types[2] = PPC_OPER_TYPE_GPR;
	dec->operand_values[2] = (insword & 0xF800)>>11;
	dec->operand_fmtstr = PPC_FMTSTR_GPR_C_GPR_C_GPR;
	return 0;
}

/* lwarx GPR,GPR,GPR,NUM */
int lwarx_GPR_GPR_GPR_NUM(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_LWARX;
	/* 011111AAAAABBBxBCCCCC00000101001 */
	dec->operand_n = 4;
	dec->operand_types[0] = PPC_OPER_TYPE_GPR;
	dec->operand_values[0] = (insword & 0x3E00000)>>21;
	dec->operand_types[1] = PPC_OPER_TYPE_GPR;
	dec->operand_values[1] = ((insword & 0x1C0000)>>17)|((insword & 0x10000)>>16);
	dec->operand_types[2] = PPC_OPER_TYPE_GPR;
	dec->operand_values[2] = (insword & 0xF800)>>11;
	dec->operand_types[3] = PPC_OPER_TYPE_NUM;
	dec->operand_fmtstr = PPC_FMTSTR_GPR_C_GPR_C_GPR_C_NUM;
	return 0;
}

/* ldx GPR,GPR,GPR */
int ldx_GPR_GPR_GPR(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_LDX;
	/* 011111AAAAABBBBBCCCCC00000101010 */
	dec->operand_n = 3;
	dec->operand_types[0] = PPC_OPER_TYPE_GPR;
	dec->operand_values[0] = (insword & 0x3E00000)>>21;
	dec->operand_types[1] = PPC_OPER_TYPE_GPR;
	dec->operand_values[1] = (insword & 0x1F0000)>>16;
	dec->operand_types[2] = PPC_OPER_TYPE_GPR;
	dec->operand_values[2] = (insword & 0xF800)>>11;
	dec->operand_fmtstr = PPC_FMTSTR_GPR_C_GPR_C_GPR;
	return 0;
}

/* lwzx GPR,GPR,GPR */
int lwzx_GPR_GPR_GPR(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_LWZX;
	/* 011111AAAAABBBBBCCCCC00000101110 */
	dec->operand_n = 3;
	dec->operand_types[0] = PPC_OPER_TYPE_GPR;
	dec->operand_values[0] = (insword & 0x3E00000)>>21;
	dec->operand_types[1] = PPC_OPER_TYPE_GPR;
	dec->operand_values[1] = (insword & 0x1F0000)>>16;
	dec->operand_types[2] = PPC_OPER_TYPE_GPR;
	dec->operand_values[2] = (insword & 0xF800)>>11;
	dec->operand_fmtstr = PPC_FMTSTR_GPR_C_GPR_C_GPR;
	return 0;
}

/* lwepx GPR,GPR,GPR */
int lwepx_GPR_GPR_GPR(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_LWEPX;
	/* 011111AAAAABBBBBCCCCC00000111110 */
	dec->operand_n = 3;
	dec->operand_types[0] = PPC_OPER_TYPE_GPR;
	dec->operand_values[0] = (insword & 0x3E00000)>>21;
	dec->operand_types[1] = PPC_OPER_TYPE_GPR;
	dec->operand_values[1] = (insword & 0x1F0000)>>16;
	dec->operand_types[2] = PPC_OPER_TYPE_GPR;
	dec->operand_values[2] = (insword & 0xF800)>>11;
	dec->operand_fmtstr = PPC_FMTSTR_GPR_C_GPR_C_GPR;
	return 0;
}

/* lvsr VREG,GPR,GPR */
int lvsr_VREG_GPR_GPR(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_LVSR;
	/* 011111AAAAABBBBBCCCCC00001001100 */
	dec->operand_n = 3;
	dec->operand_types[0] = PPC_OPER_TYPE_VREG;
	dec->operand_values[0] = (insword & 0x3E00000)>>21;
	dec->operand_types[1] = PPC_OPER_TYPE_GPR;
	dec->operand_values[1] = (insword & 0x1F0000)>>16;
	dec->operand_types[2] = PPC_OPER_TYPE_GPR;
	dec->operand_values[2] = (insword & 0xF800)>>11;
	dec->operand_fmtstr = PPC_FMTSTR_VREG_C_GPR_C_GPR;
	return 0;
}

/* lvehx VREG,GPR,GPR */
int lvehx_VREG_GPR_GPR(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_LVEHX;
	/* 011111AAAAABBBBBCCCCC00001001110 */
	dec->operand_n = 3;
	dec->operand_types[0] = PPC_OPER_TYPE_VREG;
	dec->operand_values[0] = (insword & 0x3E00000)>>21;
	dec->operand_types[1] = PPC_OPER_TYPE_GPR;
	dec->operand_values[1] = (insword & 0x1F0000)>>16;
	dec->operand_types[2] = PPC_OPER_TYPE_GPR;
	dec->operand_values[2] = (insword & 0xF800)>>11;
	dec->operand_fmtstr = PPC_FMTSTR_VREG_C_GPR_C_GPR;
	return 0;
}

/* iselgt GPR,GPR,GPR */
int iselgt_GPR_GPR_GPR(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_ISELGT;
	/* 011111AAAAABBBxBCCCCC00001011110 */
	dec->operand_n = 3;
	dec->operand_types[0] = PPC_OPER_TYPE_GPR;
	dec->operand_values[0] = (insword & 0x3E00000)>>21;
	dec->operand_types[1] = PPC_OPER_TYPE_GPR;
	dec->operand_values[1] = ((insword & 0x1C0000)>>17)|((insword & 0x10000)>>16);
	dec->operand_types[2] = PPC_OPER_TYPE_GPR;
	dec->operand_values[2] = (insword & 0xF800)>>11;
	dec->operand_fmtstr = PPC_FMTSTR_GPR_C_GPR_C_GPR;
	return 0;
}

/* lbarx GPR,GPR,GPR */
int lbarx_GPR_GPR_GPR(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_LBARX;
	/* 011111AAAAABxBBBCCCCC00001101000 */
	dec->operand_n = 3;
	dec->operand_types[0] = PPC_OPER_TYPE_GPR;
	dec->operand_values[0] = (insword & 0x3E00000)>>21;
	dec->operand_types[1] = PPC_OPER_TYPE_GPR;
	dec->operand_values[1] = ((insword & 0x100000)>>17)|((insword & 0x70000)>>16);
	dec->operand_types[2] = PPC_OPER_TYPE_GPR;
	dec->operand_values[2] = (insword & 0xF800)>>11;
	dec->operand_fmtstr = PPC_FMTSTR_GPR_C_GPR_C_GPR;
	return 0;
}

/* lbarx GPR,GPR,GPR,NUM */
int lbarx_GPR_GPR_GPR_NUM(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_LBARX;
	/* 011111AAAAABBBxBCCCCC00001101001 */
	dec->operand_n = 4;
	dec->operand_types[0] = PPC_OPER_TYPE_GPR;
	dec->operand_values[0] = (insword & 0x3E00000)>>21;
	dec->operand_types[1] = PPC_OPER_TYPE_GPR;
	dec->operand_values[1] = ((insword & 0x1C0000)>>17)|((insword & 0x10000)>>16);
	dec->operand_types[2] = PPC_OPER_TYPE_GPR;
	dec->operand_values[2] = (insword & 0xF800)>>11;
	dec->operand_types[3] = PPC_OPER_TYPE_NUM;
	dec->operand_fmtstr = PPC_FMTSTR_GPR_C_GPR_C_GPR_C_NUM;
	return 0;
}

/* ldux GPR,GPR,GPR */
int ldux_GPR_GPR_GPR(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_LDUX;
	/* 011111AAAAABBBBBCCCCC00001101010 */
	dec->operand_n = 3;
	dec->operand_types[0] = PPC_OPER_TYPE_GPR;
	dec->operand_values[0] = (insword & 0x3E00000)>>21;
	dec->operand_types[1] = PPC_OPER_TYPE_GPR;
	dec->operand_values[1] = (insword & 0x1F0000)>>16;
	dec->operand_types[2] = PPC_OPER_TYPE_GPR;
	dec->operand_values[2] = (insword & 0xF800)>>11;
	dec->operand_fmtstr = PPC_FMTSTR_GPR_C_GPR_C_GPR;
	return 0;
}

/* dcbst GPR,GPR */
int dcbst_GPR_GPR(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_DCBST;
	/* 01111100000AAAAABBBBB00001101100 */
	dec->operand_n = 2;
	dec->operand_types[0] = PPC_OPER_TYPE_GPR;
	dec->operand_values[0] = (insword & 0x1F0000)>>16;
	dec->operand_types[1] = PPC_OPER_TYPE_GPR;
	dec->operand_values[1] = (insword & 0xF800)>>11;
	dec->operand_fmtstr = PPC_FMTSTR_GPR_C_GPR;
	return 0;
}

/* lwzux GPR,GPR,GPR */
int lwzux_GPR_GPR_GPR(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_LWZUX;
	/* 011111AAAAABBBBBCCCCC00001101110 */
	dec->operand_n = 3;
	dec->operand_types[0] = PPC_OPER_TYPE_GPR;
	dec->operand_values[0] = (insword & 0x3E00000)>>21;
	dec->operand_types[1] = PPC_OPER_TYPE_GPR;
	dec->operand_values[1] = (insword & 0x1F0000)>>16;
	dec->operand_types[2] = PPC_OPER_TYPE_GPR;
	dec->operand_values[2] = (insword & 0xF800)>>11;
	dec->operand_fmtstr = PPC_FMTSTR_GPR_C_GPR_C_GPR;
	return 0;
}

/* dcbstep GPR,GPR */
int dcbstep_GPR_GPR(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_DCBSTEP;
	/* 01111100000AAAAABBBBB00001111110 */
	dec->operand_n = 2;
	dec->operand_types[0] = PPC_OPER_TYPE_GPR;
	dec->operand_values[0] = (insword & 0x1F0000)>>16;
	dec->operand_types[1] = PPC_OPER_TYPE_GPR;
	dec->operand_values[1] = (insword & 0xF800)>>11;
	dec->operand_fmtstr = PPC_FMTSTR_GPR_C_GPR;
	return 0;
}

/* lvewx VREG,GPR,GPR */
int lvewx_VREG_GPR_GPR(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_LVEWX;
	/* 011111AAAAABBBBBCCCCC00010001110 */
	dec->operand_n = 3;
	dec->operand_types[0] = PPC_OPER_TYPE_VREG;
	dec->operand_values[0] = (insword & 0x3E00000)>>21;
	dec->operand_types[1] = PPC_OPER_TYPE_GPR;
	dec->operand_values[1] = (insword & 0x1F0000)>>16;
	dec->operand_types[2] = PPC_OPER_TYPE_GPR;
	dec->operand_values[2] = (insword & 0xF800)>>11;
	dec->operand_fmtstr = PPC_FMTSTR_VREG_C_GPR_C_GPR;
	return 0;
}

/* lxsiwax VSREG,GPR,GPR */
int lxsiwax_VSREG_GPR_GPR(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_LXSIWAX;
	/* 011111AAAAABBBBBCCCCC0001001100A */
	dec->operand_n = 3;
	dec->operand_types[0] = PPC_OPER_TYPE_VSREG;
	dec->operand_values[0] = ((insword & 0x3E00000)>>20)|((insword & 0x1)>>0);
	dec->operand_types[1] = PPC_OPER_TYPE_GPR;
	dec->operand_values[1] = (insword & 0x1F0000)>>16;
	dec->operand_types[2] = PPC_OPER_TYPE_GPR;
	dec->operand_values[2] = (insword & 0xF800)>>11;
	dec->operand_fmtstr = PPC_FMTSTR_VSREG_C_GPR_C_GPR;
	return 0;
}

/* iseleq GPR,GPR,GPR */
int iseleq_GPR_GPR_GPR(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_ISELEQ;
	/* 011111AAAAABBBBBCCCCC00010011110 */
	dec->operand_n = 3;
	dec->operand_types[0] = PPC_OPER_TYPE_GPR;
	dec->operand_values[0] = (insword & 0x3E00000)>>21;
	dec->operand_types[1] = PPC_OPER_TYPE_GPR;
	dec->operand_values[1] = (insword & 0x1F0000)>>16;
	dec->operand_types[2] = PPC_OPER_TYPE_GPR;
	dec->operand_values[2] = (insword & 0xF800)>>11;
	dec->operand_fmtstr = PPC_FMTSTR_GPR_C_GPR_C_GPR;
	return 0;
}

/* ldarx GPR,GPR,GPR */
int ldarx_GPR_GPR_GPR(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_LDARX;
	/* 011111AAAAABBBBBCCCCC00010101000 */
	dec->operand_n = 3;
	dec->operand_types[0] = PPC_OPER_TYPE_GPR;
	dec->operand_values[0] = (insword & 0x3E00000)>>21;
	dec->operand_types[1] = PPC_OPER_TYPE_GPR;
	dec->operand_values[1] = (insword & 0x1F0000)>>16;
	dec->operand_types[2] = PPC_OPER_TYPE_GPR;
	dec->operand_values[2] = (insword & 0xF800)>>11;
	dec->operand_fmtstr = PPC_FMTSTR_GPR_C_GPR_C_GPR;
	return 0;
}

/* ldarx GPR,GPR,GPR,NUM */
int ldarx_GPR_GPR_GPR_NUM(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_LDARX;
	/* 011111AAAAAxBBBBCCCCC00010101001 */
	dec->operand_n = 4;
	dec->operand_types[0] = PPC_OPER_TYPE_GPR;
	dec->operand_values[0] = (insword & 0x3E00000)>>21;
	dec->operand_types[1] = PPC_OPER_TYPE_GPR;
	dec->operand_values[1] = (insword & 0xF0000)>>16;
	dec->operand_types[2] = PPC_OPER_TYPE_GPR;
	dec->operand_values[2] = (insword & 0xF800)>>11;
	dec->operand_types[3] = PPC_OPER_TYPE_NUM;
	dec->operand_fmtstr = PPC_FMTSTR_GPR_C_GPR_C_GPR_C_NUM;
	return 0;
}

/* dcbf GPR,GPR */
int dcbf_GPR_GPR(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_DCBF;
	/* 01111100000AAAAABBBBB00010101100 */
	dec->operand_n = 2;
	dec->operand_types[0] = PPC_OPER_TYPE_GPR;
	dec->operand_values[0] = (insword & 0x1F0000)>>16;
	dec->operand_types[1] = PPC_OPER_TYPE_GPR;
	dec->operand_values[1] = (insword & 0xF800)>>11;
	dec->operand_fmtstr = PPC_FMTSTR_GPR_C_GPR;
	return 0;
}

/* lbzx GPR,GPR,GPR */
int lbzx_GPR_GPR_GPR(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_LBZX;
	/* 011111AAAAABBBBBCCCCC00010101110 */
	dec->operand_n = 3;
	dec->operand_types[0] = PPC_OPER_TYPE_GPR;
	dec->operand_values[0] = (insword & 0x3E00000)>>21;
	dec->operand_types[1] = PPC_OPER_TYPE_GPR;
	dec->operand_values[1] = (insword & 0x1F0000)>>16;
	dec->operand_types[2] = PPC_OPER_TYPE_GPR;
	dec->operand_values[2] = (insword & 0xF800)>>11;
	dec->operand_fmtstr = PPC_FMTSTR_GPR_C_GPR_C_GPR;
	return 0;
}

/* lbepx GPR,GPR,GPR */
int lbepx_GPR_GPR_GPR(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_LBEPX;
	/* 011111AAAAABBBBBCCCCC00010111110 */
	dec->operand_n = 3;
	dec->operand_types[0] = PPC_OPER_TYPE_GPR;
	dec->operand_values[0] = (insword & 0x3E00000)>>21;
	dec->operand_types[1] = PPC_OPER_TYPE_GPR;
	dec->operand_values[1] = (insword & 0x1F0000)>>16;
	dec->operand_types[2] = PPC_OPER_TYPE_GPR;
	dec->operand_values[2] = (insword & 0xF800)>>11;
	dec->operand_fmtstr = PPC_FMTSTR_GPR_C_GPR_C_GPR;
	return 0;
}

/* lvx VREG,GPR,GPR */
int lvx_VREG_GPR_GPR(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_LVX;
	/* 011111AAAAABBBBBCCCCC00011001110 */
	dec->operand_n = 3;
	dec->operand_types[0] = PPC_OPER_TYPE_VREG;
	dec->operand_values[0] = (insword & 0x3E00000)>>21;
	dec->operand_types[1] = PPC_OPER_TYPE_GPR;
	dec->operand_values[1] = (insword & 0x1F0000)>>16;
	dec->operand_types[2] = PPC_OPER_TYPE_GPR;
	dec->operand_values[2] = (insword & 0xF800)>>11;
	dec->operand_fmtstr = PPC_FMTSTR_VREG_C_GPR_C_GPR;
	return 0;
}

/* lharx GPR,GPR,GPR */
int lharx_GPR_GPR_GPR(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_LHARX;
	/* 011111AAAAABBBBBCCCCC00011101000 */
	dec->operand_n = 3;
	dec->operand_types[0] = PPC_OPER_TYPE_GPR;
	dec->operand_values[0] = (insword & 0x3E00000)>>21;
	dec->operand_types[1] = PPC_OPER_TYPE_GPR;
	dec->operand_values[1] = (insword & 0x1F0000)>>16;
	dec->operand_types[2] = PPC_OPER_TYPE_GPR;
	dec->operand_values[2] = (insword & 0xF800)>>11;
	dec->operand_fmtstr = PPC_FMTSTR_GPR_C_GPR_C_GPR;
	return 0;
}

/* lharx GPR,GPR,GPR,NUM */
int lharx_GPR_GPR_GPR_NUM(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_LHARX;
	/* 011111AAAAABBBBBCCCCC00011101001 */
	dec->operand_n = 4;
	dec->operand_types[0] = PPC_OPER_TYPE_GPR;
	dec->operand_values[0] = (insword & 0x3E00000)>>21;
	dec->operand_types[1] = PPC_OPER_TYPE_GPR;
	dec->operand_values[1] = (insword & 0x1F0000)>>16;
	dec->operand_types[2] = PPC_OPER_TYPE_GPR;
	dec->operand_values[2] = (insword & 0xF800)>>11;
	dec->operand_types[3] = PPC_OPER_TYPE_NUM;
	dec->operand_fmtstr = PPC_FMTSTR_GPR_C_GPR_C_GPR_C_NUM;
	return 0;
}

/* lbzux GPR,GPR,GPR */
int lbzux_GPR_GPR_GPR(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_LBZUX;
	/* 011111AAAAABBBBBCCCCC00011101110 */
	dec->operand_n = 3;
	dec->operand_types[0] = PPC_OPER_TYPE_GPR;
	dec->operand_values[0] = (insword & 0x3E00000)>>21;
	dec->operand_types[1] = PPC_OPER_TYPE_GPR;
	dec->operand_values[1] = (insword & 0x1F0000)>>16;
	dec->operand_types[2] = PPC_OPER_TYPE_GPR;
	dec->operand_values[2] = (insword & 0xF800)>>11;
	dec->operand_fmtstr = PPC_FMTSTR_GPR_C_GPR_C_GPR;
	return 0;
}

/* dcbfep GPR,GPR */
int dcbfep_GPR_GPR(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_DCBFEP;
	/* 01111100000AxAAABBBBB00011111110 */
	dec->operand_n = 2;
	dec->operand_types[0] = PPC_OPER_TYPE_GPR;
	dec->operand_values[0] = ((insword & 0x100000)>>17)|((insword & 0x70000)>>16);
	dec->operand_types[1] = PPC_OPER_TYPE_GPR;
	dec->operand_values[1] = (insword & 0xF800)>>11;
	dec->operand_fmtstr = PPC_FMTSTR_GPR_C_GPR;
	return 0;
}

/* dcbtstls GPR,GPR */
int dcbtstls_GPR_GPR(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_DCBTSTLS;
	/* 01111100000AAAAABBBBB00100001100 */
	dec->operand_n = 2;
	dec->operand_types[0] = PPC_OPER_TYPE_GPR;
	dec->operand_values[0] = (insword & 0x1F0000)>>16;
	dec->operand_types[1] = PPC_OPER_TYPE_GPR;
	dec->operand_values[1] = (insword & 0xF800)>>11;
	dec->operand_fmtstr = PPC_FMTSTR_GPR_C_GPR;
	return 0;
}

/* stvebx VREG,GPR,GPR */
int stvebx_VREG_GPR_GPR(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_STVEBX;
	/* 011111AAAAAxBBBBCCCCC00100001110 */
	dec->operand_n = 3;
	dec->operand_types[0] = PPC_OPER_TYPE_VREG;
	dec->operand_values[0] = (insword & 0x3E00000)>>21;
	dec->operand_types[1] = PPC_OPER_TYPE_GPR;
	dec->operand_values[1] = (insword & 0xF0000)>>16;
	dec->operand_types[2] = PPC_OPER_TYPE_GPR;
	dec->operand_values[2] = (insword & 0xF800)>>11;
	dec->operand_fmtstr = PPC_FMTSTR_VREG_C_GPR_C_GPR;
	return 0;
}

/* stxsiwx VSREG,GPR,GPR */
int stxsiwx_VSREG_GPR_GPR(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_STXSIWX;
	/* 011111AAAAABBBBBCCCCC0010001100A */
	dec->operand_n = 3;
	dec->operand_types[0] = PPC_OPER_TYPE_VSREG;
	dec->operand_values[0] = ((insword & 0x3E00000)>>20)|((insword & 0x1)>>0);
	dec->operand_types[1] = PPC_OPER_TYPE_GPR;
	dec->operand_values[1] = (insword & 0x1F0000)>>16;
	dec->operand_types[2] = PPC_OPER_TYPE_GPR;
	dec->operand_values[2] = (insword & 0xF800)>>11;
	dec->operand_fmtstr = PPC_FMTSTR_VSREG_C_GPR_C_GPR;
	return 0;
}

/* dcbtstlse GPR,GPR */
int dcbtstlse_GPR_GPR(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_DCBTSTLSE;
	/* 01111100000AAAAxBBBBB00100011100 */
	dec->operand_n = 2;
	dec->operand_types[0] = PPC_OPER_TYPE_GPR;
	dec->operand_values[0] = (insword & 0x1E0000)>>17;
	dec->operand_types[1] = PPC_OPER_TYPE_GPR;
	dec->operand_values[1] = (insword & 0xF800)>>11;
	dec->operand_fmtstr = PPC_FMTSTR_GPR_C_GPR;
	return 0;
}

/* mtmsr GPR,NUM */
int mtmsr_GPR_NUM(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_MTMSR;
	/* 011111AAAAA000010000000100100100 */
	dec->operand_n = 2;
	dec->operand_types[0] = PPC_OPER_TYPE_GPR;
	dec->operand_values[0] = (insword & 0x3E00000)>>21;
	dec->operand_types[1] = PPC_OPER_TYPE_NUM;
	dec->operand_fmtstr = PPC_FMTSTR_GPR_C_NUM;
	return 0;
}

/* eratsx GPR,GPR,GPR */
int eratsx_GPR_GPR_GPR(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_ERATSX;
	/* 011111AAAAABBBBBCCCCC00100100110 */
	dec->operand_n = 3;
	dec->operand_types[0] = PPC_OPER_TYPE_GPR;
	dec->operand_values[0] = (insword & 0x3E00000)>>21;
	dec->operand_types[1] = PPC_OPER_TYPE_GPR;
	dec->operand_values[1] = (insword & 0x1F0000)>>16;
	dec->operand_types[2] = PPC_OPER_TYPE_GPR;
	dec->operand_values[2] = (insword & 0xF800)>>11;
	dec->operand_fmtstr = PPC_FMTSTR_GPR_C_GPR_C_GPR;
	return 0;
}

/* eratsx. GPR,GPR,GPR */
int eratsxD_GPR_GPR_GPR(uint32_t insword, struct ppc_decoded *dec)
{
	dec->properties |= PPC_PROPERTY_DOTTED;
	dec->mnemonic = PPC_MNEM_ERATSX;
	/* 011111AAAAABBBBBCCCCC00100100111 */
	dec->operand_n = 3;
	dec->operand_types[0] = PPC_OPER_TYPE_GPR;
	dec->operand_values[0] = (insword & 0x3E00000)>>21;
	dec->operand_types[1] = PPC_OPER_TYPE_GPR;
	dec->operand_values[1] = (insword & 0x1F0000)>>16;
	dec->operand_types[2] = PPC_OPER_TYPE_GPR;
	dec->operand_values[2] = (insword & 0xF800)>>11;
	dec->operand_fmtstr = PPC_FMTSTR_GPR_C_GPR_C_GPR;
	return 0;
}

/* stdx GPR,GPR,GPR */
int stdx_GPR_GPR_GPR(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_STDX;
	/* 011111AAAAABBBBBCCCCC00100101010 */
	dec->operand_n = 3;
	dec->operand_types[0] = PPC_OPER_TYPE_GPR;
	dec->operand_values[0] = (insword & 0x3E00000)>>21;
	dec->operand_types[1] = PPC_OPER_TYPE_GPR;
	dec->operand_values[1] = (insword & 0x1F0000)>>16;
	dec->operand_types[2] = PPC_OPER_TYPE_GPR;
	dec->operand_values[2] = (insword & 0xF800)>>11;
	dec->operand_fmtstr = PPC_FMTSTR_GPR_C_GPR_C_GPR;
	return 0;
}

/* stwcx. GPR,GPR,GPR */
int stwcxD_GPR_GPR_GPR(uint32_t insword, struct ppc_decoded *dec)
{
	dec->properties |= PPC_PROPERTY_DOTTED;
	dec->mnemonic = PPC_MNEM_STWCX;
	/* 011111AAAAABBBBBCCCCC00100101101 */
	dec->operand_n = 3;
	dec->operand_types[0] = PPC_OPER_TYPE_GPR;
	dec->operand_values[0] = (insword & 0x3E00000)>>21;
	dec->operand_types[1] = PPC_OPER_TYPE_GPR;
	dec->operand_values[1] = (insword & 0x1F0000)>>16;
	dec->operand_types[2] = PPC_OPER_TYPE_GPR;
	dec->operand_values[2] = (insword & 0xF800)>>11;
	dec->operand_fmtstr = PPC_FMTSTR_GPR_C_GPR_C_GPR;
	return 0;
}

/* stwx GPR,GPR,GPR */
int stwx_GPR_GPR_GPR(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_STWX;
	/* 011111AAAAABBBxBCCCCC00100101110 */
	dec->operand_n = 3;
	dec->operand_types[0] = PPC_OPER_TYPE_GPR;
	dec->operand_values[0] = (insword & 0x3E00000)>>21;
	dec->operand_types[1] = PPC_OPER_TYPE_GPR;
	dec->operand_values[1] = ((insword & 0x1C0000)>>17)|((insword & 0x10000)>>16);
	dec->operand_types[2] = PPC_OPER_TYPE_GPR;
	dec->operand_values[2] = (insword & 0xF800)>>11;
	dec->operand_fmtstr = PPC_FMTSTR_GPR_C_GPR_C_GPR;
	return 0;
}

/* stdepx GPR,GPR,GPR */
int stdepx_GPR_GPR_GPR(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_STDEPX;
	/* 011111AAAAABBBBBCCCCC00100111010 */
	dec->operand_n = 3;
	dec->operand_types[0] = PPC_OPER_TYPE_GPR;
	dec->operand_values[0] = (insword & 0x3E00000)>>21;
	dec->operand_types[1] = PPC_OPER_TYPE_GPR;
	dec->operand_values[1] = (insword & 0x1F0000)>>16;
	dec->operand_types[2] = PPC_OPER_TYPE_GPR;
	dec->operand_values[2] = (insword & 0xF800)>>11;
	dec->operand_fmtstr = PPC_FMTSTR_GPR_C_GPR_C_GPR;
	return 0;
}

/* stwepx GPR,GPR,GPR */
int stwepx_GPR_GPR_GPR(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_STWEPX;
	/* 011111AAAAABBBBBCCCCC00100111110 */
	dec->operand_n = 3;
	dec->operand_types[0] = PPC_OPER_TYPE_GPR;
	dec->operand_values[0] = (insword & 0x3E00000)>>21;
	dec->operand_types[1] = PPC_OPER_TYPE_GPR;
	dec->operand_values[1] = (insword & 0x1F0000)>>16;
	dec->operand_types[2] = PPC_OPER_TYPE_GPR;
	dec->operand_values[2] = (insword & 0xF800)>>11;
	dec->operand_fmtstr = PPC_FMTSTR_GPR_C_GPR_C_GPR;
	return 0;
}

/* dcbtls GPR,GPR */
int dcbtls_GPR_GPR(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_DCBTLS;
	/* 01111100000AAAAABBBBB00101001100 */
	dec->operand_n = 2;
	dec->operand_types[0] = PPC_OPER_TYPE_GPR;
	dec->operand_values[0] = (insword & 0x1F0000)>>16;
	dec->operand_types[1] = PPC_OPER_TYPE_GPR;
	dec->operand_values[1] = (insword & 0xF800)>>11;
	dec->operand_fmtstr = PPC_FMTSTR_GPR_C_GPR;
	return 0;
}

/* stvehx VREG,GPR,GPR */
int stvehx_VREG_GPR_GPR(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_STVEHX;
	/* 011111AAAAABBBBBCCCCC00101001110 */
	dec->operand_n = 3;
	dec->operand_types[0] = PPC_OPER_TYPE_VREG;
	dec->operand_values[0] = (insword & 0x3E00000)>>21;
	dec->operand_types[1] = PPC_OPER_TYPE_GPR;
	dec->operand_values[1] = (insword & 0x1F0000)>>16;
	dec->operand_types[2] = PPC_OPER_TYPE_GPR;
	dec->operand_values[2] = (insword & 0xF800)>>11;
	dec->operand_fmtstr = PPC_FMTSTR_VREG_C_GPR_C_GPR;
	return 0;
}

/* dcbtlse GPR,GPR */
int dcbtlse_GPR_GPR(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_DCBTLSE;
	/* 01111100000AAxAABBBBB00101011100 */
	dec->operand_n = 2;
	dec->operand_types[0] = PPC_OPER_TYPE_GPR;
	dec->operand_values[0] = ((insword & 0x180000)>>17)|((insword & 0x30000)>>16);
	dec->operand_types[1] = PPC_OPER_TYPE_GPR;
	dec->operand_values[1] = (insword & 0xF800)>>11;
	dec->operand_fmtstr = PPC_FMTSTR_GPR_C_GPR;
	return 0;
}

/* mtmsrd GPR,NUM */
int mtmsrd_GPR_NUM(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_MTMSRD;
	/* 011111AAAAA000010000000101100100 */
	dec->operand_n = 2;
	dec->operand_types[0] = PPC_OPER_TYPE_GPR;
	dec->operand_values[0] = (insword & 0x3E00000)>>21;
	dec->operand_types[1] = PPC_OPER_TYPE_NUM;
	dec->operand_fmtstr = PPC_FMTSTR_GPR_C_NUM;
	return 0;
}

/* stdux GPR,GPR,GPR */
int stdux_GPR_GPR_GPR(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_STDUX;
	/* 011111AAAAABBxBBCCCCC00101101010 */
	dec->operand_n = 3;
	dec->operand_types[0] = PPC_OPER_TYPE_GPR;
	dec->operand_values[0] = (insword & 0x3E00000)>>21;
	dec->operand_types[1] = PPC_OPER_TYPE_GPR;
	dec->operand_values[1] = ((insword & 0x180000)>>17)|((insword & 0x30000)>>16);
	dec->operand_types[2] = PPC_OPER_TYPE_GPR;
	dec->operand_values[2] = (insword & 0xF800)>>11;
	dec->operand_fmtstr = PPC_FMTSTR_GPR_C_GPR_C_GPR;
	return 0;
}

/* stqcx. GPR,GPR,GPR */
int stqcxD_GPR_GPR_GPR(uint32_t insword, struct ppc_decoded *dec)
{
	dec->properties |= PPC_PROPERTY_DOTTED;
	dec->mnemonic = PPC_MNEM_STQCX;
	/* 011111AAAA0BBBBBCCCCC00101101101 */
	dec->operand_n = 3;
	dec->operand_types[0] = PPC_OPER_TYPE_GPR;
	dec->operand_values[0] = (insword & 0x3C00000)>>22;
	dec->operand_types[1] = PPC_OPER_TYPE_GPR;
	dec->operand_values[1] = (insword & 0x1F0000)>>16;
	dec->operand_types[2] = PPC_OPER_TYPE_GPR;
	dec->operand_values[2] = (insword & 0xF800)>>11;
	dec->operand_fmtstr = PPC_FMTSTR_GPR_C_GPR_C_GPR;
	return 0;
}

/* stwux GPR,GPR,GPR */
int stwux_GPR_GPR_GPR(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_STWUX;
	/* 011111AAAAAxBBBBCCCCC00101101110 */
	dec->operand_n = 3;
	dec->operand_types[0] = PPC_OPER_TYPE_GPR;
	dec->operand_values[0] = (insword & 0x3E00000)>>21;
	dec->operand_types[1] = PPC_OPER_TYPE_GPR;
	dec->operand_values[1] = (insword & 0xF0000)>>16;
	dec->operand_types[2] = PPC_OPER_TYPE_GPR;
	dec->operand_values[2] = (insword & 0xF800)>>11;
	dec->operand_fmtstr = PPC_FMTSTR_GPR_C_GPR_C_GPR;
	return 0;
}

/* icblq. GPR,GPR */
int icblqD_GPR_GPR(uint32_t insword, struct ppc_decoded *dec)
{
	dec->properties |= PPC_PROPERTY_DOTTED;
	dec->mnemonic = PPC_MNEM_ICBLQ;
	/* 01111100000AAAAABBBBB00110001101 */
	dec->operand_n = 2;
	dec->operand_types[0] = PPC_OPER_TYPE_GPR;
	dec->operand_values[0] = (insword & 0x1F0000)>>16;
	dec->operand_types[1] = PPC_OPER_TYPE_GPR;
	dec->operand_values[1] = (insword & 0xF800)>>11;
	dec->operand_fmtstr = PPC_FMTSTR_GPR_C_GPR;
	return 0;
}

/* stvewx VREG,GPR,GPR */
int stvewx_VREG_GPR_GPR(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_STVEWX;
	/* 011111AAAAABBBBBCCCCC00110001110 */
	dec->operand_n = 3;
	dec->operand_types[0] = PPC_OPER_TYPE_VREG;
	dec->operand_values[0] = (insword & 0x3E00000)>>21;
	dec->operand_types[1] = PPC_OPER_TYPE_GPR;
	dec->operand_values[1] = (insword & 0x1F0000)>>16;
	dec->operand_types[2] = PPC_OPER_TYPE_GPR;
	dec->operand_values[2] = (insword & 0xF800)>>11;
	dec->operand_fmtstr = PPC_FMTSTR_VREG_C_GPR_C_GPR;
	return 0;
}

/* ldawx. GPR,GPR,GPR */
int ldawxD_GPR_GPR_GPR(uint32_t insword, struct ppc_decoded *dec)
{
	dec->properties |= PPC_PROPERTY_DOTTED;
	dec->mnemonic = PPC_MNEM_LDAWX;
	/* 011111AAAAABBBBBCCCCC00110101001 */
	dec->operand_n = 3;
	dec->operand_types[0] = PPC_OPER_TYPE_GPR;
	dec->operand_values[0] = (insword & 0x3E00000)>>21;
	dec->operand_types[1] = PPC_OPER_TYPE_GPR;
	dec->operand_values[1] = (insword & 0x1F0000)>>16;
	dec->operand_types[2] = PPC_OPER_TYPE_GPR;
	dec->operand_values[2] = (insword & 0xF800)>>11;
	dec->operand_fmtstr = PPC_FMTSTR_GPR_C_GPR_C_GPR;
	return 0;
}

/* stdcx. GPR,GPR,GPR */
int stdcxD_GPR_GPR_GPR(uint32_t insword, struct ppc_decoded *dec)
{
	dec->properties |= PPC_PROPERTY_DOTTED;
	dec->mnemonic = PPC_MNEM_STDCX;
	/* 011111AAAAABBBBBCCCCC00110101101 */
	dec->operand_n = 3;
	dec->operand_types[0] = PPC_OPER_TYPE_GPR;
	dec->operand_values[0] = (insword & 0x3E00000)>>21;
	dec->operand_types[1] = PPC_OPER_TYPE_GPR;
	dec->operand_values[1] = (insword & 0x1F0000)>>16;
	dec->operand_types[2] = PPC_OPER_TYPE_GPR;
	dec->operand_values[2] = (insword & 0xF800)>>11;
	dec->operand_fmtstr = PPC_FMTSTR_GPR_C_GPR_C_GPR;
	return 0;
}

/* stbx GPR,GPR,GPR */
int stbx_GPR_GPR_GPR(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_STBX;
	/* 011111AAAAABBBxBCCCCC00110101110 */
	dec->operand_n = 3;
	dec->operand_types[0] = PPC_OPER_TYPE_GPR;
	dec->operand_values[0] = (insword & 0x3E00000)>>21;
	dec->operand_types[1] = PPC_OPER_TYPE_GPR;
	dec->operand_values[1] = ((insword & 0x1C0000)>>17)|((insword & 0x10000)>>16);
	dec->operand_types[2] = PPC_OPER_TYPE_GPR;
	dec->operand_values[2] = (insword & 0xF800)>>11;
	dec->operand_fmtstr = PPC_FMTSTR_GPR_C_GPR_C_GPR;
	return 0;
}

/* stbepx GPR,GPR,GPR */
int stbepx_GPR_GPR_GPR(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_STBEPX;
	/* 011111AAAAABBBBBCCCCC00110111110 */
	dec->operand_n = 3;
	dec->operand_types[0] = PPC_OPER_TYPE_GPR;
	dec->operand_values[0] = (insword & 0x3E00000)>>21;
	dec->operand_types[1] = PPC_OPER_TYPE_GPR;
	dec->operand_values[1] = (insword & 0x1F0000)>>16;
	dec->operand_types[2] = PPC_OPER_TYPE_GPR;
	dec->operand_values[2] = (insword & 0xF800)>>11;
	dec->operand_fmtstr = PPC_FMTSTR_GPR_C_GPR_C_GPR;
	return 0;
}

/* icblc GPR,GPR */
int icblc_GPR_GPR(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_ICBLC;
	/* 01111100000AAAAABBBBB00111001100 */
	dec->operand_n = 2;
	dec->operand_types[0] = PPC_OPER_TYPE_GPR;
	dec->operand_values[0] = (insword & 0x1F0000)>>16;
	dec->operand_types[1] = PPC_OPER_TYPE_GPR;
	dec->operand_values[1] = (insword & 0xF800)>>11;
	dec->operand_fmtstr = PPC_FMTSTR_GPR_C_GPR;
	return 0;
}

/* stvx VREG,GPR,GPR */
int stvx_VREG_GPR_GPR(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_STVX;
	/* 011111AAAAABBBBBCCCCC00111001110 */
	dec->operand_n = 3;
	dec->operand_types[0] = PPC_OPER_TYPE_VREG;
	dec->operand_values[0] = (insword & 0x3E00000)>>21;
	dec->operand_types[1] = PPC_OPER_TYPE_GPR;
	dec->operand_values[1] = (insword & 0x1F0000)>>16;
	dec->operand_types[2] = PPC_OPER_TYPE_GPR;
	dec->operand_values[2] = (insword & 0xF800)>>11;
	dec->operand_fmtstr = PPC_FMTSTR_VREG_C_GPR_C_GPR;
	return 0;
}

/* icblce GPR,GPR */
int icblce_GPR_GPR(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_ICBLCE;
	/* 01111100000AAAAABBBBB00111011100 */
	dec->operand_n = 2;
	dec->operand_types[0] = PPC_OPER_TYPE_GPR;
	dec->operand_values[0] = (insword & 0x1F0000)>>16;
	dec->operand_types[1] = PPC_OPER_TYPE_GPR;
	dec->operand_values[1] = (insword & 0xF800)>>11;
	dec->operand_fmtstr = PPC_FMTSTR_GPR_C_GPR;
	return 0;
}

/* dcbtst GPR,GPR */
int dcbtst_GPR_GPR(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_DCBTST;
	/* 01111100000AAAAABBBBB00111101100 */
	dec->operand_n = 2;
	dec->operand_types[0] = PPC_OPER_TYPE_GPR;
	dec->operand_values[0] = (insword & 0x1F0000)>>16;
	dec->operand_types[1] = PPC_OPER_TYPE_GPR;
	dec->operand_values[1] = (insword & 0xF800)>>11;
	dec->operand_fmtstr = PPC_FMTSTR_GPR_C_GPR;
	return 0;
}

/* stbux GPR,GPR,GPR */
int stbux_GPR_GPR_GPR(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_STBUX;
	/* 011111AAAAABxBBBCCCCC00111101110 */
	dec->operand_n = 3;
	dec->operand_types[0] = PPC_OPER_TYPE_GPR;
	dec->operand_values[0] = (insword & 0x3E00000)>>21;
	dec->operand_types[1] = PPC_OPER_TYPE_GPR;
	dec->operand_values[1] = ((insword & 0x100000)>>17)|((insword & 0x70000)>>16);
	dec->operand_types[2] = PPC_OPER_TYPE_GPR;
	dec->operand_values[2] = (insword & 0xF800)>>11;
	dec->operand_fmtstr = PPC_FMTSTR_GPR_C_GPR_C_GPR;
	return 0;
}

/* dcbtstep GPR,GPR,GPR */
int dcbtstep_GPR_GPR_GPR(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_DCBTSTEP;
	/* 011111AAAAABBBBBCCCCC00111111110 */
	dec->operand_n = 3;
	dec->operand_types[0] = PPC_OPER_TYPE_GPR;
	dec->operand_values[0] = (insword & 0x3E00000)>>21;
	dec->operand_types[1] = PPC_OPER_TYPE_GPR;
	dec->operand_values[1] = (insword & 0x1F0000)>>16;
	dec->operand_types[2] = PPC_OPER_TYPE_GPR;
	dec->operand_values[2] = (insword & 0xF800)>>11;
	dec->operand_fmtstr = PPC_FMTSTR_GPR_C_GPR_C_GPR;
	return 0;
}

/* lvexbx VREG,GPR,GPR */
int lvexbx_VREG_GPR_GPR(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_LVEXBX;
	/* 011111AAAAABBBBBCCCCC01000001010 */
	dec->operand_n = 3;
	dec->operand_types[0] = PPC_OPER_TYPE_VREG;
	dec->operand_values[0] = (insword & 0x3E00000)>>21;
	dec->operand_types[1] = PPC_OPER_TYPE_GPR;
	dec->operand_values[1] = (insword & 0x1F0000)>>16;
	dec->operand_types[2] = PPC_OPER_TYPE_GPR;
	dec->operand_values[2] = (insword & 0xF800)>>11;
	dec->operand_fmtstr = PPC_FMTSTR_VREG_C_GPR_C_GPR;
	return 0;
}

/* lvepxl VREG,GPR,GPR */
int lvepxl_VREG_GPR_GPR(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_LVEPXL;
	/* 011111AAAAABBBBBCCCCC01000001110 */
	dec->operand_n = 3;
	dec->operand_types[0] = PPC_OPER_TYPE_VREG;
	dec->operand_values[0] = (insword & 0x3E00000)>>21;
	dec->operand_types[1] = PPC_OPER_TYPE_GPR;
	dec->operand_values[1] = (insword & 0x1F0000)>>16;
	dec->operand_types[2] = PPC_OPER_TYPE_GPR;
	dec->operand_values[2] = (insword & 0xF800)>>11;
	dec->operand_fmtstr = PPC_FMTSTR_VREG_C_GPR_C_GPR;
	return 0;
}

/* lxvx VSREG,GPR,GPR */
int lxvx_VSREG_GPR_GPR(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_LXVX;
	/* 011111AAAAABBBBBCCCCC0100001100A */
	dec->operand_n = 3;
	dec->operand_types[0] = PPC_OPER_TYPE_VSREG;
	dec->operand_values[0] = ((insword & 0x3E00000)>>20)|((insword & 0x1)>>0);
	dec->operand_types[1] = PPC_OPER_TYPE_GPR;
	dec->operand_values[1] = (insword & 0x1F0000)>>16;
	dec->operand_types[2] = PPC_OPER_TYPE_GPR;
	dec->operand_values[2] = (insword & 0xF800)>>11;
	dec->operand_fmtstr = PPC_FMTSTR_VSREG_C_GPR_C_GPR;
	return 0;
}

/* lxvl VSREG,GPR,GPR */
int lxvl_VSREG_GPR_GPR(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_LXVL;
	/* 011111AAAAABBBBBCCCCC0100001101A */
	dec->operand_n = 3;
	dec->operand_types[0] = PPC_OPER_TYPE_VSREG;
	dec->operand_values[0] = ((insword & 0x3E00000)>>20)|((insword & 0x1)>>0);
	dec->operand_types[1] = PPC_OPER_TYPE_GPR;
	dec->operand_values[1] = (insword & 0x1F0000)>>16;
	dec->operand_types[2] = PPC_OPER_TYPE_GPR;
	dec->operand_values[2] = (insword & 0xF800)>>11;
	dec->operand_fmtstr = PPC_FMTSTR_VSREG_C_GPR_C_GPR;
	return 0;
}

/* tlbiel GPR,GPR,NUM,NUM,NUM */
int tlbiel_GPR_GPR_NUM_NUM_NUM(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_TLBIEL;
	/* 011111BBBBB0CCDEAAAAA01000100100 */
	dec->operand_n = 5;
	dec->operand_types[0] = PPC_OPER_TYPE_GPR;
	dec->operand_values[0] = (insword & 0xF800)>>11;
	dec->operand_types[1] = PPC_OPER_TYPE_GPR;
	dec->operand_values[1] = (insword & 0x3E00000)>>21;
	dec->operand_types[2] = PPC_OPER_TYPE_NUM;
	dec->operand_values[2] = (insword & 0xC0000)>>18;
	dec->operand_types[3] = PPC_OPER_TYPE_NUM;
	dec->operand_values[3] = (insword & 0x20000)>>17;
	dec->operand_types[4] = PPC_OPER_TYPE_NUM;
	dec->operand_values[4] = (insword & 0x10000)>>16;
	dec->operand_fmtstr = PPC_FMTSTR_GPR_C_GPR_C_NUM_C_NUM_C_NUM;
	return 0;
}

/* dcbt GPR,GPR */
int dcbt_GPR_GPR(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_DCBT;
	/* 01111100000AAAAABBBBB01000101100 */
	dec->operand_n = 2;
	dec->operand_types[0] = PPC_OPER_TYPE_GPR;
	dec->operand_values[0] = (insword & 0x1F0000)>>16;
	dec->operand_types[1] = PPC_OPER_TYPE_GPR;
	dec->operand_values[1] = (insword & 0xF800)>>11;
	dec->operand_fmtstr = PPC_FMTSTR_GPR_C_GPR;
	return 0;
}

/* lhzx GPR,GPR,GPR */
int lhzx_GPR_GPR_GPR(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_LHZX;
	/* 011111AAAAABBBBBCCCCC01000101110 */
	dec->operand_n = 3;
	dec->operand_types[0] = PPC_OPER_TYPE_GPR;
	dec->operand_values[0] = (insword & 0x3E00000)>>21;
	dec->operand_types[1] = PPC_OPER_TYPE_GPR;
	dec->operand_values[1] = (insword & 0x1F0000)>>16;
	dec->operand_types[2] = PPC_OPER_TYPE_GPR;
	dec->operand_values[2] = (insword & 0xF800)>>11;
	dec->operand_fmtstr = PPC_FMTSTR_GPR_C_GPR_C_GPR;
	return 0;
}

/* lhepx GPR,GPR,GPR */
int lhepx_GPR_GPR_GPR(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_LHEPX;
	/* 011111AAAAABBBBBCCCCC01000111110 */
	dec->operand_n = 3;
	dec->operand_types[0] = PPC_OPER_TYPE_GPR;
	dec->operand_values[0] = (insword & 0x3E00000)>>21;
	dec->operand_types[1] = PPC_OPER_TYPE_GPR;
	dec->operand_values[1] = (insword & 0x1F0000)>>16;
	dec->operand_types[2] = PPC_OPER_TYPE_GPR;
	dec->operand_values[2] = (insword & 0xF800)>>11;
	dec->operand_fmtstr = PPC_FMTSTR_GPR_C_GPR_C_GPR;
	return 0;
}

/* lvexhx VREG,GPR,GPR */
int lvexhx_VREG_GPR_GPR(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_LVEXHX;
	/* 011111AAAAABBBBBCCCCC01001001010 */
	dec->operand_n = 3;
	dec->operand_types[0] = PPC_OPER_TYPE_VREG;
	dec->operand_values[0] = (insword & 0x3E00000)>>21;
	dec->operand_types[1] = PPC_OPER_TYPE_GPR;
	dec->operand_values[1] = (insword & 0x1F0000)>>16;
	dec->operand_types[2] = PPC_OPER_TYPE_GPR;
	dec->operand_values[2] = (insword & 0xF800)>>11;
	dec->operand_fmtstr = PPC_FMTSTR_VREG_C_GPR_C_GPR;
	return 0;
}

/* lvepx VREG,GPR,GPR */
int lvepx_VREG_GPR_GPR(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_LVEPX;
	/* 011111AAAAABBBBBCCCCC01001001110 */
	dec->operand_n = 3;
	dec->operand_types[0] = PPC_OPER_TYPE_VREG;
	dec->operand_values[0] = (insword & 0x3E00000)>>21;
	dec->operand_types[1] = PPC_OPER_TYPE_GPR;
	dec->operand_values[1] = (insword & 0x1F0000)>>16;
	dec->operand_types[2] = PPC_OPER_TYPE_GPR;
	dec->operand_values[2] = (insword & 0xF800)>>11;
	dec->operand_fmtstr = PPC_FMTSTR_VREG_C_GPR_C_GPR;
	return 0;
}

/* lxvll VSREG,GPR,GPR */
int lxvll_VSREG_GPR_GPR(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_LXVLL;
	/* 011111AAAAABBBBBCCCCC0100101101A */
	dec->operand_n = 3;
	dec->operand_types[0] = PPC_OPER_TYPE_VSREG;
	dec->operand_values[0] = ((insword & 0x3E00000)>>20)|((insword & 0x1)>>0);
	dec->operand_types[1] = PPC_OPER_TYPE_GPR;
	dec->operand_values[1] = (insword & 0x1F0000)>>16;
	dec->operand_types[2] = PPC_OPER_TYPE_GPR;
	dec->operand_values[2] = (insword & 0xF800)>>11;
	dec->operand_fmtstr = PPC_FMTSTR_VSREG_C_GPR_C_GPR;
	return 0;
}

/* tlbie GPR,GPR,NUM,NUM,NUM */
int tlbie_GPR_GPR_NUM_NUM_NUM(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_TLBIE;
	/* 011111BBBBB0CCDEAAAAA01001100100 */
	dec->operand_n = 5;
	dec->operand_types[0] = PPC_OPER_TYPE_GPR;
	dec->operand_values[0] = (insword & 0xF800)>>11;
	dec->operand_types[1] = PPC_OPER_TYPE_GPR;
	dec->operand_values[1] = (insword & 0x3E00000)>>21;
	dec->operand_types[2] = PPC_OPER_TYPE_NUM;
	dec->operand_values[2] = (insword & 0xC0000)>>18;
	dec->operand_types[3] = PPC_OPER_TYPE_NUM;
	dec->operand_values[3] = (insword & 0x20000)>>17;
	dec->operand_types[4] = PPC_OPER_TYPE_NUM;
	dec->operand_values[4] = (insword & 0x10000)>>16;
	dec->operand_fmtstr = PPC_FMTSTR_GPR_C_GPR_C_NUM_C_NUM_C_NUM;
	return 0;
}

/* ldmx GPR,GPR,GPR */
int ldmx_GPR_GPR_GPR(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_LDMX;
	/* 011111AAAAABBBBBCCCCC01001101010 */
	dec->operand_n = 3;
	dec->operand_types[0] = PPC_OPER_TYPE_GPR;
	dec->operand_values[0] = (insword & 0x3E00000)>>21;
	dec->operand_types[1] = PPC_OPER_TYPE_GPR;
	dec->operand_values[1] = (insword & 0x1F0000)>>16;
	dec->operand_types[2] = PPC_OPER_TYPE_GPR;
	dec->operand_values[2] = (insword & 0xF800)>>11;
	dec->operand_fmtstr = PPC_FMTSTR_GPR_C_GPR_C_GPR;
	return 0;
}

/* eciwx GPR,GPR,GPR */
int eciwx_GPR_GPR_GPR(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_ECIWX;
	/* 011111AAAAABBBBBCCCCC01001101100 */
	dec->operand_n = 3;
	dec->operand_types[0] = PPC_OPER_TYPE_GPR;
	dec->operand_values[0] = (insword & 0x3E00000)>>21;
	dec->operand_types[1] = PPC_OPER_TYPE_GPR;
	dec->operand_values[1] = (insword & 0x1F0000)>>16;
	dec->operand_types[2] = PPC_OPER_TYPE_GPR;
	dec->operand_values[2] = (insword & 0xF800)>>11;
	dec->operand_fmtstr = PPC_FMTSTR_GPR_C_GPR_C_GPR;
	return 0;
}

/* lhzux GPR,GPR,GPR */
int lhzux_GPR_GPR_GPR(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_LHZUX;
	/* 011111AAAAABBBBBCCCCC01001101110 */
	dec->operand_n = 3;
	dec->operand_types[0] = PPC_OPER_TYPE_GPR;
	dec->operand_values[0] = (insword & 0x3E00000)>>21;
	dec->operand_types[1] = PPC_OPER_TYPE_GPR;
	dec->operand_values[1] = (insword & 0x1F0000)>>16;
	dec->operand_types[2] = PPC_OPER_TYPE_GPR;
	dec->operand_values[2] = (insword & 0xF800)>>11;
	dec->operand_fmtstr = PPC_FMTSTR_GPR_C_GPR_C_GPR;
	return 0;
}

/* dcbtep GPR,GPR,GPR */
int dcbtep_GPR_GPR_GPR(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_DCBTEP;
	/* 011111AAAAABBBBBCCCCC01001111110 */
	dec->operand_n = 3;
	dec->operand_types[0] = PPC_OPER_TYPE_GPR;
	dec->operand_values[0] = (insword & 0x3E00000)>>21;
	dec->operand_types[1] = PPC_OPER_TYPE_GPR;
	dec->operand_values[1] = (insword & 0x1F0000)>>16;
	dec->operand_types[2] = PPC_OPER_TYPE_GPR;
	dec->operand_values[2] = (insword & 0xF800)>>11;
	dec->operand_fmtstr = PPC_FMTSTR_GPR_C_GPR_C_GPR;
	return 0;
}

/* lvexwx VREG,GPR,GPR */
int lvexwx_VREG_GPR_GPR(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_LVEXWX;
	/* 011111AAAAABBBBBCCCCC01010001010 */
	dec->operand_n = 3;
	dec->operand_types[0] = PPC_OPER_TYPE_VREG;
	dec->operand_values[0] = (insword & 0x3E00000)>>21;
	dec->operand_types[1] = PPC_OPER_TYPE_GPR;
	dec->operand_values[1] = (insword & 0x1F0000)>>16;
	dec->operand_types[2] = PPC_OPER_TYPE_GPR;
	dec->operand_values[2] = (insword & 0xF800)>>11;
	dec->operand_fmtstr = PPC_FMTSTR_VREG_C_GPR_C_GPR;
	return 0;
}

/* dcread GPR,GPR,GPR */
int dcread_GPR_GPR_GPR(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_DCREAD;
	/* 011111AAAAABBBBBCCCCC01x1x001100 */
	dec->operand_n = 3;
	dec->operand_types[0] = PPC_OPER_TYPE_GPR;
	dec->operand_values[0] = (insword & 0x3E00000)>>21;
	dec->operand_types[1] = PPC_OPER_TYPE_GPR;
	dec->operand_values[1] = (insword & 0x1F0000)>>16;
	dec->operand_types[2] = PPC_OPER_TYPE_GPR;
	dec->operand_values[2] = (insword & 0xF800)>>11;
	dec->operand_fmtstr = PPC_FMTSTR_GPR_C_GPR_C_GPR;
	return 0;
}

/* lxvdsx VSREG,GPR,GPR */
int lxvdsx_VSREG_GPR_GPR(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_LXVDSX;
	/* 011111AAAAABxBBBCCCCC0101001100A */
	dec->operand_n = 3;
	dec->operand_types[0] = PPC_OPER_TYPE_VSREG;
	dec->operand_values[0] = ((insword & 0x3E00000)>>20)|((insword & 0x1)>>0);
	dec->operand_types[1] = PPC_OPER_TYPE_GPR;
	dec->operand_values[1] = ((insword & 0x100000)>>17)|((insword & 0x70000)>>16);
	dec->operand_types[2] = PPC_OPER_TYPE_GPR;
	dec->operand_values[2] = (insword & 0xF800)>>11;
	dec->operand_fmtstr = PPC_FMTSTR_VSREG_C_GPR_C_GPR;
	return 0;
}

/* mfxer GPR */
int mfxer_GPR(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_MFXER;
	/* 011111AAAAA000010000001010100110 */
	dec->operand_n = 1;
	dec->operand_types[0] = PPC_OPER_TYPE_GPR;
	dec->operand_values[0] = (insword & 0x3E00000)>>21;
	dec->operand_fmtstr = PPC_FMTSTR_GPR;
	return 0;
}

/* lwax GPR,GPR,GPR */
int lwax_GPR_GPR_GPR(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_LWAX;
	/* 011111AAAAABBBBBCCCCC01010101010 */
	dec->operand_n = 3;
	dec->operand_types[0] = PPC_OPER_TYPE_GPR;
	dec->operand_values[0] = (insword & 0x3E00000)>>21;
	dec->operand_types[1] = PPC_OPER_TYPE_GPR;
	dec->operand_values[1] = (insword & 0x1F0000)>>16;
	dec->operand_types[2] = PPC_OPER_TYPE_GPR;
	dec->operand_values[2] = (insword & 0xF800)>>11;
	dec->operand_fmtstr = PPC_FMTSTR_GPR_C_GPR_C_GPR;
	return 0;
}

/* lhax GPR,GPR,GPR */
int lhax_GPR_GPR_GPR(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_LHAX;
	/* 011111AAAAABBBBBCCCCC01010101110 */
	dec->operand_n = 3;
	dec->operand_types[0] = PPC_OPER_TYPE_GPR;
	dec->operand_values[0] = (insword & 0x3E00000)>>21;
	dec->operand_types[1] = PPC_OPER_TYPE_GPR;
	dec->operand_values[1] = (insword & 0x1F0000)>>16;
	dec->operand_types[2] = PPC_OPER_TYPE_GPR;
	dec->operand_values[2] = (insword & 0xF800)>>11;
	dec->operand_fmtstr = PPC_FMTSTR_GPR_C_GPR_C_GPR;
	return 0;
}

/* lvxl VREG,GPR,GPR */
int lvxl_VREG_GPR_GPR(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_LVXL;
	/* 011111AAAAABBBxBCCCCC01011001110 */
	dec->operand_n = 3;
	dec->operand_types[0] = PPC_OPER_TYPE_VREG;
	dec->operand_values[0] = (insword & 0x3E00000)>>21;
	dec->operand_types[1] = PPC_OPER_TYPE_GPR;
	dec->operand_values[1] = ((insword & 0x1C0000)>>17)|((insword & 0x10000)>>16);
	dec->operand_types[2] = PPC_OPER_TYPE_GPR;
	dec->operand_values[2] = (insword & 0xF800)>>11;
	dec->operand_fmtstr = PPC_FMTSTR_VREG_C_GPR_C_GPR;
	return 0;
}

/* lxvwsx VSREG,GPR,GPR */
int lxvwsx_VSREG_GPR_GPR(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_LXVWSX;
	/* 011111AAAAABBBBBCCCCC0101101100A */
	dec->operand_n = 3;
	dec->operand_types[0] = PPC_OPER_TYPE_VSREG;
	dec->operand_values[0] = ((insword & 0x3E00000)>>20)|((insword & 0x1)>>0);
	dec->operand_types[1] = PPC_OPER_TYPE_GPR;
	dec->operand_values[1] = (insword & 0x1F0000)>>16;
	dec->operand_types[2] = PPC_OPER_TYPE_GPR;
	dec->operand_values[2] = (insword & 0xF800)>>11;
	dec->operand_fmtstr = PPC_FMTSTR_VSREG_C_GPR_C_GPR;
	return 0;
}

/* lwaux GPR,GPR,GPR */
int lwaux_GPR_GPR_GPR(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_LWAUX;
	/* 011111AAAAABBBBxCCCCC01011101010 */
	dec->operand_n = 3;
	dec->operand_types[0] = PPC_OPER_TYPE_GPR;
	dec->operand_values[0] = (insword & 0x3E00000)>>21;
	dec->operand_types[1] = PPC_OPER_TYPE_GPR;
	dec->operand_values[1] = (insword & 0x1E0000)>>17;
	dec->operand_types[2] = PPC_OPER_TYPE_GPR;
	dec->operand_values[2] = (insword & 0xF800)>>11;
	dec->operand_fmtstr = PPC_FMTSTR_GPR_C_GPR_C_GPR;
	return 0;
}

/* lhaux GPR,GPR,GPR */
int lhaux_GPR_GPR_GPR(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_LHAUX;
	/* 011111AAAAABBBBBCCCCC01011101110 */
	dec->operand_n = 3;
	dec->operand_types[0] = PPC_OPER_TYPE_GPR;
	dec->operand_values[0] = (insword & 0x3E00000)>>21;
	dec->operand_types[1] = PPC_OPER_TYPE_GPR;
	dec->operand_values[1] = (insword & 0x1F0000)>>16;
	dec->operand_types[2] = PPC_OPER_TYPE_GPR;
	dec->operand_values[2] = (insword & 0xF800)>>11;
	dec->operand_fmtstr = PPC_FMTSTR_GPR_C_GPR_C_GPR;
	return 0;
}

/* stvexbx VREG,GPR,GPR */
int stvexbx_VREG_GPR_GPR(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_STVEXBX;
	/* 011111AAAAABBBBBCCCCC01100001010 */
	dec->operand_n = 3;
	dec->operand_types[0] = PPC_OPER_TYPE_VREG;
	dec->operand_values[0] = (insword & 0x3E00000)>>21;
	dec->operand_types[1] = PPC_OPER_TYPE_GPR;
	dec->operand_values[1] = (insword & 0x1F0000)>>16;
	dec->operand_types[2] = PPC_OPER_TYPE_GPR;
	dec->operand_values[2] = (insword & 0xF800)>>11;
	dec->operand_fmtstr = PPC_FMTSTR_VREG_C_GPR_C_GPR;
	return 0;
}

/* dcblc GPR,GPR */
int dcblc_GPR_GPR(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_DCBLC;
	/* 01111100000AAAAABBBBB01100001100 */
	dec->operand_n = 2;
	dec->operand_types[0] = PPC_OPER_TYPE_GPR;
	dec->operand_values[0] = (insword & 0x1F0000)>>16;
	dec->operand_types[1] = PPC_OPER_TYPE_GPR;
	dec->operand_values[1] = (insword & 0xF800)>>11;
	dec->operand_fmtstr = PPC_FMTSTR_GPR_C_GPR;
	return 0;
}

/* stxvx VSREG,GPR,GPR */
int stxvx_VSREG_GPR_GPR(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_STXVX;
	/* 011111AAAAABBBBBCCCCC0110001100A */
	dec->operand_n = 3;
	dec->operand_types[0] = PPC_OPER_TYPE_VSREG;
	dec->operand_values[0] = ((insword & 0x3E00000)>>20)|((insword & 0x1)>>0);
	dec->operand_types[1] = PPC_OPER_TYPE_GPR;
	dec->operand_values[1] = (insword & 0x1F0000)>>16;
	dec->operand_types[2] = PPC_OPER_TYPE_GPR;
	dec->operand_values[2] = (insword & 0xF800)>>11;
	dec->operand_fmtstr = PPC_FMTSTR_VSREG_C_GPR_C_GPR;
	return 0;
}

/* stxvl VSREG,GPR,GPR */
int stxvl_VSREG_GPR_GPR(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_STXVL;
	/* 011111AAAAABBBBBCCCCC0110001101A */
	dec->operand_n = 3;
	dec->operand_types[0] = PPC_OPER_TYPE_VSREG;
	dec->operand_values[0] = ((insword & 0x3E00000)>>20)|((insword & 0x1)>>0);
	dec->operand_types[1] = PPC_OPER_TYPE_GPR;
	dec->operand_values[1] = (insword & 0x1F0000)>>16;
	dec->operand_types[2] = PPC_OPER_TYPE_GPR;
	dec->operand_values[2] = (insword & 0xF800)>>11;
	dec->operand_fmtstr = PPC_FMTSTR_VSREG_C_GPR_C_GPR;
	return 0;
}

/* pbt. GPR,GPR,GPR */
int pbtD_GPR_GPR_GPR(uint32_t insword, struct ppc_decoded *dec)
{
	dec->properties |= PPC_PROPERTY_DOTTED;
	dec->mnemonic = PPC_MNEM_PBT;
	/* 011111AAAAABBBBBCCCCC01100101001 */
	dec->operand_n = 3;
	dec->operand_types[0] = PPC_OPER_TYPE_GPR;
	dec->operand_values[0] = (insword & 0x3E00000)>>21;
	dec->operand_types[1] = PPC_OPER_TYPE_GPR;
	dec->operand_values[1] = (insword & 0x1F0000)>>16;
	dec->operand_types[2] = PPC_OPER_TYPE_GPR;
	dec->operand_values[2] = (insword & 0xF800)>>11;
	dec->operand_fmtstr = PPC_FMTSTR_GPR_C_GPR_C_GPR;
	return 0;
}

/* sthx GPR,GPR,GPR */
int sthx_GPR_GPR_GPR(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_STHX;
	/* 011111AAAAABxBBBCCCCC01100101110 */
	dec->operand_n = 3;
	dec->operand_types[0] = PPC_OPER_TYPE_GPR;
	dec->operand_values[0] = (insword & 0x3E00000)>>21;
	dec->operand_types[1] = PPC_OPER_TYPE_GPR;
	dec->operand_values[1] = ((insword & 0x100000)>>17)|((insword & 0x70000)>>16);
	dec->operand_types[2] = PPC_OPER_TYPE_GPR;
	dec->operand_values[2] = (insword & 0xF800)>>11;
	dec->operand_fmtstr = PPC_FMTSTR_GPR_C_GPR_C_GPR;
	return 0;
}

/* sthepx GPR,GPR,GPR */
int sthepx_GPR_GPR_GPR(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_STHEPX;
	/* 011111AAAAABBBBBCCCCC01100111110 */
	dec->operand_n = 3;
	dec->operand_types[0] = PPC_OPER_TYPE_GPR;
	dec->operand_values[0] = (insword & 0x3E00000)>>21;
	dec->operand_types[1] = PPC_OPER_TYPE_GPR;
	dec->operand_values[1] = (insword & 0x1F0000)>>16;
	dec->operand_types[2] = PPC_OPER_TYPE_GPR;
	dec->operand_values[2] = (insword & 0xF800)>>11;
	dec->operand_fmtstr = PPC_FMTSTR_GPR_C_GPR_C_GPR;
	return 0;
}

/* stvexhx VREG,GPR,GPR */
int stvexhx_VREG_GPR_GPR(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_STVEXHX;
	/* 011111AAAAABBBBBCCCCC01101001010 */
	dec->operand_n = 3;
	dec->operand_types[0] = PPC_OPER_TYPE_VREG;
	dec->operand_values[0] = (insword & 0x3E00000)>>21;
	dec->operand_types[1] = PPC_OPER_TYPE_GPR;
	dec->operand_values[1] = (insword & 0x1F0000)>>16;
	dec->operand_types[2] = PPC_OPER_TYPE_GPR;
	dec->operand_values[2] = (insword & 0xF800)>>11;
	dec->operand_fmtstr = PPC_FMTSTR_VREG_C_GPR_C_GPR;
	return 0;
}

/* dcblq. GPR,GPR */
int dcblqD_GPR_GPR(uint32_t insword, struct ppc_decoded *dec)
{
	dec->properties |= PPC_PROPERTY_DOTTED;
	dec->mnemonic = PPC_MNEM_DCBLQ;
	/* 01111100000AAAAABBBBB01101001101 */
	dec->operand_n = 2;
	dec->operand_types[0] = PPC_OPER_TYPE_GPR;
	dec->operand_values[0] = (insword & 0x1F0000)>>16;
	dec->operand_types[1] = PPC_OPER_TYPE_GPR;
	dec->operand_values[1] = (insword & 0xF800)>>11;
	dec->operand_fmtstr = PPC_FMTSTR_GPR_C_GPR;
	return 0;
}

/* stxvll VSREG,GPR,GPR */
int stxvll_VSREG_GPR_GPR(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_STXVLL;
	/* 011111AAAAABBBBBCCCCC0110101101A */
	dec->operand_n = 3;
	dec->operand_types[0] = PPC_OPER_TYPE_VSREG;
	dec->operand_values[0] = ((insword & 0x3E00000)>>20)|((insword & 0x1)>>0);
	dec->operand_types[1] = PPC_OPER_TYPE_GPR;
	dec->operand_values[1] = (insword & 0x1F0000)>>16;
	dec->operand_types[2] = PPC_OPER_TYPE_GPR;
	dec->operand_values[2] = (insword & 0xF800)>>11;
	dec->operand_fmtstr = PPC_FMTSTR_VSREG_C_GPR_C_GPR;
	return 0;
}

/* mtvsrdd VSREG,GPR,GPR */
int mtvsrdd_VSREG_GPR_GPR(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_MTVSRDD;
	/* 011111AAAAABBBBBCCCCC0110110011A */
	dec->operand_n = 3;
	dec->operand_types[0] = PPC_OPER_TYPE_VSREG;
	dec->operand_values[0] = ((insword & 0x3E00000)>>20)|((insword & 0x1)>>0);
	dec->operand_types[1] = PPC_OPER_TYPE_GPR;
	dec->operand_values[1] = (insword & 0x1F0000)>>16;
	dec->operand_types[2] = PPC_OPER_TYPE_GPR;
	dec->operand_values[2] = (insword & 0xF800)>>11;
	dec->operand_fmtstr = PPC_FMTSTR_VSREG_C_GPR_C_GPR;
	return 0;
}

/* ecowx GPR,GPR,GPR */
int ecowx_GPR_GPR_GPR(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_ECOWX;
	/* 011111AAAAABBBBBCCCCC01101101100 */
	dec->operand_n = 3;
	dec->operand_types[0] = PPC_OPER_TYPE_GPR;
	dec->operand_values[0] = (insword & 0x3E00000)>>21;
	dec->operand_types[1] = PPC_OPER_TYPE_GPR;
	dec->operand_values[1] = (insword & 0x1F0000)>>16;
	dec->operand_types[2] = PPC_OPER_TYPE_GPR;
	dec->operand_values[2] = (insword & 0xF800)>>11;
	dec->operand_fmtstr = PPC_FMTSTR_GPR_C_GPR_C_GPR;
	return 0;
}

/* sthux GPR,GPR,GPR */
int sthux_GPR_GPR_GPR(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_STHUX;
	/* 011111AAAAABBBBBCCCCC01101101110 */
	dec->operand_n = 3;
	dec->operand_types[0] = PPC_OPER_TYPE_GPR;
	dec->operand_values[0] = (insword & 0x3E00000)>>21;
	dec->operand_types[1] = PPC_OPER_TYPE_GPR;
	dec->operand_values[1] = (insword & 0x1F0000)>>16;
	dec->operand_types[2] = PPC_OPER_TYPE_GPR;
	dec->operand_values[2] = (insword & 0xF800)>>11;
	dec->operand_fmtstr = PPC_FMTSTR_GPR_C_GPR_C_GPR;
	return 0;
}

/* stvexwx VREG,GPR,GPR */
int stvexwx_VREG_GPR_GPR(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_STVEXWX;
	/* 011111AAAAABBBBBCCCCC01110001010 */
	dec->operand_n = 3;
	dec->operand_types[0] = PPC_OPER_TYPE_VREG;
	dec->operand_values[0] = (insword & 0x3E00000)>>21;
	dec->operand_types[1] = PPC_OPER_TYPE_GPR;
	dec->operand_values[1] = (insword & 0x1F0000)>>16;
	dec->operand_types[2] = PPC_OPER_TYPE_GPR;
	dec->operand_values[2] = (insword & 0xF800)>>11;
	dec->operand_fmtstr = PPC_FMTSTR_VREG_C_GPR_C_GPR;
	return 0;
}

/* mtxer GPR */
int mtxer_GPR(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_MTXER;
	/* 011111AAAAA000010000001110100110 */
	dec->operand_n = 1;
	dec->operand_types[0] = PPC_OPER_TYPE_GPR;
	dec->operand_values[0] = (insword & 0x3E00000)>>21;
	dec->operand_fmtstr = PPC_FMTSTR_GPR;
	return 0;
}

/* dcbi GPR,GPR */
int dcbi_GPR_GPR(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_DCBI;
	/* 01111100000AAAAABBBBB01110101100 */
	dec->operand_n = 2;
	dec->operand_types[0] = PPC_OPER_TYPE_GPR;
	dec->operand_values[0] = (insword & 0x1F0000)>>16;
	dec->operand_types[1] = PPC_OPER_TYPE_GPR;
	dec->operand_values[1] = (insword & 0xF800)>>11;
	dec->operand_fmtstr = PPC_FMTSTR_GPR_C_GPR;
	return 0;
}

/* stvxl VREG,GPR,GPR */
int stvxl_VREG_GPR_GPR(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_STVXL;
	/* 011111AAAAABBBBBCCCCC01111001110 */
	dec->operand_n = 3;
	dec->operand_types[0] = PPC_OPER_TYPE_VREG;
	dec->operand_values[0] = (insword & 0x3E00000)>>21;
	dec->operand_types[1] = PPC_OPER_TYPE_GPR;
	dec->operand_values[1] = (insword & 0x1F0000)>>16;
	dec->operand_types[2] = PPC_OPER_TYPE_GPR;
	dec->operand_values[2] = (insword & 0xF800)>>11;
	dec->operand_fmtstr = PPC_FMTSTR_VREG_C_GPR_C_GPR;
	return 0;
}

/* lvlx VREG,GPR,GPR */
int lvlx_VREG_GPR_GPR(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_LVLX;
	/* 011111AAAAABBBBBCCCCC10000001110 */
	dec->operand_n = 3;
	dec->operand_types[0] = PPC_OPER_TYPE_VREG;
	dec->operand_values[0] = (insword & 0x3E00000)>>21;
	dec->operand_types[1] = PPC_OPER_TYPE_GPR;
	dec->operand_values[1] = (insword & 0x1F0000)>>16;
	dec->operand_types[2] = PPC_OPER_TYPE_GPR;
	dec->operand_values[2] = (insword & 0xF800)>>11;
	dec->operand_fmtstr = PPC_FMTSTR_VREG_C_GPR_C_GPR;
	return 0;
}

/* lxsspx VSREG,GPR,GPR */
int lxsspx_VSREG_GPR_GPR(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_LXSSPX;
	/* 011111AAAAABBBBBCCCCC1000001100A */
	dec->operand_n = 3;
	dec->operand_types[0] = PPC_OPER_TYPE_VSREG;
	dec->operand_values[0] = ((insword & 0x3E00000)>>20)|((insword & 0x1)>>0);
	dec->operand_types[1] = PPC_OPER_TYPE_GPR;
	dec->operand_values[1] = (insword & 0x1F0000)>>16;
	dec->operand_types[2] = PPC_OPER_TYPE_GPR;
	dec->operand_values[2] = (insword & 0xF800)>>11;
	dec->operand_fmtstr = PPC_FMTSTR_VSREG_C_GPR_C_GPR;
	return 0;
}

/* ldbrx GPR,GPR,GPR */
int ldbrx_GPR_GPR_GPR(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_LDBRX;
	/* 011111AAAAABBBBBCCCCC10000101000 */
	dec->operand_n = 3;
	dec->operand_types[0] = PPC_OPER_TYPE_GPR;
	dec->operand_values[0] = (insword & 0x3E00000)>>21;
	dec->operand_types[1] = PPC_OPER_TYPE_GPR;
	dec->operand_values[1] = (insword & 0x1F0000)>>16;
	dec->operand_types[2] = PPC_OPER_TYPE_GPR;
	dec->operand_values[2] = (insword & 0xF800)>>11;
	dec->operand_fmtstr = PPC_FMTSTR_GPR_C_GPR_C_GPR;
	return 0;
}

/* lwbrx GPR,GPR,GPR */
int lwbrx_GPR_GPR_GPR(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_LWBRX;
	/* 011111AAAAABBBBBCCCCC10000101100 */
	dec->operand_n = 3;
	dec->operand_types[0] = PPC_OPER_TYPE_GPR;
	dec->operand_values[0] = (insword & 0x3E00000)>>21;
	dec->operand_types[1] = PPC_OPER_TYPE_GPR;
	dec->operand_values[1] = (insword & 0x1F0000)>>16;
	dec->operand_types[2] = PPC_OPER_TYPE_GPR;
	dec->operand_values[2] = (insword & 0xF800)>>11;
	dec->operand_fmtstr = PPC_FMTSTR_GPR_C_GPR_C_GPR;
	return 0;
}

/* lfsx FREG,GPR,GPR */
int lfsx_FREG_GPR_GPR(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_LFSX;
	/* 011111AAAAABBBBBCCCCC10000101110 */
	dec->operand_n = 3;
	dec->operand_types[0] = PPC_OPER_TYPE_FREG;
	dec->operand_values[0] = (insword & 0x3E00000)>>21;
	dec->operand_types[1] = PPC_OPER_TYPE_GPR;
	dec->operand_values[1] = (insword & 0x1F0000)>>16;
	dec->operand_types[2] = PPC_OPER_TYPE_GPR;
	dec->operand_values[2] = (insword & 0xF800)>>11;
	dec->operand_fmtstr = PPC_FMTSTR_FREG_C_GPR_C_GPR;
	return 0;
}

/* lvtrx VREG,GPR,GPR */
int lvtrx_VREG_GPR_GPR(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_LVTRX;
	/* 011111AAAAABBBBBCCCCC10001001010 */
	dec->operand_n = 3;
	dec->operand_types[0] = PPC_OPER_TYPE_VREG;
	dec->operand_values[0] = (insword & 0x3E00000)>>21;
	dec->operand_types[1] = PPC_OPER_TYPE_GPR;
	dec->operand_values[1] = (insword & 0x1F0000)>>16;
	dec->operand_types[2] = PPC_OPER_TYPE_GPR;
	dec->operand_values[2] = (insword & 0xF800)>>11;
	dec->operand_fmtstr = PPC_FMTSTR_VREG_C_GPR_C_GPR;
	return 0;
}

/* lvrx VREG,GPR,GPR */
int lvrx_VREG_GPR_GPR(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_LVRX;
	/* 011111AAAAABBBBBCCCCC10001001110 */
	dec->operand_n = 3;
	dec->operand_types[0] = PPC_OPER_TYPE_VREG;
	dec->operand_values[0] = (insword & 0x3E00000)>>21;
	dec->operand_types[1] = PPC_OPER_TYPE_GPR;
	dec->operand_values[1] = (insword & 0x1F0000)>>16;
	dec->operand_types[2] = PPC_OPER_TYPE_GPR;
	dec->operand_values[2] = (insword & 0xF800)>>11;
	dec->operand_fmtstr = PPC_FMTSTR_VREG_C_GPR_C_GPR;
	return 0;
}

/* lfsux FREG,GPR,GPR */
int lfsux_FREG_GPR_GPR(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_LFSUX;
	/* 011111AAAAABBBBBCCCCC10001101110 */
	dec->operand_n = 3;
	dec->operand_types[0] = PPC_OPER_TYPE_FREG;
	dec->operand_values[0] = (insword & 0x3E00000)>>21;
	dec->operand_types[1] = PPC_OPER_TYPE_GPR;
	dec->operand_values[1] = (insword & 0x1F0000)>>16;
	dec->operand_types[2] = PPC_OPER_TYPE_GPR;
	dec->operand_values[2] = (insword & 0xF800)>>11;
	dec->operand_fmtstr = PPC_FMTSTR_FREG_C_GPR_C_GPR;
	return 0;
}

/* lvtlx VREG,GPR,GPR */
int lvtlx_VREG_GPR_GPR(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_LVTLX;
	/* 011111AAAAABBBBBCCCCC10010001010 */
	dec->operand_n = 3;
	dec->operand_types[0] = PPC_OPER_TYPE_VREG;
	dec->operand_values[0] = (insword & 0x3E00000)>>21;
	dec->operand_types[1] = PPC_OPER_TYPE_GPR;
	dec->operand_values[1] = (insword & 0x1F0000)>>16;
	dec->operand_types[2] = PPC_OPER_TYPE_GPR;
	dec->operand_values[2] = (insword & 0xF800)>>11;
	dec->operand_fmtstr = PPC_FMTSTR_VREG_C_GPR_C_GPR;
	return 0;
}

/* lwat GPR,GPR,NUM */
int lwat_GPR_GPR_NUM(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_LWAT;
	/* 011111AAAAABBBBBCCCCC10010001100 */
	dec->operand_n = 3;
	dec->operand_types[0] = PPC_OPER_TYPE_GPR;
	dec->operand_values[0] = (insword & 0x3E00000)>>21;
	dec->operand_types[1] = PPC_OPER_TYPE_GPR;
	dec->operand_values[1] = (insword & 0x1F0000)>>16;
	dec->operand_types[2] = PPC_OPER_TYPE_NUM;
	dec->operand_values[2] = (insword & 0xF800)>>11;
	dec->operand_fmtstr = PPC_FMTSTR_GPR_C_GPR_C_NUM;
	return 0;
}

/* lxsdx VSREG,GPR,GPR */
int lxsdx_VSREG_GPR_GPR(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_LXSDX;
	/* 011111AAAAABBBBBCCCCC1001001100A */
	dec->operand_n = 3;
	dec->operand_types[0] = PPC_OPER_TYPE_VSREG;
	dec->operand_values[0] = ((insword & 0x3E00000)>>20)|((insword & 0x1)>>0);
	dec->operand_types[1] = PPC_OPER_TYPE_GPR;
	dec->operand_values[1] = (insword & 0x1F0000)>>16;
	dec->operand_types[2] = PPC_OPER_TYPE_GPR;
	dec->operand_values[2] = (insword & 0xF800)>>11;
	dec->operand_fmtstr = PPC_FMTSTR_VSREG_C_GPR_C_GPR;
	return 0;
}

/* lswi GPR,GPR,NUM */
int lswi_GPR_GPR_NUM(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_LSWI;
	/* 011111AAAAABBBBBCCCCC10010101010 */
	dec->operand_n = 3;
	dec->operand_types[0] = PPC_OPER_TYPE_GPR;
	dec->operand_values[0] = (insword & 0x3E00000)>>21;
	dec->operand_types[1] = PPC_OPER_TYPE_GPR;
	dec->operand_values[1] = (insword & 0x1F0000)>>16;
	dec->operand_types[2] = PPC_OPER_TYPE_NUM;
	dec->operand_values[2] = (insword & 0xF800)>>11;
	dec->operand_fmtstr = PPC_FMTSTR_GPR_C_GPR_C_NUM;
	return 0;
}

/* lfdx FREG,GPR,GPR */
int lfdx_FREG_GPR_GPR(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_LFDX;
	/* 011111AAAAABBBBBCCCCC10010101110 */
	dec->operand_n = 3;
	dec->operand_types[0] = PPC_OPER_TYPE_FREG;
	dec->operand_values[0] = (insword & 0x3E00000)>>21;
	dec->operand_types[1] = PPC_OPER_TYPE_GPR;
	dec->operand_values[1] = (insword & 0x1F0000)>>16;
	dec->operand_types[2] = PPC_OPER_TYPE_GPR;
	dec->operand_values[2] = (insword & 0xF800)>>11;
	dec->operand_fmtstr = PPC_FMTSTR_FREG_C_GPR_C_GPR;
	return 0;
}

/* lfdepx FREG,GPR,GPR */
int lfdepx_FREG_GPR_GPR(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_LFDEPX;
	/* 011111AAAAABBBBBCCCCC10010111110 */
	dec->operand_n = 3;
	dec->operand_types[0] = PPC_OPER_TYPE_FREG;
	dec->operand_values[0] = (insword & 0x3E00000)>>21;
	dec->operand_types[1] = PPC_OPER_TYPE_GPR;
	dec->operand_values[1] = (insword & 0x1F0000)>>16;
	dec->operand_types[2] = PPC_OPER_TYPE_GPR;
	dec->operand_values[2] = (insword & 0xF800)>>11;
	dec->operand_fmtstr = PPC_FMTSTR_FREG_C_GPR_C_GPR;
	return 0;
}

/* lvswx VREG,GPR,GPR */
int lvswx_VREG_GPR_GPR(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_LVSWX;
	/* 011111AAAAABBBBBCCCCC10011001010 */
	dec->operand_n = 3;
	dec->operand_types[0] = PPC_OPER_TYPE_VREG;
	dec->operand_values[0] = (insword & 0x3E00000)>>21;
	dec->operand_types[1] = PPC_OPER_TYPE_GPR;
	dec->operand_values[1] = (insword & 0x1F0000)>>16;
	dec->operand_types[2] = PPC_OPER_TYPE_GPR;
	dec->operand_values[2] = (insword & 0xF800)>>11;
	dec->operand_fmtstr = PPC_FMTSTR_VREG_C_GPR_C_GPR;
	return 0;
}

/* ldat GPR,GPR,NUM */
int ldat_GPR_GPR_NUM(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_LDAT;
	/* 011111AAAAABBBBBCCCCC10011001100 */
	dec->operand_n = 3;
	dec->operand_types[0] = PPC_OPER_TYPE_GPR;
	dec->operand_values[0] = (insword & 0x3E00000)>>21;
	dec->operand_types[1] = PPC_OPER_TYPE_GPR;
	dec->operand_values[1] = (insword & 0x1F0000)>>16;
	dec->operand_types[2] = PPC_OPER_TYPE_NUM;
	dec->operand_values[2] = (insword & 0xF800)>>11;
	dec->operand_fmtstr = PPC_FMTSTR_GPR_C_GPR_C_NUM;
	return 0;
}

/* lfdux FREG,GPR,GPR */
int lfdux_FREG_GPR_GPR(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_LFDUX;
	/* 011111AAAAABBBBBCCCCC10011101110 */
	dec->operand_n = 3;
	dec->operand_types[0] = PPC_OPER_TYPE_FREG;
	dec->operand_values[0] = (insword & 0x3E00000)>>21;
	dec->operand_types[1] = PPC_OPER_TYPE_GPR;
	dec->operand_values[1] = (insword & 0x1F0000)>>16;
	dec->operand_types[2] = PPC_OPER_TYPE_GPR;
	dec->operand_values[2] = (insword & 0xF800)>>11;
	dec->operand_fmtstr = PPC_FMTSTR_FREG_C_GPR_C_GPR;
	return 0;
}

/* stvlx VREG,GPR,GPR */
int stvlx_VREG_GPR_GPR(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_STVLX;
	/* 011111AAAAABBBBBCCCCC10100001110 */
	dec->operand_n = 3;
	dec->operand_types[0] = PPC_OPER_TYPE_VREG;
	dec->operand_values[0] = (insword & 0x3E00000)>>21;
	dec->operand_types[1] = PPC_OPER_TYPE_GPR;
	dec->operand_values[1] = (insword & 0x1F0000)>>16;
	dec->operand_types[2] = PPC_OPER_TYPE_GPR;
	dec->operand_values[2] = (insword & 0xF800)>>11;
	dec->operand_fmtstr = PPC_FMTSTR_VREG_C_GPR_C_GPR;
	return 0;
}

/* stxsspx VSREG,GPR,GPR */
int stxsspx_VSREG_GPR_GPR(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_STXSSPX;
	/* 011111AAAAABBBBBCCCCC1010001100A */
	dec->operand_n = 3;
	dec->operand_types[0] = PPC_OPER_TYPE_VSREG;
	dec->operand_values[0] = ((insword & 0x3E00000)>>20)|((insword & 0x1)>>0);
	dec->operand_types[1] = PPC_OPER_TYPE_GPR;
	dec->operand_values[1] = (insword & 0x1F0000)>>16;
	dec->operand_types[2] = PPC_OPER_TYPE_GPR;
	dec->operand_values[2] = (insword & 0xF800)>>11;
	dec->operand_fmtstr = PPC_FMTSTR_VSREG_C_GPR_C_GPR;
	return 0;
}

/* stdbrx GPR,GPR,GPR */
int stdbrx_GPR_GPR_GPR(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_STDBRX;
	/* 011111AAAAABBBBBCCCCC10100101000 */
	dec->operand_n = 3;
	dec->operand_types[0] = PPC_OPER_TYPE_GPR;
	dec->operand_values[0] = (insword & 0x3E00000)>>21;
	dec->operand_types[1] = PPC_OPER_TYPE_GPR;
	dec->operand_values[1] = (insword & 0x1F0000)>>16;
	dec->operand_types[2] = PPC_OPER_TYPE_GPR;
	dec->operand_values[2] = (insword & 0xF800)>>11;
	dec->operand_fmtstr = PPC_FMTSTR_GPR_C_GPR_C_GPR;
	return 0;
}

/* stswx GPR,GPR,GPR */
int stswx_GPR_GPR_GPR(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_STSWX;
	/* 011111AAAAABBBBBCCCCC10100101010 */
	dec->operand_n = 3;
	dec->operand_types[0] = PPC_OPER_TYPE_GPR;
	dec->operand_values[0] = (insword & 0x3E00000)>>21;
	dec->operand_types[1] = PPC_OPER_TYPE_GPR;
	dec->operand_values[1] = (insword & 0x1F0000)>>16;
	dec->operand_types[2] = PPC_OPER_TYPE_GPR;
	dec->operand_values[2] = (insword & 0xF800)>>11;
	dec->operand_fmtstr = PPC_FMTSTR_GPR_C_GPR_C_GPR;
	return 0;
}

/* stwbrx GPR,GPR,GPR */
int stwbrx_GPR_GPR_GPR(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_STWBRX;
	/* 011111AAAAABBBBBCCCCC10100101100 */
	dec->operand_n = 3;
	dec->operand_types[0] = PPC_OPER_TYPE_GPR;
	dec->operand_values[0] = (insword & 0x3E00000)>>21;
	dec->operand_types[1] = PPC_OPER_TYPE_GPR;
	dec->operand_values[1] = (insword & 0x1F0000)>>16;
	dec->operand_types[2] = PPC_OPER_TYPE_GPR;
	dec->operand_values[2] = (insword & 0xF800)>>11;
	dec->operand_fmtstr = PPC_FMTSTR_GPR_C_GPR_C_GPR;
	return 0;
}

/* stfsx FREG,GPR,GPR */
int stfsx_FREG_GPR_GPR(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_STFSX;
	/* 011111AAAAABBBBBCCCCC10100101110 */
	dec->operand_n = 3;
	dec->operand_types[0] = PPC_OPER_TYPE_FREG;
	dec->operand_values[0] = (insword & 0x3E00000)>>21;
	dec->operand_types[1] = PPC_OPER_TYPE_GPR;
	dec->operand_values[1] = (insword & 0x1F0000)>>16;
	dec->operand_types[2] = PPC_OPER_TYPE_GPR;
	dec->operand_values[2] = (insword & 0xF800)>>11;
	dec->operand_fmtstr = PPC_FMTSTR_FREG_C_GPR_C_GPR;
	return 0;
}

/* stvfrx VREG,GPR,GPR */
int stvfrx_VREG_GPR_GPR(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_STVFRX;
	/* 011111AAAAABBxBBCCCCC10101001010 */
	dec->operand_n = 3;
	dec->operand_types[0] = PPC_OPER_TYPE_VREG;
	dec->operand_values[0] = (insword & 0x3E00000)>>21;
	dec->operand_types[1] = PPC_OPER_TYPE_GPR;
	dec->operand_values[1] = ((insword & 0x180000)>>17)|((insword & 0x30000)>>16);
	dec->operand_types[2] = PPC_OPER_TYPE_GPR;
	dec->operand_values[2] = (insword & 0xF800)>>11;
	dec->operand_fmtstr = PPC_FMTSTR_VREG_C_GPR_C_GPR;
	return 0;
}

/* stvrx VREG,GPR,GPR */
int stvrx_VREG_GPR_GPR(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_STVRX;
	/* 011111AAAAABBBBBCCCCC10101001110 */
	dec->operand_n = 3;
	dec->operand_types[0] = PPC_OPER_TYPE_VREG;
	dec->operand_values[0] = (insword & 0x3E00000)>>21;
	dec->operand_types[1] = PPC_OPER_TYPE_GPR;
	dec->operand_values[1] = (insword & 0x1F0000)>>16;
	dec->operand_types[2] = PPC_OPER_TYPE_GPR;
	dec->operand_values[2] = (insword & 0xF800)>>11;
	dec->operand_fmtstr = PPC_FMTSTR_VREG_C_GPR_C_GPR;
	return 0;
}

/* stbcx. GPR,GPR,GPR */
int stbcxD_GPR_GPR_GPR(uint32_t insword, struct ppc_decoded *dec)
{
	dec->properties |= PPC_PROPERTY_DOTTED;
	dec->mnemonic = PPC_MNEM_STBCX;
	/* 011111AAAAABBBBBCCCCC10101101101 */
	dec->operand_n = 3;
	dec->operand_types[0] = PPC_OPER_TYPE_GPR;
	dec->operand_values[0] = (insword & 0x3E00000)>>21;
	dec->operand_types[1] = PPC_OPER_TYPE_GPR;
	dec->operand_values[1] = (insword & 0x1F0000)>>16;
	dec->operand_types[2] = PPC_OPER_TYPE_GPR;
	dec->operand_values[2] = (insword & 0xF800)>>11;
	dec->operand_fmtstr = PPC_FMTSTR_GPR_C_GPR_C_GPR;
	return 0;
}

/* stfsux FREG,GPR,GPR */
int stfsux_FREG_GPR_GPR(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_STFSUX;
	/* 011111AAAAAxBBBBCCCCC10101101110 */
	dec->operand_n = 3;
	dec->operand_types[0] = PPC_OPER_TYPE_FREG;
	dec->operand_values[0] = (insword & 0x3E00000)>>21;
	dec->operand_types[1] = PPC_OPER_TYPE_GPR;
	dec->operand_values[1] = (insword & 0xF0000)>>16;
	dec->operand_types[2] = PPC_OPER_TYPE_GPR;
	dec->operand_values[2] = (insword & 0xF800)>>11;
	dec->operand_fmtstr = PPC_FMTSTR_FREG_C_GPR_C_GPR;
	return 0;
}

/* stvflx VREG,GPR,GPR */
int stvflx_VREG_GPR_GPR(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_STVFLX;
	/* 011111AAAAABBBBBCCCCC10110001010 */
	dec->operand_n = 3;
	dec->operand_types[0] = PPC_OPER_TYPE_VREG;
	dec->operand_values[0] = (insword & 0x3E00000)>>21;
	dec->operand_types[1] = PPC_OPER_TYPE_GPR;
	dec->operand_values[1] = (insword & 0x1F0000)>>16;
	dec->operand_types[2] = PPC_OPER_TYPE_GPR;
	dec->operand_values[2] = (insword & 0xF800)>>11;
	dec->operand_fmtstr = PPC_FMTSTR_VREG_C_GPR_C_GPR;
	return 0;
}

/* stwat GPR,GPR,NUM */
int stwat_GPR_GPR_NUM(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_STWAT;
	/* 011111AAAAABBBBBCCCCC10110001100 */
	dec->operand_n = 3;
	dec->operand_types[0] = PPC_OPER_TYPE_GPR;
	dec->operand_values[0] = (insword & 0x3E00000)>>21;
	dec->operand_types[1] = PPC_OPER_TYPE_GPR;
	dec->operand_values[1] = (insword & 0x1F0000)>>16;
	dec->operand_types[2] = PPC_OPER_TYPE_NUM;
	dec->operand_values[2] = (insword & 0xF800)>>11;
	dec->operand_fmtstr = PPC_FMTSTR_GPR_C_GPR_C_NUM;
	return 0;
}

/* stxsdx VSREG,GPR,GPR */
int stxsdx_VSREG_GPR_GPR(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_STXSDX;
	/* 011111AAAAABBBBBCCCCC1011001100A */
	dec->operand_n = 3;
	dec->operand_types[0] = PPC_OPER_TYPE_VSREG;
	dec->operand_values[0] = ((insword & 0x3E00000)>>20)|((insword & 0x1)>>0);
	dec->operand_types[1] = PPC_OPER_TYPE_GPR;
	dec->operand_values[1] = (insword & 0x1F0000)>>16;
	dec->operand_types[2] = PPC_OPER_TYPE_GPR;
	dec->operand_values[2] = (insword & 0xF800)>>11;
	dec->operand_fmtstr = PPC_FMTSTR_VSREG_C_GPR_C_GPR;
	return 0;
}

/* stswi GPR,GPR,NUM */
int stswi_GPR_GPR_NUM(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_STSWI;
	/* 011111AAAAABBBBBCCCCC10110101010 */
	dec->operand_n = 3;
	dec->operand_types[0] = PPC_OPER_TYPE_GPR;
	dec->operand_values[0] = (insword & 0x3E00000)>>21;
	dec->operand_types[1] = PPC_OPER_TYPE_GPR;
	dec->operand_values[1] = (insword & 0x1F0000)>>16;
	dec->operand_types[2] = PPC_OPER_TYPE_NUM;
	dec->operand_values[2] = (insword & 0xF800)>>11;
	dec->operand_fmtstr = PPC_FMTSTR_GPR_C_GPR_C_NUM;
	return 0;
}

/* sthcx. GPR,GPR,GPR */
int sthcxD_GPR_GPR_GPR(uint32_t insword, struct ppc_decoded *dec)
{
	dec->properties |= PPC_PROPERTY_DOTTED;
	dec->mnemonic = PPC_MNEM_STHCX;
	/* 011111AAAAABBBBBCCCCC10110101101 */
	dec->operand_n = 3;
	dec->operand_types[0] = PPC_OPER_TYPE_GPR;
	dec->operand_values[0] = (insword & 0x3E00000)>>21;
	dec->operand_types[1] = PPC_OPER_TYPE_GPR;
	dec->operand_values[1] = (insword & 0x1F0000)>>16;
	dec->operand_types[2] = PPC_OPER_TYPE_GPR;
	dec->operand_values[2] = (insword & 0xF800)>>11;
	dec->operand_fmtstr = PPC_FMTSTR_GPR_C_GPR_C_GPR;
	return 0;
}

/* stfdx FREG,GPR,GPR */
int stfdx_FREG_GPR_GPR(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_STFDX;
	/* 011111AAAAABBBBBCCCCC10110101110 */
	dec->operand_n = 3;
	dec->operand_types[0] = PPC_OPER_TYPE_FREG;
	dec->operand_values[0] = (insword & 0x3E00000)>>21;
	dec->operand_types[1] = PPC_OPER_TYPE_GPR;
	dec->operand_values[1] = (insword & 0x1F0000)>>16;
	dec->operand_types[2] = PPC_OPER_TYPE_GPR;
	dec->operand_values[2] = (insword & 0xF800)>>11;
	dec->operand_fmtstr = PPC_FMTSTR_FREG_C_GPR_C_GPR;
	return 0;
}

/* stfdepx FREG,GPR,GPR */
int stfdepx_FREG_GPR_GPR(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_STFDEPX;
	/* 011111AAAAABBBBBCCCCC10110111110 */
	dec->operand_n = 3;
	dec->operand_types[0] = PPC_OPER_TYPE_FREG;
	dec->operand_values[0] = (insword & 0x3E00000)>>21;
	dec->operand_types[1] = PPC_OPER_TYPE_GPR;
	dec->operand_values[1] = (insword & 0x1F0000)>>16;
	dec->operand_types[2] = PPC_OPER_TYPE_GPR;
	dec->operand_values[2] = (insword & 0xF800)>>11;
	dec->operand_fmtstr = PPC_FMTSTR_FREG_C_GPR_C_GPR;
	return 0;
}

/* stvswx VREG,GPR,GPR */
int stvswx_VREG_GPR_GPR(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_STVSWX;
	/* 011111AAAAABBBBBCCCCC10111001010 */
	dec->operand_n = 3;
	dec->operand_types[0] = PPC_OPER_TYPE_VREG;
	dec->operand_values[0] = (insword & 0x3E00000)>>21;
	dec->operand_types[1] = PPC_OPER_TYPE_GPR;
	dec->operand_values[1] = (insword & 0x1F0000)>>16;
	dec->operand_types[2] = PPC_OPER_TYPE_GPR;
	dec->operand_values[2] = (insword & 0xF800)>>11;
	dec->operand_fmtstr = PPC_FMTSTR_VREG_C_GPR_C_GPR;
	return 0;
}

/* stdat GPR,GPR,NUM */
int stdat_GPR_GPR_NUM(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_STDAT;
	/* 011111AAAAABBBBBCCCCC10111001100 */
	dec->operand_n = 3;
	dec->operand_types[0] = PPC_OPER_TYPE_GPR;
	dec->operand_values[0] = (insword & 0x3E00000)>>21;
	dec->operand_types[1] = PPC_OPER_TYPE_GPR;
	dec->operand_values[1] = (insword & 0x1F0000)>>16;
	dec->operand_types[2] = PPC_OPER_TYPE_NUM;
	dec->operand_values[2] = (insword & 0xF800)>>11;
	dec->operand_fmtstr = PPC_FMTSTR_GPR_C_GPR_C_NUM;
	return 0;
}

/* dcba GPR,GPR */
int dcba_GPR_GPR(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_DCBA;
	/* 01111100000AAxAABBBBB10111101100 */
	dec->operand_n = 2;
	dec->operand_types[0] = PPC_OPER_TYPE_GPR;
	dec->operand_values[0] = ((insword & 0x180000)>>17)|((insword & 0x30000)>>16);
	dec->operand_types[1] = PPC_OPER_TYPE_GPR;
	dec->operand_values[1] = (insword & 0xF800)>>11;
	dec->operand_fmtstr = PPC_FMTSTR_GPR_C_GPR;
	return 0;
}

/* stfdux FREG,GPR,GPR */
int stfdux_FREG_GPR_GPR(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_STFDUX;
	/* 011111AAAAABBBBBCCCCC10111101110 */
	dec->operand_n = 3;
	dec->operand_types[0] = PPC_OPER_TYPE_FREG;
	dec->operand_values[0] = (insword & 0x3E00000)>>21;
	dec->operand_types[1] = PPC_OPER_TYPE_GPR;
	dec->operand_values[1] = (insword & 0x1F0000)>>16;
	dec->operand_types[2] = PPC_OPER_TYPE_GPR;
	dec->operand_values[2] = (insword & 0xF800)>>11;
	dec->operand_fmtstr = PPC_FMTSTR_FREG_C_GPR_C_GPR;
	return 0;
}

/* lvsm VREG,GPR,GPR */
int lvsm_VREG_GPR_GPR(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_LVSM;
	/* 011111AAAAABxBBBCCCCC11000001010 */
	dec->operand_n = 3;
	dec->operand_types[0] = PPC_OPER_TYPE_VREG;
	dec->operand_values[0] = (insword & 0x3E00000)>>21;
	dec->operand_types[1] = PPC_OPER_TYPE_GPR;
	dec->operand_values[1] = ((insword & 0x100000)>>17)|((insword & 0x70000)>>16);
	dec->operand_types[2] = PPC_OPER_TYPE_GPR;
	dec->operand_values[2] = (insword & 0xF800)>>11;
	dec->operand_fmtstr = PPC_FMTSTR_VREG_C_GPR_C_GPR;
	return 0;
}

/* stvepxl VREG,GPR,GPR */
int stvepxl_VREG_GPR_GPR(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_STVEPXL;
	/* 011111AAAAABBBBBCCCCC11000001110 */
	dec->operand_n = 3;
	dec->operand_types[0] = PPC_OPER_TYPE_VREG;
	dec->operand_values[0] = (insword & 0x3E00000)>>21;
	dec->operand_types[1] = PPC_OPER_TYPE_GPR;
	dec->operand_values[1] = (insword & 0x1F0000)>>16;
	dec->operand_types[2] = PPC_OPER_TYPE_GPR;
	dec->operand_values[2] = (insword & 0xF800)>>11;
	dec->operand_fmtstr = PPC_FMTSTR_VREG_C_GPR_C_GPR;
	return 0;
}

/* lxvw4x VSREG,GPR,GPR */
int lxvw4x_VSREG_GPR_GPR(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_LXVW4X;
	/* 011111AAAAABBBBBCCCCC1100001100A */
	dec->operand_n = 3;
	dec->operand_types[0] = PPC_OPER_TYPE_VSREG;
	dec->operand_values[0] = ((insword & 0x3E00000)>>20)|((insword & 0x1)>>0);
	dec->operand_types[1] = PPC_OPER_TYPE_GPR;
	dec->operand_values[1] = (insword & 0x1F0000)>>16;
	dec->operand_types[2] = PPC_OPER_TYPE_GPR;
	dec->operand_values[2] = (insword & 0xF800)>>11;
	dec->operand_fmtstr = PPC_FMTSTR_VSREG_C_GPR_C_GPR;
	return 0;
}

/* lxsibzx VSREG,GPR,GPR */
int lxsibzx_VSREG_GPR_GPR(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_LXSIBZX;
	/* 011111AAAAABxBBBCCCCC1100001101A */
	dec->operand_n = 3;
	dec->operand_types[0] = PPC_OPER_TYPE_VSREG;
	dec->operand_values[0] = ((insword & 0x3E00000)>>20)|((insword & 0x1)>>0);
	dec->operand_types[1] = PPC_OPER_TYPE_GPR;
	dec->operand_values[1] = ((insword & 0x100000)>>17)|((insword & 0x70000)>>16);
	dec->operand_types[2] = PPC_OPER_TYPE_GPR;
	dec->operand_values[2] = (insword & 0xF800)>>11;
	dec->operand_fmtstr = PPC_FMTSTR_VSREG_C_GPR_C_GPR;
	return 0;
}

/* tlbivax GPR,GPR */
int tlbivax_GPR_GPR(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_TLBIVAX;
	/* 01111100000xAAAABBBBB11000100100 */
	dec->operand_n = 2;
	dec->operand_types[0] = PPC_OPER_TYPE_GPR;
	dec->operand_values[0] = (insword & 0xF0000)>>16;
	dec->operand_types[1] = PPC_OPER_TYPE_GPR;
	dec->operand_values[1] = (insword & 0xF800)>>11;
	dec->operand_fmtstr = PPC_FMTSTR_GPR_C_GPR;
	return 0;
}

/* lwzcix GPR,GPR,GPR */
int lwzcix_GPR_GPR_GPR(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_LWZCIX;
	/* 011111AAAAABBBBBCCCCC11000101010 */
	dec->operand_n = 3;
	dec->operand_types[0] = PPC_OPER_TYPE_GPR;
	dec->operand_values[0] = (insword & 0x3E00000)>>21;
	dec->operand_types[1] = PPC_OPER_TYPE_GPR;
	dec->operand_values[1] = (insword & 0x1F0000)>>16;
	dec->operand_types[2] = PPC_OPER_TYPE_GPR;
	dec->operand_values[2] = (insword & 0xF800)>>11;
	dec->operand_fmtstr = PPC_FMTSTR_GPR_C_GPR_C_GPR;
	return 0;
}

/* lhbrx GPR,GPR,GPR */
int lhbrx_GPR_GPR_GPR(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_LHBRX;
	/* 011111AAAAABBBBBCCCCC11000101100 */
	dec->operand_n = 3;
	dec->operand_types[0] = PPC_OPER_TYPE_GPR;
	dec->operand_values[0] = (insword & 0x3E00000)>>21;
	dec->operand_types[1] = PPC_OPER_TYPE_GPR;
	dec->operand_values[1] = (insword & 0x1F0000)>>16;
	dec->operand_types[2] = PPC_OPER_TYPE_GPR;
	dec->operand_values[2] = (insword & 0xF800)>>11;
	dec->operand_fmtstr = PPC_FMTSTR_GPR_C_GPR_C_GPR;
	return 0;
}

/* lfdpx FREG,GPR,GPR */
int lfdpx_FREG_GPR_GPR(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_LFDPX;
	/* 011111AAAA0BBBBBCCCCC11000101110 */
	dec->operand_n = 3;
	dec->operand_types[0] = PPC_OPER_TYPE_FREG;
	dec->operand_values[0] = (insword & 0x3C00000)>>22;
	dec->operand_types[1] = PPC_OPER_TYPE_GPR;
	dec->operand_values[1] = (insword & 0x1F0000)>>16;
	dec->operand_types[2] = PPC_OPER_TYPE_GPR;
	dec->operand_values[2] = (insword & 0xF800)>>11;
	dec->operand_fmtstr = PPC_FMTSTR_FREG_C_GPR_C_GPR;
	return 0;
}

/* lvtrxl VREG,GPR,GPR */
int lvtrxl_VREG_GPR_GPR(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_LVTRXL;
	/* 011111AAAAABBBBxCCCCC11001001010 */
	dec->operand_n = 3;
	dec->operand_types[0] = PPC_OPER_TYPE_VREG;
	dec->operand_values[0] = (insword & 0x3E00000)>>21;
	dec->operand_types[1] = PPC_OPER_TYPE_GPR;
	dec->operand_values[1] = (insword & 0x1E0000)>>17;
	dec->operand_types[2] = PPC_OPER_TYPE_GPR;
	dec->operand_values[2] = (insword & 0xF800)>>11;
	dec->operand_fmtstr = PPC_FMTSTR_VREG_C_GPR_C_GPR;
	return 0;
}

/* stvepx VREG,GPR,GPR */
int stvepx_VREG_GPR_GPR(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_STVEPX;
	/* 011111AAAAABBBxBCCCCC11001001110 */
	dec->operand_n = 3;
	dec->operand_types[0] = PPC_OPER_TYPE_VREG;
	dec->operand_values[0] = (insword & 0x3E00000)>>21;
	dec->operand_types[1] = PPC_OPER_TYPE_GPR;
	dec->operand_values[1] = ((insword & 0x1C0000)>>17)|((insword & 0x10000)>>16);
	dec->operand_types[2] = PPC_OPER_TYPE_GPR;
	dec->operand_values[2] = (insword & 0xF800)>>11;
	dec->operand_fmtstr = PPC_FMTSTR_VREG_C_GPR_C_GPR;
	return 0;
}

/* lxvh8x VSREG,GPR,GPR */
int lxvh8x_VSREG_GPR_GPR(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_LXVH8X;
	/* 011111AAAAABxBBBCCCCC1100101100A */
	dec->operand_n = 3;
	dec->operand_types[0] = PPC_OPER_TYPE_VSREG;
	dec->operand_values[0] = ((insword & 0x3E00000)>>20)|((insword & 0x1)>>0);
	dec->operand_types[1] = PPC_OPER_TYPE_GPR;
	dec->operand_values[1] = ((insword & 0x100000)>>17)|((insword & 0x70000)>>16);
	dec->operand_types[2] = PPC_OPER_TYPE_GPR;
	dec->operand_values[2] = (insword & 0xF800)>>11;
	dec->operand_fmtstr = PPC_FMTSTR_VSREG_C_GPR_C_GPR;
	return 0;
}

/* lxsihzx VSREG,GPR,GPR */
int lxsihzx_VSREG_GPR_GPR(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_LXSIHZX;
	/* 011111AAAAABBBBBCCCCC1100101101A */
	dec->operand_n = 3;
	dec->operand_types[0] = PPC_OPER_TYPE_VSREG;
	dec->operand_values[0] = ((insword & 0x3E00000)>>20)|((insword & 0x1)>>0);
	dec->operand_types[1] = PPC_OPER_TYPE_GPR;
	dec->operand_values[1] = (insword & 0x1F0000)>>16;
	dec->operand_types[2] = PPC_OPER_TYPE_GPR;
	dec->operand_values[2] = (insword & 0xF800)>>11;
	dec->operand_fmtstr = PPC_FMTSTR_VSREG_C_GPR_C_GPR;
	return 0;
}

/* erativax GPR,GPR,GPR */
int erativax_GPR_GPR_GPR(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_ERATIVAX;
	/* 011111AAAAABBBBBCCCCC11001100110 */
	dec->operand_n = 3;
	dec->operand_types[0] = PPC_OPER_TYPE_GPR;
	dec->operand_values[0] = (insword & 0x3E00000)>>21;
	dec->operand_types[1] = PPC_OPER_TYPE_GPR;
	dec->operand_values[1] = (insword & 0x1F0000)>>16;
	dec->operand_types[2] = PPC_OPER_TYPE_GPR;
	dec->operand_values[2] = (insword & 0xF800)>>11;
	dec->operand_fmtstr = PPC_FMTSTR_GPR_C_GPR_C_GPR;
	return 0;
}

/* lhzcix GPR,GPR,GPR */
int lhzcix_GPR_GPR_GPR(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_LHZCIX;
	/* 011111AAAAAxBBBBCCCCC11001101010 */
	dec->operand_n = 3;
	dec->operand_types[0] = PPC_OPER_TYPE_GPR;
	dec->operand_values[0] = (insword & 0x3E00000)>>21;
	dec->operand_types[1] = PPC_OPER_TYPE_GPR;
	dec->operand_values[1] = (insword & 0xF0000)>>16;
	dec->operand_types[2] = PPC_OPER_TYPE_GPR;
	dec->operand_values[2] = (insword & 0xF800)>>11;
	dec->operand_fmtstr = PPC_FMTSTR_GPR_C_GPR_C_GPR;
	return 0;
}

/* lvtlxl VREG,GPR,GPR */
int lvtlxl_VREG_GPR_GPR(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_LVTLXL;
	/* 011111AAAAABBxBBCCCCC11010001010 */
	dec->operand_n = 3;
	dec->operand_types[0] = PPC_OPER_TYPE_VREG;
	dec->operand_values[0] = (insword & 0x3E00000)>>21;
	dec->operand_types[1] = PPC_OPER_TYPE_GPR;
	dec->operand_values[1] = ((insword & 0x180000)>>17)|((insword & 0x30000)>>16);
	dec->operand_types[2] = PPC_OPER_TYPE_GPR;
	dec->operand_values[2] = (insword & 0xF800)>>11;
	dec->operand_fmtstr = PPC_FMTSTR_VREG_C_GPR_C_GPR;
	return 0;
}

/* lxvd2x VSREG,GPR,GPR */
int lxvd2x_VSREG_GPR_GPR(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_LXVD2X;
	/* 011111AAAAABBBBBCCCCC1101001100A */
	dec->operand_n = 3;
	dec->operand_types[0] = PPC_OPER_TYPE_VSREG;
	dec->operand_values[0] = ((insword & 0x3E00000)>>20)|((insword & 0x1)>>0);
	dec->operand_types[1] = PPC_OPER_TYPE_GPR;
	dec->operand_values[1] = (insword & 0x1F0000)>>16;
	dec->operand_types[2] = PPC_OPER_TYPE_GPR;
	dec->operand_values[2] = (insword & 0xF800)>>11;
	dec->operand_fmtstr = PPC_FMTSTR_VSREG_C_GPR_C_GPR;
	return 0;
}

/* tlbsrx. GPR,GPR */
int tlbsrxD_GPR_GPR(uint32_t insword, struct ppc_decoded *dec)
{
	dec->properties |= PPC_PROPERTY_DOTTED;
	dec->mnemonic = PPC_MNEM_TLBSRX;
	/* 01111100000AAAAABBBBB11010100101 */
	dec->operand_n = 2;
	dec->operand_types[0] = PPC_OPER_TYPE_GPR;
	dec->operand_values[0] = (insword & 0x1F0000)>>16;
	dec->operand_types[1] = PPC_OPER_TYPE_GPR;
	dec->operand_values[1] = (insword & 0xF800)>>11;
	dec->operand_fmtstr = PPC_FMTSTR_GPR_C_GPR;
	return 0;
}

/* slbmfev GPR,GPR,NUM */
int slbmfev_GPR_GPR_NUM(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_SLBMFEV;
	/* 011111AAAAA00001BBBBB11010100110 */
	dec->operand_n = 3;
	dec->operand_types[0] = PPC_OPER_TYPE_GPR;
	dec->operand_values[0] = (insword & 0x3E00000)>>21;
	dec->operand_types[1] = PPC_OPER_TYPE_GPR;
	dec->operand_values[1] = (insword & 0xF800)>>11;
	dec->operand_types[2] = PPC_OPER_TYPE_NUM;
	dec->operand_fmtstr = PPC_FMTSTR_GPR_C_GPR_C_NUM;
	return 0;
}

/* lbzcix GPR,GPR,GPR */
int lbzcix_GPR_GPR_GPR(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_LBZCIX;
	/* 011111AAAAABBBBBCCCCC11010101010 */
	dec->operand_n = 3;
	dec->operand_types[0] = PPC_OPER_TYPE_GPR;
	dec->operand_values[0] = (insword & 0x3E00000)>>21;
	dec->operand_types[1] = PPC_OPER_TYPE_GPR;
	dec->operand_values[1] = (insword & 0x1F0000)>>16;
	dec->operand_types[2] = PPC_OPER_TYPE_GPR;
	dec->operand_values[2] = (insword & 0xF800)>>11;
	dec->operand_fmtstr = PPC_FMTSTR_GPR_C_GPR_C_GPR;
	return 0;
}

/* lfiwax FREG,GPR,GPR */
int lfiwax_FREG_GPR_GPR(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_LFIWAX;
	/* 011111AAAAABBBBBCCCCC11010101110 */
	dec->operand_n = 3;
	dec->operand_types[0] = PPC_OPER_TYPE_FREG;
	dec->operand_values[0] = (insword & 0x3E00000)>>21;
	dec->operand_types[1] = PPC_OPER_TYPE_GPR;
	dec->operand_values[1] = (insword & 0x1F0000)>>16;
	dec->operand_types[2] = PPC_OPER_TYPE_GPR;
	dec->operand_values[2] = (insword & 0xF800)>>11;
	dec->operand_fmtstr = PPC_FMTSTR_FREG_C_GPR_C_GPR;
	return 0;
}

/* lvswxl VREG,GPR,GPR */
int lvswxl_VREG_GPR_GPR(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_LVSWXL;
	/* 011111AAAAABBBBBCCCCC11011001010 */
	dec->operand_n = 3;
	dec->operand_types[0] = PPC_OPER_TYPE_VREG;
	dec->operand_values[0] = (insword & 0x3E00000)>>21;
	dec->operand_types[1] = PPC_OPER_TYPE_GPR;
	dec->operand_values[1] = (insword & 0x1F0000)>>16;
	dec->operand_types[2] = PPC_OPER_TYPE_GPR;
	dec->operand_values[2] = (insword & 0xF800)>>11;
	dec->operand_fmtstr = PPC_FMTSTR_VREG_C_GPR_C_GPR;
	return 0;
}

/* lxvb16x VSREG,GPR,GPR */
int lxvb16x_VSREG_GPR_GPR(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_LXVB16X;
	/* 011111AAAAABBBBBCCCCC1101101100A */
	dec->operand_n = 3;
	dec->operand_types[0] = PPC_OPER_TYPE_VSREG;
	dec->operand_values[0] = ((insword & 0x3E00000)>>20)|((insword & 0x1)>>0);
	dec->operand_types[1] = PPC_OPER_TYPE_GPR;
	dec->operand_values[1] = (insword & 0x1F0000)>>16;
	dec->operand_types[2] = PPC_OPER_TYPE_GPR;
	dec->operand_values[2] = (insword & 0xF800)>>11;
	dec->operand_fmtstr = PPC_FMTSTR_VSREG_C_GPR_C_GPR;
	return 0;
}

/* ldcix GPR,GPR,GPR */
int ldcix_GPR_GPR_GPR(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_LDCIX;
	/* 011111AAAAABBBBBCCCCC11011101010 */
	dec->operand_n = 3;
	dec->operand_types[0] = PPC_OPER_TYPE_GPR;
	dec->operand_values[0] = (insword & 0x3E00000)>>21;
	dec->operand_types[1] = PPC_OPER_TYPE_GPR;
	dec->operand_values[1] = (insword & 0x1F0000)>>16;
	dec->operand_types[2] = PPC_OPER_TYPE_GPR;
	dec->operand_values[2] = (insword & 0xF800)>>11;
	dec->operand_fmtstr = PPC_FMTSTR_GPR_C_GPR_C_GPR;
	return 0;
}

/* lfiwzx FREG,GPR,GPR */
int lfiwzx_FREG_GPR_GPR(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_LFIWZX;
	/* 011111AAAAABBBBBCCCCC11011101110 */
	dec->operand_n = 3;
	dec->operand_types[0] = PPC_OPER_TYPE_FREG;
	dec->operand_values[0] = (insword & 0x3E00000)>>21;
	dec->operand_types[1] = PPC_OPER_TYPE_GPR;
	dec->operand_values[1] = (insword & 0x1F0000)>>16;
	dec->operand_types[2] = PPC_OPER_TYPE_GPR;
	dec->operand_values[2] = (insword & 0xF800)>>11;
	dec->operand_fmtstr = PPC_FMTSTR_FREG_C_GPR_C_GPR;
	return 0;
}

/* stvlxl VREG,GPR,GPR */
int stvlxl_VREG_GPR_GPR(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_STVLXL;
	/* 011111AAAAABBBBBCCCCC11100001110 */
	dec->operand_n = 3;
	dec->operand_types[0] = PPC_OPER_TYPE_VREG;
	dec->operand_values[0] = (insword & 0x3E00000)>>21;
	dec->operand_types[1] = PPC_OPER_TYPE_GPR;
	dec->operand_values[1] = (insword & 0x1F0000)>>16;
	dec->operand_types[2] = PPC_OPER_TYPE_GPR;
	dec->operand_values[2] = (insword & 0xF800)>>11;
	dec->operand_fmtstr = PPC_FMTSTR_VREG_C_GPR_C_GPR;
	return 0;
}

/* stxvw4x VSREG,GPR,GPR */
int stxvw4x_VSREG_GPR_GPR(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_STXVW4X;
	/* 011111AAAAABBBBBCCCCC1110001100A */
	dec->operand_n = 3;
	dec->operand_types[0] = PPC_OPER_TYPE_VSREG;
	dec->operand_values[0] = ((insword & 0x3E00000)>>20)|((insword & 0x1)>>0);
	dec->operand_types[1] = PPC_OPER_TYPE_GPR;
	dec->operand_values[1] = (insword & 0x1F0000)>>16;
	dec->operand_types[2] = PPC_OPER_TYPE_GPR;
	dec->operand_values[2] = (insword & 0xF800)>>11;
	dec->operand_fmtstr = PPC_FMTSTR_VSREG_C_GPR_C_GPR;
	return 0;
}

/* stxsibx VSREG,GPR,GPR */
int stxsibx_VSREG_GPR_GPR(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_STXSIBX;
	/* 011111AAAAABBBBBCCCCC1110001101A */
	dec->operand_n = 3;
	dec->operand_types[0] = PPC_OPER_TYPE_VSREG;
	dec->operand_values[0] = ((insword & 0x3E00000)>>20)|((insword & 0x1)>>0);
	dec->operand_types[1] = PPC_OPER_TYPE_GPR;
	dec->operand_values[1] = (insword & 0x1F0000)>>16;
	dec->operand_types[2] = PPC_OPER_TYPE_GPR;
	dec->operand_values[2] = (insword & 0xF800)>>11;
	dec->operand_fmtstr = PPC_FMTSTR_VSREG_C_GPR_C_GPR;
	return 0;
}

/* tlbsx GPR,GPR */
int tlbsx_GPR_GPR(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_TLBSX;
	/* 01111100000AAAAABBBBB11100100100 */
	dec->operand_n = 2;
	dec->operand_types[0] = PPC_OPER_TYPE_GPR;
	dec->operand_values[0] = (insword & 0x1F0000)>>16;
	dec->operand_types[1] = PPC_OPER_TYPE_GPR;
	dec->operand_values[1] = (insword & 0xF800)>>11;
	dec->operand_fmtstr = PPC_FMTSTR_GPR_C_GPR;
	return 0;
}

/* tlbsx. GPR,GPR */
int tlbsxD_GPR_GPR(uint32_t insword, struct ppc_decoded *dec)
{
	dec->properties |= PPC_PROPERTY_DOTTED;
	dec->mnemonic = PPC_MNEM_TLBSX;
	/* 01111100000AAAAABBBBB11100100101 */
	dec->operand_n = 2;
	dec->operand_types[0] = PPC_OPER_TYPE_GPR;
	dec->operand_values[0] = (insword & 0x1F0000)>>16;
	dec->operand_types[1] = PPC_OPER_TYPE_GPR;
	dec->operand_values[1] = (insword & 0xF800)>>11;
	dec->operand_fmtstr = PPC_FMTSTR_GPR_C_GPR;
	return 0;
}

/* slbmfee GPR,GPR,NUM */
int slbmfee_GPR_GPR_NUM(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_SLBMFEE;
	/* 011111AAAAA00001BBBBB11100100110 */
	dec->operand_n = 3;
	dec->operand_types[0] = PPC_OPER_TYPE_GPR;
	dec->operand_values[0] = (insword & 0x3E00000)>>21;
	dec->operand_types[1] = PPC_OPER_TYPE_GPR;
	dec->operand_values[1] = (insword & 0xF800)>>11;
	dec->operand_types[2] = PPC_OPER_TYPE_NUM;
	dec->operand_fmtstr = PPC_FMTSTR_GPR_C_GPR_C_NUM;
	return 0;
}

/* stwcix GPR,GPR,GPR */
int stwcix_GPR_GPR_GPR(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_STWCIX;
	/* 011111AAAAABBBBBCCCCC11100101010 */
	dec->operand_n = 3;
	dec->operand_types[0] = PPC_OPER_TYPE_GPR;
	dec->operand_values[0] = (insword & 0x3E00000)>>21;
	dec->operand_types[1] = PPC_OPER_TYPE_GPR;
	dec->operand_values[1] = (insword & 0x1F0000)>>16;
	dec->operand_types[2] = PPC_OPER_TYPE_GPR;
	dec->operand_values[2] = (insword & 0xF800)>>11;
	dec->operand_fmtstr = PPC_FMTSTR_GPR_C_GPR_C_GPR;
	return 0;
}

/* sthbrx GPR,GPR,GPR */
int sthbrx_GPR_GPR_GPR(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_STHBRX;
	/* 011111AAAAABBBBBCCCCC11100101100 */
	dec->operand_n = 3;
	dec->operand_types[0] = PPC_OPER_TYPE_GPR;
	dec->operand_values[0] = (insword & 0x3E00000)>>21;
	dec->operand_types[1] = PPC_OPER_TYPE_GPR;
	dec->operand_values[1] = (insword & 0x1F0000)>>16;
	dec->operand_types[2] = PPC_OPER_TYPE_GPR;
	dec->operand_values[2] = (insword & 0xF800)>>11;
	dec->operand_fmtstr = PPC_FMTSTR_GPR_C_GPR_C_GPR;
	return 0;
}

/* stfdpx FREG,GPR,GPR */
int stfdpx_FREG_GPR_GPR(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_STFDPX;
	/* 011111AAAA0BBBBBCCCCC11100101110 */
	dec->operand_n = 3;
	dec->operand_types[0] = PPC_OPER_TYPE_FREG;
	dec->operand_values[0] = (insword & 0x3C00000)>>22;
	dec->operand_types[1] = PPC_OPER_TYPE_GPR;
	dec->operand_values[1] = (insword & 0x1F0000)>>16;
	dec->operand_types[2] = PPC_OPER_TYPE_GPR;
	dec->operand_values[2] = (insword & 0xF800)>>11;
	dec->operand_fmtstr = PPC_FMTSTR_FREG_C_GPR_C_GPR;
	return 0;
}

/* stvfrxl VREG,GPR,GPR */
int stvfrxl_VREG_GPR_GPR(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_STVFRXL;
	/* 011111AAAAABBBBBCCCCC11101001010 */
	dec->operand_n = 3;
	dec->operand_types[0] = PPC_OPER_TYPE_VREG;
	dec->operand_values[0] = (insword & 0x3E00000)>>21;
	dec->operand_types[1] = PPC_OPER_TYPE_GPR;
	dec->operand_values[1] = (insword & 0x1F0000)>>16;
	dec->operand_types[2] = PPC_OPER_TYPE_GPR;
	dec->operand_values[2] = (insword & 0xF800)>>11;
	dec->operand_fmtstr = PPC_FMTSTR_VREG_C_GPR_C_GPR;
	return 0;
}

/* wclr NUM,GPR,GPR */
int wclr_NUM_GPR_GPR(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_WCLR;
	/* 011111xxxAABBBBBCCCCC11101001100 */
	dec->operand_n = 3;
	dec->operand_types[0] = PPC_OPER_TYPE_NUM;
	dec->operand_values[0] = (insword & 0x600000)>>21;
	dec->operand_types[1] = PPC_OPER_TYPE_GPR;
	dec->operand_values[1] = (insword & 0x1F0000)>>16;
	dec->operand_types[2] = PPC_OPER_TYPE_GPR;
	dec->operand_values[2] = (insword & 0xF800)>>11;
	dec->operand_fmtstr = PPC_FMTSTR_NUM_C_GPR_C_GPR;
	return 0;
}

/* stvrxl VREG,GPR,GPR */
int stvrxl_VREG_GPR_GPR(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_STVRXL;
	/* 011111AAAAABBBBBCCCCC11101001110 */
	dec->operand_n = 3;
	dec->operand_types[0] = PPC_OPER_TYPE_VREG;
	dec->operand_values[0] = (insword & 0x3E00000)>>21;
	dec->operand_types[1] = PPC_OPER_TYPE_GPR;
	dec->operand_values[1] = (insword & 0x1F0000)>>16;
	dec->operand_types[2] = PPC_OPER_TYPE_GPR;
	dec->operand_values[2] = (insword & 0xF800)>>11;
	dec->operand_fmtstr = PPC_FMTSTR_VREG_C_GPR_C_GPR;
	return 0;
}

/* stxvh8x VSREG,GPR,GPR */
int stxvh8x_VSREG_GPR_GPR(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_STXVH8X;
	/* 011111AAAAABBBBBCCCCC1110101100A */
	dec->operand_n = 3;
	dec->operand_types[0] = PPC_OPER_TYPE_VSREG;
	dec->operand_values[0] = ((insword & 0x3E00000)>>20)|((insword & 0x1)>>0);
	dec->operand_types[1] = PPC_OPER_TYPE_GPR;
	dec->operand_values[1] = (insword & 0x1F0000)>>16;
	dec->operand_types[2] = PPC_OPER_TYPE_GPR;
	dec->operand_values[2] = (insword & 0xF800)>>11;
	dec->operand_fmtstr = PPC_FMTSTR_VSREG_C_GPR_C_GPR;
	return 0;
}

/* stxsihx VSREG,GPR,GPR */
int stxsihx_VSREG_GPR_GPR(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_STXSIHX;
	/* 011111AAAAABxBBBCCCCC1110101101A */
	dec->operand_n = 3;
	dec->operand_types[0] = PPC_OPER_TYPE_VSREG;
	dec->operand_values[0] = ((insword & 0x3E00000)>>20)|((insword & 0x1)>>0);
	dec->operand_types[1] = PPC_OPER_TYPE_GPR;
	dec->operand_values[1] = ((insword & 0x100000)>>17)|((insword & 0x70000)>>16);
	dec->operand_types[2] = PPC_OPER_TYPE_GPR;
	dec->operand_values[2] = (insword & 0xF800)>>11;
	dec->operand_fmtstr = PPC_FMTSTR_VSREG_C_GPR_C_GPR;
	return 0;
}

/* sthcix GPR,GPR,GPR */
int sthcix_GPR_GPR_GPR(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_STHCIX;
	/* 011111AAAAABBBBBCCCCC11101101010 */
	dec->operand_n = 3;
	dec->operand_types[0] = PPC_OPER_TYPE_GPR;
	dec->operand_values[0] = (insword & 0x3E00000)>>21;
	dec->operand_types[1] = PPC_OPER_TYPE_GPR;
	dec->operand_values[1] = (insword & 0x1F0000)>>16;
	dec->operand_types[2] = PPC_OPER_TYPE_GPR;
	dec->operand_values[2] = (insword & 0xF800)>>11;
	dec->operand_fmtstr = PPC_FMTSTR_GPR_C_GPR_C_GPR;
	return 0;
}

/* stvflxl VREG,GPR,GPR */
int stvflxl_VREG_GPR_GPR(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_STVFLXL;
	/* 011111AAAAABBBBBCCCCC11110001010 */
	dec->operand_n = 3;
	dec->operand_types[0] = PPC_OPER_TYPE_VREG;
	dec->operand_values[0] = (insword & 0x3E00000)>>21;
	dec->operand_types[1] = PPC_OPER_TYPE_GPR;
	dec->operand_values[1] = (insword & 0x1F0000)>>16;
	dec->operand_types[2] = PPC_OPER_TYPE_GPR;
	dec->operand_values[2] = (insword & 0xF800)>>11;
	dec->operand_fmtstr = PPC_FMTSTR_VREG_C_GPR_C_GPR;
	return 0;
}

/* stxvd2x VSREG,GPR,GPR */
int stxvd2x_VSREG_GPR_GPR(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_STXVD2X;
	/* 011111AAAAABBBBBCCCCC1111001100A */
	dec->operand_n = 3;
	dec->operand_types[0] = PPC_OPER_TYPE_VSREG;
	dec->operand_values[0] = ((insword & 0x3E00000)>>20)|((insword & 0x1)>>0);
	dec->operand_types[1] = PPC_OPER_TYPE_GPR;
	dec->operand_values[1] = (insword & 0x1F0000)>>16;
	dec->operand_types[2] = PPC_OPER_TYPE_GPR;
	dec->operand_values[2] = (insword & 0xF800)>>11;
	dec->operand_fmtstr = PPC_FMTSTR_VSREG_C_GPR_C_GPR;
	return 0;
}

/* tlbwehi GPR,GPR */
int tlbwehi_GPR_GPR(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_TLBWEHI;
	/* 011111AAAAABBBBB0000011110100100 */
	dec->operand_n = 2;
	dec->operand_types[0] = PPC_OPER_TYPE_GPR;
	dec->operand_values[0] = (insword & 0x3E00000)>>21;
	dec->operand_types[1] = PPC_OPER_TYPE_GPR;
	dec->operand_values[1] = (insword & 0x1F0000)>>16;
	dec->operand_fmtstr = PPC_FMTSTR_GPR_C_GPR;
	return 0;
}

/* stbcix GPR,GPR,GPR */
int stbcix_GPR_GPR_GPR(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_STBCIX;
	/* 011111AAAAABBBBBCCCCC11110101010 */
	dec->operand_n = 3;
	dec->operand_types[0] = PPC_OPER_TYPE_GPR;
	dec->operand_values[0] = (insword & 0x3E00000)>>21;
	dec->operand_types[1] = PPC_OPER_TYPE_GPR;
	dec->operand_values[1] = (insword & 0x1F0000)>>16;
	dec->operand_types[2] = PPC_OPER_TYPE_GPR;
	dec->operand_values[2] = (insword & 0xF800)>>11;
	dec->operand_fmtstr = PPC_FMTSTR_GPR_C_GPR_C_GPR;
	return 0;
}

/* icbi GPR,GPR */
int icbi_GPR_GPR(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_ICBI;
	/* 01111100000AAAAxBBBBB11110101100 */
	dec->operand_n = 2;
	dec->operand_types[0] = PPC_OPER_TYPE_GPR;
	dec->operand_values[0] = (insword & 0x1E0000)>>17;
	dec->operand_types[1] = PPC_OPER_TYPE_GPR;
	dec->operand_values[1] = (insword & 0xF800)>>11;
	dec->operand_fmtstr = PPC_FMTSTR_GPR_C_GPR;
	return 0;
}

/* stfiwx FREG,GPR,GPR */
int stfiwx_FREG_GPR_GPR(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_STFIWX;
	/* 011111AAAAABBBBBCCCCC11110101110 */
	dec->operand_n = 3;
	dec->operand_types[0] = PPC_OPER_TYPE_FREG;
	dec->operand_values[0] = (insword & 0x3E00000)>>21;
	dec->operand_types[1] = PPC_OPER_TYPE_GPR;
	dec->operand_values[1] = (insword & 0x1F0000)>>16;
	dec->operand_types[2] = PPC_OPER_TYPE_GPR;
	dec->operand_values[2] = (insword & 0xF800)>>11;
	dec->operand_fmtstr = PPC_FMTSTR_FREG_C_GPR_C_GPR;
	return 0;
}

/* icbiep GPR,GPR */
int icbiep_GPR_GPR(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_ICBIEP;
	/* 01111100000AAAAABBBBB11110111110 */
	dec->operand_n = 2;
	dec->operand_types[0] = PPC_OPER_TYPE_GPR;
	dec->operand_values[0] = (insword & 0x1F0000)>>16;
	dec->operand_types[1] = PPC_OPER_TYPE_GPR;
	dec->operand_values[1] = (insword & 0xF800)>>11;
	dec->operand_fmtstr = PPC_FMTSTR_GPR_C_GPR;
	return 0;
}

/* stvswxl VREG,GPR,GPR */
int stvswxl_VREG_GPR_GPR(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_STVSWXL;
	/* 011111AAAAABBBBBCCCCC11111001010 */
	dec->operand_n = 3;
	dec->operand_types[0] = PPC_OPER_TYPE_VREG;
	dec->operand_values[0] = (insword & 0x3E00000)>>21;
	dec->operand_types[1] = PPC_OPER_TYPE_GPR;
	dec->operand_values[1] = (insword & 0x1F0000)>>16;
	dec->operand_types[2] = PPC_OPER_TYPE_GPR;
	dec->operand_values[2] = (insword & 0xF800)>>11;
	dec->operand_fmtstr = PPC_FMTSTR_VREG_C_GPR_C_GPR;
	return 0;
}

/* icread GPR,GPR */
int icread_GPR_GPR(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_ICREAD;
	/* 01111100000AAAAABBBBB11111001100 */
	dec->operand_n = 2;
	dec->operand_types[0] = PPC_OPER_TYPE_GPR;
	dec->operand_values[0] = (insword & 0x1F0000)>>16;
	dec->operand_types[1] = PPC_OPER_TYPE_GPR;
	dec->operand_values[1] = (insword & 0xF800)>>11;
	dec->operand_fmtstr = PPC_FMTSTR_GPR_C_GPR;
	return 0;
}

/* stxvb16x VSREG,GPR,GPR */
int stxvb16x_VSREG_GPR_GPR(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_STXVB16X;
	/* 011111AAAAABBBBBCCCCC1111101100A */
	dec->operand_n = 3;
	dec->operand_types[0] = PPC_OPER_TYPE_VSREG;
	dec->operand_values[0] = ((insword & 0x3E00000)>>20)|((insword & 0x1)>>0);
	dec->operand_types[1] = PPC_OPER_TYPE_GPR;
	dec->operand_values[1] = (insword & 0x1F0000)>>16;
	dec->operand_types[2] = PPC_OPER_TYPE_GPR;
	dec->operand_values[2] = (insword & 0xF800)>>11;
	dec->operand_fmtstr = PPC_FMTSTR_VSREG_C_GPR_C_GPR;
	return 0;
}

/* stdcix GPR,GPR,GPR */
int stdcix_GPR_GPR_GPR(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_STDCIX;
	/* 011111AAAAABBxBBCCCCC11111101010 */
	dec->operand_n = 3;
	dec->operand_types[0] = PPC_OPER_TYPE_GPR;
	dec->operand_values[0] = (insword & 0x3E00000)>>21;
	dec->operand_types[1] = PPC_OPER_TYPE_GPR;
	dec->operand_values[1] = ((insword & 0x180000)>>17)|((insword & 0x30000)>>16);
	dec->operand_types[2] = PPC_OPER_TYPE_GPR;
	dec->operand_values[2] = (insword & 0xF800)>>11;
	dec->operand_fmtstr = PPC_FMTSTR_GPR_C_GPR_C_GPR;
	return 0;
}

/* dcbz GPR,GPR */
int dcbz_GPR_GPR(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_DCBZ;
	/* 01111100000AAAAABBBBB11111101100 */
	dec->operand_n = 2;
	dec->operand_types[0] = PPC_OPER_TYPE_GPR;
	dec->operand_values[0] = (insword & 0x1F0000)>>16;
	dec->operand_types[1] = PPC_OPER_TYPE_GPR;
	dec->operand_values[1] = (insword & 0xF800)>>11;
	dec->operand_fmtstr = PPC_FMTSTR_GPR_C_GPR;
	return 0;
}

/* dcbzep GPR,GPR */
int dcbzep_GPR_GPR(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_DCBZEP;
	/* 01111100000AAAAABBBBB11111111110 */
	dec->operand_n = 2;
	dec->operand_types[0] = PPC_OPER_TYPE_GPR;
	dec->operand_values[0] = (insword & 0x1F0000)>>16;
	dec->operand_types[1] = PPC_OPER_TYPE_GPR;
	dec->operand_values[1] = (insword & 0xF800)>>11;
	dec->operand_fmtstr = PPC_FMTSTR_GPR_C_GPR;
	return 0;
}

/* lqarx GPR,GPR,GPR */
int lqarx_GPR_GPR_GPR(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_LQARX;
	/* 011111AAAA0BxBBBCCCCC01000101000 */
	dec->operand_n = 3;
	dec->operand_types[0] = PPC_OPER_TYPE_GPR;
	dec->operand_values[0] = (insword & 0x3C00000)>>22;
	dec->operand_types[1] = PPC_OPER_TYPE_GPR;
	dec->operand_values[1] = ((insword & 0x100000)>>17)|((insword & 0x70000)>>16);
	dec->operand_types[2] = PPC_OPER_TYPE_GPR;
	dec->operand_values[2] = (insword & 0xF800)>>11;
	dec->operand_fmtstr = PPC_FMTSTR_GPR_C_GPR_C_GPR;
	return 0;
}

/* lqarx GPR,GPR,GPR,NUM */
int lqarx_GPR_GPR_GPR_NUM(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_LQARX;
	/* 011111AAAA0BxBBBCCCCC01000101001 */
	dec->operand_n = 4;
	dec->operand_types[0] = PPC_OPER_TYPE_GPR;
	dec->operand_values[0] = (insword & 0x3C00000)>>22;
	dec->operand_types[1] = PPC_OPER_TYPE_GPR;
	dec->operand_values[1] = ((insword & 0x100000)>>17)|((insword & 0x70000)>>16);
	dec->operand_types[2] = PPC_OPER_TYPE_GPR;
	dec->operand_values[2] = (insword & 0xF800)>>11;
	dec->operand_types[3] = PPC_OPER_TYPE_NUM;
	dec->operand_fmtstr = PPC_FMTSTR_GPR_C_GPR_C_GPR_C_NUM;
	return 0;
}

/* lswx GPR,GPR,GPR */
int lswx_GPR_GPR_GPR(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_LSWX;
	/* 011111AAAAABBBBBCCCCC10000101010 */
	dec->operand_n = 3;
	dec->operand_types[0] = PPC_OPER_TYPE_GPR;
	dec->operand_values[0] = (insword & 0x3E00000)>>21;
	dec->operand_types[1] = PPC_OPER_TYPE_GPR;
	dec->operand_values[1] = (insword & 0x1F0000)>>16;
	dec->operand_types[2] = PPC_OPER_TYPE_GPR;
	dec->operand_values[2] = (insword & 0xF800)>>11;
	dec->operand_fmtstr = PPC_FMTSTR_GPR_C_GPR_C_GPR;
	return 0;
}

/* tlbwelo GPR,GPR */
int tlbwelo_GPR_GPR(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_TLBWELO;
	/* 011111AAAAABBBBB0000111110100100 */
	dec->operand_n = 2;
	dec->operand_types[0] = PPC_OPER_TYPE_GPR;
	dec->operand_values[0] = (insword & 0x3E00000)>>21;
	dec->operand_types[1] = PPC_OPER_TYPE_GPR;
	dec->operand_values[1] = (insword & 0x1F0000)>>16;
	dec->operand_fmtstr = PPC_FMTSTR_GPR_C_GPR;
	return 0;
}

/* tlbwe GPR,GPR,NUM */
int tlbwe_GPR_GPR_NUM(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_TLBWE;
	/* 011111AAAAABBBBBCCCCC11110100100 */
	dec->operand_n = 3;
	dec->operand_types[0] = PPC_OPER_TYPE_GPR;
	dec->operand_values[0] = (insword & 0x3E00000)>>21;
	dec->operand_types[1] = PPC_OPER_TYPE_GPR;
	dec->operand_values[1] = (insword & 0x1F0000)>>16;
	dec->operand_types[2] = PPC_OPER_TYPE_NUM;
	dec->operand_values[2] = (insword & 0xF800)>>11;
	dec->operand_fmtstr = PPC_FMTSTR_GPR_C_GPR_C_NUM;
	return 0;
}

/* mfbr1 GPR */
int mfbr1_GPR(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_MFBR1;
	/* 011111AAAAA000010010001010000110 */
	dec->operand_n = 1;
	dec->operand_types[0] = PPC_OPER_TYPE_GPR;
	dec->operand_values[0] = (insword & 0x3E00000)>>21;
	dec->operand_fmtstr = PPC_FMTSTR_GPR;
	return 0;
}

/* mtbr1 GPR */
int mtbr1_GPR(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_MTBR1;
	/* 011111AAAAA000010010001110000110 */
	dec->operand_n = 1;
	dec->operand_types[0] = PPC_OPER_TYPE_GPR;
	dec->operand_values[0] = (insword & 0x3E00000)>>21;
	dec->operand_fmtstr = PPC_FMTSTR_GPR;
	return 0;
}

/* mfdmact0 GPR */
int mfdmact0_GPR(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_MFDMACT0;
	/* 011111AAAAA000010011001010000110 */
	dec->operand_n = 1;
	dec->operand_types[0] = PPC_OPER_TYPE_GPR;
	dec->operand_values[0] = (insword & 0x3E00000)>>21;
	dec->operand_fmtstr = PPC_FMTSTR_GPR;
	return 0;
}

/* mtdmact0 GPR */
int mtdmact0_GPR(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_MTDMACT0;
	/* 011111AAAAA000010011001110000110 */
	dec->operand_n = 1;
	dec->operand_types[0] = PPC_OPER_TYPE_GPR;
	dec->operand_values[0] = (insword & 0x3E00000)>>21;
	dec->operand_fmtstr = PPC_FMTSTR_GPR;
	return 0;
}

/* sync NUM,NUM */
int sync_NUM_NUM(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_SYNC;
	/* 0111110000x0BBxB0000010010101100 */
	dec->operand_n = 2;
	dec->operand_types[0] = PPC_OPER_TYPE_NUM;
	dec->operand_types[1] = PPC_OPER_TYPE_NUM;
	dec->operand_values[1] = ((insword & 0xC0000)>>17)|((insword & 0x10000)>>16);
	dec->operand_fmtstr = PPC_FMTSTR_NUM_C_NUM;
	return 0;
}

/* mfexier GPR */
int mfexier_GPR(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_MFEXIER;
	/* 011111AAAAA000100001001010000110 */
	dec->operand_n = 1;
	dec->operand_types[0] = PPC_OPER_TYPE_GPR;
	dec->operand_values[0] = (insword & 0x3E00000)>>21;
	dec->operand_fmtstr = PPC_FMTSTR_GPR;
	return 0;
}

/* mtexier GPR */
int mtexier_GPR(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_MTEXIER;
	/* 011111AAAAA000100001001110000110 */
	dec->operand_n = 1;
	dec->operand_types[0] = PPC_OPER_TYPE_GPR;
	dec->operand_values[0] = (insword & 0x3E00000)>>21;
	dec->operand_fmtstr = PPC_FMTSTR_GPR;
	return 0;
}

/* mfbr2 GPR */
int mfbr2_GPR(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_MFBR2;
	/* 011111AAAAA000100010001010000110 */
	dec->operand_n = 1;
	dec->operand_types[0] = PPC_OPER_TYPE_GPR;
	dec->operand_values[0] = (insword & 0x3E00000)>>21;
	dec->operand_fmtstr = PPC_FMTSTR_GPR;
	return 0;
}

/* mtbr2 GPR */
int mtbr2_GPR(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_MTBR2;
	/* 011111AAAAA000100010001110000110 */
	dec->operand_n = 1;
	dec->operand_types[0] = PPC_OPER_TYPE_GPR;
	dec->operand_values[0] = (insword & 0x3E00000)>>21;
	dec->operand_fmtstr = PPC_FMTSTR_GPR;
	return 0;
}

/* mfdmada0 GPR */
int mfdmada0_GPR(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_MFDMADA0;
	/* 011111AAAAA000100011001010000110 */
	dec->operand_n = 1;
	dec->operand_types[0] = PPC_OPER_TYPE_GPR;
	dec->operand_values[0] = (insword & 0x3E00000)>>21;
	dec->operand_fmtstr = PPC_FMTSTR_GPR;
	return 0;
}

/* mtdmada0 GPR */
int mtdmada0_GPR(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_MTDMADA0;
	/* 011111AAAAA000100011001110000110 */
	dec->operand_n = 1;
	dec->operand_types[0] = PPC_OPER_TYPE_GPR;
	dec->operand_values[0] = (insword & 0x3E00000)>>21;
	dec->operand_fmtstr = PPC_FMTSTR_GPR;
	return 0;
}

/* mfppr32 GPR */
int mfppr32_GPR(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_MFPPR32;
	/* 011111AAAAA000101110001010100110 */
	dec->operand_n = 1;
	dec->operand_types[0] = PPC_OPER_TYPE_GPR;
	dec->operand_values[0] = (insword & 0x3E00000)>>21;
	dec->operand_fmtstr = PPC_FMTSTR_GPR;
	return 0;
}

/* mtppr32 GPR */
int mtppr32_GPR(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_MTPPR32;
	/* 011111AAAAA000101110001110100110 */
	dec->operand_n = 1;
	dec->operand_types[0] = PPC_OPER_TYPE_GPR;
	dec->operand_values[0] = (insword & 0x3E00000)>>21;
	dec->operand_fmtstr = PPC_FMTSTR_GPR;
	return 0;
}

/* mfbr3 GPR */
int mfbr3_GPR(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_MFBR3;
	/* 011111AAAAA000110010001010000110 */
	dec->operand_n = 1;
	dec->operand_types[0] = PPC_OPER_TYPE_GPR;
	dec->operand_values[0] = (insword & 0x3E00000)>>21;
	dec->operand_fmtstr = PPC_FMTSTR_GPR;
	return 0;
}

/* mtbr3 GPR */
int mtbr3_GPR(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_MTBR3;
	/* 011111AAAAA000110010001110000110 */
	dec->operand_n = 1;
	dec->operand_types[0] = PPC_OPER_TYPE_GPR;
	dec->operand_values[0] = (insword & 0x3E00000)>>21;
	dec->operand_fmtstr = PPC_FMTSTR_GPR;
	return 0;
}

/* mfdmasa0 GPR */
int mfdmasa0_GPR(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_MFDMASA0;
	/* 011111AAAAA000110011001010000110 */
	dec->operand_n = 1;
	dec->operand_types[0] = PPC_OPER_TYPE_GPR;
	dec->operand_values[0] = (insword & 0x3E00000)>>21;
	dec->operand_fmtstr = PPC_FMTSTR_GPR;
	return 0;
}

/* mtdmasa0 GPR */
int mtdmasa0_GPR(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_MTDMASA0;
	/* 011111AAAAA000110011001110000110 */
	dec->operand_n = 1;
	dec->operand_types[0] = PPC_OPER_TYPE_GPR;
	dec->operand_values[0] = (insword & 0x3E00000)>>21;
	dec->operand_fmtstr = PPC_FMTSTR_GPR;
	return 0;
}

/* mfrtcu GPR */
int mfrtcu_GPR(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_MFRTCU;
	/* 011111AAAAA001000000001010100110 */
	dec->operand_n = 1;
	dec->operand_types[0] = PPC_OPER_TYPE_GPR;
	dec->operand_values[0] = (insword & 0x3E00000)>>21;
	dec->operand_fmtstr = PPC_FMTSTR_GPR;
	return 0;
}

/* mfbr4 GPR */
int mfbr4_GPR(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_MFBR4;
	/* 011111AAAAA001000010001010000110 */
	dec->operand_n = 1;
	dec->operand_types[0] = PPC_OPER_TYPE_GPR;
	dec->operand_values[0] = (insword & 0x3E00000)>>21;
	dec->operand_fmtstr = PPC_FMTSTR_GPR;
	return 0;
}

/* mtbr4 GPR */
int mtbr4_GPR(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_MTBR4;
	/* 011111AAAAA001000010001110000110 */
	dec->operand_n = 1;
	dec->operand_types[0] = PPC_OPER_TYPE_GPR;
	dec->operand_values[0] = (insword & 0x3E00000)>>21;
	dec->operand_fmtstr = PPC_FMTSTR_GPR;
	return 0;
}

/* mfdmacc0 GPR */
int mfdmacc0_GPR(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_MFDMACC0;
	/* 011111AAAAA001000011001010000110 */
	dec->operand_n = 1;
	dec->operand_types[0] = PPC_OPER_TYPE_GPR;
	dec->operand_values[0] = (insword & 0x3E00000)>>21;
	dec->operand_fmtstr = PPC_FMTSTR_GPR;
	return 0;
}

/* mtdmacc0 GPR */
int mtdmacc0_GPR(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_MTDMACC0;
	/* 011111AAAAA001000011001110000110 */
	dec->operand_n = 1;
	dec->operand_types[0] = PPC_OPER_TYPE_GPR;
	dec->operand_values[0] = (insword & 0x3E00000)>>21;
	dec->operand_fmtstr = PPC_FMTSTR_GPR;
	return 0;
}

/* mfrtcl GPR */
int mfrtcl_GPR(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_MFRTCL;
	/* 011111AAAAA001010000001010100110 */
	dec->operand_n = 1;
	dec->operand_types[0] = PPC_OPER_TYPE_GPR;
	dec->operand_values[0] = (insword & 0x3E00000)>>21;
	dec->operand_fmtstr = PPC_FMTSTR_GPR;
	return 0;
}

/* mfbr5 GPR */
int mfbr5_GPR(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_MFBR5;
	/* 011111AAAAA001010010001010000110 */
	dec->operand_n = 1;
	dec->operand_types[0] = PPC_OPER_TYPE_GPR;
	dec->operand_values[0] = (insword & 0x3E00000)>>21;
	dec->operand_fmtstr = PPC_FMTSTR_GPR;
	return 0;
}

/* mtbr5 GPR */
int mtbr5_GPR(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_MTBR5;
	/* 011111AAAAA001010010001110000110 */
	dec->operand_n = 1;
	dec->operand_types[0] = PPC_OPER_TYPE_GPR;
	dec->operand_values[0] = (insword & 0x3E00000)>>21;
	dec->operand_fmtstr = PPC_FMTSTR_GPR;
	return 0;
}

/* mfbr6 GPR */
int mfbr6_GPR(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_MFBR6;
	/* 011111AAAAA001100010001010000110 */
	dec->operand_n = 1;
	dec->operand_types[0] = PPC_OPER_TYPE_GPR;
	dec->operand_values[0] = (insword & 0x3E00000)>>21;
	dec->operand_fmtstr = PPC_FMTSTR_GPR;
	return 0;
}

/* mtbr6 GPR */
int mtbr6_GPR(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_MTBR6;
	/* 011111AAAAA001100010001110000110 */
	dec->operand_n = 1;
	dec->operand_types[0] = PPC_OPER_TYPE_GPR;
	dec->operand_values[0] = (insword & 0x3E00000)>>21;
	dec->operand_fmtstr = PPC_FMTSTR_GPR;
	return 0;
}

/* mfbr7 GPR */
int mfbr7_GPR(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_MFBR7;
	/* 011111AAAAA001110010001010000110 */
	dec->operand_n = 1;
	dec->operand_types[0] = PPC_OPER_TYPE_GPR;
	dec->operand_values[0] = (insword & 0x3E00000)>>21;
	dec->operand_fmtstr = PPC_FMTSTR_GPR;
	return 0;
}

/* mtbr7 GPR */
int mtbr7_GPR(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_MTBR7;
	/* 011111AAAAA001110010001110000110 */
	dec->operand_n = 1;
	dec->operand_types[0] = PPC_OPER_TYPE_GPR;
	dec->operand_values[0] = (insword & 0x3E00000)>>21;
	dec->operand_fmtstr = PPC_FMTSTR_GPR;
	return 0;
}

/* mflr GPR */
int mflr_GPR(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_MFLR;
	/* 011111AAAAA010000000001010100110 */
	dec->operand_n = 1;
	dec->operand_types[0] = PPC_OPER_TYPE_GPR;
	dec->operand_values[0] = (insword & 0x3E00000)>>21;
	dec->operand_fmtstr = PPC_FMTSTR_GPR;
	return 0;
}

/* mtlr GPR */
int mtlr_GPR(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_MTLR;
	/* 011111AAAAA010000000001110100110 */
	dec->operand_n = 1;
	dec->operand_types[0] = PPC_OPER_TYPE_GPR;
	dec->operand_values[0] = (insword & 0x3E00000)>>21;
	dec->operand_fmtstr = PPC_FMTSTR_GPR;
	return 0;
}

/* mfctrl GPR */
int mfctrl_GPR(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_MFCTRL;
	/* 011111AAAAA010000010001010100110 */
	dec->operand_n = 1;
	dec->operand_types[0] = PPC_OPER_TYPE_GPR;
	dec->operand_values[0] = (insword & 0x3E00000)>>21;
	dec->operand_fmtstr = PPC_FMTSTR_GPR;
	return 0;
}

/* mfdmacr1 GPR */
int mfdmacr1_GPR(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_MFDMACR1;
	/* 011111AAAAA010000011001010000110 */
	dec->operand_n = 1;
	dec->operand_types[0] = PPC_OPER_TYPE_GPR;
	dec->operand_values[0] = (insword & 0x3E00000)>>21;
	dec->operand_fmtstr = PPC_FMTSTR_GPR;
	return 0;
}

/* mtdmacr1 GPR */
int mtdmacr1_GPR(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_MTDMACR1;
	/* 011111AAAAA010000011001110000110 */
	dec->operand_n = 1;
	dec->operand_types[0] = PPC_OPER_TYPE_GPR;
	dec->operand_values[0] = (insword & 0x3E00000)>>21;
	dec->operand_fmtstr = PPC_FMTSTR_GPR;
	return 0;
}

/* mfctr GPR */
int mfctr_GPR(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_MFCTR;
	/* 011111AAAAA010010000001010100110 */
	dec->operand_n = 1;
	dec->operand_types[0] = PPC_OPER_TYPE_GPR;
	dec->operand_values[0] = (insword & 0x3E00000)>>21;
	dec->operand_fmtstr = PPC_FMTSTR_GPR;
	return 0;
}

/* mtctr GPR */
int mtctr_GPR(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_MTCTR;
	/* 011111AAAAA010010000001110100110 */
	dec->operand_n = 1;
	dec->operand_types[0] = PPC_OPER_TYPE_GPR;
	dec->operand_values[0] = (insword & 0x3E00000)>>21;
	dec->operand_fmtstr = PPC_FMTSTR_GPR;
	return 0;
}

/* mfdmact1 GPR */
int mfdmact1_GPR(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_MFDMACT1;
	/* 011111AAAAA010010011001010000110 */
	dec->operand_n = 1;
	dec->operand_types[0] = PPC_OPER_TYPE_GPR;
	dec->operand_values[0] = (insword & 0x3E00000)>>21;
	dec->operand_fmtstr = PPC_FMTSTR_GPR;
	return 0;
}

/* mtdmact1 GPR */
int mtdmact1_GPR(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_MTDMACT1;
	/* 011111AAAAA010010011001110000110 */
	dec->operand_n = 1;
	dec->operand_types[0] = PPC_OPER_TYPE_GPR;
	dec->operand_values[0] = (insword & 0x3E00000)>>21;
	dec->operand_fmtstr = PPC_FMTSTR_GPR;
	return 0;
}

/* mfdmada1 GPR */
int mfdmada1_GPR(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_MFDMADA1;
	/* 011111AAAAA010100011001010000110 */
	dec->operand_n = 1;
	dec->operand_types[0] = PPC_OPER_TYPE_GPR;
	dec->operand_values[0] = (insword & 0x3E00000)>>21;
	dec->operand_fmtstr = PPC_FMTSTR_GPR;
	return 0;
}

/* mtdmada1 GPR */
int mtdmada1_GPR(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_MTDMADA1;
	/* 011111AAAAA010100011001110000110 */
	dec->operand_n = 1;
	dec->operand_types[0] = PPC_OPER_TYPE_GPR;
	dec->operand_values[0] = (insword & 0x3E00000)>>21;
	dec->operand_fmtstr = PPC_FMTSTR_GPR;
	return 0;
}

/* mfdmasa1 GPR */
int mfdmasa1_GPR(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_MFDMASA1;
	/* 011111AAAAA010110011001010000110 */
	dec->operand_n = 1;
	dec->operand_types[0] = PPC_OPER_TYPE_GPR;
	dec->operand_values[0] = (insword & 0x3E00000)>>21;
	dec->operand_fmtstr = PPC_FMTSTR_GPR;
	return 0;
}

/* mtdmasa1 GPR */
int mtdmasa1_GPR(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_MTDMASA1;
	/* 011111AAAAA010110011001110000110 */
	dec->operand_n = 1;
	dec->operand_types[0] = PPC_OPER_TYPE_GPR;
	dec->operand_values[0] = (insword & 0x3E00000)>>21;
	dec->operand_fmtstr = PPC_FMTSTR_GPR;
	return 0;
}

/* mfdmacc1 GPR */
int mfdmacc1_GPR(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_MFDMACC1;
	/* 011111AAAAA011000011001010000110 */
	dec->operand_n = 1;
	dec->operand_types[0] = PPC_OPER_TYPE_GPR;
	dec->operand_values[0] = (insword & 0x3E00000)>>21;
	dec->operand_fmtstr = PPC_FMTSTR_GPR;
	return 0;
}

/* mtdmacc1 GPR */
int mtdmacc1_GPR(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_MTDMACC1;
	/* 011111AAAAA011000011001110000110 */
	dec->operand_n = 1;
	dec->operand_types[0] = PPC_OPER_TYPE_GPR;
	dec->operand_values[0] = (insword & 0x3E00000)>>21;
	dec->operand_fmtstr = PPC_FMTSTR_GPR;
	return 0;
}

/* mftb GPR */
int mftb_GPR(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_MFTB;
	/* 011111AAAAA01100010000101x100110 */
	dec->operand_n = 1;
	dec->operand_types[0] = PPC_OPER_TYPE_GPR;
	dec->operand_values[0] = (insword & 0x3E00000)>>21;
	dec->operand_fmtstr = PPC_FMTSTR_GPR;
	return 0;
}

/* mftbu GPR */
int mftbu_GPR(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_MFTBU;
	/* 011111AAAAA01101010000101x100110 */
	dec->operand_n = 1;
	dec->operand_types[0] = PPC_OPER_TYPE_GPR;
	dec->operand_values[0] = (insword & 0x3E00000)>>21;
	dec->operand_fmtstr = PPC_FMTSTR_GPR;
	return 0;
}

/* mtcr GPR */
int mtcr_GPR(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_MTCR;
	/* 011111AAAAA011111111000100100000 */
	dec->operand_n = 1;
	dec->operand_types[0] = PPC_OPER_TYPE_GPR;
	dec->operand_values[0] = (insword & 0x3E00000)>>21;
	dec->operand_fmtstr = PPC_FMTSTR_GPR;
	return 0;
}

/* tlbi GPR,GPR */
int tlbi_GPR_GPR(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_TLBI;
	/* 011111000001AAAABBBBB01001100100 */
	dec->operand_n = 2;
	dec->operand_types[0] = PPC_OPER_TYPE_GPR;
	dec->operand_values[0] = (insword & 0xF0000)>>16;
	dec->operand_types[1] = PPC_OPER_TYPE_GPR;
	dec->operand_values[1] = (insword & 0xF800)>>11;
	dec->operand_fmtstr = PPC_FMTSTR_GPR_C_GPR;
	return 0;
}

/* mfocrf GPR,NUM */
int mfocrf_GPR_NUM(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_MFOCRF;
	/* 011111AAAAA1xxxxxxxx000000100110 */
	dec->operand_n = 2;
	dec->operand_types[0] = PPC_OPER_TYPE_GPR;
	dec->operand_values[0] = (insword & 0x3E00000)>>21;
	dec->operand_types[1] = PPC_OPER_TYPE_NUM;
	dec->operand_fmtstr = PPC_FMTSTR_GPR_C_NUM;
	return 0;
}

/* mtocrf NUM,GPR */
int mtocrf_NUM_GPR(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_MTOCRF;
	/* 011111BBBBB1xxxxxxxx000100100000 */
	dec->operand_n = 2;
	dec->operand_types[0] = PPC_OPER_TYPE_NUM;
	dec->operand_types[1] = PPC_OPER_TYPE_GPR;
	dec->operand_values[1] = (insword & 0x3E00000)>>21;
	dec->operand_fmtstr = PPC_FMTSTR_NUM_C_GPR;
	return 0;
}

/* mfbear GPR */
int mfbear_GPR(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_MFBEAR;
	/* 011111AAAAA100000010001010000110 */
	dec->operand_n = 1;
	dec->operand_types[0] = PPC_OPER_TYPE_GPR;
	dec->operand_values[0] = (insword & 0x3E00000)>>21;
	dec->operand_fmtstr = PPC_FMTSTR_GPR;
	return 0;
}

/* mtbear GPR */
int mtbear_GPR(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_MTBEAR;
	/* 011111AAAAA100000010001110000110 */
	dec->operand_n = 1;
	dec->operand_types[0] = PPC_OPER_TYPE_GPR;
	dec->operand_values[0] = (insword & 0x3E00000)>>21;
	dec->operand_fmtstr = PPC_FMTSTR_GPR;
	return 0;
}

/* mfdmacr2 GPR */
int mfdmacr2_GPR(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_MFDMACR2;
	/* 011111AAAAA100000011001010000110 */
	dec->operand_n = 1;
	dec->operand_types[0] = PPC_OPER_TYPE_GPR;
	dec->operand_values[0] = (insword & 0x3E00000)>>21;
	dec->operand_fmtstr = PPC_FMTSTR_GPR;
	return 0;
}

/* mtdmacr2 GPR */
int mtdmacr2_GPR(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_MTDMACR2;
	/* 011111AAAAA100000011001110000110 */
	dec->operand_n = 1;
	dec->operand_types[0] = PPC_OPER_TYPE_GPR;
	dec->operand_values[0] = (insword & 0x3E00000)>>21;
	dec->operand_fmtstr = PPC_FMTSTR_GPR;
	return 0;
}

/* mfsprg GPR,NUM */
int mfsprg_GPR_NUM(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_MFSPRG;
	/* 011111AAAAA100BB0100001010100110 */
	dec->operand_n = 2;
	dec->operand_types[0] = PPC_OPER_TYPE_GPR;
	dec->operand_values[0] = (insword & 0x3E00000)>>21;
	dec->operand_types[1] = PPC_OPER_TYPE_NUM;
	dec->operand_values[1] = (insword & 0x30000)>>16;
	dec->operand_fmtstr = PPC_FMTSTR_GPR_C_NUM;
	return 0;
}

/* mtsprg NUM,GPR */
int mtsprg_NUM_GPR(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_MTSPRG;
	/* 011111BBBBB100AA0100001110100110 */
	dec->operand_n = 2;
	dec->operand_types[0] = PPC_OPER_TYPE_NUM;
	dec->operand_values[0] = (insword & 0x30000)>>16;
	dec->operand_types[1] = PPC_OPER_TYPE_GPR;
	dec->operand_values[1] = (insword & 0x3E00000)>>21;
	dec->operand_fmtstr = PPC_FMTSTR_NUM_C_GPR;
	return 0;
}

/* mfibatu GPR,NUM */
int mfibatu_GPR_NUM(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_MFIBATU;
	/* 011111AAAAA10BB01000001010100110 */
	dec->operand_n = 2;
	dec->operand_types[0] = PPC_OPER_TYPE_GPR;
	dec->operand_values[0] = (insword & 0x3E00000)>>21;
	dec->operand_types[1] = PPC_OPER_TYPE_NUM;
	dec->operand_values[1] = (insword & 0x60000)>>17;
	dec->operand_fmtstr = PPC_FMTSTR_GPR_C_NUM;
	return 0;
}

/* mtibatu NUM,GPR */
int mtibatu_NUM_GPR(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_MTIBATU;
	/* 011111BBBBB10AA01000001110100110 */
	dec->operand_n = 2;
	dec->operand_types[0] = PPC_OPER_TYPE_NUM;
	dec->operand_values[0] = (insword & 0x60000)>>17;
	dec->operand_types[1] = PPC_OPER_TYPE_GPR;
	dec->operand_values[1] = (insword & 0x3E00000)>>21;
	dec->operand_fmtstr = PPC_FMTSTR_NUM_C_GPR;
	return 0;
}

/* mfdscr GPR */
int mfdscr_GPR(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_MFDSCR;
	/* 011111AAAAA100010000001010100110 */
	dec->operand_n = 1;
	dec->operand_types[0] = PPC_OPER_TYPE_GPR;
	dec->operand_values[0] = (insword & 0x3E00000)>>21;
	dec->operand_fmtstr = PPC_FMTSTR_GPR;
	return 0;
}

/* mtdscr GPR */
int mtdscr_GPR(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_MTDSCR;
	/* 011111AAAAA100010000001110100110 */
	dec->operand_n = 1;
	dec->operand_types[0] = PPC_OPER_TYPE_GPR;
	dec->operand_values[0] = (insword & 0x3E00000)>>21;
	dec->operand_fmtstr = PPC_FMTSTR_GPR;
	return 0;
}

/* mfbesr GPR */
int mfbesr_GPR(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_MFBESR;
	/* 011111AAAAA100010010001010000110 */
	dec->operand_n = 1;
	dec->operand_types[0] = PPC_OPER_TYPE_GPR;
	dec->operand_values[0] = (insword & 0x3E00000)>>21;
	dec->operand_fmtstr = PPC_FMTSTR_GPR;
	return 0;
}

/* mtbesr GPR */
int mtbesr_GPR(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_MTBESR;
	/* 011111AAAAA100010010001110000110 */
	dec->operand_n = 1;
	dec->operand_types[0] = PPC_OPER_TYPE_GPR;
	dec->operand_values[0] = (insword & 0x3E00000)>>21;
	dec->operand_fmtstr = PPC_FMTSTR_GPR;
	return 0;
}

/* mfdmact2 GPR */
int mfdmact2_GPR(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_MFDMACT2;
	/* 011111AAAAA100010011001010000110 */
	dec->operand_n = 1;
	dec->operand_types[0] = PPC_OPER_TYPE_GPR;
	dec->operand_values[0] = (insword & 0x3E00000)>>21;
	dec->operand_fmtstr = PPC_FMTSTR_GPR;
	return 0;
}

/* mtdmact2 GPR */
int mtdmact2_GPR(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_MTDMACT2;
	/* 011111AAAAA100010011001110000110 */
	dec->operand_n = 1;
	dec->operand_types[0] = PPC_OPER_TYPE_GPR;
	dec->operand_values[0] = (insword & 0x3E00000)>>21;
	dec->operand_fmtstr = PPC_FMTSTR_GPR;
	return 0;
}

/* mfibatl GPR,NUM */
int mfibatl_GPR_NUM(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_MFIBATL;
	/* 011111AAAAA10BB11000001010100110 */
	dec->operand_n = 2;
	dec->operand_types[0] = PPC_OPER_TYPE_GPR;
	dec->operand_values[0] = (insword & 0x3E00000)>>21;
	dec->operand_types[1] = PPC_OPER_TYPE_NUM;
	dec->operand_values[1] = (insword & 0x60000)>>17;
	dec->operand_fmtstr = PPC_FMTSTR_GPR_C_NUM;
	return 0;
}

/* mtibatl NUM,GPR */
int mtibatl_NUM_GPR(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_MTIBATL;
	/* 011111BBBBB10AA11000001110100110 */
	dec->operand_n = 2;
	dec->operand_types[0] = PPC_OPER_TYPE_NUM;
	dec->operand_values[0] = (insword & 0x60000)>>17;
	dec->operand_types[1] = PPC_OPER_TYPE_GPR;
	dec->operand_values[1] = (insword & 0x3E00000)>>21;
	dec->operand_fmtstr = PPC_FMTSTR_NUM_C_GPR;
	return 0;
}

/* mfdsisr GPR */
int mfdsisr_GPR(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_MFDSISR;
	/* 011111AAAAA100100000001010100110 */
	dec->operand_n = 1;
	dec->operand_types[0] = PPC_OPER_TYPE_GPR;
	dec->operand_values[0] = (insword & 0x3E00000)>>21;
	dec->operand_fmtstr = PPC_FMTSTR_GPR;
	return 0;
}

/* mtdsisr GPR */
int mtdsisr_GPR(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_MTDSISR;
	/* 011111AAAAA100100000001110100110 */
	dec->operand_n = 1;
	dec->operand_types[0] = PPC_OPER_TYPE_GPR;
	dec->operand_values[0] = (insword & 0x3E00000)>>21;
	dec->operand_fmtstr = PPC_FMTSTR_GPR;
	return 0;
}

/* mfdmada2 GPR */
int mfdmada2_GPR(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_MFDMADA2;
	/* 011111AAAAA100100011001010000110 */
	dec->operand_n = 1;
	dec->operand_types[0] = PPC_OPER_TYPE_GPR;
	dec->operand_values[0] = (insword & 0x3E00000)>>21;
	dec->operand_fmtstr = PPC_FMTSTR_GPR;
	return 0;
}

/* mtdmada2 GPR */
int mtdmada2_GPR(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_MTDMADA2;
	/* 011111AAAAA100100011001110000110 */
	dec->operand_n = 1;
	dec->operand_types[0] = PPC_OPER_TYPE_GPR;
	dec->operand_values[0] = (insword & 0x3E00000)>>21;
	dec->operand_fmtstr = PPC_FMTSTR_GPR;
	return 0;
}

/* mfdar GPR */
int mfdar_GPR(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_MFDAR;
	/* 011111AAAAA100110000001010100110 */
	dec->operand_n = 1;
	dec->operand_types[0] = PPC_OPER_TYPE_GPR;
	dec->operand_values[0] = (insword & 0x3E00000)>>21;
	dec->operand_fmtstr = PPC_FMTSTR_GPR;
	return 0;
}

/* mtdar GPR */
int mtdar_GPR(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_MTDAR;
	/* 011111AAAAA100110000001110100110 */
	dec->operand_n = 1;
	dec->operand_types[0] = PPC_OPER_TYPE_GPR;
	dec->operand_values[0] = (insword & 0x3E00000)>>21;
	dec->operand_fmtstr = PPC_FMTSTR_GPR;
	return 0;
}

/* mfdmasa2 GPR */
int mfdmasa2_GPR(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_MFDMASA2;
	/* 011111AAAAA100110011001010000110 */
	dec->operand_n = 1;
	dec->operand_types[0] = PPC_OPER_TYPE_GPR;
	dec->operand_values[0] = (insword & 0x3E00000)>>21;
	dec->operand_fmtstr = PPC_FMTSTR_GPR;
	return 0;
}

/* mtdmasa2 GPR */
int mtdmasa2_GPR(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_MTDMASA2;
	/* 011111AAAAA100110011001110000110 */
	dec->operand_n = 1;
	dec->operand_types[0] = PPC_OPER_TYPE_GPR;
	dec->operand_values[0] = (insword & 0x3E00000)>>21;
	dec->operand_fmtstr = PPC_FMTSTR_GPR;
	return 0;
}

/* mtrtcu GPR */
int mtrtcu_GPR(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_MTRTCU;
	/* 011111AAAAA101000000001110100110 */
	dec->operand_n = 1;
	dec->operand_types[0] = PPC_OPER_TYPE_GPR;
	dec->operand_values[0] = (insword & 0x3E00000)>>21;
	dec->operand_fmtstr = PPC_FMTSTR_GPR;
	return 0;
}

/* mfdmacc2 GPR */
int mfdmacc2_GPR(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_MFDMACC2;
	/* 011111AAAAA101000011001010000110 */
	dec->operand_n = 1;
	dec->operand_types[0] = PPC_OPER_TYPE_GPR;
	dec->operand_values[0] = (insword & 0x3E00000)>>21;
	dec->operand_fmtstr = PPC_FMTSTR_GPR;
	return 0;
}

/* mtdmacc2 GPR */
int mtdmacc2_GPR(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_MTDMACC2;
	/* 011111AAAAA101000011001110000110 */
	dec->operand_n = 1;
	dec->operand_types[0] = PPC_OPER_TYPE_GPR;
	dec->operand_values[0] = (insword & 0x3E00000)>>21;
	dec->operand_fmtstr = PPC_FMTSTR_GPR;
	return 0;
}

/* mtrtcl GPR */
int mtrtcl_GPR(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_MTRTCL;
	/* 011111AAAAA101010000001110100110 */
	dec->operand_n = 1;
	dec->operand_types[0] = PPC_OPER_TYPE_GPR;
	dec->operand_values[0] = (insword & 0x3E00000)>>21;
	dec->operand_fmtstr = PPC_FMTSTR_GPR;
	return 0;
}

/* mfdec GPR */
int mfdec_GPR(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_MFDEC;
	/* 011111AAAAA101100000001010100110 */
	dec->operand_n = 1;
	dec->operand_types[0] = PPC_OPER_TYPE_GPR;
	dec->operand_values[0] = (insword & 0x3E00000)>>21;
	dec->operand_fmtstr = PPC_FMTSTR_GPR;
	return 0;
}

/* mtdec GPR */
int mtdec_GPR(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_MTDEC;
	/* 011111AAAAA101100000001110100110 */
	dec->operand_n = 1;
	dec->operand_types[0] = PPC_OPER_TYPE_GPR;
	dec->operand_values[0] = (insword & 0x3E00000)>>21;
	dec->operand_fmtstr = PPC_FMTSTR_GPR;
	return 0;
}

/* mtctrl GPR */
int mtctrl_GPR(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_MTCTRL;
	/* 011111AAAAA110000010001110100110 */
	dec->operand_n = 1;
	dec->operand_types[0] = PPC_OPER_TYPE_GPR;
	dec->operand_values[0] = (insword & 0x3E00000)>>21;
	dec->operand_fmtstr = PPC_FMTSTR_GPR;
	return 0;
}

/* mfdmacr3 GPR */
int mfdmacr3_GPR(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_MFDMACR3;
	/* 011111AAAAA110000011001010000110 */
	dec->operand_n = 1;
	dec->operand_types[0] = PPC_OPER_TYPE_GPR;
	dec->operand_values[0] = (insword & 0x3E00000)>>21;
	dec->operand_fmtstr = PPC_FMTSTR_GPR;
	return 0;
}

/* mtdmacr3 GPR */
int mtdmacr3_GPR(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_MTDMACR3;
	/* 011111AAAAA110000011001110000110 */
	dec->operand_n = 1;
	dec->operand_types[0] = PPC_OPER_TYPE_GPR;
	dec->operand_values[0] = (insword & 0x3E00000)>>21;
	dec->operand_fmtstr = PPC_FMTSTR_GPR;
	return 0;
}

/* mfasr GPR */
int mfasr_GPR(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_MFASR;
	/* 011111AAAAA110000100001010100110 */
	dec->operand_n = 1;
	dec->operand_types[0] = PPC_OPER_TYPE_GPR;
	dec->operand_values[0] = (insword & 0x3E00000)>>21;
	dec->operand_fmtstr = PPC_FMTSTR_GPR;
	return 0;
}

/* mtasr GPR */
int mtasr_GPR(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_MTASR;
	/* 011111AAAAA110000100001110100110 */
	dec->operand_n = 1;
	dec->operand_types[0] = PPC_OPER_TYPE_GPR;
	dec->operand_values[0] = (insword & 0x3E00000)>>21;
	dec->operand_fmtstr = PPC_FMTSTR_GPR;
	return 0;
}

/* mfdbatu GPR,NUM */
int mfdbatu_GPR_NUM(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_MFDBATU;
	/* 011111AAAAA11BB01000001010100110 */
	dec->operand_n = 2;
	dec->operand_types[0] = PPC_OPER_TYPE_GPR;
	dec->operand_values[0] = (insword & 0x3E00000)>>21;
	dec->operand_types[1] = PPC_OPER_TYPE_NUM;
	dec->operand_values[1] = (insword & 0x60000)>>17;
	dec->operand_fmtstr = PPC_FMTSTR_GPR_C_NUM;
	return 0;
}

/* mtdbatu NUM,GPR */
int mtdbatu_NUM_GPR(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_MTDBATU;
	/* 011111BBBBB11AA01000001110100110 */
	dec->operand_n = 2;
	dec->operand_types[0] = PPC_OPER_TYPE_NUM;
	dec->operand_values[0] = (insword & 0x60000)>>17;
	dec->operand_types[1] = PPC_OPER_TYPE_GPR;
	dec->operand_values[1] = (insword & 0x3E00000)>>21;
	dec->operand_fmtstr = PPC_FMTSTR_NUM_C_GPR;
	return 0;
}

/* mfsdr1 GPR */
int mfsdr1_GPR(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_MFSDR1;
	/* 011111AAAAA110010000001010100110 */
	dec->operand_n = 1;
	dec->operand_types[0] = PPC_OPER_TYPE_GPR;
	dec->operand_values[0] = (insword & 0x3E00000)>>21;
	dec->operand_fmtstr = PPC_FMTSTR_GPR;
	return 0;
}

/* mtsdr1 GPR */
int mtsdr1_GPR(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_MTSDR1;
	/* 011111AAAAA110010000001110100110 */
	dec->operand_n = 1;
	dec->operand_types[0] = PPC_OPER_TYPE_GPR;
	dec->operand_values[0] = (insword & 0x3E00000)>>21;
	dec->operand_fmtstr = PPC_FMTSTR_GPR;
	return 0;
}

/* mfdmact3 GPR */
int mfdmact3_GPR(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_MFDMACT3;
	/* 011111AAAAA110010011001010000110 */
	dec->operand_n = 1;
	dec->operand_types[0] = PPC_OPER_TYPE_GPR;
	dec->operand_values[0] = (insword & 0x3E00000)>>21;
	dec->operand_fmtstr = PPC_FMTSTR_GPR;
	return 0;
}

/* mtdmact3 GPR */
int mtdmact3_GPR(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_MTDMACT3;
	/* 011111AAAAA110010011001110000110 */
	dec->operand_n = 1;
	dec->operand_types[0] = PPC_OPER_TYPE_GPR;
	dec->operand_values[0] = (insword & 0x3E00000)>>21;
	dec->operand_fmtstr = PPC_FMTSTR_GPR;
	return 0;
}

/* mfdbatl GPR,NUM */
int mfdbatl_GPR_NUM(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_MFDBATL;
	/* 011111AAAAA11BB11000001010100110 */
	dec->operand_n = 2;
	dec->operand_types[0] = PPC_OPER_TYPE_GPR;
	dec->operand_values[0] = (insword & 0x3E00000)>>21;
	dec->operand_types[1] = PPC_OPER_TYPE_NUM;
	dec->operand_values[1] = (insword & 0x60000)>>17;
	dec->operand_fmtstr = PPC_FMTSTR_GPR_C_NUM;
	return 0;
}

/* mtdbatl NUM,GPR */
int mtdbatl_NUM_GPR(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_MTDBATL;
	/* 011111BBBBB11AA11000001110100110 */
	dec->operand_n = 2;
	dec->operand_types[0] = PPC_OPER_TYPE_NUM;
	dec->operand_values[0] = (insword & 0x60000)>>17;
	dec->operand_types[1] = PPC_OPER_TYPE_GPR;
	dec->operand_values[1] = (insword & 0x3E00000)>>21;
	dec->operand_fmtstr = PPC_FMTSTR_NUM_C_GPR;
	return 0;
}

/* mfsrr0 GPR */
int mfsrr0_GPR(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_MFSRR0;
	/* 011111AAAAA110100000001010100110 */
	dec->operand_n = 1;
	dec->operand_types[0] = PPC_OPER_TYPE_GPR;
	dec->operand_values[0] = (insword & 0x3E00000)>>21;
	dec->operand_fmtstr = PPC_FMTSTR_GPR;
	return 0;
}

/* mtsrr0 GPR */
int mtsrr0_GPR(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_MTSRR0;
	/* 011111AAAAA110100000001110100110 */
	dec->operand_n = 1;
	dec->operand_types[0] = PPC_OPER_TYPE_GPR;
	dec->operand_values[0] = (insword & 0x3E00000)>>21;
	dec->operand_fmtstr = PPC_FMTSTR_GPR;
	return 0;
}

/* mfdmada3 GPR */
int mfdmada3_GPR(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_MFDMADA3;
	/* 011111AAAAA110100011001010000110 */
	dec->operand_n = 1;
	dec->operand_types[0] = PPC_OPER_TYPE_GPR;
	dec->operand_values[0] = (insword & 0x3E00000)>>21;
	dec->operand_fmtstr = PPC_FMTSTR_GPR;
	return 0;
}

/* mtdmada3 GPR */
int mtdmada3_GPR(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_MTDMADA3;
	/* 011111AAAAA110100011001110000110 */
	dec->operand_n = 1;
	dec->operand_types[0] = PPC_OPER_TYPE_GPR;
	dec->operand_values[0] = (insword & 0x3E00000)>>21;
	dec->operand_fmtstr = PPC_FMTSTR_GPR;
	return 0;
}

/* mfear GPR */
int mfear_GPR(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_MFEAR;
	/* 011111AAAAA110100100001010100110 */
	dec->operand_n = 1;
	dec->operand_types[0] = PPC_OPER_TYPE_GPR;
	dec->operand_values[0] = (insword & 0x3E00000)>>21;
	dec->operand_fmtstr = PPC_FMTSTR_GPR;
	return 0;
}

/* mtear GPR */
int mtear_GPR(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_MTEAR;
	/* 011111AAAAA110100100001110100110 */
	dec->operand_n = 1;
	dec->operand_types[0] = PPC_OPER_TYPE_GPR;
	dec->operand_values[0] = (insword & 0x3E00000)>>21;
	dec->operand_fmtstr = PPC_FMTSTR_GPR;
	return 0;
}

/* mfsrr1 GPR */
int mfsrr1_GPR(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_MFSRR1;
	/* 011111AAAAA110110000001010100110 */
	dec->operand_n = 1;
	dec->operand_types[0] = PPC_OPER_TYPE_GPR;
	dec->operand_values[0] = (insword & 0x3E00000)>>21;
	dec->operand_fmtstr = PPC_FMTSTR_GPR;
	return 0;
}

/* mtsrr1 GPR */
int mtsrr1_GPR(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_MTSRR1;
	/* 011111AAAAA110110000001110100110 */
	dec->operand_n = 1;
	dec->operand_types[0] = PPC_OPER_TYPE_GPR;
	dec->operand_values[0] = (insword & 0x3E00000)>>21;
	dec->operand_fmtstr = PPC_FMTSTR_GPR;
	return 0;
}

/* mfdmasa3 GPR */
int mfdmasa3_GPR(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_MFDMASA3;
	/* 011111AAAAA110110011001010000110 */
	dec->operand_n = 1;
	dec->operand_types[0] = PPC_OPER_TYPE_GPR;
	dec->operand_values[0] = (insword & 0x3E00000)>>21;
	dec->operand_fmtstr = PPC_FMTSTR_GPR;
	return 0;
}

/* mtdmasa3 GPR */
int mtdmasa3_GPR(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_MTDMASA3;
	/* 011111AAAAA110110011001110000110 */
	dec->operand_n = 1;
	dec->operand_types[0] = PPC_OPER_TYPE_GPR;
	dec->operand_values[0] = (insword & 0x3E00000)>>21;
	dec->operand_fmtstr = PPC_FMTSTR_GPR;
	return 0;
}

/* mfcfar GPR */
int mfcfar_GPR(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_MFCFAR;
	/* 011111AAAAA111000000001010100110 */
	dec->operand_n = 1;
	dec->operand_types[0] = PPC_OPER_TYPE_GPR;
	dec->operand_values[0] = (insword & 0x3E00000)>>21;
	dec->operand_fmtstr = PPC_FMTSTR_GPR;
	return 0;
}

/* mtcfar GPR */
int mtcfar_GPR(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_MTCFAR;
	/* 011111AAAAA111000000001110100110 */
	dec->operand_n = 1;
	dec->operand_types[0] = PPC_OPER_TYPE_GPR;
	dec->operand_values[0] = (insword & 0x3E00000)>>21;
	dec->operand_fmtstr = PPC_FMTSTR_GPR;
	return 0;
}

/* mfdmacc3 GPR */
int mfdmacc3_GPR(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_MFDMACC3;
	/* 011111AAAAA111000011001010000110 */
	dec->operand_n = 1;
	dec->operand_types[0] = PPC_OPER_TYPE_GPR;
	dec->operand_values[0] = (insword & 0x3E00000)>>21;
	dec->operand_fmtstr = PPC_FMTSTR_GPR;
	return 0;
}

/* mtdmacc3 GPR */
int mtdmacc3_GPR(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_MTDMACC3;
	/* 011111AAAAA111000011001110000110 */
	dec->operand_n = 1;
	dec->operand_types[0] = PPC_OPER_TYPE_GPR;
	dec->operand_values[0] = (insword & 0x3E00000)>>21;
	dec->operand_fmtstr = PPC_FMTSTR_GPR;
	return 0;
}

/* mttbl GPR */
int mttbl_GPR(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_MTTBL;
	/* 011111AAAAA111000100001110100110 */
	dec->operand_n = 1;
	dec->operand_types[0] = PPC_OPER_TYPE_GPR;
	dec->operand_values[0] = (insword & 0x3E00000)>>21;
	dec->operand_fmtstr = PPC_FMTSTR_GPR;
	return 0;
}

/* mttbu GPR */
int mttbu_GPR(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_MTTBU;
	/* 011111AAAAA111010100001110100110 */
	dec->operand_n = 1;
	dec->operand_types[0] = PPC_OPER_TYPE_GPR;
	dec->operand_values[0] = (insword & 0x3E00000)>>21;
	dec->operand_fmtstr = PPC_FMTSTR_GPR;
	return 0;
}

/* mfpvr GPR */
int mfpvr_GPR(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_MFPVR;
	/* 011111AAAAA111110100001010100110 */
	dec->operand_n = 1;
	dec->operand_types[0] = PPC_OPER_TYPE_GPR;
	dec->operand_values[0] = (insword & 0x3E00000)>>21;
	dec->operand_fmtstr = PPC_FMTSTR_GPR;
	return 0;
}

/* cmpd GPR,GPR */
int cmpd_GPR_GPR(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_CMPD;
	/* 01111100001AAAAABBBBB00000000000 */
	dec->operand_n = 2;
	dec->operand_types[0] = PPC_OPER_TYPE_GPR;
	dec->operand_values[0] = (insword & 0x1F0000)>>16;
	dec->operand_types[1] = PPC_OPER_TYPE_GPR;
	dec->operand_values[1] = (insword & 0xF800)>>11;
	dec->operand_fmtstr = PPC_FMTSTR_GPR_C_GPR;
	return 0;
}

/* twlgt GPR,GPR */
int twlgt_GPR_GPR(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_TWLGT;
	/* 01111100001AAAAABBBBB00000001000 */
	dec->operand_n = 2;
	dec->operand_types[0] = PPC_OPER_TYPE_GPR;
	dec->operand_values[0] = (insword & 0x1F0000)>>16;
	dec->operand_types[1] = PPC_OPER_TYPE_GPR;
	dec->operand_values[1] = (insword & 0xF800)>>11;
	dec->operand_fmtstr = PPC_FMTSTR_GPR_C_GPR;
	return 0;
}

/* tlbilxpid */
int tlbilxpid(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_TLBILXPID;
	return 0;
}

/* icbt NUM,NUM,GPR */
int icbt_NUM_NUM_GPR(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_ICBT;
	/* 011111AAAAA00000CCCCC00000101100 */
	dec->operand_n = 3;
	dec->operand_types[0] = PPC_OPER_TYPE_NUM;
	dec->operand_values[0] = (insword & 0x3E00000)>>21;
	dec->operand_types[1] = PPC_OPER_TYPE_NUM;
	dec->operand_types[2] = PPC_OPER_TYPE_GPR;
	dec->operand_values[2] = (insword & 0xF800)>>11;
	dec->operand_fmtstr = PPC_FMTSTR_NUM_C_NUM_C_GPR;
	return 0;
}

/* wait NUM */
int wait_NUM(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_WAIT;
	/* 011111000AA00000000000000x111100 */
	dec->operand_n = 1;
	dec->operand_types[0] = PPC_OPER_TYPE_NUM;
	dec->operand_values[0] = (insword & 0x600000)>>21;
	dec->operand_fmtstr = PPC_FMTSTR_NUM;
	return 0;
}

/* cmpld GPR,GPR */
int cmpld_GPR_GPR(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_CMPLD;
	/* 01111100001AAAAABBBBB00001000000 */
	dec->operand_n = 2;
	dec->operand_types[0] = PPC_OPER_TYPE_GPR;
	dec->operand_values[0] = (insword & 0x1F0000)>>16;
	dec->operand_types[1] = PPC_OPER_TYPE_GPR;
	dec->operand_values[1] = (insword & 0xF800)>>11;
	dec->operand_fmtstr = PPC_FMTSTR_GPR_C_GPR;
	return 0;
}

/* waitrsv */
int waitrsv(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_WAITRSV;
	return 0;
}

/* tdlgt GPR,GPR */
int tdlgt_GPR_GPR(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_TDLGT;
	/* 01111100001AAAAABBBBB00010001000 */
	dec->operand_n = 2;
	dec->operand_types[0] = PPC_OPER_TYPE_GPR;
	dec->operand_values[0] = (insword & 0x1F0000)>>16;
	dec->operand_types[1] = PPC_OPER_TYPE_GPR;
	dec->operand_values[1] = (insword & 0xF800)>>11;
	dec->operand_fmtstr = PPC_FMTSTR_GPR_C_GPR;
	return 0;
}

/* dcbfl NUM,GPR */
int dcbfl_NUM_GPR(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_DCBFL;
	/* 0111110000100000BBBBB00010101100 */
	dec->operand_n = 2;
	dec->operand_types[0] = PPC_OPER_TYPE_NUM;
	dec->operand_types[1] = PPC_OPER_TYPE_GPR;
	dec->operand_values[1] = (insword & 0xF800)>>11;
	dec->operand_fmtstr = PPC_FMTSTR_NUM_C_GPR;
	return 0;
}

/* dcbtstls NUM,NUM,GPR */
int dcbtstls_NUM_NUM_GPR(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_DCBTSTLS;
	/* 011111AxAAA00000CCCCC00100001100 */
	dec->operand_n = 3;
	dec->operand_types[0] = PPC_OPER_TYPE_NUM;
	dec->operand_values[0] = ((insword & 0x2000000)>>22)|((insword & 0xE00000)>>21);
	dec->operand_types[1] = PPC_OPER_TYPE_NUM;
	dec->operand_types[2] = PPC_OPER_TYPE_GPR;
	dec->operand_values[2] = (insword & 0xF800)>>11;
	dec->operand_fmtstr = PPC_FMTSTR_NUM_C_NUM_C_GPR;
	return 0;
}

/* dcbtstlse NUM,NUM,GPR */
int dcbtstlse_NUM_NUM_GPR(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_DCBTSTLSE;
	/* 011111AAAAA00000CCCCC00100011100 */
	dec->operand_n = 3;
	dec->operand_types[0] = PPC_OPER_TYPE_NUM;
	dec->operand_values[0] = (insword & 0x3E00000)>>21;
	dec->operand_types[1] = PPC_OPER_TYPE_NUM;
	dec->operand_types[2] = PPC_OPER_TYPE_GPR;
	dec->operand_values[2] = (insword & 0xF800)>>11;
	dec->operand_fmtstr = PPC_FMTSTR_NUM_C_NUM_C_GPR;
	return 0;
}

/* dcbtls NUM,NUM,GPR */
int dcbtls_NUM_NUM_GPR(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_DCBTLS;
	/* 011111AAAAA00000CCCCC00101001100 */
	dec->operand_n = 3;
	dec->operand_types[0] = PPC_OPER_TYPE_NUM;
	dec->operand_values[0] = (insword & 0x3E00000)>>21;
	dec->operand_types[1] = PPC_OPER_TYPE_NUM;
	dec->operand_types[2] = PPC_OPER_TYPE_GPR;
	dec->operand_values[2] = (insword & 0xF800)>>11;
	dec->operand_fmtstr = PPC_FMTSTR_NUM_C_NUM_C_GPR;
	return 0;
}

/* dcbtlse NUM,NUM,GPR */
int dcbtlse_NUM_NUM_GPR(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_DCBTLSE;
	/* 011111xAAAA00000CCCCC00101011100 */
	dec->operand_n = 3;
	dec->operand_types[0] = PPC_OPER_TYPE_NUM;
	dec->operand_values[0] = (insword & 0x1E00000)>>21;
	dec->operand_types[1] = PPC_OPER_TYPE_NUM;
	dec->operand_types[2] = PPC_OPER_TYPE_GPR;
	dec->operand_values[2] = (insword & 0xF800)>>11;
	dec->operand_fmtstr = PPC_FMTSTR_NUM_C_NUM_C_GPR;
	return 0;
}

/* icblq. NUM,NUM,GPR */
int icblqD_NUM_NUM_GPR(uint32_t insword, struct ppc_decoded *dec)
{
	dec->properties |= PPC_PROPERTY_DOTTED;
	dec->mnemonic = PPC_MNEM_ICBLQ;
	/* 011111AAAAA00000CCCCC00110001101 */
	dec->operand_n = 3;
	dec->operand_types[0] = PPC_OPER_TYPE_NUM;
	dec->operand_values[0] = (insword & 0x3E00000)>>21;
	dec->operand_types[1] = PPC_OPER_TYPE_NUM;
	dec->operand_types[2] = PPC_OPER_TYPE_GPR;
	dec->operand_values[2] = (insword & 0xF800)>>11;
	dec->operand_fmtstr = PPC_FMTSTR_NUM_C_NUM_C_GPR;
	return 0;
}

/* icblc NUM,NUM,GPR */
int icblc_NUM_NUM_GPR(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_ICBLC;
	/* 011111AAAAA00000CCCCC00111001100 */
	dec->operand_n = 3;
	dec->operand_types[0] = PPC_OPER_TYPE_NUM;
	dec->operand_values[0] = (insword & 0x3E00000)>>21;
	dec->operand_types[1] = PPC_OPER_TYPE_NUM;
	dec->operand_types[2] = PPC_OPER_TYPE_GPR;
	dec->operand_values[2] = (insword & 0xF800)>>11;
	dec->operand_fmtstr = PPC_FMTSTR_NUM_C_NUM_C_GPR;
	return 0;
}

/* icblce NUM,GPR,GPR */
int icblce_NUM_GPR_GPR(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_ICBLCE;
	/* 011111xAAAABBBBBCCCCC00111011100 */
	dec->operand_n = 3;
	dec->operand_types[0] = PPC_OPER_TYPE_NUM;
	dec->operand_values[0] = (insword & 0x1E00000)>>21;
	dec->operand_types[1] = PPC_OPER_TYPE_GPR;
	dec->operand_values[1] = (insword & 0x1F0000)>>16;
	dec->operand_types[2] = PPC_OPER_TYPE_GPR;
	dec->operand_values[2] = (insword & 0xF800)>>11;
	dec->operand_fmtstr = PPC_FMTSTR_NUM_C_GPR_C_GPR;
	return 0;
}

/* dcbtst NUM,GPR,NUM */
int dcbtst_NUM_GPR_NUM(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_DCBTST;
	/* 011111CCCCC00000BBBBB00111101100 */
	dec->operand_n = 3;
	dec->operand_types[0] = PPC_OPER_TYPE_NUM;
	dec->operand_types[1] = PPC_OPER_TYPE_GPR;
	dec->operand_values[1] = (insword & 0xF800)>>11;
	dec->operand_types[2] = PPC_OPER_TYPE_NUM;
	dec->operand_values[2] = (insword & 0x3E00000)>>21;
	dec->operand_fmtstr = PPC_FMTSTR_NUM_C_GPR_C_NUM;
	return 0;
}

/* dcbt NUM,GPR,NUM */
int dcbt_NUM_GPR_NUM(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_DCBT;
	/* 011111CCCCC00000BBBBB01000101100 */
	dec->operand_n = 3;
	dec->operand_types[0] = PPC_OPER_TYPE_NUM;
	dec->operand_types[1] = PPC_OPER_TYPE_GPR;
	dec->operand_values[1] = (insword & 0xF800)>>11;
	dec->operand_types[2] = PPC_OPER_TYPE_NUM;
	dec->operand_values[2] = (insword & 0x3E00000)>>21;
	dec->operand_fmtstr = PPC_FMTSTR_NUM_C_GPR_C_NUM;
	return 0;
}

/* dcblc NUM,NUM,GPR */
int dcblc_NUM_NUM_GPR(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_DCBLC;
	/* 011111AAAAA00000CCCCC01100001100 */
	dec->operand_n = 3;
	dec->operand_types[0] = PPC_OPER_TYPE_NUM;
	dec->operand_values[0] = (insword & 0x3E00000)>>21;
	dec->operand_types[1] = PPC_OPER_TYPE_NUM;
	dec->operand_types[2] = PPC_OPER_TYPE_GPR;
	dec->operand_values[2] = (insword & 0xF800)>>11;
	dec->operand_fmtstr = PPC_FMTSTR_NUM_C_NUM_C_GPR;
	return 0;
}

/* dcblce NUM,GPR,GPR */
int dcblce_NUM_GPR_GPR(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_DCBLCE;
	/* 011111AAAAABBBBBCCCCC01100011100 */
	dec->operand_n = 3;
	dec->operand_types[0] = PPC_OPER_TYPE_NUM;
	dec->operand_values[0] = (insword & 0x3E00000)>>21;
	dec->operand_types[1] = PPC_OPER_TYPE_GPR;
	dec->operand_values[1] = (insword & 0x1F0000)>>16;
	dec->operand_types[2] = PPC_OPER_TYPE_GPR;
	dec->operand_values[2] = (insword & 0xF800)>>11;
	dec->operand_fmtstr = PPC_FMTSTR_NUM_C_GPR_C_GPR;
	return 0;
}

/* dcblq. NUM,NUM,GPR */
int dcblqD_NUM_NUM_GPR(uint32_t insword, struct ppc_decoded *dec)
{
	dec->properties |= PPC_PROPERTY_DOTTED;
	dec->mnemonic = PPC_MNEM_DCBLQ;
	/* 011111AAAAA00000CCCCC01101001101 */
	dec->operand_n = 3;
	dec->operand_types[0] = PPC_OPER_TYPE_NUM;
	dec->operand_values[0] = (insword & 0x3E00000)>>21;
	dec->operand_types[1] = PPC_OPER_TYPE_NUM;
	dec->operand_types[2] = PPC_OPER_TYPE_GPR;
	dec->operand_values[2] = (insword & 0xF800)>>11;
	dec->operand_fmtstr = PPC_FMTSTR_NUM_C_NUM_C_GPR;
	return 0;
}

/* dci NUM */
int dci_NUM(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_DCI;
	/* 011111AAAAA000000000001110001100 */
	dec->operand_n = 1;
	dec->operand_types[0] = PPC_OPER_TYPE_NUM;
	dec->operand_values[0] = (insword & 0x3E00000)>>21;
	dec->operand_fmtstr = PPC_FMTSTR_NUM;
	return 0;
}

/* slbia NUM */
int slbia_NUM(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_SLBIA;
	/* 01111100AAx000000000001111100100 */
	dec->operand_n = 1;
	dec->operand_types[0] = PPC_OPER_TYPE_NUM;
	dec->operand_values[0] = (insword & 0xC00000)>>22;
	dec->operand_fmtstr = PPC_FMTSTR_NUM;
	return 0;
}

/* lswx GPR,NUM,GPR */
int lswx_GPR_NUM_GPR(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_LSWX;
	/* 011111xAxAA00000xCCCC10000101010 */
	dec->operand_n = 3;
	dec->operand_types[0] = PPC_OPER_TYPE_GPR;
	dec->operand_values[0] = ((insword & 0x1000000)>>22)|((insword & 0x600000)>>21);
	dec->operand_types[1] = PPC_OPER_TYPE_NUM;
	dec->operand_types[2] = PPC_OPER_TYPE_GPR;
	dec->operand_values[2] = (insword & 0x7800)>>11;
	dec->operand_fmtstr = PPC_FMTSTR_GPR_C_NUM_C_GPR;
	return 0;
}

/* lswi GPR,NUM,NUM */
int lswi_GPR_NUM_NUM(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_LSWI;
	/* 011111AAAAA00000CCCCC10010101010 */
	dec->operand_n = 3;
	dec->operand_types[0] = PPC_OPER_TYPE_GPR;
	dec->operand_values[0] = (insword & 0x3E00000)>>21;
	dec->operand_types[1] = PPC_OPER_TYPE_NUM;
	dec->operand_types[2] = PPC_OPER_TYPE_NUM;
	dec->operand_values[2] = (insword & 0xF800)>>11;
	dec->operand_fmtstr = PPC_FMTSTR_GPR_C_NUM_C_NUM;
	return 0;
}

/* lwsync */
int lwsync(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_LWSYNC;
	return 0;
}

/* tbegin. NUM */
int tbeginD_NUM(uint32_t insword, struct ppc_decoded *dec)
{
	dec->properties |= PPC_PROPERTY_DOTTED;
	dec->mnemonic = PPC_MNEM_TBEGIN;
	/* 01111100001000000000010100011101 */
	dec->operand_n = 1;
	dec->operand_types[0] = PPC_OPER_TYPE_NUM;
	dec->operand_fmtstr = PPC_FMTSTR_NUM;
	return 0;
}

/* tresume. */
int tresumeD(uint32_t insword, struct ppc_decoded *dec)
{
	dec->properties |= PPC_PROPERTY_DOTTED;
	dec->mnemonic = PPC_MNEM_TRESUME;
	return 0;
}

/* dcbal NUM,GPR */
int dcbal_NUM_GPR(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_DCBAL;
	/* 0111110000100000BBBBB10111101100 */
	dec->operand_n = 2;
	dec->operand_types[0] = PPC_OPER_TYPE_NUM;
	dec->operand_types[1] = PPC_OPER_TYPE_GPR;
	dec->operand_values[1] = (insword & 0xF800)>>11;
	dec->operand_fmtstr = PPC_FMTSTR_NUM_C_GPR;
	return 0;
}

/* copy NUM,GPR */
int copy_NUM_GPR(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_COPY;
	/* 0111110000100000BBBBB11000001100 */
	dec->operand_n = 2;
	dec->operand_types[0] = PPC_OPER_TYPE_NUM;
	dec->operand_types[1] = PPC_OPER_TYPE_GPR;
	dec->operand_values[1] = (insword & 0xF800)>>11;
	dec->operand_fmtstr = PPC_FMTSTR_NUM_C_GPR;
	return 0;
}

/* lfqx FREG,GPR,GPR */
int lfqx_FREG_GPR_GPR(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_LFQX;
	/* 011111AAAA1BBBBBCCCCC11000101110 */
	dec->operand_n = 3;
	dec->operand_types[0] = PPC_OPER_TYPE_FREG;
	dec->operand_values[0] = (insword & 0x3C00000)>>22;
	dec->operand_types[1] = PPC_OPER_TYPE_GPR;
	dec->operand_values[1] = (insword & 0x1F0000)>>16;
	dec->operand_types[2] = PPC_OPER_TYPE_GPR;
	dec->operand_values[2] = (insword & 0xF800)>>11;
	dec->operand_fmtstr = PPC_FMTSTR_FREG_C_GPR_C_GPR;
	return 0;
}

/* mbar NUM */
int mbar_NUM(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_MBAR;
	/* 011111AAAAAxxxxxxxxxx11010101100 */
	dec->operand_n = 1;
	dec->operand_types[0] = PPC_OPER_TYPE_NUM;
	dec->operand_values[0] = (insword & 0x3E00000)>>21;
	dec->operand_fmtstr = PPC_FMTSTR_NUM;
	return 0;
}

/* paste. NUM,GPR */
int pasteD_NUM_GPR(uint32_t insword, struct ppc_decoded *dec)
{
	dec->properties |= PPC_PROPERTY_DOTTED;
	dec->mnemonic = PPC_MNEM_PASTE;
	/* 0111110000100000BBBBB11100001101 */
	dec->operand_n = 2;
	dec->operand_types[0] = PPC_OPER_TYPE_NUM;
	dec->operand_types[1] = PPC_OPER_TYPE_GPR;
	dec->operand_values[1] = (insword & 0xF800)>>11;
	dec->operand_fmtstr = PPC_FMTSTR_NUM_C_GPR;
	return 0;
}

/* tlbsx GPR,NUM,GPR */
int tlbsx_GPR_NUM_GPR(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_TLBSX;
	/* 011111AAAAA00000CCCCC11100100100 */
	dec->operand_n = 3;
	dec->operand_types[0] = PPC_OPER_TYPE_GPR;
	dec->operand_values[0] = (insword & 0x3E00000)>>21;
	dec->operand_types[1] = PPC_OPER_TYPE_NUM;
	dec->operand_types[2] = PPC_OPER_TYPE_GPR;
	dec->operand_values[2] = (insword & 0xF800)>>11;
	dec->operand_fmtstr = PPC_FMTSTR_GPR_C_NUM_C_GPR;
	return 0;
}

/* tlbsx. GPR,NUM,GPR */
int tlbsxD_GPR_NUM_GPR(uint32_t insword, struct ppc_decoded *dec)
{
	dec->properties |= PPC_PROPERTY_DOTTED;
	dec->mnemonic = PPC_MNEM_TLBSX;
	/* 011111xAAAA00000CCCCC11100100101 */
	dec->operand_n = 3;
	dec->operand_types[0] = PPC_OPER_TYPE_GPR;
	dec->operand_values[0] = (insword & 0x1E00000)>>21;
	dec->operand_types[1] = PPC_OPER_TYPE_NUM;
	dec->operand_types[2] = PPC_OPER_TYPE_GPR;
	dec->operand_values[2] = (insword & 0xF800)>>11;
	dec->operand_fmtstr = PPC_FMTSTR_GPR_C_NUM_C_GPR;
	return 0;
}

/* stfqx FREG,NUM,GPR */
int stfqx_FREG_NUM_GPR(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_STFQX;
	/* 011111AAAA100000CCCCC11100101110 */
	dec->operand_n = 3;
	dec->operand_types[0] = PPC_OPER_TYPE_FREG;
	dec->operand_values[0] = (insword & 0x3C00000)>>22;
	dec->operand_types[1] = PPC_OPER_TYPE_NUM;
	dec->operand_types[2] = PPC_OPER_TYPE_GPR;
	dec->operand_values[2] = (insword & 0xF800)>>11;
	dec->operand_fmtstr = PPC_FMTSTR_FREG_C_NUM_C_GPR;
	return 0;
}

/* ici NUM */
int ici_NUM(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_ICI;
	/* 011111AAAAA000000000011110001100 */
	dec->operand_n = 1;
	dec->operand_types[0] = PPC_OPER_TYPE_NUM;
	dec->operand_values[0] = (insword & 0x3E00000)>>21;
	dec->operand_fmtstr = PPC_FMTSTR_NUM;
	return 0;
}

/* dcbzl NUM,GPR */
int dcbzl_NUM_GPR(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_DCBZL;
	/* 0111110000100000BBBBB11111101100 */
	dec->operand_n = 2;
	dec->operand_types[0] = PPC_OPER_TYPE_NUM;
	dec->operand_types[1] = PPC_OPER_TYPE_GPR;
	dec->operand_values[1] = (insword & 0xF800)>>11;
	dec->operand_fmtstr = PPC_FMTSTR_NUM_C_GPR;
	return 0;
}

/* icbt NUM,GPR,GPR */
int icbt_NUM_GPR_GPR(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_ICBT;
	/* 011111AAAAABBxBBCCCCC00000101100 */
	dec->operand_n = 3;
	dec->operand_types[0] = PPC_OPER_TYPE_NUM;
	dec->operand_values[0] = (insword & 0x3E00000)>>21;
	dec->operand_types[1] = PPC_OPER_TYPE_GPR;
	dec->operand_values[1] = ((insword & 0x180000)>>17)|((insword & 0x30000)>>16);
	dec->operand_types[2] = PPC_OPER_TYPE_GPR;
	dec->operand_values[2] = (insword & 0xF800)>>11;
	dec->operand_fmtstr = PPC_FMTSTR_NUM_C_GPR_C_GPR;
	return 0;
}

/* dcbfl GPR,GPR */
int dcbfl_GPR_GPR(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_DCBFL;
	/* 01111100001AAAAABBBBB00010101100 */
	dec->operand_n = 2;
	dec->operand_types[0] = PPC_OPER_TYPE_GPR;
	dec->operand_values[0] = (insword & 0x1F0000)>>16;
	dec->operand_types[1] = PPC_OPER_TYPE_GPR;
	dec->operand_values[1] = (insword & 0xF800)>>11;
	dec->operand_fmtstr = PPC_FMTSTR_GPR_C_GPR;
	return 0;
}

/* dcbtstls NUM,GPR,GPR */
int dcbtstls_NUM_GPR_GPR(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_DCBTSTLS;
	/* 011111AAAAABBBBBCCCCC00100001100 */
	dec->operand_n = 3;
	dec->operand_types[0] = PPC_OPER_TYPE_NUM;
	dec->operand_values[0] = (insword & 0x3E00000)>>21;
	dec->operand_types[1] = PPC_OPER_TYPE_GPR;
	dec->operand_values[1] = (insword & 0x1F0000)>>16;
	dec->operand_types[2] = PPC_OPER_TYPE_GPR;
	dec->operand_values[2] = (insword & 0xF800)>>11;
	dec->operand_fmtstr = PPC_FMTSTR_NUM_C_GPR_C_GPR;
	return 0;
}

/* dcbtstlse NUM,GPR,GPR */
int dcbtstlse_NUM_GPR_GPR(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_DCBTSTLSE;
	/* 011111AAAAABBxBBCCCCC00100011100 */
	dec->operand_n = 3;
	dec->operand_types[0] = PPC_OPER_TYPE_NUM;
	dec->operand_values[0] = (insword & 0x3E00000)>>21;
	dec->operand_types[1] = PPC_OPER_TYPE_GPR;
	dec->operand_values[1] = ((insword & 0x180000)>>17)|((insword & 0x30000)>>16);
	dec->operand_types[2] = PPC_OPER_TYPE_GPR;
	dec->operand_values[2] = (insword & 0xF800)>>11;
	dec->operand_fmtstr = PPC_FMTSTR_NUM_C_GPR_C_GPR;
	return 0;
}

/* dcbtls NUM,GPR,GPR */
int dcbtls_NUM_GPR_GPR(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_DCBTLS;
	/* 011111AAAAABBBBBCCCCC00101001100 */
	dec->operand_n = 3;
	dec->operand_types[0] = PPC_OPER_TYPE_NUM;
	dec->operand_values[0] = (insword & 0x3E00000)>>21;
	dec->operand_types[1] = PPC_OPER_TYPE_GPR;
	dec->operand_values[1] = (insword & 0x1F0000)>>16;
	dec->operand_types[2] = PPC_OPER_TYPE_GPR;
	dec->operand_values[2] = (insword & 0xF800)>>11;
	dec->operand_fmtstr = PPC_FMTSTR_NUM_C_GPR_C_GPR;
	return 0;
}

/* dcbtlse NUM,GPR,GPR */
int dcbtlse_NUM_GPR_GPR(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_DCBTLSE;
	/* 011111AAAAABBBBBCCCCC00101011100 */
	dec->operand_n = 3;
	dec->operand_types[0] = PPC_OPER_TYPE_NUM;
	dec->operand_values[0] = (insword & 0x3E00000)>>21;
	dec->operand_types[1] = PPC_OPER_TYPE_GPR;
	dec->operand_values[1] = (insword & 0x1F0000)>>16;
	dec->operand_types[2] = PPC_OPER_TYPE_GPR;
	dec->operand_values[2] = (insword & 0xF800)>>11;
	dec->operand_fmtstr = PPC_FMTSTR_NUM_C_GPR_C_GPR;
	return 0;
}

/* icblq. NUM,GPR,GPR */
int icblqD_NUM_GPR_GPR(uint32_t insword, struct ppc_decoded *dec)
{
	dec->properties |= PPC_PROPERTY_DOTTED;
	dec->mnemonic = PPC_MNEM_ICBLQ;
	/* 011111AAAAABBBBBCCCCC00110001101 */
	dec->operand_n = 3;
	dec->operand_types[0] = PPC_OPER_TYPE_NUM;
	dec->operand_values[0] = (insword & 0x3E00000)>>21;
	dec->operand_types[1] = PPC_OPER_TYPE_GPR;
	dec->operand_values[1] = (insword & 0x1F0000)>>16;
	dec->operand_types[2] = PPC_OPER_TYPE_GPR;
	dec->operand_values[2] = (insword & 0xF800)>>11;
	dec->operand_fmtstr = PPC_FMTSTR_NUM_C_GPR_C_GPR;
	return 0;
}

/* icblc NUM,GPR,GPR */
int icblc_NUM_GPR_GPR(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_ICBLC;
	/* 011111AAAAABBBBBCCCCC00111001100 */
	dec->operand_n = 3;
	dec->operand_types[0] = PPC_OPER_TYPE_NUM;
	dec->operand_values[0] = (insword & 0x3E00000)>>21;
	dec->operand_types[1] = PPC_OPER_TYPE_GPR;
	dec->operand_values[1] = (insword & 0x1F0000)>>16;
	dec->operand_types[2] = PPC_OPER_TYPE_GPR;
	dec->operand_values[2] = (insword & 0xF800)>>11;
	dec->operand_fmtstr = PPC_FMTSTR_NUM_C_GPR_C_GPR;
	return 0;
}

/* dcbtst GPR,GPR,NUM */
int dcbtst_GPR_GPR_NUM(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_DCBTST;
	/* 011111CCCCCAAAAABBBBB00111101100 */
	dec->operand_n = 3;
	dec->operand_types[0] = PPC_OPER_TYPE_GPR;
	dec->operand_values[0] = (insword & 0x1F0000)>>16;
	dec->operand_types[1] = PPC_OPER_TYPE_GPR;
	dec->operand_values[1] = (insword & 0xF800)>>11;
	dec->operand_types[2] = PPC_OPER_TYPE_NUM;
	dec->operand_values[2] = (insword & 0x3E00000)>>21;
	dec->operand_fmtstr = PPC_FMTSTR_GPR_C_GPR_C_NUM;
	return 0;
}

/* dcbt GPR,GPR,NUM */
int dcbt_GPR_GPR_NUM(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_DCBT;
	/* 011111CCCCCAAAAABBBBB01000101100 */
	dec->operand_n = 3;
	dec->operand_types[0] = PPC_OPER_TYPE_GPR;
	dec->operand_values[0] = (insword & 0x1F0000)>>16;
	dec->operand_types[1] = PPC_OPER_TYPE_GPR;
	dec->operand_values[1] = (insword & 0xF800)>>11;
	dec->operand_types[2] = PPC_OPER_TYPE_NUM;
	dec->operand_values[2] = (insword & 0x3E00000)>>21;
	dec->operand_fmtstr = PPC_FMTSTR_GPR_C_GPR_C_NUM;
	return 0;
}

/* dcblc NUM,GPR,GPR */
int dcblc_NUM_GPR_GPR(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_DCBLC;
	/* 011111AAAAABBBBBCCCCC01100001100 */
	dec->operand_n = 3;
	dec->operand_types[0] = PPC_OPER_TYPE_NUM;
	dec->operand_values[0] = (insword & 0x3E00000)>>21;
	dec->operand_types[1] = PPC_OPER_TYPE_GPR;
	dec->operand_values[1] = (insword & 0x1F0000)>>16;
	dec->operand_types[2] = PPC_OPER_TYPE_GPR;
	dec->operand_values[2] = (insword & 0xF800)>>11;
	dec->operand_fmtstr = PPC_FMTSTR_NUM_C_GPR_C_GPR;
	return 0;
}

/* dcblq. NUM,GPR,GPR */
int dcblqD_NUM_GPR_GPR(uint32_t insword, struct ppc_decoded *dec)
{
	dec->properties |= PPC_PROPERTY_DOTTED;
	dec->mnemonic = PPC_MNEM_DCBLQ;
	/* 011111AAAAABBBBBCCCCC01101001101 */
	dec->operand_n = 3;
	dec->operand_types[0] = PPC_OPER_TYPE_NUM;
	dec->operand_values[0] = (insword & 0x3E00000)>>21;
	dec->operand_types[1] = PPC_OPER_TYPE_GPR;
	dec->operand_values[1] = (insword & 0x1F0000)>>16;
	dec->operand_types[2] = PPC_OPER_TYPE_GPR;
	dec->operand_values[2] = (insword & 0xF800)>>11;
	dec->operand_fmtstr = PPC_FMTSTR_NUM_C_GPR_C_GPR;
	return 0;
}

/* lsi GPR,GPR,NUM */
int lsi_GPR_GPR_NUM(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_LSI;
	/* 011111xxxxxxxxxxCCCCC10010101010 */
	dec->operand_n = 3;
	dec->operand_types[0] = PPC_OPER_TYPE_GPR;
	dec->operand_types[1] = PPC_OPER_TYPE_GPR;
	dec->operand_types[2] = PPC_OPER_TYPE_NUM;
	dec->operand_values[2] = (insword & 0xF800)>>11;
	dec->operand_fmtstr = PPC_FMTSTR_GPR_C_GPR_C_NUM;
	return 0;
}

/* dcbal GPR,GPR */
int dcbal_GPR_GPR(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_DCBAL;
	/* 01111100001AAxAABBBBB10111101100 */
	dec->operand_n = 2;
	dec->operand_types[0] = PPC_OPER_TYPE_GPR;
	dec->operand_values[0] = ((insword & 0x180000)>>17)|((insword & 0x30000)>>16);
	dec->operand_types[1] = PPC_OPER_TYPE_GPR;
	dec->operand_values[1] = (insword & 0xF800)>>11;
	dec->operand_fmtstr = PPC_FMTSTR_GPR_C_GPR;
	return 0;
}

/* copy GPR,GPR */
int copy_GPR_GPR(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_COPY;
	/* 01111100001AAAAABBBBB11000001100 */
	dec->operand_n = 2;
	dec->operand_types[0] = PPC_OPER_TYPE_GPR;
	dec->operand_values[0] = (insword & 0x1F0000)>>16;
	dec->operand_types[1] = PPC_OPER_TYPE_GPR;
	dec->operand_values[1] = (insword & 0xF800)>>11;
	dec->operand_fmtstr = PPC_FMTSTR_GPR_C_GPR;
	return 0;
}

/* paste. GPR,GPR */
int pasteD_GPR_GPR(uint32_t insword, struct ppc_decoded *dec)
{
	dec->properties |= PPC_PROPERTY_DOTTED;
	dec->mnemonic = PPC_MNEM_PASTE;
	/* 01111100001AAAAABBBBB11100001101 */
	dec->operand_n = 2;
	dec->operand_types[0] = PPC_OPER_TYPE_GPR;
	dec->operand_values[0] = (insword & 0x1F0000)>>16;
	dec->operand_types[1] = PPC_OPER_TYPE_GPR;
	dec->operand_values[1] = (insword & 0xF800)>>11;
	dec->operand_fmtstr = PPC_FMTSTR_GPR_C_GPR;
	return 0;
}

/* tlbsx GPR,GPR,GPR */
int tlbsx_GPR_GPR_GPR(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_TLBSX;
	/* 011111AAAAABBBBBCCCCC11100100100 */
	dec->operand_n = 3;
	dec->operand_types[0] = PPC_OPER_TYPE_GPR;
	dec->operand_values[0] = (insword & 0x3E00000)>>21;
	dec->operand_types[1] = PPC_OPER_TYPE_GPR;
	dec->operand_values[1] = (insword & 0x1F0000)>>16;
	dec->operand_types[2] = PPC_OPER_TYPE_GPR;
	dec->operand_values[2] = (insword & 0xF800)>>11;
	dec->operand_fmtstr = PPC_FMTSTR_GPR_C_GPR_C_GPR;
	return 0;
}

/* tlbsx. GPR,GPR,GPR */
int tlbsxD_GPR_GPR_GPR(uint32_t insword, struct ppc_decoded *dec)
{
	dec->properties |= PPC_PROPERTY_DOTTED;
	dec->mnemonic = PPC_MNEM_TLBSX;
	/* 011111AAAAABBBBBCCCCC11100100101 */
	dec->operand_n = 3;
	dec->operand_types[0] = PPC_OPER_TYPE_GPR;
	dec->operand_values[0] = (insword & 0x3E00000)>>21;
	dec->operand_types[1] = PPC_OPER_TYPE_GPR;
	dec->operand_values[1] = (insword & 0x1F0000)>>16;
	dec->operand_types[2] = PPC_OPER_TYPE_GPR;
	dec->operand_values[2] = (insword & 0xF800)>>11;
	dec->operand_fmtstr = PPC_FMTSTR_GPR_C_GPR_C_GPR;
	return 0;
}

/* stfqx FREG,GPR,GPR */
int stfqx_FREG_GPR_GPR(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_STFQX;
	/* 011111AAAA1BBBBBCCCCC11100101110 */
	dec->operand_n = 3;
	dec->operand_types[0] = PPC_OPER_TYPE_FREG;
	dec->operand_values[0] = (insword & 0x3C00000)>>22;
	dec->operand_types[1] = PPC_OPER_TYPE_GPR;
	dec->operand_values[1] = (insword & 0x1F0000)>>16;
	dec->operand_types[2] = PPC_OPER_TYPE_GPR;
	dec->operand_values[2] = (insword & 0xF800)>>11;
	dec->operand_fmtstr = PPC_FMTSTR_FREG_C_GPR_C_GPR;
	return 0;
}

/* dcbzl GPR,GPR */
int dcbzl_GPR_GPR(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_DCBZL;
	/* 01111100001AAAAABBBBB11111101100 */
	dec->operand_n = 2;
	dec->operand_types[0] = PPC_OPER_TYPE_GPR;
	dec->operand_values[0] = (insword & 0x1F0000)>>16;
	dec->operand_types[1] = PPC_OPER_TYPE_GPR;
	dec->operand_values[1] = (insword & 0xF800)>>11;
	dec->operand_fmtstr = PPC_FMTSTR_GPR_C_GPR;
	return 0;
}

/* twllt GPR,GPR */
int twllt_GPR_GPR(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_TWLLT;
	/* 01111100010AAAAABBBBB00000001000 */
	dec->operand_n = 2;
	dec->operand_types[0] = PPC_OPER_TYPE_GPR;
	dec->operand_values[0] = (insword & 0x1F0000)>>16;
	dec->operand_types[1] = PPC_OPER_TYPE_GPR;
	dec->operand_values[1] = (insword & 0xF800)>>11;
	dec->operand_fmtstr = PPC_FMTSTR_GPR_C_GPR;
	return 0;
}

/* tlbilx NUM,NUM,GPR */
int tlbilx_NUM_NUM_GPR(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_TLBILX;
	/* 011111xxxAA00000CCCCC00000100100 */
	dec->operand_n = 3;
	dec->operand_types[0] = PPC_OPER_TYPE_NUM;
	dec->operand_values[0] = (insword & 0x600000)>>21;
	dec->operand_types[1] = PPC_OPER_TYPE_NUM;
	dec->operand_types[2] = PPC_OPER_TYPE_GPR;
	dec->operand_values[2] = (insword & 0xF800)>>11;
	dec->operand_fmtstr = PPC_FMTSTR_NUM_C_NUM_C_GPR;
	return 0;
}

/* waitimpl */
int waitimpl(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_WAITIMPL;
	return 0;
}

/* tdllt GPR,GPR */
int tdllt_GPR_GPR(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_TDLLT;
	/* 01111100010AAAAABBBBB00010001000 */
	dec->operand_n = 2;
	dec->operand_types[0] = PPC_OPER_TYPE_GPR;
	dec->operand_values[0] = (insword & 0x1F0000)>>16;
	dec->operand_types[1] = PPC_OPER_TYPE_GPR;
	dec->operand_values[1] = (insword & 0xF800)>>11;
	dec->operand_fmtstr = PPC_FMTSTR_GPR_C_GPR;
	return 0;
}

/* dcbf NUM,GPR,NUM */
int dcbf_NUM_GPR_NUM(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_DCBF;
	/* 0111110001C00000BBBBB00010101100 */
	dec->operand_n = 3;
	dec->operand_types[0] = PPC_OPER_TYPE_NUM;
	dec->operand_types[1] = PPC_OPER_TYPE_GPR;
	dec->operand_values[1] = (insword & 0xF800)>>11;
	dec->operand_types[2] = PPC_OPER_TYPE_NUM;
	dec->operand_values[2] = (insword & 0x200000)>>21;
	dec->operand_fmtstr = PPC_FMTSTR_NUM_C_GPR_C_NUM;
	return 0;
}

/* lqarx GPR,NUM,GPR */
int lqarx_GPR_NUM_GPR(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_LQARX;
	/* 011111AAAA000000CCCCC01000101000 */
	dec->operand_n = 3;
	dec->operand_types[0] = PPC_OPER_TYPE_GPR;
	dec->operand_values[0] = (insword & 0x3C00000)>>22;
	dec->operand_types[1] = PPC_OPER_TYPE_NUM;
	dec->operand_types[2] = PPC_OPER_TYPE_GPR;
	dec->operand_values[2] = (insword & 0xF800)>>11;
	dec->operand_fmtstr = PPC_FMTSTR_GPR_C_NUM_C_GPR;
	return 0;
}

/* lqarx GPR,NUM,GPR,NUM */
int lqarx_GPR_NUM_GPR_NUM(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_LQARX;
	/* 011111AAAA000000CCCCC01000101001 */
	dec->operand_n = 4;
	dec->operand_types[0] = PPC_OPER_TYPE_GPR;
	dec->operand_values[0] = (insword & 0x3C00000)>>22;
	dec->operand_types[1] = PPC_OPER_TYPE_NUM;
	dec->operand_types[2] = PPC_OPER_TYPE_GPR;
	dec->operand_values[2] = (insword & 0xF800)>>11;
	dec->operand_types[3] = PPC_OPER_TYPE_NUM;
	dec->operand_fmtstr = PPC_FMTSTR_GPR_C_NUM_C_GPR_C_NUM;
	return 0;
}

/* ptesync */
int ptesync(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_PTESYNC;
	return 0;
}

/* wclrone NUM,GPR */
int wclrone_NUM_GPR(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_WCLRONE;
	/* 0111110001000000BBBBB11101001100 */
	dec->operand_n = 2;
	dec->operand_types[0] = PPC_OPER_TYPE_NUM;
	dec->operand_types[1] = PPC_OPER_TYPE_GPR;
	dec->operand_values[1] = (insword & 0xF800)>>11;
	dec->operand_fmtstr = PPC_FMTSTR_NUM_C_GPR;
	return 0;
}

/* tlbilx NUM,GPR,GPR */
int tlbilx_NUM_GPR_GPR(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_TLBILX;
	/* 011111xxxAABBBBBCCCCC00000100100 */
	dec->operand_n = 3;
	dec->operand_types[0] = PPC_OPER_TYPE_NUM;
	dec->operand_values[0] = (insword & 0x600000)>>21;
	dec->operand_types[1] = PPC_OPER_TYPE_GPR;
	dec->operand_values[1] = (insword & 0x1F0000)>>16;
	dec->operand_types[2] = PPC_OPER_TYPE_GPR;
	dec->operand_values[2] = (insword & 0xF800)>>11;
	dec->operand_fmtstr = PPC_FMTSTR_NUM_C_GPR_C_GPR;
	return 0;
}

/* dcbf GPR,GPR,NUM */
int dcbf_GPR_GPR_NUM(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_DCBF;
	/* 0111110001CAAAAABBBBB00010101100 */
	dec->operand_n = 3;
	dec->operand_types[0] = PPC_OPER_TYPE_GPR;
	dec->operand_values[0] = (insword & 0x1F0000)>>16;
	dec->operand_types[1] = PPC_OPER_TYPE_GPR;
	dec->operand_values[1] = (insword & 0xF800)>>11;
	dec->operand_types[2] = PPC_OPER_TYPE_NUM;
	dec->operand_values[2] = (insword & 0x200000)>>21;
	dec->operand_fmtstr = PPC_FMTSTR_GPR_C_GPR_C_NUM;
	return 0;
}

/* wclrone GPR,GPR */
int wclrone_GPR_GPR(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_WCLRONE;
	/* 01111100010AAAAABBBBB11101001100 */
	dec->operand_n = 2;
	dec->operand_types[0] = PPC_OPER_TYPE_GPR;
	dec->operand_values[0] = (insword & 0x1F0000)>>16;
	dec->operand_types[1] = PPC_OPER_TYPE_GPR;
	dec->operand_values[1] = (insword & 0xF800)>>11;
	dec->operand_fmtstr = PPC_FMTSTR_GPR_C_GPR;
	return 0;
}

/* tlbilxva NUM,GPR */
int tlbilxva_NUM_GPR(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_TLBILXVA;
	/* 0111110001100000BBBBB00000100100 */
	dec->operand_n = 2;
	dec->operand_types[0] = PPC_OPER_TYPE_NUM;
	dec->operand_types[1] = PPC_OPER_TYPE_GPR;
	dec->operand_values[1] = (insword & 0xF800)>>11;
	dec->operand_fmtstr = PPC_FMTSTR_NUM_C_GPR;
	return 0;
}

/* tlbilxva GPR,GPR */
int tlbilxva_GPR_GPR(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_TLBILXVA;
	/* 01111100011AAAAABBBBB00000100100 */
	dec->operand_n = 2;
	dec->operand_types[0] = PPC_OPER_TYPE_GPR;
	dec->operand_values[0] = (insword & 0x1F0000)>>16;
	dec->operand_types[1] = PPC_OPER_TYPE_GPR;
	dec->operand_values[1] = (insword & 0xF800)>>11;
	dec->operand_fmtstr = PPC_FMTSTR_GPR_C_GPR;
	return 0;
}

/* cmpw CREG,GPR,GPR */
int cmpw_CREG_GPR_GPR(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_CMPW;
	/* 011111xAA00BBBBBCCCCC00000000000 */
	dec->operand_n = 3;
	dec->operand_types[0] = PPC_OPER_TYPE_CREG;
	dec->operand_values[0] = (insword & 0x1800000)>>23;
	dec->operand_types[1] = PPC_OPER_TYPE_GPR;
	dec->operand_values[1] = (insword & 0x1F0000)>>16;
	dec->operand_types[2] = PPC_OPER_TYPE_GPR;
	dec->operand_values[2] = (insword & 0xF800)>>11;
	dec->operand_fmtstr = PPC_FMTSTR_CREG_C_GPR_C_GPR;
	return 0;
}

/* tweq GPR,GPR */
int tweq_GPR_GPR(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_TWEQ;
	/* 01111100100AAAAABBBBB00000001000 */
	dec->operand_n = 2;
	dec->operand_types[0] = PPC_OPER_TYPE_GPR;
	dec->operand_values[0] = (insword & 0x1F0000)>>16;
	dec->operand_types[1] = PPC_OPER_TYPE_GPR;
	dec->operand_values[1] = (insword & 0xF800)>>11;
	dec->operand_fmtstr = PPC_FMTSTR_GPR_C_GPR;
	return 0;
}

/* cmplw CREG,GPR,GPR */
int cmplw_CREG_GPR_GPR(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_CMPLW;
	/* 011111AAA00BBBBBCCCCC00001000000 */
	dec->operand_n = 3;
	dec->operand_types[0] = PPC_OPER_TYPE_CREG;
	dec->operand_values[0] = (insword & 0x3800000)>>23;
	dec->operand_types[1] = PPC_OPER_TYPE_GPR;
	dec->operand_values[1] = (insword & 0x1F0000)>>16;
	dec->operand_types[2] = PPC_OPER_TYPE_GPR;
	dec->operand_values[2] = (insword & 0xF800)>>11;
	dec->operand_fmtstr = PPC_FMTSTR_CREG_C_GPR_C_GPR;
	return 0;
}

/* tdeq GPR,GPR */
int tdeq_GPR_GPR(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_TDEQ;
	/* 01111100100AAAAABBBBB00010001000 */
	dec->operand_n = 2;
	dec->operand_types[0] = PPC_OPER_TYPE_GPR;
	dec->operand_values[0] = (insword & 0x1F0000)>>16;
	dec->operand_types[1] = PPC_OPER_TYPE_GPR;
	dec->operand_values[1] = (insword & 0xF800)>>11;
	dec->operand_fmtstr = PPC_FMTSTR_GPR_C_GPR;
	return 0;
}

/* wchkall CREG */
int wchkall_CREG(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_WCHKALL;
	/* 011111AAAxxxxxxxxxxxx00101101100 */
	dec->operand_n = 1;
	dec->operand_types[0] = PPC_OPER_TYPE_CREG;
	dec->operand_values[0] = (insword & 0x3800000)>>23;
	dec->operand_fmtstr = PPC_FMTSTR_CREG;
	return 0;
}

/* cmpd CREG,GPR,GPR */
int cmpd_CREG_GPR_GPR(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_CMPD;
	/* 011111AAA01BBBBBCCCCC00000000000 */
	dec->operand_n = 3;
	dec->operand_types[0] = PPC_OPER_TYPE_CREG;
	dec->operand_values[0] = (insword & 0x3800000)>>23;
	dec->operand_types[1] = PPC_OPER_TYPE_GPR;
	dec->operand_values[1] = (insword & 0x1F0000)>>16;
	dec->operand_types[2] = PPC_OPER_TYPE_GPR;
	dec->operand_values[2] = (insword & 0xF800)>>11;
	dec->operand_fmtstr = PPC_FMTSTR_CREG_C_GPR_C_GPR;
	return 0;
}

/* twlge GPR,GPR */
int twlge_GPR_GPR(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_TWLGE;
	/* 01111100101AAAAABBBBB00000001000 */
	dec->operand_n = 2;
	dec->operand_types[0] = PPC_OPER_TYPE_GPR;
	dec->operand_values[0] = (insword & 0x1F0000)>>16;
	dec->operand_types[1] = PPC_OPER_TYPE_GPR;
	dec->operand_values[1] = (insword & 0xF800)>>11;
	dec->operand_fmtstr = PPC_FMTSTR_GPR_C_GPR;
	return 0;
}

/* cmpld CREG,GPR,GPR */
int cmpld_CREG_GPR_GPR(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_CMPLD;
	/* 011111AAA01BBBBBCCCCC00001000000 */
	dec->operand_n = 3;
	dec->operand_types[0] = PPC_OPER_TYPE_CREG;
	dec->operand_values[0] = (insword & 0x3800000)>>23;
	dec->operand_types[1] = PPC_OPER_TYPE_GPR;
	dec->operand_values[1] = (insword & 0x1F0000)>>16;
	dec->operand_types[2] = PPC_OPER_TYPE_GPR;
	dec->operand_values[2] = (insword & 0xF800)>>11;
	dec->operand_fmtstr = PPC_FMTSTR_CREG_C_GPR_C_GPR;
	return 0;
}

/* tdlge GPR,GPR */
int tdlge_GPR_GPR(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_TDLGE;
	/* 01111100101AAAAABBBBB00010001000 */
	dec->operand_n = 2;
	dec->operand_types[0] = PPC_OPER_TYPE_GPR;
	dec->operand_values[0] = (insword & 0x1F0000)>>16;
	dec->operand_types[1] = PPC_OPER_TYPE_GPR;
	dec->operand_values[1] = (insword & 0xF800)>>11;
	dec->operand_fmtstr = PPC_FMTSTR_GPR_C_GPR;
	return 0;
}

/* twlle GPR,GPR */
int twlle_GPR_GPR(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_TWLLE;
	/* 01111100110AAAAABBBBB00000001000 */
	dec->operand_n = 2;
	dec->operand_types[0] = PPC_OPER_TYPE_GPR;
	dec->operand_values[0] = (insword & 0x1F0000)>>16;
	dec->operand_types[1] = PPC_OPER_TYPE_GPR;
	dec->operand_values[1] = (insword & 0xF800)>>11;
	dec->operand_fmtstr = PPC_FMTSTR_GPR_C_GPR;
	return 0;
}

/* tdlle GPR,GPR */
int tdlle_GPR_GPR(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_TDLLE;
	/* 01111100110AAAAABBBBB00010001000 */
	dec->operand_n = 2;
	dec->operand_types[0] = PPC_OPER_TYPE_GPR;
	dec->operand_values[0] = (insword & 0x1F0000)>>16;
	dec->operand_types[1] = PPC_OPER_TYPE_GPR;
	dec->operand_values[1] = (insword & 0xF800)>>11;
	dec->operand_fmtstr = PPC_FMTSTR_GPR_C_GPR;
	return 0;
}

/* twgt GPR,GPR */
int twgt_GPR_GPR(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_TWGT;
	/* 01111101000AAAAABBBBB00000001000 */
	dec->operand_n = 2;
	dec->operand_types[0] = PPC_OPER_TYPE_GPR;
	dec->operand_values[0] = (insword & 0x1F0000)>>16;
	dec->operand_types[1] = PPC_OPER_TYPE_GPR;
	dec->operand_values[1] = (insword & 0xF800)>>11;
	dec->operand_fmtstr = PPC_FMTSTR_GPR_C_GPR;
	return 0;
}

/* tdgt GPR,GPR */
int tdgt_GPR_GPR(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_TDGT;
	/* 01111101000AAAAABBBBB00010001000 */
	dec->operand_n = 2;
	dec->operand_types[0] = PPC_OPER_TYPE_GPR;
	dec->operand_values[0] = (insword & 0x1F0000)>>16;
	dec->operand_types[1] = PPC_OPER_TYPE_GPR;
	dec->operand_values[1] = (insword & 0xF800)>>11;
	dec->operand_fmtstr = PPC_FMTSTR_GPR_C_GPR;
	return 0;
}

/* twge GPR,GPR */
int twge_GPR_GPR(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_TWGE;
	/* 01111101100AAAAABBBBB00000001000 */
	dec->operand_n = 2;
	dec->operand_types[0] = PPC_OPER_TYPE_GPR;
	dec->operand_values[0] = (insword & 0x1F0000)>>16;
	dec->operand_types[1] = PPC_OPER_TYPE_GPR;
	dec->operand_values[1] = (insword & 0xF800)>>11;
	dec->operand_fmtstr = PPC_FMTSTR_GPR_C_GPR;
	return 0;
}

/* tdge GPR,GPR */
int tdge_GPR_GPR(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_TDGE;
	/* 01111101100AAAAABBBBB00010001000 */
	dec->operand_n = 2;
	dec->operand_types[0] = PPC_OPER_TYPE_GPR;
	dec->operand_values[0] = (insword & 0x1F0000)>>16;
	dec->operand_types[1] = PPC_OPER_TYPE_GPR;
	dec->operand_values[1] = (insword & 0xF800)>>11;
	dec->operand_fmtstr = PPC_FMTSTR_GPR_C_GPR;
	return 0;
}

/* twlt GPR,GPR */
int twlt_GPR_GPR(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_TWLT;
	/* 01111110000AAAAABBBBB00000001000 */
	dec->operand_n = 2;
	dec->operand_types[0] = PPC_OPER_TYPE_GPR;
	dec->operand_values[0] = (insword & 0x1F0000)>>16;
	dec->operand_types[1] = PPC_OPER_TYPE_GPR;
	dec->operand_values[1] = (insword & 0xF800)>>11;
	dec->operand_fmtstr = PPC_FMTSTR_GPR_C_GPR;
	return 0;
}

/* tdlt GPR,GPR */
int tdlt_GPR_GPR(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_TDLT;
	/* 01111110000AAAAABBBBB00010001000 */
	dec->operand_n = 2;
	dec->operand_types[0] = PPC_OPER_TYPE_GPR;
	dec->operand_values[0] = (insword & 0x1F0000)>>16;
	dec->operand_types[1] = PPC_OPER_TYPE_GPR;
	dec->operand_values[1] = (insword & 0xF800)>>11;
	dec->operand_fmtstr = PPC_FMTSTR_GPR_C_GPR;
	return 0;
}

/* dcbtstt NUM,GPR */
int dcbtstt_NUM_GPR(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_DCBTSTT;
	/* 0111111000000000BBBBB00111101100 */
	dec->operand_n = 2;
	dec->operand_types[0] = PPC_OPER_TYPE_NUM;
	dec->operand_types[1] = PPC_OPER_TYPE_GPR;
	dec->operand_values[1] = (insword & 0xF800)>>11;
	dec->operand_fmtstr = PPC_FMTSTR_NUM_C_GPR;
	return 0;
}

/* dcbtt NUM,GPR */
int dcbtt_NUM_GPR(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_DCBTT;
	/* 0111111000000000BBBBB01000101100 */
	dec->operand_n = 2;
	dec->operand_types[0] = PPC_OPER_TYPE_NUM;
	dec->operand_types[1] = PPC_OPER_TYPE_GPR;
	dec->operand_values[1] = (insword & 0xF800)>>11;
	dec->operand_fmtstr = PPC_FMTSTR_NUM_C_GPR;
	return 0;
}

/* dstt GPR,GPR,NUM */
int dstt_GPR_GPR_NUM(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_DSTT;
	/* 0111111xxCCAAAAABBBBB0101010110x */
	dec->operand_n = 3;
	dec->operand_types[0] = PPC_OPER_TYPE_GPR;
	dec->operand_values[0] = (insword & 0x1F0000)>>16;
	dec->operand_types[1] = PPC_OPER_TYPE_GPR;
	dec->operand_values[1] = (insword & 0xF800)>>11;
	dec->operand_types[2] = PPC_OPER_TYPE_NUM;
	dec->operand_values[2] = (insword & 0x600000)>>21;
	dec->operand_fmtstr = PPC_FMTSTR_GPR_C_GPR_C_NUM;
	return 0;
}

/* dststt GPR,GPR,NUM */
int dststt_GPR_GPR_NUM(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_DSTSTT;
	/* 0111111xxCCAAAAABBBBB0101110110x */
	dec->operand_n = 3;
	dec->operand_types[0] = PPC_OPER_TYPE_GPR;
	dec->operand_values[0] = (insword & 0x1F0000)>>16;
	dec->operand_types[1] = PPC_OPER_TYPE_GPR;
	dec->operand_values[1] = (insword & 0xF800)>>11;
	dec->operand_types[2] = PPC_OPER_TYPE_NUM;
	dec->operand_values[2] = (insword & 0x600000)>>21;
	dec->operand_fmtstr = PPC_FMTSTR_GPR_C_GPR_C_NUM;
	return 0;
}

/* tendall. */
int tendallD(uint32_t insword, struct ppc_decoded *dec)
{
	dec->properties |= PPC_PROPERTY_DOTTED;
	dec->mnemonic = PPC_MNEM_TENDALL;
	return 0;
}

/* dssall */
int dssall(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_DSSALL;
	return 0;
}

/* dcbtstt GPR,GPR */
int dcbtstt_GPR_GPR(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_DCBTSTT;
	/* 01111110000AAAAABBBBB00111101100 */
	dec->operand_n = 2;
	dec->operand_types[0] = PPC_OPER_TYPE_GPR;
	dec->operand_values[0] = (insword & 0x1F0000)>>16;
	dec->operand_types[1] = PPC_OPER_TYPE_GPR;
	dec->operand_values[1] = (insword & 0xF800)>>11;
	dec->operand_fmtstr = PPC_FMTSTR_GPR_C_GPR;
	return 0;
}

/* dcbtt GPR,GPR */
int dcbtt_GPR_GPR(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_DCBTT;
	/* 01111110000AAAAABBBBB01000101100 */
	dec->operand_n = 2;
	dec->operand_types[0] = PPC_OPER_TYPE_GPR;
	dec->operand_values[0] = (insword & 0x1F0000)>>16;
	dec->operand_types[1] = PPC_OPER_TYPE_GPR;
	dec->operand_values[1] = (insword & 0xF800)>>11;
	dec->operand_fmtstr = PPC_FMTSTR_GPR_C_GPR;
	return 0;
}

/* twle GPR,GPR */
int twle_GPR_GPR(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_TWLE;
	/* 01111110100AAAAABBBBB00000001000 */
	dec->operand_n = 2;
	dec->operand_types[0] = PPC_OPER_TYPE_GPR;
	dec->operand_values[0] = (insword & 0x1F0000)>>16;
	dec->operand_types[1] = PPC_OPER_TYPE_GPR;
	dec->operand_values[1] = (insword & 0xF800)>>11;
	dec->operand_fmtstr = PPC_FMTSTR_GPR_C_GPR;
	return 0;
}

/* tdle GPR,GPR */
int tdle_GPR_GPR(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_TDLE;
	/* 01111110100AAAAABBBBB00010001000 */
	dec->operand_n = 2;
	dec->operand_types[0] = PPC_OPER_TYPE_GPR;
	dec->operand_values[0] = (insword & 0x1F0000)>>16;
	dec->operand_types[1] = PPC_OPER_TYPE_GPR;
	dec->operand_values[1] = (insword & 0xF800)>>11;
	dec->operand_fmtstr = PPC_FMTSTR_GPR_C_GPR;
	return 0;
}

/* twne GPR,GPR */
int twne_GPR_GPR(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_TWNE;
	/* 01111111000AAAAABBBBB00000001000 */
	dec->operand_n = 2;
	dec->operand_types[0] = PPC_OPER_TYPE_GPR;
	dec->operand_values[0] = (insword & 0x1F0000)>>16;
	dec->operand_types[1] = PPC_OPER_TYPE_GPR;
	dec->operand_values[1] = (insword & 0xF800)>>11;
	dec->operand_fmtstr = PPC_FMTSTR_GPR_C_GPR;
	return 0;
}

/* tdne GPR,GPR */
int tdne_GPR_GPR(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_TDNE;
	/* 01111111000AAAAABBBBB00010001000 */
	dec->operand_n = 2;
	dec->operand_types[0] = PPC_OPER_TYPE_GPR;
	dec->operand_values[0] = (insword & 0x1F0000)>>16;
	dec->operand_types[1] = PPC_OPER_TYPE_GPR;
	dec->operand_values[1] = (insword & 0xF800)>>11;
	dec->operand_fmtstr = PPC_FMTSTR_GPR_C_GPR;
	return 0;
}

/* yield */
int yield(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_YIELD;
	return 0;
}

/* mdoio */
int mdoio(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_MDOIO;
	return 0;
}

/* mdoom */
int mdoom(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_MDOOM;
	return 0;
}

/* trap */
int trap(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_TRAP;
	return 0;
}

/* tdu GPR,GPR */
int tdu_GPR_GPR(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_TDU;
	/* 01111111111AAAAABBBBB00010001000 */
	dec->operand_n = 2;
	dec->operand_types[0] = PPC_OPER_TYPE_GPR;
	dec->operand_values[0] = (insword & 0x1F0000)>>16;
	dec->operand_types[1] = PPC_OPER_TYPE_GPR;
	dec->operand_values[1] = (insword & 0xF800)>>11;
	dec->operand_fmtstr = PPC_FMTSTR_GPR_C_GPR;
	return 0;
}

/* twu GPR,GPR */
int twu_GPR_GPR(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_TWU;
	/* 01111111111AAAAABBBBB00000001000 */
	dec->operand_n = 2;
	dec->operand_types[0] = PPC_OPER_TYPE_GPR;
	dec->operand_values[0] = (insword & 0x1F0000)>>16;
	dec->operand_types[1] = PPC_OPER_TYPE_GPR;
	dec->operand_values[1] = (insword & 0xF800)>>11;
	dec->operand_fmtstr = PPC_FMTSTR_GPR_C_GPR;
	return 0;
}

