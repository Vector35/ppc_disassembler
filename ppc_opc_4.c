#include "disassembler.h"

/* vaddubm VREG,VREG,VREG */
int vaddubm_VREG_VREG_VREG(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_VADDUBM;
	/* 000100AAAAABBBBBCCCCC00000000000 */
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

/* vmul10cuq VREG,VREG */
int vmul10cuq_VREG_VREG(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_VMUL10CUQ;
	/* 000100AAAAABBBBB0000000000000001 */
	dec->operand_n = 2;
	dec->operand_types[0] = PPC_OPER_TYPE_VREG;
	dec->operand_values[0] = (insword & 0x3E00000)>>21;
	dec->operand_types[1] = PPC_OPER_TYPE_VREG;
	dec->operand_values[1] = (insword & 0x1F0000)>>16;
	dec->operand_fmtstr = PPC_FMTSTR_VREG_C_VREG;
	return 0;
}

/* vmaxub VREG,VREG,VREG */
int vmaxub_VREG_VREG_VREG(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_VMAXUB;
	/* 000100AAAAABBBBBCCCCC00000000010 */
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

/* vrlb VREG,VREG,VREG */
int vrlb_VREG_VREG_VREG(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_VRLB;
	/* 000100AAAAABBBBBCCCCC00000000100 */
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

/* vcmpequb VREG,VREG,VREG */
int vcmpequb_VREG_VREG_VREG(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_VCMPEQUB;
	/* 000100AAAAABBBBBCCCCC00000000110 */
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

/* vcmpneb VREG,VREG,VREG */
int vcmpneb_VREG_VREG_VREG(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_VCMPNEB;
	/* 000100AAAAABBBBBCCCCC00000000111 */
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

/* vmuloub VREG,VREG,VREG */
int vmuloub_VREG_VREG_VREG(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_VMULOUB;
	/* 000100AAAAABBBBBCCCCC00000001000 */
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

/* vaddfp VREG,VREG,VREG */
int vaddfp_VREG_VREG_VREG(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_VADDFP;
	/* 000100AAAAABBBBBCCCCC00000001010 */
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

/* vmrghb VREG,VREG,VREG */
int vmrghb_VREG_VREG_VREG(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_VMRGHB;
	/* 000100AAAAABBBBBCCCCC00000001100 */
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

/* vpkuhum VREG,VREG,VREG */
int vpkuhum_VREG_VREG_VREG(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_VPKUHUM;
	/* 000100AAAAABBBBBCCCCC00000001110 */
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

/* psq_lx FREG,GPR,GPR,NUM,NUM */
int psq_lx_FREG_GPR_GPR_NUM_NUM(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_PSQ_LX;
	/* 000100AAAAABBBBBCCCCCDEEE0001100 */
	dec->operand_n = 5;
	dec->operand_types[0] = PPC_OPER_TYPE_FREG;
	dec->operand_values[0] = (insword & 0x3E00000)>>21;
	dec->operand_types[1] = PPC_OPER_TYPE_GPR;
	dec->operand_values[1] = (insword & 0x1F0000)>>16;
	dec->operand_types[2] = PPC_OPER_TYPE_GPR;
	dec->operand_values[2] = (insword & 0xF800)>>11;
	dec->operand_types[3] = PPC_OPER_TYPE_NUM;
	dec->operand_values[3] = (insword & 0x400)>>10;
	dec->operand_types[4] = PPC_OPER_TYPE_NUM;
	dec->operand_values[4] = (insword & 0x380)>>7;
	dec->operand_fmtstr = PPC_FMTSTR_FREG_C_GPR_C_GPR_C_NUM_C_NUM;
	return 0;
}

/* psq_stx FREG,GPR,GPR,NUM,NUM */
int psq_stx_FREG_GPR_GPR_NUM_NUM(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_PSQ_STX;
	/* 000100AAAAABBBBBCCCCCDEEE0001110 */
	dec->operand_n = 5;
	dec->operand_types[0] = PPC_OPER_TYPE_FREG;
	dec->operand_values[0] = (insword & 0x3E00000)>>21;
	dec->operand_types[1] = PPC_OPER_TYPE_GPR;
	dec->operand_values[1] = (insword & 0x1F0000)>>16;
	dec->operand_types[2] = PPC_OPER_TYPE_GPR;
	dec->operand_values[2] = (insword & 0xF800)>>11;
	dec->operand_types[3] = PPC_OPER_TYPE_NUM;
	dec->operand_values[3] = (insword & 0x400)>>10;
	dec->operand_types[4] = PPC_OPER_TYPE_NUM;
	dec->operand_values[4] = (insword & 0x380)>>7;
	dec->operand_fmtstr = PPC_FMTSTR_FREG_C_GPR_C_GPR_C_NUM_C_NUM;
	return 0;
}

/* psq_lux FREG,GPR,GPR,NUM,NUM */
int psq_lux_FREG_GPR_GPR_NUM_NUM(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_PSQ_LUX;
	/* 000100AAAAABBBBBCCCCCDEEE1001100 */
	dec->operand_n = 5;
	dec->operand_types[0] = PPC_OPER_TYPE_FREG;
	dec->operand_values[0] = (insword & 0x3E00000)>>21;
	dec->operand_types[1] = PPC_OPER_TYPE_GPR;
	dec->operand_values[1] = (insword & 0x1F0000)>>16;
	dec->operand_types[2] = PPC_OPER_TYPE_GPR;
	dec->operand_values[2] = (insword & 0xF800)>>11;
	dec->operand_types[3] = PPC_OPER_TYPE_NUM;
	dec->operand_values[3] = (insword & 0x400)>>10;
	dec->operand_types[4] = PPC_OPER_TYPE_NUM;
	dec->operand_values[4] = (insword & 0x380)>>7;
	dec->operand_fmtstr = PPC_FMTSTR_FREG_C_GPR_C_GPR_C_NUM_C_NUM;
	return 0;
}

/* psq_stux FREG,GPR,GPR,NUM,NUM */
int psq_stux_FREG_GPR_GPR_NUM_NUM(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_PSQ_STUX;
	/* 000100AAAAABBBBBCCCCCDxEE100111x */
	dec->operand_n = 5;
	dec->operand_types[0] = PPC_OPER_TYPE_FREG;
	dec->operand_values[0] = (insword & 0x3E00000)>>21;
	dec->operand_types[1] = PPC_OPER_TYPE_GPR;
	dec->operand_values[1] = (insword & 0x1F0000)>>16;
	dec->operand_types[2] = PPC_OPER_TYPE_GPR;
	dec->operand_values[2] = (insword & 0xF800)>>11;
	dec->operand_types[3] = PPC_OPER_TYPE_NUM;
	dec->operand_values[3] = (insword & 0x400)>>10;
	dec->operand_types[4] = PPC_OPER_TYPE_NUM;
	dec->operand_values[4] = (insword & 0x380)>>7;
	dec->operand_fmtstr = PPC_FMTSTR_FREG_C_GPR_C_GPR_C_NUM_C_NUM;
	return 0;
}

/* mulhhwu GPR,GPR,GPR */
int mulhhwu_GPR_GPR_GPR(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_MULHHWU;
	/* 000100AAAAABBBBBCCCCC00000010000 */
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

/* mulhhwu. GPR,GPR,GPR */
int mulhhwuD_GPR_GPR_GPR(uint32_t insword, struct ppc_decoded *dec)
{
	dec->properties |= PPC_PROPERTY_DOTTED;
	dec->mnemonic = PPC_MNEM_MULHHWU;
	/* 000100AAAAABBBBBCCCCC00000010001 */
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

/* ps_sum0 FREG,FREG,FREG,FREG */
int ps_sum0_FREG_FREG_FREG_FREG(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_PS_SUM0;
	/* 000100AAAAABBBBBDDDDDCCCCC010100 */
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

/* ps_sum0. FREG,FREG,FREG,FREG */
int ps_sum0D_FREG_FREG_FREG_FREG(uint32_t insword, struct ppc_decoded *dec)
{
	dec->properties |= PPC_PROPERTY_DOTTED;
	dec->mnemonic = PPC_MNEM_PS_SUM0;
	/* 000100AAAAABBBBBDDDDDCCCCC010101 */
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

/* ps_sum1 FREG,FREG,FREG,FREG */
int ps_sum1_FREG_FREG_FREG_FREG(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_PS_SUM1;
	/* 000100AAAAABBBBBDDDDDCCCCC010110 */
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

/* ps_sum1. FREG,FREG,FREG,FREG */
int ps_sum1D_FREG_FREG_FREG_FREG(uint32_t insword, struct ppc_decoded *dec)
{
	dec->properties |= PPC_PROPERTY_DOTTED;
	dec->mnemonic = PPC_MNEM_PS_SUM1;
	/* 000100AAAAABBBBBDDDDDCCCCC010111 */
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

/* ps_muls0 FREG,FREG,FREG */
int ps_muls0_FREG_FREG_FREG(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_PS_MULS0;
	/* 000100AAAAABBBBB00000CCCCC011000 */
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

/* ps_muls0. FREG,FREG,FREG */
int ps_muls0D_FREG_FREG_FREG(uint32_t insword, struct ppc_decoded *dec)
{
	dec->properties |= PPC_PROPERTY_DOTTED;
	dec->mnemonic = PPC_MNEM_PS_MULS0;
	/* 000100AAAAABBBBB00000CCCCC011001 */
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

/* ps_muls1 FREG,FREG,FREG */
int ps_muls1_FREG_FREG_FREG(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_PS_MULS1;
	/* 000100AAAAABBBBB00000CCCCC011010 */
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

/* ps_muls1. FREG,FREG,FREG */
int ps_muls1D_FREG_FREG_FREG(uint32_t insword, struct ppc_decoded *dec)
{
	dec->properties |= PPC_PROPERTY_DOTTED;
	dec->mnemonic = PPC_MNEM_PS_MULS1;
	/* 000100AAAAABBBBB00000CCCCC011011 */
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

/* ps_madds0 FREG,FREG,FREG,FREG */
int ps_madds0_FREG_FREG_FREG_FREG(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_PS_MADDS0;
	/* 000100AAAAABBBBBDDDDDCCCCC011100 */
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

/* ps_madds0. FREG,FREG,FREG,FREG */
int ps_madds0D_FREG_FREG_FREG_FREG(uint32_t insword, struct ppc_decoded *dec)
{
	dec->properties |= PPC_PROPERTY_DOTTED;
	dec->mnemonic = PPC_MNEM_PS_MADDS0;
	/* 000100AAAAABBBBBDDDDDCCCCC011101 */
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

/* ps_madds1 FREG,FREG,FREG,FREG */
int ps_madds1_FREG_FREG_FREG_FREG(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_PS_MADDS1;
	/* 000100AAAAABBBBBDDDDDCCCCC011110 */
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

/* ps_madds1. FREG,FREG,FREG,FREG */
int ps_madds1D_FREG_FREG_FREG_FREG(uint32_t insword, struct ppc_decoded *dec)
{
	dec->properties |= PPC_PROPERTY_DOTTED;
	dec->mnemonic = PPC_MNEM_PS_MADDS1;
	/* 000100AAAAABBBBBDDDDDCCCCC011111 */
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

/* vmhaddshs VREG,VREG,VREG,VREG */
int vmhaddshs_VREG_VREG_VREG_VREG(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_VMHADDSHS;
	/* 000100AAAAABBBBBCCCCCDDDDD100000 */
	dec->operand_n = 4;
	dec->operand_types[0] = PPC_OPER_TYPE_VREG;
	dec->operand_values[0] = (insword & 0x3E00000)>>21;
	dec->operand_types[1] = PPC_OPER_TYPE_VREG;
	dec->operand_values[1] = (insword & 0x1F0000)>>16;
	dec->operand_types[2] = PPC_OPER_TYPE_VREG;
	dec->operand_values[2] = (insword & 0xF800)>>11;
	dec->operand_types[3] = PPC_OPER_TYPE_VREG;
	dec->operand_values[3] = (insword & 0x7C0)>>6;
	dec->operand_fmtstr = PPC_FMTSTR_VREG_C_VREG_C_VREG_C_VREG;
	return 0;
}

/* vmhraddshs VREG,VREG,VREG,VREG */
int vmhraddshs_VREG_VREG_VREG_VREG(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_VMHRADDSHS;
	/* 000100AAAAABBBBBCCCCCDDDDD100001 */
	dec->operand_n = 4;
	dec->operand_types[0] = PPC_OPER_TYPE_VREG;
	dec->operand_values[0] = (insword & 0x3E00000)>>21;
	dec->operand_types[1] = PPC_OPER_TYPE_VREG;
	dec->operand_values[1] = (insword & 0x1F0000)>>16;
	dec->operand_types[2] = PPC_OPER_TYPE_VREG;
	dec->operand_values[2] = (insword & 0xF800)>>11;
	dec->operand_types[3] = PPC_OPER_TYPE_VREG;
	dec->operand_values[3] = (insword & 0x7C0)>>6;
	dec->operand_fmtstr = PPC_FMTSTR_VREG_C_VREG_C_VREG_C_VREG;
	return 0;
}

/* vmladduhm VREG,VREG,VREG,VREG */
int vmladduhm_VREG_VREG_VREG_VREG(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_VMLADDUHM;
	/* 000100AAAAABBBBBCCCCCDDDDD100010 */
	dec->operand_n = 4;
	dec->operand_types[0] = PPC_OPER_TYPE_VREG;
	dec->operand_values[0] = (insword & 0x3E00000)>>21;
	dec->operand_types[1] = PPC_OPER_TYPE_VREG;
	dec->operand_values[1] = (insword & 0x1F0000)>>16;
	dec->operand_types[2] = PPC_OPER_TYPE_VREG;
	dec->operand_values[2] = (insword & 0xF800)>>11;
	dec->operand_types[3] = PPC_OPER_TYPE_VREG;
	dec->operand_values[3] = (insword & 0x7C0)>>6;
	dec->operand_fmtstr = PPC_FMTSTR_VREG_C_VREG_C_VREG_C_VREG;
	return 0;
}

/* vmsumudm VREG,VREG,VREG,VREG */
int vmsumudm_VREG_VREG_VREG_VREG(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_VMSUMUDM;
	/* 000100AAAAABBBBBCCCCCDDDDD100011 */
	dec->operand_n = 4;
	dec->operand_types[0] = PPC_OPER_TYPE_VREG;
	dec->operand_values[0] = (insword & 0x3E00000)>>21;
	dec->operand_types[1] = PPC_OPER_TYPE_VREG;
	dec->operand_values[1] = (insword & 0x1F0000)>>16;
	dec->operand_types[2] = PPC_OPER_TYPE_VREG;
	dec->operand_values[2] = (insword & 0xF800)>>11;
	dec->operand_types[3] = PPC_OPER_TYPE_VREG;
	dec->operand_values[3] = (insword & 0x7C0)>>6;
	dec->operand_fmtstr = PPC_FMTSTR_VREG_C_VREG_C_VREG_C_VREG;
	return 0;
}

/* vmsumubm VREG,VREG,VREG,VREG */
int vmsumubm_VREG_VREG_VREG_VREG(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_VMSUMUBM;
	/* 000100AAAAABBBBBCCCCCDDDDD100100 */
	dec->operand_n = 4;
	dec->operand_types[0] = PPC_OPER_TYPE_VREG;
	dec->operand_values[0] = (insword & 0x3E00000)>>21;
	dec->operand_types[1] = PPC_OPER_TYPE_VREG;
	dec->operand_values[1] = (insword & 0x1F0000)>>16;
	dec->operand_types[2] = PPC_OPER_TYPE_VREG;
	dec->operand_values[2] = (insword & 0xF800)>>11;
	dec->operand_types[3] = PPC_OPER_TYPE_VREG;
	dec->operand_values[3] = (insword & 0x7C0)>>6;
	dec->operand_fmtstr = PPC_FMTSTR_VREG_C_VREG_C_VREG_C_VREG;
	return 0;
}

/* vmsummbm VREG,VREG,VREG,VREG */
int vmsummbm_VREG_VREG_VREG_VREG(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_VMSUMMBM;
	/* 000100AAAAABBBBBCCCCCDDDDD100101 */
	dec->operand_n = 4;
	dec->operand_types[0] = PPC_OPER_TYPE_VREG;
	dec->operand_values[0] = (insword & 0x3E00000)>>21;
	dec->operand_types[1] = PPC_OPER_TYPE_VREG;
	dec->operand_values[1] = (insword & 0x1F0000)>>16;
	dec->operand_types[2] = PPC_OPER_TYPE_VREG;
	dec->operand_values[2] = (insword & 0xF800)>>11;
	dec->operand_types[3] = PPC_OPER_TYPE_VREG;
	dec->operand_values[3] = (insword & 0x7C0)>>6;
	dec->operand_fmtstr = PPC_FMTSTR_VREG_C_VREG_C_VREG_C_VREG;
	return 0;
}

/* vmsumuhm VREG,VREG,VREG,VREG */
int vmsumuhm_VREG_VREG_VREG_VREG(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_VMSUMUHM;
	/* 000100AAAAABBBBBCCCCCDDDDD100110 */
	dec->operand_n = 4;
	dec->operand_types[0] = PPC_OPER_TYPE_VREG;
	dec->operand_values[0] = (insword & 0x3E00000)>>21;
	dec->operand_types[1] = PPC_OPER_TYPE_VREG;
	dec->operand_values[1] = (insword & 0x1F0000)>>16;
	dec->operand_types[2] = PPC_OPER_TYPE_VREG;
	dec->operand_values[2] = (insword & 0xF800)>>11;
	dec->operand_types[3] = PPC_OPER_TYPE_VREG;
	dec->operand_values[3] = (insword & 0x7C0)>>6;
	dec->operand_fmtstr = PPC_FMTSTR_VREG_C_VREG_C_VREG_C_VREG;
	return 0;
}

/* vmsumuhs VREG,VREG,VREG,VREG */
int vmsumuhs_VREG_VREG_VREG_VREG(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_VMSUMUHS;
	/* 000100AAAAABBBBBCCCCCDDDDD100111 */
	dec->operand_n = 4;
	dec->operand_types[0] = PPC_OPER_TYPE_VREG;
	dec->operand_values[0] = (insword & 0x3E00000)>>21;
	dec->operand_types[1] = PPC_OPER_TYPE_VREG;
	dec->operand_values[1] = (insword & 0x1F0000)>>16;
	dec->operand_types[2] = PPC_OPER_TYPE_VREG;
	dec->operand_values[2] = (insword & 0xF800)>>11;
	dec->operand_types[3] = PPC_OPER_TYPE_VREG;
	dec->operand_values[3] = (insword & 0x7C0)>>6;
	dec->operand_fmtstr = PPC_FMTSTR_VREG_C_VREG_C_VREG_C_VREG;
	return 0;
}

/* vmsumshm VREG,VREG,VREG,VREG */
int vmsumshm_VREG_VREG_VREG_VREG(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_VMSUMSHM;
	/* 000100AAAAABBBBBCCCCCDDDDD101000 */
	dec->operand_n = 4;
	dec->operand_types[0] = PPC_OPER_TYPE_VREG;
	dec->operand_values[0] = (insword & 0x3E00000)>>21;
	dec->operand_types[1] = PPC_OPER_TYPE_VREG;
	dec->operand_values[1] = (insword & 0x1F0000)>>16;
	dec->operand_types[2] = PPC_OPER_TYPE_VREG;
	dec->operand_values[2] = (insword & 0xF800)>>11;
	dec->operand_types[3] = PPC_OPER_TYPE_VREG;
	dec->operand_values[3] = (insword & 0x7C0)>>6;
	dec->operand_fmtstr = PPC_FMTSTR_VREG_C_VREG_C_VREG_C_VREG;
	return 0;
}

/* vmsumshs VREG,VREG,VREG,VREG */
int vmsumshs_VREG_VREG_VREG_VREG(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_VMSUMSHS;
	/* 000100AAAAABBBBBCCCCCDDDDD101001 */
	dec->operand_n = 4;
	dec->operand_types[0] = PPC_OPER_TYPE_VREG;
	dec->operand_values[0] = (insword & 0x3E00000)>>21;
	dec->operand_types[1] = PPC_OPER_TYPE_VREG;
	dec->operand_values[1] = (insword & 0x1F0000)>>16;
	dec->operand_types[2] = PPC_OPER_TYPE_VREG;
	dec->operand_values[2] = (insword & 0xF800)>>11;
	dec->operand_types[3] = PPC_OPER_TYPE_VREG;
	dec->operand_values[3] = (insword & 0x7C0)>>6;
	dec->operand_fmtstr = PPC_FMTSTR_VREG_C_VREG_C_VREG_C_VREG;
	return 0;
}

/* vsel VREG,VREG,VREG,VREG */
int vsel_VREG_VREG_VREG_VREG(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_VSEL;
	/* 000100AAAAABBBBBCCCCCDDDDD101010 */
	dec->operand_n = 4;
	dec->operand_types[0] = PPC_OPER_TYPE_VREG;
	dec->operand_values[0] = (insword & 0x3E00000)>>21;
	dec->operand_types[1] = PPC_OPER_TYPE_VREG;
	dec->operand_values[1] = (insword & 0x1F0000)>>16;
	dec->operand_types[2] = PPC_OPER_TYPE_VREG;
	dec->operand_values[2] = (insword & 0xF800)>>11;
	dec->operand_types[3] = PPC_OPER_TYPE_VREG;
	dec->operand_values[3] = (insword & 0x7C0)>>6;
	dec->operand_fmtstr = PPC_FMTSTR_VREG_C_VREG_C_VREG_C_VREG;
	return 0;
}

/* vperm VREG,VREG,VREG,VREG */
int vperm_VREG_VREG_VREG_VREG(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_VPERM;
	/* 000100AAAAABBBBBCCCCCDDDDD101011 */
	dec->operand_n = 4;
	dec->operand_types[0] = PPC_OPER_TYPE_VREG;
	dec->operand_values[0] = (insword & 0x3E00000)>>21;
	dec->operand_types[1] = PPC_OPER_TYPE_VREG;
	dec->operand_values[1] = (insword & 0x1F0000)>>16;
	dec->operand_types[2] = PPC_OPER_TYPE_VREG;
	dec->operand_values[2] = (insword & 0xF800)>>11;
	dec->operand_types[3] = PPC_OPER_TYPE_VREG;
	dec->operand_values[3] = (insword & 0x7C0)>>6;
	dec->operand_fmtstr = PPC_FMTSTR_VREG_C_VREG_C_VREG_C_VREG;
	return 0;
}

/* vsldoi VREG,VREG,VREG,NUM */
int vsldoi_VREG_VREG_VREG_NUM(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_VSLDOI;
	/* 000100AAAAABBBBBCCCCC0DDDD101100 */
	dec->operand_n = 4;
	dec->operand_types[0] = PPC_OPER_TYPE_VREG;
	dec->operand_values[0] = (insword & 0x3E00000)>>21;
	dec->operand_types[1] = PPC_OPER_TYPE_VREG;
	dec->operand_values[1] = (insword & 0x1F0000)>>16;
	dec->operand_types[2] = PPC_OPER_TYPE_VREG;
	dec->operand_values[2] = (insword & 0xF800)>>11;
	dec->operand_types[3] = PPC_OPER_TYPE_NUM;
	dec->operand_values[3] = (insword & 0x3C0)>>6;
	dec->operand_fmtstr = PPC_FMTSTR_VREG_C_VREG_C_VREG_C_NUM;
	return 0;
}

/* vpermxor VREG,VREG,VREG,VREG */
int vpermxor_VREG_VREG_VREG_VREG(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_VPERMXOR;
	/* 000100AAAAABBBBBCCCCCDDDDD101101 */
	dec->operand_n = 4;
	dec->operand_types[0] = PPC_OPER_TYPE_VREG;
	dec->operand_values[0] = (insword & 0x3E00000)>>21;
	dec->operand_types[1] = PPC_OPER_TYPE_VREG;
	dec->operand_values[1] = (insword & 0x1F0000)>>16;
	dec->operand_types[2] = PPC_OPER_TYPE_VREG;
	dec->operand_values[2] = (insword & 0xF800)>>11;
	dec->operand_types[3] = PPC_OPER_TYPE_VREG;
	dec->operand_values[3] = (insword & 0x7C0)>>6;
	dec->operand_fmtstr = PPC_FMTSTR_VREG_C_VREG_C_VREG_C_VREG;
	return 0;
}

/* vmaddfp VREG,VREG,VREG,VREG */
int vmaddfp_VREG_VREG_VREG_VREG(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_VMADDFP;
	/* 000100AAAAABBBBBDDDDDCCCCC101110 */
	dec->operand_n = 4;
	dec->operand_types[0] = PPC_OPER_TYPE_VREG;
	dec->operand_values[0] = (insword & 0x3E00000)>>21;
	dec->operand_types[1] = PPC_OPER_TYPE_VREG;
	dec->operand_values[1] = (insword & 0x1F0000)>>16;
	dec->operand_types[2] = PPC_OPER_TYPE_VREG;
	dec->operand_values[2] = (insword & 0x7C0)>>6;
	dec->operand_types[3] = PPC_OPER_TYPE_VREG;
	dec->operand_values[3] = (insword & 0xF800)>>11;
	dec->operand_fmtstr = PPC_FMTSTR_VREG_C_VREG_C_VREG_C_VREG;
	return 0;
}

/* vnmsubfp VREG,VREG,VREG,VREG */
int vnmsubfp_VREG_VREG_VREG_VREG(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_VNMSUBFP;
	/* 000100AAAAABBBBBDDDDDCCCCC101111 */
	dec->operand_n = 4;
	dec->operand_types[0] = PPC_OPER_TYPE_VREG;
	dec->operand_values[0] = (insword & 0x3E00000)>>21;
	dec->operand_types[1] = PPC_OPER_TYPE_VREG;
	dec->operand_values[1] = (insword & 0x1F0000)>>16;
	dec->operand_types[2] = PPC_OPER_TYPE_VREG;
	dec->operand_values[2] = (insword & 0x7C0)>>6;
	dec->operand_types[3] = PPC_OPER_TYPE_VREG;
	dec->operand_values[3] = (insword & 0xF800)>>11;
	dec->operand_fmtstr = PPC_FMTSTR_VREG_C_VREG_C_VREG_C_VREG;
	return 0;
}

/* maddhd GPR,GPR,GPR,GPR */
int maddhd_GPR_GPR_GPR_GPR(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_MADDHD;
	/* 000100AAAAABBBBBCCCCCDDDDD110000 */
	dec->operand_n = 4;
	dec->operand_types[0] = PPC_OPER_TYPE_GPR;
	dec->operand_values[0] = (insword & 0x3E00000)>>21;
	dec->operand_types[1] = PPC_OPER_TYPE_GPR;
	dec->operand_values[1] = (insword & 0x1F0000)>>16;
	dec->operand_types[2] = PPC_OPER_TYPE_GPR;
	dec->operand_values[2] = (insword & 0xF800)>>11;
	dec->operand_types[3] = PPC_OPER_TYPE_GPR;
	dec->operand_values[3] = (insword & 0x7C0)>>6;
	dec->operand_fmtstr = PPC_FMTSTR_GPR_C_GPR_C_GPR_C_GPR;
	return 0;
}

/* maddhdu GPR,GPR,GPR,GPR */
int maddhdu_GPR_GPR_GPR_GPR(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_MADDHDU;
	/* 000100AAAAABBBBBCCCCCDDDDD110001 */
	dec->operand_n = 4;
	dec->operand_types[0] = PPC_OPER_TYPE_GPR;
	dec->operand_values[0] = (insword & 0x3E00000)>>21;
	dec->operand_types[1] = PPC_OPER_TYPE_GPR;
	dec->operand_values[1] = (insword & 0x1F0000)>>16;
	dec->operand_types[2] = PPC_OPER_TYPE_GPR;
	dec->operand_values[2] = (insword & 0xF800)>>11;
	dec->operand_types[3] = PPC_OPER_TYPE_GPR;
	dec->operand_values[3] = (insword & 0x7C0)>>6;
	dec->operand_fmtstr = PPC_FMTSTR_GPR_C_GPR_C_GPR_C_GPR;
	return 0;
}

/* ps_mul FREG,FREG,FREG */
int ps_mul_FREG_FREG_FREG(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_PS_MUL;
	/* 000100AAAAABBBBB00000CCCCC110010 */
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

/* maddld GPR,GPR,GPR,GPR */
int maddld_GPR_GPR_GPR_GPR(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_MADDLD;
	/* 000100AAAAABBBBBCCCCCDDDDD110011 */
	dec->operand_n = 4;
	dec->operand_types[0] = PPC_OPER_TYPE_GPR;
	dec->operand_values[0] = (insword & 0x3E00000)>>21;
	dec->operand_types[1] = PPC_OPER_TYPE_GPR;
	dec->operand_values[1] = (insword & 0x1F0000)>>16;
	dec->operand_types[2] = PPC_OPER_TYPE_GPR;
	dec->operand_values[2] = (insword & 0xF800)>>11;
	dec->operand_types[3] = PPC_OPER_TYPE_GPR;
	dec->operand_values[3] = (insword & 0x7C0)>>6;
	dec->operand_fmtstr = PPC_FMTSTR_GPR_C_GPR_C_GPR_C_GPR;
	return 0;
}

/* ps_rsqrte FREG,FREG */
int ps_rsqrte_FREG_FREG(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_PS_RSQRTE;
	/* 000100AAAAA00000BBBBB00000110100 */
	dec->operand_n = 2;
	dec->operand_types[0] = PPC_OPER_TYPE_FREG;
	dec->operand_values[0] = (insword & 0x3E00000)>>21;
	dec->operand_types[1] = PPC_OPER_TYPE_FREG;
	dec->operand_values[1] = (insword & 0xF800)>>11;
	dec->operand_fmtstr = PPC_FMTSTR_FREG_C_FREG;
	return 0;
}

/* ps_rsqrte. FREG,FREG */
int ps_rsqrteD_FREG_FREG(uint32_t insword, struct ppc_decoded *dec)
{
	dec->properties |= PPC_PROPERTY_DOTTED;
	dec->mnemonic = PPC_MNEM_PS_RSQRTE;
	/* 000100AAAAA00000BBBBB00000110101 */
	dec->operand_n = 2;
	dec->operand_types[0] = PPC_OPER_TYPE_FREG;
	dec->operand_values[0] = (insword & 0x3E00000)>>21;
	dec->operand_types[1] = PPC_OPER_TYPE_FREG;
	dec->operand_values[1] = (insword & 0xF800)>>11;
	dec->operand_fmtstr = PPC_FMTSTR_FREG_C_FREG;
	return 0;
}

/* ps_msub FREG,FREG,FREG,FREG */
int ps_msub_FREG_FREG_FREG_FREG(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_PS_MSUB;
	/* 000100AAAAABBBBBDDDDDCCCCC111000 */
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

/* ps_msub. FREG,FREG,FREG,FREG */
int ps_msubD_FREG_FREG_FREG_FREG(uint32_t insword, struct ppc_decoded *dec)
{
	dec->properties |= PPC_PROPERTY_DOTTED;
	dec->mnemonic = PPC_MNEM_PS_MSUB;
	/* 000100AAAAABBBBBDDDDDCCCCC111001 */
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

/* ps_madd FREG,FREG,FREG,FREG */
int ps_madd_FREG_FREG_FREG_FREG(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_PS_MADD;
	/* 000100AAAAABBBBBDDDDDCCCCC111010 */
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

/* vpermr VREG,VREG,VREG,VREG */
int vpermr_VREG_VREG_VREG_VREG(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_VPERMR;
	/* 000100AAAAABBBBBCCCCCDDDDD111011 */
	dec->operand_n = 4;
	dec->operand_types[0] = PPC_OPER_TYPE_VREG;
	dec->operand_values[0] = (insword & 0x3E00000)>>21;
	dec->operand_types[1] = PPC_OPER_TYPE_VREG;
	dec->operand_values[1] = (insword & 0x1F0000)>>16;
	dec->operand_types[2] = PPC_OPER_TYPE_VREG;
	dec->operand_values[2] = (insword & 0xF800)>>11;
	dec->operand_types[3] = PPC_OPER_TYPE_VREG;
	dec->operand_values[3] = (insword & 0x7C0)>>6;
	dec->operand_fmtstr = PPC_FMTSTR_VREG_C_VREG_C_VREG_C_VREG;
	return 0;
}

/* vaddeuqm VREG,VREG,VREG,VREG */
int vaddeuqm_VREG_VREG_VREG_VREG(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_VADDEUQM;
	/* 000100AAAAABBBBBCCCCCDDDDD111100 */
	dec->operand_n = 4;
	dec->operand_types[0] = PPC_OPER_TYPE_VREG;
	dec->operand_values[0] = (insword & 0x3E00000)>>21;
	dec->operand_types[1] = PPC_OPER_TYPE_VREG;
	dec->operand_values[1] = (insword & 0x1F0000)>>16;
	dec->operand_types[2] = PPC_OPER_TYPE_VREG;
	dec->operand_values[2] = (insword & 0xF800)>>11;
	dec->operand_types[3] = PPC_OPER_TYPE_VREG;
	dec->operand_values[3] = (insword & 0x7C0)>>6;
	dec->operand_fmtstr = PPC_FMTSTR_VREG_C_VREG_C_VREG_C_VREG;
	return 0;
}

/* vaddecuq VREG,VREG,VREG,VREG */
int vaddecuq_VREG_VREG_VREG_VREG(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_VADDECUQ;
	/* 000100AAAAABBBBBCCCCCDDDDD111101 */
	dec->operand_n = 4;
	dec->operand_types[0] = PPC_OPER_TYPE_VREG;
	dec->operand_values[0] = (insword & 0x3E00000)>>21;
	dec->operand_types[1] = PPC_OPER_TYPE_VREG;
	dec->operand_values[1] = (insword & 0x1F0000)>>16;
	dec->operand_types[2] = PPC_OPER_TYPE_VREG;
	dec->operand_values[2] = (insword & 0xF800)>>11;
	dec->operand_types[3] = PPC_OPER_TYPE_VREG;
	dec->operand_values[3] = (insword & 0x7C0)>>6;
	dec->operand_fmtstr = PPC_FMTSTR_VREG_C_VREG_C_VREG_C_VREG;
	return 0;
}

/* vsubeuqm VREG,VREG,VREG,VREG */
int vsubeuqm_VREG_VREG_VREG_VREG(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_VSUBEUQM;
	/* 000100AAAAABBBBBCCCCCDDDDD111110 */
	dec->operand_n = 4;
	dec->operand_types[0] = PPC_OPER_TYPE_VREG;
	dec->operand_values[0] = (insword & 0x3E00000)>>21;
	dec->operand_types[1] = PPC_OPER_TYPE_VREG;
	dec->operand_values[1] = (insword & 0x1F0000)>>16;
	dec->operand_types[2] = PPC_OPER_TYPE_VREG;
	dec->operand_values[2] = (insword & 0xF800)>>11;
	dec->operand_types[3] = PPC_OPER_TYPE_VREG;
	dec->operand_values[3] = (insword & 0x7C0)>>6;
	dec->operand_fmtstr = PPC_FMTSTR_VREG_C_VREG_C_VREG_C_VREG;
	return 0;
}

/* vsubecuq VREG,VREG,VREG,VREG */
int vsubecuq_VREG_VREG_VREG_VREG(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_VSUBECUQ;
	/* 000100AAAAABBBBBCCCCCDDDDD111111 */
	dec->operand_n = 4;
	dec->operand_types[0] = PPC_OPER_TYPE_VREG;
	dec->operand_values[0] = (insword & 0x3E00000)>>21;
	dec->operand_types[1] = PPC_OPER_TYPE_VREG;
	dec->operand_values[1] = (insword & 0x1F0000)>>16;
	dec->operand_types[2] = PPC_OPER_TYPE_VREG;
	dec->operand_values[2] = (insword & 0xF800)>>11;
	dec->operand_types[3] = PPC_OPER_TYPE_VREG;
	dec->operand_values[3] = (insword & 0x7C0)>>6;
	dec->operand_fmtstr = PPC_FMTSTR_VREG_C_VREG_C_VREG_C_VREG;
	return 0;
}

/* vadduhm VREG,VREG,VREG */
int vadduhm_VREG_VREG_VREG(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_VADDUHM;
	/* 000100AAAAABBBBBCCCCC00001000000 */
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

/* vmul10ecuq VREG,VREG,VREG */
int vmul10ecuq_VREG_VREG_VREG(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_VMUL10ECUQ;
	/* 000100AAAAABBBBBCCCCC00001000001 */
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

/* vmaxuh VREG,VREG,VREG */
int vmaxuh_VREG_VREG_VREG(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_VMAXUH;
	/* 000100AAAAABBBBBCCCCC00001000010 */
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

/* vrlh VREG,VREG,VREG */
int vrlh_VREG_VREG_VREG(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_VRLH;
	/* 000100AAAAABBBBBCCCCC00001000100 */
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

/* vcmpequh VREG,VREG,VREG */
int vcmpequh_VREG_VREG_VREG(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_VCMPEQUH;
	/* 000100AAAAABBBBBCCCCC00001000110 */
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

/* vcmpneh VREG,VREG,VREG */
int vcmpneh_VREG_VREG_VREG(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_VCMPNEH;
	/* 000100AAAAABBBBBCCCCC00001000111 */
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

/* vmulouh VREG,VREG,VREG */
int vmulouh_VREG_VREG_VREG(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_VMULOUH;
	/* 000100AAAAABBBBBCCCCC00001001000 */
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

/* vsubfp VREG,VREG,VREG */
int vsubfp_VREG_VREG_VREG(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_VSUBFP;
	/* 000100AAAAABBBBBCCCCC00001001010 */
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

/* vmrghh VREG,VREG,VREG */
int vmrghh_VREG_VREG_VREG(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_VMRGHH;
	/* 000100AAAAABBBBBCCCCC00001001100 */
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

/* vpkuwum VREG,VREG,VREG */
int vpkuwum_VREG_VREG_VREG(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_VPKUWUM;
	/* 000100AAAAABBBBBCCCCC00001001110 */
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

/* ps_neg FREG,FREG */
int ps_neg_FREG_FREG(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_PS_NEG;
	/* 000100AAAAA00000BBBBB00001010000 */
	dec->operand_n = 2;
	dec->operand_types[0] = PPC_OPER_TYPE_FREG;
	dec->operand_values[0] = (insword & 0x3E00000)>>21;
	dec->operand_types[1] = PPC_OPER_TYPE_FREG;
	dec->operand_values[1] = (insword & 0xF800)>>11;
	dec->operand_fmtstr = PPC_FMTSTR_FREG_C_FREG;
	return 0;
}

/* ps_neg. FREG,FREG */
int ps_negD_FREG_FREG(uint32_t insword, struct ppc_decoded *dec)
{
	dec->properties |= PPC_PROPERTY_DOTTED;
	dec->mnemonic = PPC_MNEM_PS_NEG;
	/* 000100AAAAA00000BBBBB00001010001 */
	dec->operand_n = 2;
	dec->operand_types[0] = PPC_OPER_TYPE_FREG;
	dec->operand_values[0] = (insword & 0x3E00000)>>21;
	dec->operand_types[1] = PPC_OPER_TYPE_FREG;
	dec->operand_values[1] = (insword & 0xF800)>>11;
	dec->operand_fmtstr = PPC_FMTSTR_FREG_C_FREG;
	return 0;
}

/* vadduwm VREG,VREG,VREG */
int vadduwm_VREG_VREG_VREG(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_VADDUWM;
	/* 000100AAAAABBBBBCCCCC00010000000 */
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

/* vmaxuw VREG,VREG,VREG */
int vmaxuw_VREG_VREG_VREG(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_VMAXUW;
	/* 000100AAAAABBBBBCCCCC00010000010 */
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

/* vrlw VREG,VREG,VREG */
int vrlw_VREG_VREG_VREG(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_VRLW;
	/* 000100AAAAABBBBBCCCCC00010000100 */
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

/* vrlwmi VREG,VREG,VREG */
int vrlwmi_VREG_VREG_VREG(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_VRLWMI;
	/* 000100AAAAABBBBBCCCCC00010000101 */
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

/* vcmpequw VREG,VREG,VREG */
int vcmpequw_VREG_VREG_VREG(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_VCMPEQUW;
	/* 000100AAAAABBBBBCCCCC00010000110 */
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

/* vcmpnew VREG,VREG,VREG */
int vcmpnew_VREG_VREG_VREG(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_VCMPNEW;
	/* 000100AAAAABBBBBCCCCC00010000111 */
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

/* vmulouw VREG,VREG,VREG */
int vmulouw_VREG_VREG_VREG(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_VMULOUW;
	/* 000100AAAAABBBBBCCCCC00010001000 */
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

/* vmuluwm VREG,VREG,VREG */
int vmuluwm_VREG_VREG_VREG(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_VMULUWM;
	/* 000100AAAAABBBBBCCCCC00010001001 */
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

/* vmrghw VREG,VREG,VREG */
int vmrghw_VREG_VREG_VREG(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_VMRGHW;
	/* 000100AAAAABBBBBCCCCC00010001100 */
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

/* vpkuhus VREG,VREG,VREG */
int vpkuhus_VREG_VREG_VREG(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_VPKUHUS;
	/* 000100AAAAABBBBBCCCCC00010001110 */
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

/* ps_mr FREG,FREG */
int ps_mr_FREG_FREG(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_PS_MR;
	/* 000100AAAAA00000BBBBB00010010000 */
	dec->operand_n = 2;
	dec->operand_types[0] = PPC_OPER_TYPE_FREG;
	dec->operand_values[0] = (insword & 0x3E00000)>>21;
	dec->operand_types[1] = PPC_OPER_TYPE_FREG;
	dec->operand_values[1] = (insword & 0xF800)>>11;
	dec->operand_fmtstr = PPC_FMTSTR_FREG_C_FREG;
	return 0;
}

/* ps_mr. FREG,FREG */
int ps_mrD_FREG_FREG(uint32_t insword, struct ppc_decoded *dec)
{
	dec->properties |= PPC_PROPERTY_DOTTED;
	dec->mnemonic = PPC_MNEM_PS_MR;
	/* 000100AAAAA00000BBBBB00010010001 */
	dec->operand_n = 2;
	dec->operand_types[0] = PPC_OPER_TYPE_FREG;
	dec->operand_values[0] = (insword & 0x3E00000)>>21;
	dec->operand_types[1] = PPC_OPER_TYPE_FREG;
	dec->operand_values[1] = (insword & 0xF800)>>11;
	dec->operand_fmtstr = PPC_FMTSTR_FREG_C_FREG;
	return 0;
}

/* vaddudm VREG,VREG,VREG */
int vaddudm_VREG_VREG_VREG(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_VADDUDM;
	/* 000100AAAAABBBBBCCCCC00011000000 */
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

/* vmaxud VREG,VREG,VREG */
int vmaxud_VREG_VREG_VREG(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_VMAXUD;
	/* 000100AAAAABBBBBCCCCC00011000010 */
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

/* vrld VREG,VREG,VREG */
int vrld_VREG_VREG_VREG(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_VRLD;
	/* 000100AAAAABBBBBCCCCC00011000100 */
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

/* vrldmi VREG,VREG,VREG */
int vrldmi_VREG_VREG_VREG(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_VRLDMI;
	/* 000100AAAAABBBBBCCCCC00011000101 */
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

/* vcmpeqfp VREG,VREG,VREG */
int vcmpeqfp_VREG_VREG_VREG(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_VCMPEQFP;
	/* 000100AAAAABBBBBCCCCC00011000110 */
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

/* vcmpequd VREG,VREG,VREG */
int vcmpequd_VREG_VREG_VREG(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_VCMPEQUD;
	/* 000100AAAAABBBBBCCCCC00011000111 */
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

/* vpkuwus VREG,VREG,VREG */
int vpkuwus_VREG_VREG_VREG(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_VPKUWUS;
	/* 000100AAAAABBBBBCCCCC00011001110 */
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

/* vadduqm VREG,VREG,VREG */
int vadduqm_VREG_VREG_VREG(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_VADDUQM;
	/* 000100AAAAABBBBBCCCCC00100000000 */
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

/* vmaxsb VREG,VREG,VREG */
int vmaxsb_VREG_VREG_VREG(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_VMAXSB;
	/* 000100AAAAABBBBBCCCCC00100000010 */
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

/* vslb VREG,VREG,VREG */
int vslb_VREG_VREG_VREG(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_VSLB;
	/* 000100AAAAABBBBBCCCCC00100000100 */
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

/* vcmpnezb VREG,VREG,VREG */
int vcmpnezb_VREG_VREG_VREG(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_VCMPNEZB;
	/* 000100AAAAABBBBBCCCCC00100000111 */
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

/* vmulosb VREG,VREG,VREG */
int vmulosb_VREG_VREG_VREG(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_VMULOSB;
	/* 000100AAAAABBBBBCCCCC00100001000 */
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

/* vrefp VREG,VREG */
int vrefp_VREG_VREG(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_VREFP;
	/* 000100AAAAA00000BBBBB00100001010 */
	dec->operand_n = 2;
	dec->operand_types[0] = PPC_OPER_TYPE_VREG;
	dec->operand_values[0] = (insword & 0x3E00000)>>21;
	dec->operand_types[1] = PPC_OPER_TYPE_VREG;
	dec->operand_values[1] = (insword & 0xF800)>>11;
	dec->operand_fmtstr = PPC_FMTSTR_VREG_C_VREG;
	return 0;
}

/* vmrglb VREG,VREG,VREG */
int vmrglb_VREG_VREG_VREG(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_VMRGLB;
	/* 000100AAAAABBBBBCCCCC00100001100 */
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

/* vpkshus VREG,VREG,VREG */
int vpkshus_VREG_VREG_VREG(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_VPKSHUS;
	/* 000100AAAAABBBBBCCCCC00100001110 */
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

/* ps_nabs FREG,FREG */
int ps_nabs_FREG_FREG(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_PS_NABS;
	/* 000100AAAAA00000BBBBB00100010000 */
	dec->operand_n = 2;
	dec->operand_types[0] = PPC_OPER_TYPE_FREG;
	dec->operand_values[0] = (insword & 0x3E00000)>>21;
	dec->operand_types[1] = PPC_OPER_TYPE_FREG;
	dec->operand_values[1] = (insword & 0xF800)>>11;
	dec->operand_fmtstr = PPC_FMTSTR_FREG_C_FREG;
	return 0;
}

/* ps_nabs. FREG,FREG */
int ps_nabsD_FREG_FREG(uint32_t insword, struct ppc_decoded *dec)
{
	dec->properties |= PPC_PROPERTY_DOTTED;
	dec->mnemonic = PPC_MNEM_PS_NABS;
	/* 000100AAAAA00000BBBBB00100010001 */
	dec->operand_n = 2;
	dec->operand_types[0] = PPC_OPER_TYPE_FREG;
	dec->operand_values[0] = (insword & 0x3E00000)>>21;
	dec->operand_types[1] = PPC_OPER_TYPE_FREG;
	dec->operand_values[1] = (insword & 0xF800)>>11;
	dec->operand_fmtstr = PPC_FMTSTR_FREG_C_FREG;
	return 0;
}

/* vaddcuq VREG,VREG,VREG */
int vaddcuq_VREG_VREG_VREG(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_VADDCUQ;
	/* 000100AAAAABBBBBCCCCC00101000000 */
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

/* vmaxsh VREG,VREG,VREG */
int vmaxsh_VREG_VREG_VREG(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_VMAXSH;
	/* 000100AAAAABBBBBCCCCC00101000010 */
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

/* vslh VREG,VREG,VREG */
int vslh_VREG_VREG_VREG(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_VSLH;
	/* 000100AAAAABBBBBCCCCC00101000100 */
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

/* vcmpnezh VREG,VREG,VREG */
int vcmpnezh_VREG_VREG_VREG(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_VCMPNEZH;
	/* 000100AAAAABBBBBCCCCC00101000111 */
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

/* vmulosh VREG,VREG,VREG */
int vmulosh_VREG_VREG_VREG(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_VMULOSH;
	/* 000100AAAAABBBBBCCCCC00101001000 */
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

/* vrsqrtefp VREG,VREG */
int vrsqrtefp_VREG_VREG(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_VRSQRTEFP;
	/* 000100AAAAA00000BBBBB00101001010 */
	dec->operand_n = 2;
	dec->operand_types[0] = PPC_OPER_TYPE_VREG;
	dec->operand_values[0] = (insword & 0x3E00000)>>21;
	dec->operand_types[1] = PPC_OPER_TYPE_VREG;
	dec->operand_values[1] = (insword & 0xF800)>>11;
	dec->operand_fmtstr = PPC_FMTSTR_VREG_C_VREG;
	return 0;
}

/* vmrglh VREG,VREG,VREG */
int vmrglh_VREG_VREG_VREG(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_VMRGLH;
	/* 000100AAAAABBBBBCCCCC00101001100 */
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

/* vpkswus VREG,VREG,VREG */
int vpkswus_VREG_VREG_VREG(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_VPKSWUS;
	/* 000100AAAAABBBBBCCCCC00101001110 */
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

/* mulchw GPR,GPR,GPR */
int mulchw_GPR_GPR_GPR(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_MULCHW;
	/* 000100AAAAABBBBBCCCCC00101010000 */
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

/* mulchw. GPR,GPR,GPR */
int mulchwD_GPR_GPR_GPR(uint32_t insword, struct ppc_decoded *dec)
{
	dec->properties |= PPC_PROPERTY_DOTTED;
	dec->mnemonic = PPC_MNEM_MULCHW;
	/* 000100AAAAABBBBBCCCCC00101010001 */
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

/* vaddcuw VREG,VREG,VREG */
int vaddcuw_VREG_VREG_VREG(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_VADDCUW;
	/* 000100AAAAABBBBBCCCCC00110000000 */
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

/* vmaxsw VREG,VREG,VREG */
int vmaxsw_VREG_VREG_VREG(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_VMAXSW;
	/* 000100AAAAABBBBBCCCCC00110000010 */
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

/* vslw VREG,VREG,VREG */
int vslw_VREG_VREG_VREG(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_VSLW;
	/* 000100AAAAABBBBBCCCCC00110000100 */
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

/* vrlwnm VREG,VREG,VREG */
int vrlwnm_VREG_VREG_VREG(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_VRLWNM;
	/* 000100AAAAABBBBBCCCCC00110000101 */
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

/* vcmpnezw VREG,VREG,VREG */
int vcmpnezw_VREG_VREG_VREG(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_VCMPNEZW;
	/* 000100AAAAABBBBBCCCCC00110000111 */
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

/* vmulosw VREG,VREG,VREG */
int vmulosw_VREG_VREG_VREG(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_VMULOSW;
	/* 000100AAAAABBBBBCCCCC00110001000 */
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

/* vexptefp VREG,VREG */
int vexptefp_VREG_VREG(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_VEXPTEFP;
	/* 000100AAAAA00000BBBBB00110001010 */
	dec->operand_n = 2;
	dec->operand_types[0] = PPC_OPER_TYPE_VREG;
	dec->operand_values[0] = (insword & 0x3E00000)>>21;
	dec->operand_types[1] = PPC_OPER_TYPE_VREG;
	dec->operand_values[1] = (insword & 0xF800)>>11;
	dec->operand_fmtstr = PPC_FMTSTR_VREG_C_VREG;
	return 0;
}

/* vmrglw VREG,VREG,VREG */
int vmrglw_VREG_VREG_VREG(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_VMRGLW;
	/* 000100AAAAABBBBBCCCCC00110001100 */
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

/* vpkshss VREG,VREG,VREG */
int vpkshss_VREG_VREG_VREG(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_VPKSHSS;
	/* 000100AAAAABBBBBCCCCC00110001110 */
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

/* vmaxsd VREG,VREG,VREG */
int vmaxsd_VREG_VREG_VREG(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_VMAXSD;
	/* 000100AAAAABBBBBCCCCC00111000010 */
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

/* vsl VREG,VREG,VREG */
int vsl_VREG_VREG_VREG(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_VSL;
	/* 000100AAAAABBBBBCCCCC00111000100 */
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

/* vrldnm VREG,VREG,VREG */
int vrldnm_VREG_VREG_VREG(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_VRLDNM;
	/* 000100AAAAABBBBBCCCCC00111000101 */
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

/* vcmpgefp VREG,VREG,VREG */
int vcmpgefp_VREG_VREG_VREG(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_VCMPGEFP;
	/* 000100AAAAABBBBBCCCCC00111000110 */
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

/* vlogefp VREG,VREG */
int vlogefp_VREG_VREG(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_VLOGEFP;
	/* 000100AAAAA00000BBBBB00111001010 */
	dec->operand_n = 2;
	dec->operand_types[0] = PPC_OPER_TYPE_VREG;
	dec->operand_values[0] = (insword & 0x3E00000)>>21;
	dec->operand_types[1] = PPC_OPER_TYPE_VREG;
	dec->operand_values[1] = (insword & 0xF800)>>11;
	dec->operand_fmtstr = PPC_FMTSTR_VREG_C_VREG;
	return 0;
}

/* vpkswss VREG,VREG,VREG */
int vpkswss_VREG_VREG_VREG(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_VPKSWSS;
	/* 000100AAAAABBBBBCCCCC00111001110 */
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

/* vaddubs VREG,VREG,VREG */
int vaddubs_VREG_VREG_VREG(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_VADDUBS;
	/* 000100AAAAABBBBBCCCCC01000000000 */
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

/* vmul10uq VREG,VREG */
int vmul10uq_VREG_VREG(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_VMUL10UQ;
	/* 000100AAAAABBBBB0000001000000001 */
	dec->operand_n = 2;
	dec->operand_types[0] = PPC_OPER_TYPE_VREG;
	dec->operand_values[0] = (insword & 0x3E00000)>>21;
	dec->operand_types[1] = PPC_OPER_TYPE_VREG;
	dec->operand_values[1] = (insword & 0x1F0000)>>16;
	dec->operand_fmtstr = PPC_FMTSTR_VREG_C_VREG;
	return 0;
}

/* vminub VREG,VREG,VREG */
int vminub_VREG_VREG_VREG(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_VMINUB;
	/* 000100AAAAABBBBBCCCCC01000000010 */
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

/* vsrb VREG,VREG,VREG */
int vsrb_VREG_VREG_VREG(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_VSRB;
	/* 000100AAAAABBBBBCCCCC01000000100 */
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

/* vcmpgtub VREG,VREG,VREG */
int vcmpgtub_VREG_VREG_VREG(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_VCMPGTUB;
	/* 000100AAAAABBBBBCCCCC01000000110 */
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

/* vmuleub VREG,VREG,VREG */
int vmuleub_VREG_VREG_VREG(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_VMULEUB;
	/* 000100AAAAABBBBBCCCCC01000001000 */
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

/* evneg GPR,GPR */
int evneg_GPR_GPR(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_EVNEG;
	/* 000100AAAAABBBBBxxxxx01000001001 */
	dec->operand_n = 2;
	dec->operand_types[0] = PPC_OPER_TYPE_GPR;
	dec->operand_values[0] = (insword & 0x3E00000)>>21;
	dec->operand_types[1] = PPC_OPER_TYPE_GPR;
	dec->operand_values[1] = (insword & 0x1F0000)>>16;
	dec->operand_fmtstr = PPC_FMTSTR_GPR_C_GPR;
	return 0;
}

/* vrfin VREG,VREG */
int vrfin_VREG_VREG(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_VRFIN;
	/* 000100AAAAA00000BBBBB01000001010 */
	dec->operand_n = 2;
	dec->operand_types[0] = PPC_OPER_TYPE_VREG;
	dec->operand_values[0] = (insword & 0x3E00000)>>21;
	dec->operand_types[1] = PPC_OPER_TYPE_VREG;
	dec->operand_values[1] = (insword & 0xF800)>>11;
	dec->operand_fmtstr = PPC_FMTSTR_VREG_C_VREG;
	return 0;
}

/* evextsh GPR,GPR */
int evextsh_GPR_GPR(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_EVEXTSH;
	/* 000100AAAAABBBBBxxxxx01000001011 */
	dec->operand_n = 2;
	dec->operand_types[0] = PPC_OPER_TYPE_GPR;
	dec->operand_values[0] = (insword & 0x3E00000)>>21;
	dec->operand_types[1] = PPC_OPER_TYPE_GPR;
	dec->operand_values[1] = (insword & 0x1F0000)>>16;
	dec->operand_fmtstr = PPC_FMTSTR_GPR_C_GPR;
	return 0;
}

/* vspltb VREG,VREG,NUM */
int vspltb_VREG_VREG_NUM(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_VSPLTB;
	/* 000100AAAAA0CCCCBBBBB01000001100 */
	dec->operand_n = 3;
	dec->operand_types[0] = PPC_OPER_TYPE_VREG;
	dec->operand_values[0] = (insword & 0x3E00000)>>21;
	dec->operand_types[1] = PPC_OPER_TYPE_VREG;
	dec->operand_values[1] = (insword & 0xF800)>>11;
	dec->operand_types[2] = PPC_OPER_TYPE_NUM;
	dec->operand_values[2] = (insword & 0xF0000)>>16;
	dec->operand_fmtstr = PPC_FMTSTR_VREG_C_VREG_C_NUM;
	return 0;
}

/* vextractub VREG,VREG,NUM */
int vextractub_VREG_VREG_NUM(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_VEXTRACTUB;
	/* 000100AAAAA0CCCCBBBBB01000001101 */
	dec->operand_n = 3;
	dec->operand_types[0] = PPC_OPER_TYPE_VREG;
	dec->operand_values[0] = (insword & 0x3E00000)>>21;
	dec->operand_types[1] = PPC_OPER_TYPE_VREG;
	dec->operand_values[1] = (insword & 0xF800)>>11;
	dec->operand_types[2] = PPC_OPER_TYPE_NUM;
	dec->operand_values[2] = (insword & 0xF0000)>>16;
	dec->operand_fmtstr = PPC_FMTSTR_VREG_C_VREG_C_NUM;
	return 0;
}

/* vupkhsb VREG,VREG */
int vupkhsb_VREG_VREG(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_VUPKHSB;
	/* 000100AAAAA00000BBBBB01000001110 */
	dec->operand_n = 2;
	dec->operand_types[0] = PPC_OPER_TYPE_VREG;
	dec->operand_values[0] = (insword & 0x3E00000)>>21;
	dec->operand_types[1] = PPC_OPER_TYPE_VREG;
	dec->operand_values[1] = (insword & 0xF800)>>11;
	dec->operand_fmtstr = PPC_FMTSTR_VREG_C_VREG;
	return 0;
}

/* ps_abs FREG,FREG */
int ps_abs_FREG_FREG(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_PS_ABS;
	/* 000100AAAAA00000BBBBB01000010000 */
	dec->operand_n = 2;
	dec->operand_types[0] = PPC_OPER_TYPE_FREG;
	dec->operand_values[0] = (insword & 0x3E00000)>>21;
	dec->operand_types[1] = PPC_OPER_TYPE_FREG;
	dec->operand_values[1] = (insword & 0xF800)>>11;
	dec->operand_fmtstr = PPC_FMTSTR_FREG_C_FREG;
	return 0;
}

/* ps_abs. FREG,FREG */
int ps_absD_FREG_FREG(uint32_t insword, struct ppc_decoded *dec)
{
	dec->properties |= PPC_PROPERTY_DOTTED;
	dec->mnemonic = PPC_MNEM_PS_ABS;
	/* 000100AAAAA00000BBBBB01000010001 */
	dec->operand_n = 2;
	dec->operand_types[0] = PPC_OPER_TYPE_FREG;
	dec->operand_values[0] = (insword & 0x3E00000)>>21;
	dec->operand_types[1] = PPC_OPER_TYPE_FREG;
	dec->operand_values[1] = (insword & 0xF800)>>11;
	dec->operand_fmtstr = PPC_FMTSTR_FREG_C_FREG;
	return 0;
}

/* evandc GPR,GPR,GPR */
int evandc_GPR_GPR_GPR(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_EVANDC;
	/* 000100AAAAABBBBBCCCCC01000010010 */
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

/* evcmpeq CREG,GPR,GPR */
int evcmpeq_CREG_GPR_GPR(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_EVCMPEQ;
	/* 000100AAAxxBBBBBCCCCC01000110100 */
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

/* vadduhs VREG,VREG,VREG */
int vadduhs_VREG_VREG_VREG(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_VADDUHS;
	/* 000100AAAAABBBBBCCCCC01001000000 */
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

/* vmul10euq VREG,VREG,VREG */
int vmul10euq_VREG_VREG_VREG(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_VMUL10EUQ;
	/* 000100AAAAABBBBBCCCCC01001000001 */
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

/* vminuh VREG,VREG,VREG */
int vminuh_VREG_VREG_VREG(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_VMINUH;
	/* 000100AAAAABBBBBCCCCC01001000010 */
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

/* vsrh VREG,VREG,VREG */
int vsrh_VREG_VREG_VREG(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_VSRH;
	/* 000100AAAAABBBBBCCCCC01001000100 */
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

/* vcmpgtuh VREG,VREG,VREG */
int vcmpgtuh_VREG_VREG_VREG(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_VCMPGTUH;
	/* 000100AAAAABBBBBCCCCC01001000110 */
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

/* vmuleuh VREG,VREG,VREG */
int vmuleuh_VREG_VREG_VREG(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_VMULEUH;
	/* 000100AAAAABBBBBCCCCC01001001000 */
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

/* vrfiz VREG,VREG */
int vrfiz_VREG_VREG(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_VRFIZ;
	/* 000100AAAAA00000BBBBB01001001010 */
	dec->operand_n = 2;
	dec->operand_types[0] = PPC_OPER_TYPE_VREG;
	dec->operand_values[0] = (insword & 0x3E00000)>>21;
	dec->operand_types[1] = PPC_OPER_TYPE_VREG;
	dec->operand_values[1] = (insword & 0xF800)>>11;
	dec->operand_fmtstr = PPC_FMTSTR_VREG_C_VREG;
	return 0;
}

/* vsplth VREG,VREG,NUM */
int vsplth_VREG_VREG_NUM(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_VSPLTH;
	/* 000100AAAAA00CCCBBBBB01001001100 */
	dec->operand_n = 3;
	dec->operand_types[0] = PPC_OPER_TYPE_VREG;
	dec->operand_values[0] = (insword & 0x3E00000)>>21;
	dec->operand_types[1] = PPC_OPER_TYPE_VREG;
	dec->operand_values[1] = (insword & 0xF800)>>11;
	dec->operand_types[2] = PPC_OPER_TYPE_NUM;
	dec->operand_values[2] = (insword & 0x70000)>>16;
	dec->operand_fmtstr = PPC_FMTSTR_VREG_C_VREG_C_NUM;
	return 0;
}

/* vextractuh VREG,VREG,NUM */
int vextractuh_VREG_VREG_NUM(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_VEXTRACTUH;
	/* 000100AAAAA0CCCCBBBBB01001001101 */
	dec->operand_n = 3;
	dec->operand_types[0] = PPC_OPER_TYPE_VREG;
	dec->operand_values[0] = (insword & 0x3E00000)>>21;
	dec->operand_types[1] = PPC_OPER_TYPE_VREG;
	dec->operand_values[1] = (insword & 0xF800)>>11;
	dec->operand_types[2] = PPC_OPER_TYPE_NUM;
	dec->operand_values[2] = (insword & 0xF0000)>>16;
	dec->operand_fmtstr = PPC_FMTSTR_VREG_C_VREG_C_NUM;
	return 0;
}

/* vupkhsh VREG,VREG */
int vupkhsh_VREG_VREG(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_VUPKHSH;
	/* 000100AAAAA00000BBBBB01001001110 */
	dec->operand_n = 2;
	dec->operand_types[0] = PPC_OPER_TYPE_VREG;
	dec->operand_values[0] = (insword & 0x3E00000)>>21;
	dec->operand_types[1] = PPC_OPER_TYPE_VREG;
	dec->operand_values[1] = (insword & 0xF800)>>11;
	dec->operand_fmtstr = PPC_FMTSTR_VREG_C_VREG;
	return 0;
}

/* vadduws VREG,VREG,VREG */
int vadduws_VREG_VREG_VREG(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_VADDUWS;
	/* 000100AAAAABBBBBCCCCC01010000000 */
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

/* evfssub GPR,GPR,GPR */
int evfssub_GPR_GPR_GPR(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_EVFSSUB;
	/* 000100AAAAABBBBBCCCCC01010000001 */
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

/* vminuw VREG,VREG,VREG */
int vminuw_VREG_VREG_VREG(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_VMINUW;
	/* 000100AAAAABBBBBCCCCC01010000010 */
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

/* evfsmsub GPR,GPR,GPR */
int evfsmsub_GPR_GPR_GPR(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_EVFSMSUB;
	/* 000100AAAAABBBBBCCCCC01010000011 */
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

/* vsrw VREG,VREG,VREG */
int vsrw_VREG_VREG_VREG(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_VSRW;
	/* 000100AAAAABBBBBCCCCC01010000100 */
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

/* evfsnabs GPR,GPR */
int evfsnabs_GPR_GPR(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_EVFSNABS;
	/* 000100AAAAABBBBBxxxxx01010000101 */
	dec->operand_n = 2;
	dec->operand_types[0] = PPC_OPER_TYPE_GPR;
	dec->operand_values[0] = (insword & 0x3E00000)>>21;
	dec->operand_types[1] = PPC_OPER_TYPE_GPR;
	dec->operand_values[1] = (insword & 0x1F0000)>>16;
	dec->operand_fmtstr = PPC_FMTSTR_GPR_C_GPR;
	return 0;
}

/* vcmpgtuw VREG,VREG,VREG */
int vcmpgtuw_VREG_VREG_VREG(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_VCMPGTUW;
	/* 000100AAAAABBBBBCCCCC01010000110 */
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

/* evfssqrt GPR,GPR */
int evfssqrt_GPR_GPR(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_EVFSSQRT;
	/* 000100AAAAABBBBB0000001010000111 */
	dec->operand_n = 2;
	dec->operand_types[0] = PPC_OPER_TYPE_GPR;
	dec->operand_values[0] = (insword & 0x3E00000)>>21;
	dec->operand_types[1] = PPC_OPER_TYPE_GPR;
	dec->operand_values[1] = (insword & 0x1F0000)>>16;
	dec->operand_fmtstr = PPC_FMTSTR_GPR_C_GPR;
	return 0;
}

/* vmuleuw VREG,VREG,VREG */
int vmuleuw_VREG_VREG_VREG(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_VMULEUW;
	/* 000100AAAAABBBBBCCCCC01010001000 */
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

/* evfsdiv GPR,GPR,GPR */
int evfsdiv_GPR_GPR_GPR(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_EVFSDIV;
	/* 000100AAAAABBBBBCCCCC01010001001 */
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

/* vrfip VREG,VREG */
int vrfip_VREG_VREG(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_VRFIP;
	/* 000100AAAAA00000BBBBB01010001010 */
	dec->operand_n = 2;
	dec->operand_types[0] = PPC_OPER_TYPE_VREG;
	dec->operand_values[0] = (insword & 0x3E00000)>>21;
	dec->operand_types[1] = PPC_OPER_TYPE_VREG;
	dec->operand_values[1] = (insword & 0xF800)>>11;
	dec->operand_fmtstr = PPC_FMTSTR_VREG_C_VREG;
	return 0;
}

/* evfsnmsub GPR,GPR,GPR */
int evfsnmsub_GPR_GPR_GPR(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_EVFSNMSUB;
	/* 000100AAAAABBBBBCCCCC01010001011 */
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

/* vspltw VREG,VREG,NUM */
int vspltw_VREG_VREG_NUM(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_VSPLTW;
	/* 000100AAAAA000CCBBBBB01010001100 */
	dec->operand_n = 3;
	dec->operand_types[0] = PPC_OPER_TYPE_VREG;
	dec->operand_values[0] = (insword & 0x3E00000)>>21;
	dec->operand_types[1] = PPC_OPER_TYPE_VREG;
	dec->operand_values[1] = (insword & 0xF800)>>11;
	dec->operand_types[2] = PPC_OPER_TYPE_NUM;
	dec->operand_values[2] = (insword & 0x30000)>>16;
	dec->operand_fmtstr = PPC_FMTSTR_VREG_C_VREG_C_NUM;
	return 0;
}

/* vextractuw VREG,VREG,NUM */
int vextractuw_VREG_VREG_NUM(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_VEXTRACTUW;
	/* 000100AAAAA0CCCCBBBBB01010001101 */
	dec->operand_n = 3;
	dec->operand_types[0] = PPC_OPER_TYPE_VREG;
	dec->operand_values[0] = (insword & 0x3E00000)>>21;
	dec->operand_types[1] = PPC_OPER_TYPE_VREG;
	dec->operand_values[1] = (insword & 0xF800)>>11;
	dec->operand_types[2] = PPC_OPER_TYPE_NUM;
	dec->operand_values[2] = (insword & 0xF0000)>>16;
	dec->operand_fmtstr = PPC_FMTSTR_VREG_C_VREG_C_NUM;
	return 0;
}

/* vupklsb VREG,VREG */
int vupklsb_VREG_VREG(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_VUPKLSB;
	/* 000100AAAAA00000BBBBB01010001110 */
	dec->operand_n = 2;
	dec->operand_types[0] = PPC_OPER_TYPE_VREG;
	dec->operand_values[0] = (insword & 0x3E00000)>>21;
	dec->operand_types[1] = PPC_OPER_TYPE_VREG;
	dec->operand_values[1] = (insword & 0xF800)>>11;
	dec->operand_fmtstr = PPC_FMTSTR_VREG_C_VREG;
	return 0;
}

/* evfscfui GPR,GPR */
int evfscfui_GPR_GPR(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_EVFSCFUI;
	/* 000100AAAAAxxxxxBBBBB01010010000 */
	dec->operand_n = 2;
	dec->operand_types[0] = PPC_OPER_TYPE_GPR;
	dec->operand_values[0] = (insword & 0x3E00000)>>21;
	dec->operand_types[1] = PPC_OPER_TYPE_GPR;
	dec->operand_values[1] = (insword & 0xF800)>>11;
	dec->operand_fmtstr = PPC_FMTSTR_GPR_C_GPR;
	return 0;
}

/* evfscfsi GPR,GPR */
int evfscfsi_GPR_GPR(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_EVFSCFSI;
	/* 000100AAAAAxxxxxBBBBB01010010001 */
	dec->operand_n = 2;
	dec->operand_types[0] = PPC_OPER_TYPE_GPR;
	dec->operand_values[0] = (insword & 0x3E00000)>>21;
	dec->operand_types[1] = PPC_OPER_TYPE_GPR;
	dec->operand_values[1] = (insword & 0xF800)>>11;
	dec->operand_fmtstr = PPC_FMTSTR_GPR_C_GPR;
	return 0;
}

/* evfscfuf GPR,GPR */
int evfscfuf_GPR_GPR(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_EVFSCFUF;
	/* 000100AAAAAxxxxxBBBBB01010010010 */
	dec->operand_n = 2;
	dec->operand_types[0] = PPC_OPER_TYPE_GPR;
	dec->operand_values[0] = (insword & 0x3E00000)>>21;
	dec->operand_types[1] = PPC_OPER_TYPE_GPR;
	dec->operand_values[1] = (insword & 0xF800)>>11;
	dec->operand_fmtstr = PPC_FMTSTR_GPR_C_GPR;
	return 0;
}

/* evfscfsf GPR,GPR */
int evfscfsf_GPR_GPR(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_EVFSCFSF;
	/* 000100AAAAAxxxxxBBBBB01010010011 */
	dec->operand_n = 2;
	dec->operand_types[0] = PPC_OPER_TYPE_GPR;
	dec->operand_values[0] = (insword & 0x3E00000)>>21;
	dec->operand_types[1] = PPC_OPER_TYPE_GPR;
	dec->operand_values[1] = (insword & 0xF800)>>11;
	dec->operand_fmtstr = PPC_FMTSTR_GPR_C_GPR;
	return 0;
}

/* efsadd GPR,GPR,GPR */
int efsadd_GPR_GPR_GPR(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_EFSADD;
	/* 000100AAAAABBBBBCCCCC01011000000 */
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

/* efssub GPR,GPR,GPR */
int efssub_GPR_GPR_GPR(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_EFSSUB;
	/* 000100AAAAABBBBBCCCCC01011000001 */
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

/* vminud VREG,VREG,VREG */
int vminud_VREG_VREG_VREG(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_VMINUD;
	/* 000100AAAAABBBBBCCCCC01011000010 */
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

/* efsmsub GPR,GPR,GPR */
int efsmsub_GPR_GPR_GPR(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_EFSMSUB;
	/* 000100AAAAABBBBBCCCCC01011000011 */
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

/* vsr VREG,VREG,VREG */
int vsr_VREG_VREG_VREG(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_VSR;
	/* 000100AAAAABBBBBCCCCC01011000100 */
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

/* efsnabs GPR,GPR */
int efsnabs_GPR_GPR(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_EFSNABS;
	/* 000100AAAAABBBBBxxxxx01011000101 */
	dec->operand_n = 2;
	dec->operand_types[0] = PPC_OPER_TYPE_GPR;
	dec->operand_values[0] = (insword & 0x3E00000)>>21;
	dec->operand_types[1] = PPC_OPER_TYPE_GPR;
	dec->operand_values[1] = (insword & 0x1F0000)>>16;
	dec->operand_fmtstr = PPC_FMTSTR_GPR_C_GPR;
	return 0;
}

/* vcmpgtfp VREG,VREG,VREG */
int vcmpgtfp_VREG_VREG_VREG(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_VCMPGTFP;
	/* 000100AAAAABBBBBCCCCC01011000110 */
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

/* vcmpgtud VREG,VREG,VREG */
int vcmpgtud_VREG_VREG_VREG(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_VCMPGTUD;
	/* 000100AAAAABBBBBCCCCC01011000111 */
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

/* efsmul GPR,GPR,GPR */
int efsmul_GPR_GPR_GPR(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_EFSMUL;
	/* 000100AAAAABBBBBCCCCC01011001000 */
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

/* efsdiv GPR,GPR,GPR */
int efsdiv_GPR_GPR_GPR(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_EFSDIV;
	/* 000100AAAAABBBBBCCCCC01011001001 */
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

/* vrfim VREG,VREG */
int vrfim_VREG_VREG(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_VRFIM;
	/* 000100AAAAA00000BBBBB01011001010 */
	dec->operand_n = 2;
	dec->operand_types[0] = PPC_OPER_TYPE_VREG;
	dec->operand_values[0] = (insword & 0x3E00000)>>21;
	dec->operand_types[1] = PPC_OPER_TYPE_VREG;
	dec->operand_values[1] = (insword & 0xF800)>>11;
	dec->operand_fmtstr = PPC_FMTSTR_VREG_C_VREG;
	return 0;
}

/* efsnmsub GPR,GPR,GPR */
int efsnmsub_GPR_GPR_GPR(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_EFSNMSUB;
	/* 000100AAAAABBBBBCCCCC01011001011 */
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

/* vextractd VREG,VREG,NUM */
int vextractd_VREG_VREG_NUM(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_VEXTRACTD;
	/* 000100AAAAA0CCCCBBBBB01011001101 */
	dec->operand_n = 3;
	dec->operand_types[0] = PPC_OPER_TYPE_VREG;
	dec->operand_values[0] = (insword & 0x3E00000)>>21;
	dec->operand_types[1] = PPC_OPER_TYPE_VREG;
	dec->operand_values[1] = (insword & 0xF800)>>11;
	dec->operand_types[2] = PPC_OPER_TYPE_NUM;
	dec->operand_values[2] = (insword & 0xF0000)>>16;
	dec->operand_fmtstr = PPC_FMTSTR_VREG_C_VREG_C_NUM;
	return 0;
}

/* vupklsh VREG,VREG */
int vupklsh_VREG_VREG(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_VUPKLSH;
	/* 000100AAAAA00000BBBBB01011001110 */
	dec->operand_n = 2;
	dec->operand_types[0] = PPC_OPER_TYPE_VREG;
	dec->operand_values[0] = (insword & 0x3E00000)>>21;
	dec->operand_types[1] = PPC_OPER_TYPE_VREG;
	dec->operand_values[1] = (insword & 0xF800)>>11;
	dec->operand_fmtstr = PPC_FMTSTR_VREG_C_VREG;
	return 0;
}

/* efscfui GPR,GPR */
int efscfui_GPR_GPR(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_EFSCFUI;
	/* 000100AAAAAxxxxxBBBBB01011010000 */
	dec->operand_n = 2;
	dec->operand_types[0] = PPC_OPER_TYPE_GPR;
	dec->operand_values[0] = (insword & 0x3E00000)>>21;
	dec->operand_types[1] = PPC_OPER_TYPE_GPR;
	dec->operand_values[1] = (insword & 0xF800)>>11;
	dec->operand_fmtstr = PPC_FMTSTR_GPR_C_GPR;
	return 0;
}

/* efscfsi GPR,GPR */
int efscfsi_GPR_GPR(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_EFSCFSI;
	/* 000100AAAAAxxxxxBBBBB01011010001 */
	dec->operand_n = 2;
	dec->operand_types[0] = PPC_OPER_TYPE_GPR;
	dec->operand_values[0] = (insword & 0x3E00000)>>21;
	dec->operand_types[1] = PPC_OPER_TYPE_GPR;
	dec->operand_values[1] = (insword & 0xF800)>>11;
	dec->operand_fmtstr = PPC_FMTSTR_GPR_C_GPR;
	return 0;
}

/* efscfuf GPR,GPR */
int efscfuf_GPR_GPR(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_EFSCFUF;
	/* 000100AAAAAxxxxxBBBBB01011010010 */
	dec->operand_n = 2;
	dec->operand_types[0] = PPC_OPER_TYPE_GPR;
	dec->operand_values[0] = (insword & 0x3E00000)>>21;
	dec->operand_types[1] = PPC_OPER_TYPE_GPR;
	dec->operand_values[1] = (insword & 0xF800)>>11;
	dec->operand_fmtstr = PPC_FMTSTR_GPR_C_GPR;
	return 0;
}

/* efscfsf GPR,GPR */
int efscfsf_GPR_GPR(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_EFSCFSF;
	/* 000100AAAAAxxxxxBBBBB01011010011 */
	dec->operand_n = 2;
	dec->operand_types[0] = PPC_OPER_TYPE_GPR;
	dec->operand_values[0] = (insword & 0x3E00000)>>21;
	dec->operand_types[1] = PPC_OPER_TYPE_GPR;
	dec->operand_values[1] = (insword & 0xF800)>>11;
	dec->operand_fmtstr = PPC_FMTSTR_GPR_C_GPR;
	return 0;
}

/* efdctui GPR,GPR */
int efdctui_GPR_GPR(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_EFDCTUI;
	/* 000100AAAAAxxxxxBBBBB01011110100 */
	dec->operand_n = 2;
	dec->operand_types[0] = PPC_OPER_TYPE_GPR;
	dec->operand_values[0] = (insword & 0x3E00000)>>21;
	dec->operand_types[1] = PPC_OPER_TYPE_GPR;
	dec->operand_values[1] = (insword & 0xF800)>>11;
	dec->operand_fmtstr = PPC_FMTSTR_GPR_C_GPR;
	return 0;
}

/* efdctsi GPR,GPR */
int efdctsi_GPR_GPR(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_EFDCTSI;
	/* 000100AAAAAxxxxxBBBBB01011110101 */
	dec->operand_n = 2;
	dec->operand_types[0] = PPC_OPER_TYPE_GPR;
	dec->operand_values[0] = (insword & 0x3E00000)>>21;
	dec->operand_types[1] = PPC_OPER_TYPE_GPR;
	dec->operand_values[1] = (insword & 0xF800)>>11;
	dec->operand_fmtstr = PPC_FMTSTR_GPR_C_GPR;
	return 0;
}

/* efdctuf GPR,GPR */
int efdctuf_GPR_GPR(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_EFDCTUF;
	/* 000100AAAAAxxxxxBBBBB01011110110 */
	dec->operand_n = 2;
	dec->operand_types[0] = PPC_OPER_TYPE_GPR;
	dec->operand_values[0] = (insword & 0x3E00000)>>21;
	dec->operand_types[1] = PPC_OPER_TYPE_GPR;
	dec->operand_values[1] = (insword & 0xF800)>>11;
	dec->operand_fmtstr = PPC_FMTSTR_GPR_C_GPR;
	return 0;
}

/* efdctsf GPR,GPR */
int efdctsf_GPR_GPR(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_EFDCTSF;
	/* 000100AAAAAxxxxxBBBBB01011110111 */
	dec->operand_n = 2;
	dec->operand_types[0] = PPC_OPER_TYPE_GPR;
	dec->operand_values[0] = (insword & 0x3E00000)>>21;
	dec->operand_types[1] = PPC_OPER_TYPE_GPR;
	dec->operand_values[1] = (insword & 0xF800)>>11;
	dec->operand_fmtstr = PPC_FMTSTR_GPR_C_GPR;
	return 0;
}

/* vaddsbs VREG,VREG,VREG */
int vaddsbs_VREG_VREG_VREG(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_VADDSBS;
	/* 000100AAAAABBBBBCCCCC01100000000 */
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

/* evldd GPR,NUM(GPR) */
int evldd_GPR_NUM_GPR_(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_EVLDD;
	/* 000100AAAAACCCCCBBBBB01100000001 */
	dec->operand_n = 3;
	dec->operand_types[0] = PPC_OPER_TYPE_GPR;
	dec->operand_values[0] = (insword & 0x3E00000)>>21;
	dec->operand_types[1] = PPC_OPER_TYPE_NUM;
	dec->operand_values[1] = (insword & 0xF800)>>11;
	dec->operand_types[2] = PPC_OPER_TYPE_GPR;
	dec->operand_values[2] = (insword & 0x1F0000)>>16;
	dec->operand_fmtstr = PPC_FMTSTR_GPR_C_NUM_LPAREN_GPR_RPAREN_;
	return 0;
}

/* vminsb VREG,VREG,VREG */
int vminsb_VREG_VREG_VREG(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_VMINSB;
	/* 000100AAAAABBBBBCCCCC01100000010 */
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

/* evldw GPR,NUM(GPR) */
int evldw_GPR_NUM_GPR_(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_EVLDW;
	/* 000100AAAAACCCCCBBBBB01100000011 */
	dec->operand_n = 3;
	dec->operand_types[0] = PPC_OPER_TYPE_GPR;
	dec->operand_values[0] = (insword & 0x3E00000)>>21;
	dec->operand_types[1] = PPC_OPER_TYPE_NUM;
	dec->operand_values[1] = (insword & 0xF800)>>11;
	dec->operand_types[2] = PPC_OPER_TYPE_GPR;
	dec->operand_values[2] = (insword & 0x1F0000)>>16;
	dec->operand_fmtstr = PPC_FMTSTR_GPR_C_NUM_LPAREN_GPR_RPAREN_;
	return 0;
}

/* vsrab VREG,VREG,VREG */
int vsrab_VREG_VREG_VREG(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_VSRAB;
	/* 000100AAAAABBBBBCCCCC01100000100 */
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

/* evldh GPR,NUM(GPR) */
int evldh_GPR_NUM_GPR_(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_EVLDH;
	/* 000100AAAAACCCCCBBBBB01100000101 */
	dec->operand_n = 3;
	dec->operand_types[0] = PPC_OPER_TYPE_GPR;
	dec->operand_values[0] = (insword & 0x3E00000)>>21;
	dec->operand_types[1] = PPC_OPER_TYPE_NUM;
	dec->operand_values[1] = (insword & 0xF800)>>11;
	dec->operand_types[2] = PPC_OPER_TYPE_GPR;
	dec->operand_values[2] = (insword & 0x1F0000)>>16;
	dec->operand_fmtstr = PPC_FMTSTR_GPR_C_NUM_LPAREN_GPR_RPAREN_;
	return 0;
}

/* vcmpgtsb VREG,VREG,VREG */
int vcmpgtsb_VREG_VREG_VREG(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_VCMPGTSB;
	/* 000100AAAAABBBBBCCCCC01100000110 */
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

/* vmulesb VREG,VREG,VREG */
int vmulesb_VREG_VREG_VREG(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_VMULESB;
	/* 000100AAAAABBBBBCCCCC01100001000 */
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

/* evlhhesplat GPR,NUM(GPR) */
int evlhhesplat_GPR_NUM_GPR_(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_EVLHHESPLAT;
	/* 000100AAAAACCCCCBBBBB01100001001 */
	dec->operand_n = 3;
	dec->operand_types[0] = PPC_OPER_TYPE_GPR;
	dec->operand_values[0] = (insword & 0x3E00000)>>21;
	dec->operand_types[1] = PPC_OPER_TYPE_NUM;
	dec->operand_values[1] = (insword & 0xF800)>>11;
	dec->operand_types[2] = PPC_OPER_TYPE_GPR;
	dec->operand_values[2] = (insword & 0x1F0000)>>16;
	dec->operand_fmtstr = PPC_FMTSTR_GPR_C_NUM_LPAREN_GPR_RPAREN_;
	return 0;
}

/* vcfux VREG,VREG,NUM */
int vcfux_VREG_VREG_NUM(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_VCFUX;
	/* 000100AAAAACCCCCBBBBB01100001010 */
	dec->operand_n = 3;
	dec->operand_types[0] = PPC_OPER_TYPE_VREG;
	dec->operand_values[0] = (insword & 0x3E00000)>>21;
	dec->operand_types[1] = PPC_OPER_TYPE_VREG;
	dec->operand_values[1] = (insword & 0xF800)>>11;
	dec->operand_types[2] = PPC_OPER_TYPE_NUM;
	dec->operand_values[2] = (insword & 0x1F0000)>>16;
	dec->operand_fmtstr = PPC_FMTSTR_VREG_C_VREG_C_NUM;
	return 0;
}

/* vspltisb VREG,NUM */
int vspltisb_VREG_NUM(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_VSPLTISB;
	/* 000100AAAAABBBBB0000001100001100 */
	dec->operand_n = 2;
	dec->operand_types[0] = PPC_OPER_TYPE_VREG;
	dec->operand_values[0] = (insword & 0x3E00000)>>21;
	dec->operand_types[1] = PPC_OPER_TYPE_NUM;
	dec->operand_values[1] = (insword & 0x1F0000)>>16;
	dec->operand_fmtstr = PPC_FMTSTR_VREG_C_NUM;
	return 0;
}

/* vinsertb VREG,VREG,NUM */
int vinsertb_VREG_VREG_NUM(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_VINSERTB;
	/* 000100AAAAA0CCCCBBBBB01100001101 */
	dec->operand_n = 3;
	dec->operand_types[0] = PPC_OPER_TYPE_VREG;
	dec->operand_values[0] = (insword & 0x3E00000)>>21;
	dec->operand_types[1] = PPC_OPER_TYPE_VREG;
	dec->operand_values[1] = (insword & 0xF800)>>11;
	dec->operand_types[2] = PPC_OPER_TYPE_NUM;
	dec->operand_values[2] = (insword & 0xF0000)>>16;
	dec->operand_fmtstr = PPC_FMTSTR_VREG_C_VREG_C_NUM;
	return 0;
}

/* vpkpx VREG,VREG,VREG */
int vpkpx_VREG_VREG_VREG(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_VPKPX;
	/* 000100AAAAABBBBBCCCCC01100001110 */
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

/* mullhwu GPR,GPR,GPR */
int mullhwu_GPR_GPR_GPR(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_MULLHWU;
	/* 000100AAAAABBBBBCCCCC01100010000 */
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

/* mullhwu. GPR,GPR,GPR */
int mullhwuD_GPR_GPR_GPR(uint32_t insword, struct ppc_decoded *dec)
{
	dec->properties |= PPC_PROPERTY_DOTTED;
	dec->mnemonic = PPC_MNEM_MULLHWU;
	/* 000100AAAAABBBBBCCCCC01100010001 */
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

/* evstwhox GPR,GPR,GPR */
int evstwhox_GPR_GPR_GPR(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_EVSTWHOX;
	/* 000100AAAAABBBBBCCCCC01100110100 */
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

/* evstwho GPR,NUM(GPR) */
int evstwho_GPR_NUM_GPR_(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_EVSTWHO;
	/* 000100AAAAACCCCCBBBBB01100110101 */
	dec->operand_n = 3;
	dec->operand_types[0] = PPC_OPER_TYPE_GPR;
	dec->operand_values[0] = (insword & 0x3E00000)>>21;
	dec->operand_types[1] = PPC_OPER_TYPE_NUM;
	dec->operand_values[1] = (insword & 0xF800)>>11;
	dec->operand_types[2] = PPC_OPER_TYPE_GPR;
	dec->operand_values[2] = (insword & 0x1F0000)>>16;
	dec->operand_fmtstr = PPC_FMTSTR_GPR_C_NUM_LPAREN_GPR_RPAREN_;
	return 0;
}

/* vaddshs VREG,VREG,VREG */
int vaddshs_VREG_VREG_VREG(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_VADDSHS;
	/* 000100AAAAABBBBBCCCCC01101000000 */
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

/* bcdcpsgn. VREG,VREG,VREG */
int bcdcpsgnD_VREG_VREG_VREG(uint32_t insword, struct ppc_decoded *dec)
{
	dec->properties |= PPC_PROPERTY_DOTTED;
	dec->mnemonic = PPC_MNEM_BCDCPSGN;
	/* 000100AAAAABBBBBCCCCC01101000001 */
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

/* vminsh VREG,VREG,VREG */
int vminsh_VREG_VREG_VREG(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_VMINSH;
	/* 000100AAAAABBBBBCCCCC01101000010 */
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

/* vsrah VREG,VREG,VREG */
int vsrah_VREG_VREG_VREG(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_VSRAH;
	/* 000100AAAAABBBBBCCCCC01101000100 */
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

/* vcmpgtsh VREG,VREG,VREG */
int vcmpgtsh_VREG_VREG_VREG(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_VCMPGTSH;
	/* 000100AAAAABBBBBCCCCC01101000110 */
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

/* vmulesh VREG,VREG,VREG */
int vmulesh_VREG_VREG_VREG(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_VMULESH;
	/* 000100AAAAABBBBBCCCCC01101001000 */
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

/* vcfsx VREG,VREG,NUM */
int vcfsx_VREG_VREG_NUM(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_VCFSX;
	/* 000100AAAAACCCCCBBBBB01101001010 */
	dec->operand_n = 3;
	dec->operand_types[0] = PPC_OPER_TYPE_VREG;
	dec->operand_values[0] = (insword & 0x3E00000)>>21;
	dec->operand_types[1] = PPC_OPER_TYPE_VREG;
	dec->operand_values[1] = (insword & 0xF800)>>11;
	dec->operand_types[2] = PPC_OPER_TYPE_NUM;
	dec->operand_values[2] = (insword & 0x1F0000)>>16;
	dec->operand_fmtstr = PPC_FMTSTR_VREG_C_VREG_C_NUM;
	return 0;
}

/* vspltish VREG,NUM */
int vspltish_VREG_NUM(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_VSPLTISH;
	/* 000100AAAAABBBBB0000001101001100 */
	dec->operand_n = 2;
	dec->operand_types[0] = PPC_OPER_TYPE_VREG;
	dec->operand_values[0] = (insword & 0x3E00000)>>21;
	dec->operand_types[1] = PPC_OPER_TYPE_NUM;
	dec->operand_values[1] = (insword & 0x1F0000)>>16;
	dec->operand_fmtstr = PPC_FMTSTR_VREG_C_NUM;
	return 0;
}

/* vinserth VREG,VREG,NUM */
int vinserth_VREG_VREG_NUM(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_VINSERTH;
	/* 000100AAAAA0CCCCBBBBB01101001101 */
	dec->operand_n = 3;
	dec->operand_types[0] = PPC_OPER_TYPE_VREG;
	dec->operand_values[0] = (insword & 0x3E00000)>>21;
	dec->operand_types[1] = PPC_OPER_TYPE_VREG;
	dec->operand_values[1] = (insword & 0xF800)>>11;
	dec->operand_types[2] = PPC_OPER_TYPE_NUM;
	dec->operand_values[2] = (insword & 0xF0000)>>16;
	dec->operand_fmtstr = PPC_FMTSTR_VREG_C_VREG_C_NUM;
	return 0;
}

/* vupkhpx VREG,VREG */
int vupkhpx_VREG_VREG(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_VUPKHPX;
	/* 000100AAAAA00000BBBBB01101001110 */
	dec->operand_n = 2;
	dec->operand_types[0] = PPC_OPER_TYPE_VREG;
	dec->operand_values[0] = (insword & 0x3E00000)>>21;
	dec->operand_types[1] = PPC_OPER_TYPE_VREG;
	dec->operand_values[1] = (insword & 0xF800)>>11;
	dec->operand_fmtstr = PPC_FMTSTR_VREG_C_VREG;
	return 0;
}

/* mullhw GPR,GPR,GPR */
int mullhw_GPR_GPR_GPR(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_MULLHW;
	/* 000100AAAAABBBBBCCCCC01101010000 */
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

/* mullhw. GPR,GPR,GPR */
int mullhwD_GPR_GPR_GPR(uint32_t insword, struct ppc_decoded *dec)
{
	dec->properties |= PPC_PROPERTY_DOTTED;
	dec->mnemonic = PPC_MNEM_MULLHW;
	/* 000100AAAAABBBBBCCCCC01101010001 */
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

/* vaddsws VREG,VREG,VREG */
int vaddsws_VREG_VREG_VREG(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_VADDSWS;
	/* 000100AAAAABBBBBCCCCC01110000000 */
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

/* vminsw VREG,VREG,VREG */
int vminsw_VREG_VREG_VREG(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_VMINSW;
	/* 000100AAAAABBBBBCCCCC01110000010 */
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

/* vsraw VREG,VREG,VREG */
int vsraw_VREG_VREG_VREG(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_VSRAW;
	/* 000100AAAAABBBBBCCCCC01110000100 */
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

/* vcmpgtsw VREG,VREG,VREG */
int vcmpgtsw_VREG_VREG_VREG(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_VCMPGTSW;
	/* 000100AAAAABBBBBCCCCC01110000110 */
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

/* vmulesw VREG,VREG,VREG */
int vmulesw_VREG_VREG_VREG(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_VMULESW;
	/* 000100AAAAABBBBBCCCCC01110001000 */
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

/* vctuxs VREG,VREG,NUM */
int vctuxs_VREG_VREG_NUM(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_VCTUXS;
	/* 000100AAAAACCCCCBBBBB01110001010 */
	dec->operand_n = 3;
	dec->operand_types[0] = PPC_OPER_TYPE_VREG;
	dec->operand_values[0] = (insword & 0x3E00000)>>21;
	dec->operand_types[1] = PPC_OPER_TYPE_VREG;
	dec->operand_values[1] = (insword & 0xF800)>>11;
	dec->operand_types[2] = PPC_OPER_TYPE_NUM;
	dec->operand_values[2] = (insword & 0x1F0000)>>16;
	dec->operand_fmtstr = PPC_FMTSTR_VREG_C_VREG_C_NUM;
	return 0;
}

/* vspltisw VREG,NUM */
int vspltisw_VREG_NUM(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_VSPLTISW;
	/* 000100AAAAABBBBB0000001110001100 */
	dec->operand_n = 2;
	dec->operand_types[0] = PPC_OPER_TYPE_VREG;
	dec->operand_values[0] = (insword & 0x3E00000)>>21;
	dec->operand_types[1] = PPC_OPER_TYPE_NUM;
	dec->operand_values[1] = (insword & 0x1F0000)>>16;
	dec->operand_fmtstr = PPC_FMTSTR_VREG_C_NUM;
	return 0;
}

/* vinsertw VREG,VREG,NUM */
int vinsertw_VREG_VREG_NUM(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_VINSERTW;
	/* 000100AAAAA0CCCCBBBBB01110001101 */
	dec->operand_n = 3;
	dec->operand_types[0] = PPC_OPER_TYPE_VREG;
	dec->operand_values[0] = (insword & 0x3E00000)>>21;
	dec->operand_types[1] = PPC_OPER_TYPE_VREG;
	dec->operand_values[1] = (insword & 0xF800)>>11;
	dec->operand_types[2] = PPC_OPER_TYPE_NUM;
	dec->operand_values[2] = (insword & 0xF0000)>>16;
	dec->operand_fmtstr = PPC_FMTSTR_VREG_C_VREG_C_NUM;
	return 0;
}

/* vminsd VREG,VREG,VREG */
int vminsd_VREG_VREG_VREG(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_VMINSD;
	/* 000100AAAAABBBBBCCCCC01111000010 */
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

/* vsrad VREG,VREG,VREG */
int vsrad_VREG_VREG_VREG(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_VSRAD;
	/* 000100AAAAABBBBBCCCCC01111000100 */
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

/* vcmpbfp VREG,VREG,VREG */
int vcmpbfp_VREG_VREG_VREG(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_VCMPBFP;
	/* 000100AAAAABBBBBCCCCC01111000110 */
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

/* vcmpgtsd VREG,VREG,VREG */
int vcmpgtsd_VREG_VREG_VREG(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_VCMPGTSD;
	/* 000100AAAAABBBBBCCCCC01111000111 */
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

/* vctsxs VREG,VREG,NUM */
int vctsxs_VREG_VREG_NUM(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_VCTSXS;
	/* 000100AAAAACCCCCBBBBB01111001010 */
	dec->operand_n = 3;
	dec->operand_types[0] = PPC_OPER_TYPE_VREG;
	dec->operand_values[0] = (insword & 0x3E00000)>>21;
	dec->operand_types[1] = PPC_OPER_TYPE_VREG;
	dec->operand_values[1] = (insword & 0xF800)>>11;
	dec->operand_types[2] = PPC_OPER_TYPE_NUM;
	dec->operand_values[2] = (insword & 0x1F0000)>>16;
	dec->operand_fmtstr = PPC_FMTSTR_VREG_C_VREG_C_NUM;
	return 0;
}

/* vinsertd VREG,VREG,NUM */
int vinsertd_VREG_VREG_NUM(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_VINSERTD;
	/* 000100AAAAA0CCCCBBBBB01111001101 */
	dec->operand_n = 3;
	dec->operand_types[0] = PPC_OPER_TYPE_VREG;
	dec->operand_values[0] = (insword & 0x3E00000)>>21;
	dec->operand_types[1] = PPC_OPER_TYPE_VREG;
	dec->operand_values[1] = (insword & 0xF800)>>11;
	dec->operand_types[2] = PPC_OPER_TYPE_NUM;
	dec->operand_values[2] = (insword & 0xF0000)>>16;
	dec->operand_fmtstr = PPC_FMTSTR_VREG_C_VREG_C_NUM;
	return 0;
}

/* vupklpx VREG,VREG */
int vupklpx_VREG_VREG(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_VUPKLPX;
	/* 000100AAAAA00000BBBBB01111001110 */
	dec->operand_n = 2;
	dec->operand_types[0] = PPC_OPER_TYPE_VREG;
	dec->operand_values[0] = (insword & 0x3E00000)>>21;
	dec->operand_types[1] = PPC_OPER_TYPE_VREG;
	dec->operand_values[1] = (insword & 0xF800)>>11;
	dec->operand_fmtstr = PPC_FMTSTR_VREG_C_VREG;
	return 0;
}

/* vsububm VREG,VREG,VREG */
int vsububm_VREG_VREG_VREG(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_VSUBUBM;
	/* 000100AAAAABBBBBCCCCC10000000000 */
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

/* bcdadd. VREG,VREG,VREG,NUM */
int bcdaddD_VREG_VREG_VREG_NUM(uint32_t insword, struct ppc_decoded *dec)
{
	dec->properties |= PPC_PROPERTY_DOTTED;
	dec->mnemonic = PPC_MNEM_BCDADD;
	/* 000100AAAAABBBBBCCCCC1D000000001 */
	dec->operand_n = 4;
	dec->operand_types[0] = PPC_OPER_TYPE_VREG;
	dec->operand_values[0] = (insword & 0x3E00000)>>21;
	dec->operand_types[1] = PPC_OPER_TYPE_VREG;
	dec->operand_values[1] = (insword & 0x1F0000)>>16;
	dec->operand_types[2] = PPC_OPER_TYPE_VREG;
	dec->operand_values[2] = (insword & 0xF800)>>11;
	dec->operand_types[3] = PPC_OPER_TYPE_NUM;
	dec->operand_values[3] = (insword & 0x200)>>9;
	dec->operand_fmtstr = PPC_FMTSTR_VREG_C_VREG_C_VREG_C_NUM;
	return 0;
}

/* vavgub VREG,VREG,VREG */
int vavgub_VREG_VREG_VREG(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_VAVGUB;
	/* 000100AAAAABBBBBCCCCC10000000010 */
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

/* vabsdub VREG,VREG,VREG */
int vabsdub_VREG_VREG_VREG(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_VABSDUB;
	/* 000100AAAAABBBBBCCCCC10000000011 */
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

/* vand VREG,VREG,VREG */
int vand_VREG_VREG_VREG(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_VAND;
	/* 000100AAAAABBBBBCCCCC10000000100 */
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

/* vcmpequb. VREG,VREG,VREG */
int vcmpequbD_VREG_VREG_VREG(uint32_t insword, struct ppc_decoded *dec)
{
	dec->properties |= PPC_PROPERTY_DOTTED;
	dec->mnemonic = PPC_MNEM_VCMPEQUB;
	/* 000100AAAAABBBBBCCCCC10000000110 */
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

/* vcmpneb. VREG,VREG,VREG */
int vcmpnebD_VREG_VREG_VREG(uint32_t insword, struct ppc_decoded *dec)
{
	dec->properties |= PPC_PROPERTY_DOTTED;
	dec->mnemonic = PPC_MNEM_VCMPNEB;
	/* 000100AAAAABBBBBCCCCC10000000111 */
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

/* vpmsumb VREG,VREG,VREG */
int vpmsumb_VREG_VREG_VREG(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_VPMSUMB;
	/* 000100AAAAABBBBBCCCCC10000001000 */
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

/* evmhesmi GPR,GPR,GPR */
int evmhesmi_GPR_GPR_GPR(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_EVMHESMI;
	/* 000100AAAAABBBBBCCCCC10000001001 */
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

/* vmaxfp VREG,VREG,VREG */
int vmaxfp_VREG_VREG_VREG(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_VMAXFP;
	/* 000100AAAAABBBBBCCCCC10000001010 */
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

/* evmhesmf GPR,GPR,GPR */
int evmhesmf_GPR_GPR_GPR(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_EVMHESMF;
	/* 000100AAAAABBBBBCCCCC10000001011 */
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

/* vslo VREG,VREG,VREG */
int vslo_VREG_VREG_VREG(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_VSLO;
	/* 000100AAAAABBBBBCCCCC10000001100 */
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

/* evmhoumia GPR,GPR,GPR */
int evmhoumia_GPR_GPR_GPR(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_EVMHOUMIA;
	/* 000100AAAAABBBBBCCCCC10000101100 */
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

/* vsubuhm VREG,VREG,VREG */
int vsubuhm_VREG_VREG_VREG(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_VSUBUHM;
	/* 000100AAAAABBBBBCCCCC10001000000 */
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

/* bcdsub. VREG,VREG,VREG,NUM */
int bcdsubD_VREG_VREG_VREG_NUM(uint32_t insword, struct ppc_decoded *dec)
{
	dec->properties |= PPC_PROPERTY_DOTTED;
	dec->mnemonic = PPC_MNEM_BCDSUB;
	/* 000100AAAAABBBBBCCCCC1D001000001 */
	dec->operand_n = 4;
	dec->operand_types[0] = PPC_OPER_TYPE_VREG;
	dec->operand_values[0] = (insword & 0x3E00000)>>21;
	dec->operand_types[1] = PPC_OPER_TYPE_VREG;
	dec->operand_values[1] = (insword & 0x1F0000)>>16;
	dec->operand_types[2] = PPC_OPER_TYPE_VREG;
	dec->operand_values[2] = (insword & 0xF800)>>11;
	dec->operand_types[3] = PPC_OPER_TYPE_NUM;
	dec->operand_values[3] = (insword & 0x200)>>9;
	dec->operand_fmtstr = PPC_FMTSTR_VREG_C_VREG_C_VREG_C_NUM;
	return 0;
}

/* vavguh VREG,VREG,VREG */
int vavguh_VREG_VREG_VREG(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_VAVGUH;
	/* 000100AAAAABBBBBCCCCC10001000010 */
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

/* vabsduh VREG,VREG,VREG */
int vabsduh_VREG_VREG_VREG(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_VABSDUH;
	/* 000100AAAAABBBBBCCCCC10001000011 */
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

/* vandc VREG,VREG,VREG */
int vandc_VREG_VREG_VREG(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_VANDC;
	/* 000100AAAAABBBBBCCCCC10001000100 */
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

/* vcmpequh. VREG,VREG,VREG */
int vcmpequhD_VREG_VREG_VREG(uint32_t insword, struct ppc_decoded *dec)
{
	dec->properties |= PPC_PROPERTY_DOTTED;
	dec->mnemonic = PPC_MNEM_VCMPEQUH;
	/* 000100AAAAABBBBBCCCCC10001000110 */
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

/* vcmpneh. VREG,VREG,VREG */
int vcmpnehD_VREG_VREG_VREG(uint32_t insword, struct ppc_decoded *dec)
{
	dec->properties |= PPC_PROPERTY_DOTTED;
	dec->mnemonic = PPC_MNEM_VCMPNEH;
	/* 000100AAAAABBBBBCCCCC10001000111 */
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

/* vpmsumh VREG,VREG,VREG */
int vpmsumh_VREG_VREG_VREG(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_VPMSUMH;
	/* 000100AAAAABBBBBCCCCC10001001000 */
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

/* vminfp VREG,VREG,VREG */
int vminfp_VREG_VREG_VREG(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_VMINFP;
	/* 000100AAAAABBBBBCCCCC10001001010 */
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

/* evmwlsmf GPR,GPR,GPR */
int evmwlsmf_GPR_GPR_GPR(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_EVMWLSMF;
	/* 000100AAAAABBBBBCCCCC10001001011 */
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

/* vsro VREG,VREG,VREG */
int vsro_VREG_VREG_VREG(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_VSRO;
	/* 000100AAAAABBBBBCCCCC10001001100 */
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

/* vpkudum VREG,VREG,VREG */
int vpkudum_VREG_VREG_VREG(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_VPKUDUM;
	/* 000100AAAAABBBBBCCCCC10001001110 */
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

/* evmwssf GPR,GPR,GPR */
int evmwssf_GPR_GPR_GPR(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_EVMWSSF;
	/* 000100AAAAABBBBBCCCCC10001010011 */
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

/* evmwhumia GPR,GPR,GPR */
int evmwhumia_GPR_GPR_GPR(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_EVMWHUMIA;
	/* 000100AAAAABBBBBCCCCC10001101100 */
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

/* vsubuwm VREG,VREG,VREG */
int vsubuwm_VREG_VREG_VREG(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_VSUBUWM;
	/* 000100AAAAABBBBBCCCCC10010000000 */
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

/* bcdus. VREG,VREG,VREG */
int bcdusD_VREG_VREG_VREG(uint32_t insword, struct ppc_decoded *dec)
{
	dec->properties |= PPC_PROPERTY_DOTTED;
	dec->mnemonic = PPC_MNEM_BCDUS;
	/* 000100AAAAABBBBBCCCCC10010000001 */
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

/* vavguw VREG,VREG,VREG */
int vavguw_VREG_VREG_VREG(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_VAVGUW;
	/* 000100AAAAABBBBBCCCCC10010000010 */
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

/* vabsduw VREG,VREG,VREG */
int vabsduw_VREG_VREG_VREG(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_VABSDUW;
	/* 000100AAAAABBBBBCCCCC10010000011 */
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

/* vmr VREG,VREG */
int vmr_VREG_VREG(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_VMR;
	/* 000100AAAAAxxxxxxxxxx10010000100 */
	dec->operand_n = 2;
	dec->operand_types[0] = PPC_OPER_TYPE_VREG;
	dec->operand_values[0] = (insword & 0x3E00000)>>21;
	dec->operand_types[1] = PPC_OPER_TYPE_VREG;
	dec->operand_fmtstr = PPC_FMTSTR_VREG_C_VREG;
	return 0;
}

/* vcmpequw. VREG,VREG,VREG */
int vcmpequwD_VREG_VREG_VREG(uint32_t insword, struct ppc_decoded *dec)
{
	dec->properties |= PPC_PROPERTY_DOTTED;
	dec->mnemonic = PPC_MNEM_VCMPEQUW;
	/* 000100AAAAABBBBBCCCCC10010000110 */
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

/* vcmpnew. VREG,VREG,VREG */
int vcmpnewD_VREG_VREG_VREG(uint32_t insword, struct ppc_decoded *dec)
{
	dec->properties |= PPC_PROPERTY_DOTTED;
	dec->mnemonic = PPC_MNEM_VCMPNEW;
	/* 000100AAAAABBBBBCCCCC10010000111 */
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

/* vpmsumw VREG,VREG,VREG */
int vpmsumw_VREG_VREG_VREG(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_VPMSUMW;
	/* 000100AAAAABBBBBCCCCC10010001000 */
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

/* vsubudm VREG,VREG,VREG */
int vsubudm_VREG_VREG_VREG(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_VSUBUDM;
	/* 000100AAAAABBBBBCCCCC10011000000 */
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

/* bcds. VREG,VREG,VREG,NUM */
int bcdsD_VREG_VREG_VREG_NUM(uint32_t insword, struct ppc_decoded *dec)
{
	dec->properties |= PPC_PROPERTY_DOTTED;
	dec->mnemonic = PPC_MNEM_BCDS;
	/* 000100AAAAABBBBBCCCCC1D011000001 */
	dec->operand_n = 4;
	dec->operand_types[0] = PPC_OPER_TYPE_VREG;
	dec->operand_values[0] = (insword & 0x3E00000)>>21;
	dec->operand_types[1] = PPC_OPER_TYPE_VREG;
	dec->operand_values[1] = (insword & 0x1F0000)>>16;
	dec->operand_types[2] = PPC_OPER_TYPE_VREG;
	dec->operand_values[2] = (insword & 0xF800)>>11;
	dec->operand_types[3] = PPC_OPER_TYPE_NUM;
	dec->operand_values[3] = (insword & 0x200)>>9;
	dec->operand_fmtstr = PPC_FMTSTR_VREG_C_VREG_C_VREG_C_NUM;
	return 0;
}

/* evsubfusiaaw GPR,GPR */
int evsubfusiaaw_GPR_GPR(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_EVSUBFUSIAAW;
	/* 000100AAAAABBBBBxxxxx10011000010 */
	dec->operand_n = 2;
	dec->operand_types[0] = PPC_OPER_TYPE_GPR;
	dec->operand_values[0] = (insword & 0x3E00000)>>21;
	dec->operand_types[1] = PPC_OPER_TYPE_GPR;
	dec->operand_values[1] = (insword & 0x1F0000)>>16;
	dec->operand_fmtstr = PPC_FMTSTR_GPR_C_GPR;
	return 0;
}

/* evsubfssiaaw GPR,GPR */
int evsubfssiaaw_GPR_GPR(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_EVSUBFSSIAAW;
	/* 000100AAAAABBBBBxxxxx10011000011 */
	dec->operand_n = 2;
	dec->operand_types[0] = PPC_OPER_TYPE_GPR;
	dec->operand_values[0] = (insword & 0x3E00000)>>21;
	dec->operand_types[1] = PPC_OPER_TYPE_GPR;
	dec->operand_values[1] = (insword & 0x1F0000)>>16;
	dec->operand_fmtstr = PPC_FMTSTR_GPR_C_GPR;
	return 0;
}

/* vxor VREG,VREG,VREG */
int vxor_VREG_VREG_VREG(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_VXOR;
	/* 000100AAAAABBBBBCCCCC10011000100 */
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

/* vcmpeqfp. VREG,VREG,VREG */
int vcmpeqfpD_VREG_VREG_VREG(uint32_t insword, struct ppc_decoded *dec)
{
	dec->properties |= PPC_PROPERTY_DOTTED;
	dec->mnemonic = PPC_MNEM_VCMPEQFP;
	/* 000100AAAAABBBBBCCCCC10011000110 */
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

/* vcmpequd. VREG,VREG,VREG */
int vcmpequdD_VREG_VREG_VREG(uint32_t insword, struct ppc_decoded *dec)
{
	dec->properties |= PPC_PROPERTY_DOTTED;
	dec->mnemonic = PPC_MNEM_VCMPEQUD;
	/* 000100AAAAABBBBBCCCCC10011000111 */
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

/* vpmsumd VREG,VREG,VREG */
int vpmsumd_VREG_VREG_VREG(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_VPMSUMD;
	/* 000100AAAAABBBBBCCCCC10011001000 */
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

/* evaddsmiaaw GPR,GPR */
int evaddsmiaaw_GPR_GPR(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_EVADDSMIAAW;
	/* 000100AAAAABBBBBxxxxx10011001001 */
	dec->operand_n = 2;
	dec->operand_types[0] = PPC_OPER_TYPE_GPR;
	dec->operand_values[0] = (insword & 0x3E00000)>>21;
	dec->operand_types[1] = PPC_OPER_TYPE_GPR;
	dec->operand_values[1] = (insword & 0x1F0000)>>16;
	dec->operand_fmtstr = PPC_FMTSTR_GPR_C_GPR;
	return 0;
}

/* evsubfumiaaw GPR,GPR */
int evsubfumiaaw_GPR_GPR(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_EVSUBFUMIAAW;
	/* 000100AAAAABBBBBxxxxx10011001010 */
	dec->operand_n = 2;
	dec->operand_types[0] = PPC_OPER_TYPE_GPR;
	dec->operand_values[0] = (insword & 0x3E00000)>>21;
	dec->operand_types[1] = PPC_OPER_TYPE_GPR;
	dec->operand_values[1] = (insword & 0x1F0000)>>16;
	dec->operand_fmtstr = PPC_FMTSTR_GPR_C_GPR;
	return 0;
}

/* evsubfsmiaaw GPR,GPR */
int evsubfsmiaaw_GPR_GPR(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_EVSUBFSMIAAW;
	/* 000100AAAAABBBBBxxxxx10011001011 */
	dec->operand_n = 2;
	dec->operand_types[0] = PPC_OPER_TYPE_GPR;
	dec->operand_values[0] = (insword & 0x3E00000)>>21;
	dec->operand_types[1] = PPC_OPER_TYPE_GPR;
	dec->operand_values[1] = (insword & 0x1F0000)>>16;
	dec->operand_fmtstr = PPC_FMTSTR_GPR_C_GPR;
	return 0;
}

/* vpkudus VREG,VREG,VREG */
int vpkudus_VREG_VREG_VREG(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_VPKUDUS;
	/* 000100AAAAABBBBBCCCCC10011001110 */
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

/* vsubuqm VREG,VREG,VREG */
int vsubuqm_VREG_VREG_VREG(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_VSUBUQM;
	/* 000100AAAAABBBBBCCCCC10100000000 */
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

/* bcdtrunc. VREG,VREG,VREG,NUM */
int bcdtruncD_VREG_VREG_VREG_NUM(uint32_t insword, struct ppc_decoded *dec)
{
	dec->properties |= PPC_PROPERTY_DOTTED;
	dec->mnemonic = PPC_MNEM_BCDTRUNC;
	/* 000100AAAAABBBBBCCCCC1D100000001 */
	dec->operand_n = 4;
	dec->operand_types[0] = PPC_OPER_TYPE_VREG;
	dec->operand_values[0] = (insword & 0x3E00000)>>21;
	dec->operand_types[1] = PPC_OPER_TYPE_VREG;
	dec->operand_values[1] = (insword & 0x1F0000)>>16;
	dec->operand_types[2] = PPC_OPER_TYPE_VREG;
	dec->operand_values[2] = (insword & 0xF800)>>11;
	dec->operand_types[3] = PPC_OPER_TYPE_NUM;
	dec->operand_values[3] = (insword & 0x200)>>9;
	dec->operand_fmtstr = PPC_FMTSTR_VREG_C_VREG_C_VREG_C_NUM;
	return 0;
}

/* vavgsb VREG,VREG,VREG */
int vavgsb_VREG_VREG_VREG(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_VAVGSB;
	/* 000100AAAAABBBBBCCCCC10100000010 */
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

/* evmhessfaaw GPR,GPR,GPR */
int evmhessfaaw_GPR_GPR_GPR(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_EVMHESSFAAW;
	/* 000100AAAAABBBBBCCCCC10100000011 */
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

/* vnot VREG,VREG */
int vnot_VREG_VREG(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_VNOT;
	/* 000100AAAAAxxxxxxxxxx10100000100 */
	dec->operand_n = 2;
	dec->operand_types[0] = PPC_OPER_TYPE_VREG;
	dec->operand_values[0] = (insword & 0x3E00000)>>21;
	dec->operand_types[1] = PPC_OPER_TYPE_VREG;
	dec->operand_fmtstr = PPC_FMTSTR_VREG_C_VREG;
	return 0;
}

/* evmhossiaaw GPR,GPR,GPR */
int evmhossiaaw_GPR_GPR_GPR(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_EVMHOSSIAAW;
	/* 000100AAAAABBBBBCCCCC10100000101 */
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

/* udi4fcm. NUM,NUM,NUM */
int udi4fcmD_NUM_NUM_NUM(uint32_t insword, struct ppc_decoded *dec)
{
	dec->properties |= PPC_PROPERTY_DOTTED;
	dec->mnemonic = PPC_MNEM_UDI4FCM;
	/* 000100AAAAABBBBBCCCCC10100000110 */
	dec->operand_n = 3;
	dec->operand_types[0] = PPC_OPER_TYPE_NUM;
	dec->operand_values[0] = (insword & 0x3E00000)>>21;
	dec->operand_types[1] = PPC_OPER_TYPE_NUM;
	dec->operand_values[1] = (insword & 0x1F0000)>>16;
	dec->operand_types[2] = PPC_OPER_TYPE_NUM;
	dec->operand_values[2] = (insword & 0xF800)>>11;
	dec->operand_fmtstr = PPC_FMTSTR_NUM_C_NUM_C_NUM;
	return 0;
}

/* vcmpnezb. VREG,VREG,VREG */
int vcmpnezbD_VREG_VREG_VREG(uint32_t insword, struct ppc_decoded *dec)
{
	dec->properties |= PPC_PROPERTY_DOTTED;
	dec->mnemonic = PPC_MNEM_VCMPNEZB;
	/* 000100AAAAABBBBBCCCCC10100000111 */
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

/* vcipher VREG,VREG,VREG */
int vcipher_VREG_VREG_VREG(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_VCIPHER;
	/* 000100AAAAABBBBBCCCCC10100001000 */
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

/* vcipherlast VREG,VREG,VREG */
int vcipherlast_VREG_VREG_VREG(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_VCIPHERLAST;
	/* 000100AAAAABBBBBCCCCC10100001001 */
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

/* evmhesmfaaw GPR,GPR,GPR */
int evmhesmfaaw_GPR_GPR_GPR(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_EVMHESMFAAW;
	/* 000100AAAAABBBBBCCCCC10100001011 */
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

/* vgbbd VREG,VREG */
int vgbbd_VREG_VREG(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_VGBBD;
	/* 000100AAAAA00000BBBBB10100001100 */
	dec->operand_n = 2;
	dec->operand_types[0] = PPC_OPER_TYPE_VREG;
	dec->operand_values[0] = (insword & 0x3E00000)>>21;
	dec->operand_types[1] = PPC_OPER_TYPE_VREG;
	dec->operand_values[1] = (insword & 0xF800)>>11;
	dec->operand_fmtstr = PPC_FMTSTR_VREG_C_VREG;
	return 0;
}

/* evmhogumiaa GPR,GPR,GPR */
int evmhogumiaa_GPR_GPR_GPR(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_EVMHOGUMIAA;
	/* 000100AAAAABBBBBCCCCC10100101100 */
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

/* vsubcuq VREG,VREG,VREG */
int vsubcuq_VREG_VREG_VREG(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_VSUBCUQ;
	/* 000100AAAAABBBBBCCCCC10101000000 */
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

/* bcdutrunc. VREG,VREG,VREG */
int bcdutruncD_VREG_VREG_VREG(uint32_t insword, struct ppc_decoded *dec)
{
	dec->properties |= PPC_PROPERTY_DOTTED;
	dec->mnemonic = PPC_MNEM_BCDUTRUNC;
	/* 000100AAAAABBBBBCCCCC10101000001 */
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

/* vavgsh VREG,VREG,VREG */
int vavgsh_VREG_VREG_VREG(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_VAVGSH;
	/* 000100AAAAABBBBBCCCCC10101000010 */
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

/* evmwlssfaaw GPR,GPR,GPR */
int evmwlssfaaw_GPR_GPR_GPR(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_EVMWLSSFAAW;
	/* 000100AAAAABBBBBCCCCC10101000011 */
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

/* vorc VREG,VREG,VREG */
int vorc_VREG_VREG_VREG(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_VORC;
	/* 000100AAAAABBBBBCCCCC10101000100 */
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

/* evmwhssmaa GPR,GPR,GPR */
int evmwhssmaa_GPR_GPR_GPR(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_EVMWHSSMAA;
	/* 000100AAAAABBBBBCCCCC10101000101 */
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

/* udi5fcm. NUM,NUM,NUM */
int udi5fcmD_NUM_NUM_NUM(uint32_t insword, struct ppc_decoded *dec)
{
	dec->properties |= PPC_PROPERTY_DOTTED;
	dec->mnemonic = PPC_MNEM_UDI5FCM;
	/* 000100AAAAABBBBBCCCCC10101000110 */
	dec->operand_n = 3;
	dec->operand_types[0] = PPC_OPER_TYPE_NUM;
	dec->operand_values[0] = (insword & 0x3E00000)>>21;
	dec->operand_types[1] = PPC_OPER_TYPE_NUM;
	dec->operand_values[1] = (insword & 0x1F0000)>>16;
	dec->operand_types[2] = PPC_OPER_TYPE_NUM;
	dec->operand_values[2] = (insword & 0xF800)>>11;
	dec->operand_fmtstr = PPC_FMTSTR_NUM_C_NUM_C_NUM;
	return 0;
}

/* vcmpnezh. VREG,VREG,VREG */
int vcmpnezhD_VREG_VREG_VREG(uint32_t insword, struct ppc_decoded *dec)
{
	dec->properties |= PPC_PROPERTY_DOTTED;
	dec->mnemonic = PPC_MNEM_VCMPNEZH;
	/* 000100AAAAABBBBBCCCCC10101000111 */
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

/* vncipher VREG,VREG,VREG */
int vncipher_VREG_VREG_VREG(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_VNCIPHER;
	/* 000100AAAAABBBBBCCCCC10101001000 */
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

/* vncipherlast VREG,VREG,VREG */
int vncipherlast_VREG_VREG_VREG(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_VNCIPHERLAST;
	/* 000100AAAAABBBBBCCCCC10101001001 */
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

/* evmwlsmfaaw GPR,GPR,GPR */
int evmwlsmfaaw_GPR_GPR_GPR(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_EVMWLSMFAAW;
	/* 000100AAAAABBBBBCCCCC10101001011 */
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

/* vbpermq VREG,VREG,VREG */
int vbpermq_VREG_VREG_VREG(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_VBPERMQ;
	/* 000100AAAAABBBBBCCCCC10101001100 */
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

/* vpksdus VREG,VREG,VREG */
int vpksdus_VREG_VREG_VREG(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_VPKSDUS;
	/* 000100AAAAABBBBBCCCCC10101001110 */
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

/* evmwssfaa GPR,GPR,GPR */
int evmwssfaa_GPR_GPR_GPR(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_EVMWSSFAA;
	/* 000100AAAAABBBBBCCCCC10101010011 */
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

/* vsubcuw VREG,VREG,VREG */
int vsubcuw_VREG_VREG_VREG(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_VSUBCUW;
	/* 000100AAAAABBBBBCCCCC10110000000 */
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

/* bcdctsq. VREG,VREG */
int bcdctsqD_VREG_VREG(uint32_t insword, struct ppc_decoded *dec)
{
	dec->properties |= PPC_PROPERTY_DOTTED;
	dec->mnemonic = PPC_MNEM_BCDCTSQ;
	/* 000100AAAAA00000BBBBB10110000001 */
	dec->operand_n = 2;
	dec->operand_types[0] = PPC_OPER_TYPE_VREG;
	dec->operand_values[0] = (insword & 0x3E00000)>>21;
	dec->operand_types[1] = PPC_OPER_TYPE_VREG;
	dec->operand_values[1] = (insword & 0xF800)>>11;
	dec->operand_fmtstr = PPC_FMTSTR_VREG_C_VREG;
	return 0;
}

/* vavgsw VREG,VREG,VREG */
int vavgsw_VREG_VREG_VREG(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_VAVGSW;
	/* 000100AAAAABBBBBCCCCC10110000010 */
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

/* evmhessfanw GPR,GPR,GPR */
int evmhessfanw_GPR_GPR_GPR(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_EVMHESSFANW;
	/* 000100AAAAABBBBBCCCCC10110000011 */
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

/* vnand VREG,VREG,VREG */
int vnand_VREG_VREG_VREG(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_VNAND;
	/* 000100AAAAABBBBBCCCCC10110000100 */
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

/* evmhossianw GPR,GPR,GPR */
int evmhossianw_GPR_GPR_GPR(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_EVMHOSSIANW;
	/* 000100AAAAABBBBBCCCCC10110000101 */
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

/* udi6fcm. NUM,NUM,NUM */
int udi6fcmD_NUM_NUM_NUM(uint32_t insword, struct ppc_decoded *dec)
{
	dec->properties |= PPC_PROPERTY_DOTTED;
	dec->mnemonic = PPC_MNEM_UDI6FCM;
	/* 000100AAAAABBBBBCCCCC10110000110 */
	dec->operand_n = 3;
	dec->operand_types[0] = PPC_OPER_TYPE_NUM;
	dec->operand_values[0] = (insword & 0x3E00000)>>21;
	dec->operand_types[1] = PPC_OPER_TYPE_NUM;
	dec->operand_values[1] = (insword & 0x1F0000)>>16;
	dec->operand_types[2] = PPC_OPER_TYPE_NUM;
	dec->operand_values[2] = (insword & 0xF800)>>11;
	dec->operand_fmtstr = PPC_FMTSTR_NUM_C_NUM_C_NUM;
	return 0;
}

/* vcmpnezw. VREG,VREG,VREG */
int vcmpnezwD_VREG_VREG_VREG(uint32_t insword, struct ppc_decoded *dec)
{
	dec->properties |= PPC_PROPERTY_DOTTED;
	dec->mnemonic = PPC_MNEM_VCMPNEZW;
	/* 000100AAAAABBBBBCCCCC10110000111 */
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

/* evmheumianw GPR,GPR,GPR */
int evmheumianw_GPR_GPR_GPR(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_EVMHEUMIANW;
	/* 000100AAAAABBBBBCCCCC10110001000 */
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

/* evmhesmianw GPR,GPR,GPR */
int evmhesmianw_GPR_GPR_GPR(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_EVMHESMIANW;
	/* 000100AAAAABBBBBCCCCC10110001001 */
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

/* evmhesmfanw GPR,GPR,GPR */
int evmhesmfanw_GPR_GPR_GPR(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_EVMHESMFANW;
	/* 000100AAAAABBBBBCCCCC10110001011 */
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

/* evmhogumian GPR,GPR,GPR */
int evmhogumian_GPR_GPR_GPR(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_EVMHOGUMIAN;
	/* 000100AAAAABBBBBCCCCC10110101100 */
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

/* evmwlusianw GPR,GPR,GPR */
int evmwlusianw_GPR_GPR_GPR(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_EVMWLUSIANW;
	/* 000100AAAAABBBBBCCCCC10111000000 */
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

/* bcdsr. VREG,VREG,VREG,NUM */
int bcdsrD_VREG_VREG_VREG_NUM(uint32_t insword, struct ppc_decoded *dec)
{
	dec->properties |= PPC_PROPERTY_DOTTED;
	dec->mnemonic = PPC_MNEM_BCDSR;
	/* 000100AAAAABBBBBCCCCC1D111000001 */
	dec->operand_n = 4;
	dec->operand_types[0] = PPC_OPER_TYPE_VREG;
	dec->operand_values[0] = (insword & 0x3E00000)>>21;
	dec->operand_types[1] = PPC_OPER_TYPE_VREG;
	dec->operand_values[1] = (insword & 0x1F0000)>>16;
	dec->operand_types[2] = PPC_OPER_TYPE_VREG;
	dec->operand_values[2] = (insword & 0xF800)>>11;
	dec->operand_types[3] = PPC_OPER_TYPE_NUM;
	dec->operand_values[3] = (insword & 0x200)>>9;
	dec->operand_fmtstr = PPC_FMTSTR_VREG_C_VREG_C_VREG_C_NUM;
	return 0;
}

/* evmwlssfanw GPR,GPR,GPR */
int evmwlssfanw_GPR_GPR_GPR(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_EVMWLSSFANW;
	/* 000100AAAAABBBBBCCCCC10111000011 */
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

/* vsld VREG,VREG,VREG */
int vsld_VREG_VREG_VREG(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_VSLD;
	/* 000100AAAAABBBBBCCCCC10111000100 */
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

/* evmwhssian GPR,GPR,GPR */
int evmwhssian_GPR_GPR_GPR(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_EVMWHSSIAN;
	/* 000100AAAAABBBBBCCCCC10111000101 */
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

/* vcmpgefp. VREG,VREG,VREG */
int vcmpgefpD_VREG_VREG_VREG(uint32_t insword, struct ppc_decoded *dec)
{
	dec->properties |= PPC_PROPERTY_DOTTED;
	dec->mnemonic = PPC_MNEM_VCMPGEFP;
	/* 000100AAAAABBBBBCCCCC10111000110 */
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

/* udi7fcm NUM,NUM,NUM */
int udi7fcm_NUM_NUM_NUM(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_UDI7FCM;
	/* 000100AAAAABBBBBCCCCC10111000111 */
	dec->operand_n = 3;
	dec->operand_types[0] = PPC_OPER_TYPE_NUM;
	dec->operand_values[0] = (insword & 0x3E00000)>>21;
	dec->operand_types[1] = PPC_OPER_TYPE_NUM;
	dec->operand_values[1] = (insword & 0x1F0000)>>16;
	dec->operand_types[2] = PPC_OPER_TYPE_NUM;
	dec->operand_values[2] = (insword & 0xF800)>>11;
	dec->operand_fmtstr = PPC_FMTSTR_NUM_C_NUM_C_NUM;
	return 0;
}

/* vsbox VREG,VREG */
int vsbox_VREG_VREG(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_VSBOX;
	/* 000100AAAAABBBBB0000010111001000 */
	dec->operand_n = 2;
	dec->operand_types[0] = PPC_OPER_TYPE_VREG;
	dec->operand_values[0] = (insword & 0x3E00000)>>21;
	dec->operand_types[1] = PPC_OPER_TYPE_VREG;
	dec->operand_values[1] = (insword & 0x1F0000)>>16;
	dec->operand_fmtstr = PPC_FMTSTR_VREG_C_VREG;
	return 0;
}

/* evmwlsmianw GPR,GPR,GPR */
int evmwlsmianw_GPR_GPR_GPR(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_EVMWLSMIANW;
	/* 000100AAAAABBBBBCCCCC10111001001 */
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

/* evmwlsmfanw GPR,GPR,GPR */
int evmwlsmfanw_GPR_GPR_GPR(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_EVMWLSMFANW;
	/* 000100AAAAABBBBBCCCCC10111001011 */
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

/* vbpermd VREG,VREG,VREG */
int vbpermd_VREG_VREG_VREG(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_VBPERMD;
	/* 000100AAAAABBBBBCCCCC10111001100 */
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

/* vpksdss VREG,VREG,VREG */
int vpksdss_VREG_VREG_VREG(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_VPKSDSS;
	/* 000100AAAAABBBBBCCCCC10111001110 */
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

/* evmwssfan GPR,GPR,GPR */
int evmwssfan_GPR_GPR_GPR(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_EVMWSSFAN;
	/* 000100AAAAABBBBBCCCCC10111010011 */
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

/* vsububs VREG,VREG,VREG */
int vsububs_VREG_VREG_VREG(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_VSUBUBS;
	/* 000100AAAAABBBBBCCCCC11000000000 */
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

/* vclzlsbb GPR,VREG */
int vclzlsbb_GPR_VREG(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_VCLZLSBB;
	/* 000100AAAAA00000BBBBB11000000010 */
	dec->operand_n = 2;
	dec->operand_types[0] = PPC_OPER_TYPE_GPR;
	dec->operand_values[0] = (insword & 0x3E00000)>>21;
	dec->operand_types[1] = PPC_OPER_TYPE_VREG;
	dec->operand_values[1] = (insword & 0xF800)>>11;
	dec->operand_fmtstr = PPC_FMTSTR_GPR_C_VREG;
	return 0;
}

/* mfvscr VREG */
int mfvscr_VREG(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_MFVSCR;
	/* 000100AAAAA000000000011000000100 */
	dec->operand_n = 1;
	dec->operand_types[0] = PPC_OPER_TYPE_VREG;
	dec->operand_values[0] = (insword & 0x3E00000)>>21;
	dec->operand_fmtstr = PPC_FMTSTR_VREG;
	return 0;
}

/* vcmpgtub. VREG,VREG,VREG */
int vcmpgtubD_VREG_VREG_VREG(uint32_t insword, struct ppc_decoded *dec)
{
	dec->properties |= PPC_PROPERTY_DOTTED;
	dec->mnemonic = PPC_MNEM_VCMPGTUB;
	/* 000100AAAAABBBBBCCCCC11000000110 */
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

/* udi8fcm NUM,NUM,NUM */
int udi8fcm_NUM_NUM_NUM(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_UDI8FCM;
	/* 000100AAAAABBBBBCCCCC11000000111 */
	dec->operand_n = 3;
	dec->operand_types[0] = PPC_OPER_TYPE_NUM;
	dec->operand_values[0] = (insword & 0x3E00000)>>21;
	dec->operand_types[1] = PPC_OPER_TYPE_NUM;
	dec->operand_values[1] = (insword & 0x1F0000)>>16;
	dec->operand_types[2] = PPC_OPER_TYPE_NUM;
	dec->operand_values[2] = (insword & 0xF800)>>11;
	dec->operand_fmtstr = PPC_FMTSTR_NUM_C_NUM_C_NUM;
	return 0;
}

/* vsum4ubs VREG,VREG,VREG */
int vsum4ubs_VREG_VREG_VREG(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_VSUM4UBS;
	/* 000100AAAAABBBBBCCCCC11000001000 */
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

/* vextublx GPR,GPR,VREG */
int vextublx_GPR_GPR_VREG(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_VEXTUBLX;
	/* 000100AAAAABBBBBCCCCC11000001101 */
	dec->operand_n = 3;
	dec->operand_types[0] = PPC_OPER_TYPE_GPR;
	dec->operand_values[0] = (insword & 0x3E00000)>>21;
	dec->operand_types[1] = PPC_OPER_TYPE_GPR;
	dec->operand_values[1] = (insword & 0x1F0000)>>16;
	dec->operand_types[2] = PPC_OPER_TYPE_VREG;
	dec->operand_values[2] = (insword & 0xF800)>>11;
	dec->operand_fmtstr = PPC_FMTSTR_GPR_C_GPR_C_VREG;
	return 0;
}

/* vsubuhs VREG,VREG,VREG */
int vsubuhs_VREG_VREG_VREG(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_VSUBUHS;
	/* 000100AAAAABBBBBCCCCC11001000000 */
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

/* mtvscr VREG */
int mtvscr_VREG(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_MTVSCR;
	/* 0001000000000000AAAAA11001000100 */
	dec->operand_n = 1;
	dec->operand_types[0] = PPC_OPER_TYPE_VREG;
	dec->operand_values[0] = (insword & 0xF800)>>11;
	dec->operand_fmtstr = PPC_FMTSTR_VREG;
	return 0;
}

/* vcmpgtuh. VREG,VREG,VREG */
int vcmpgtuhD_VREG_VREG_VREG(uint32_t insword, struct ppc_decoded *dec)
{
	dec->properties |= PPC_PROPERTY_DOTTED;
	dec->mnemonic = PPC_MNEM_VCMPGTUH;
	/* 000100AAAAABBBBBCCCCC11001000110 */
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

/* vsum4shs VREG,VREG,VREG */
int vsum4shs_VREG_VREG_VREG(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_VSUM4SHS;
	/* 000100AAAAABBBBBCCCCC11001001000 */
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

/* udi9fcm NUM,NUM,NUM */
int udi9fcm_NUM_NUM_NUM(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_UDI9FCM;
	/* 000100AAAAABBBBBCCCCC11001001001 */
	dec->operand_n = 3;
	dec->operand_types[0] = PPC_OPER_TYPE_NUM;
	dec->operand_values[0] = (insword & 0x3E00000)>>21;
	dec->operand_types[1] = PPC_OPER_TYPE_NUM;
	dec->operand_values[1] = (insword & 0x1F0000)>>16;
	dec->operand_types[2] = PPC_OPER_TYPE_NUM;
	dec->operand_values[2] = (insword & 0xF800)>>11;
	dec->operand_fmtstr = PPC_FMTSTR_NUM_C_NUM_C_NUM;
	return 0;
}

/* vextuhlx GPR,GPR,VREG */
int vextuhlx_GPR_GPR_VREG(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_VEXTUHLX;
	/* 000100AAAAABBBBBCCCCC11001001101 */
	dec->operand_n = 3;
	dec->operand_types[0] = PPC_OPER_TYPE_GPR;
	dec->operand_values[0] = (insword & 0x3E00000)>>21;
	dec->operand_types[1] = PPC_OPER_TYPE_GPR;
	dec->operand_values[1] = (insword & 0x1F0000)>>16;
	dec->operand_types[2] = PPC_OPER_TYPE_VREG;
	dec->operand_values[2] = (insword & 0xF800)>>11;
	dec->operand_fmtstr = PPC_FMTSTR_GPR_C_GPR_C_VREG;
	return 0;
}

/* vupkhsw VREG,VREG */
int vupkhsw_VREG_VREG(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_VUPKHSW;
	/* 000100AAAAA00000BBBBB11001001110 */
	dec->operand_n = 2;
	dec->operand_types[0] = PPC_OPER_TYPE_VREG;
	dec->operand_values[0] = (insword & 0x3E00000)>>21;
	dec->operand_types[1] = PPC_OPER_TYPE_VREG;
	dec->operand_values[1] = (insword & 0xF800)>>11;
	dec->operand_fmtstr = PPC_FMTSTR_VREG_C_VREG;
	return 0;
}

/* vsubuws VREG,VREG,VREG */
int vsubuws_VREG_VREG_VREG(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_VSUBUWS;
	/* 000100AAAAABBBBBCCCCC11010000000 */
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

/* vshasigmaw VREG,VREG,NUM,NUM */
int vshasigmaw_VREG_VREG_NUM_NUM(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_VSHASIGMAW;
	/* 000100AAAAABBBBBCDDDD11010000010 */
	dec->operand_n = 4;
	dec->operand_types[0] = PPC_OPER_TYPE_VREG;
	dec->operand_values[0] = (insword & 0x3E00000)>>21;
	dec->operand_types[1] = PPC_OPER_TYPE_VREG;
	dec->operand_values[1] = (insword & 0x1F0000)>>16;
	dec->operand_types[2] = PPC_OPER_TYPE_NUM;
	dec->operand_values[2] = (insword & 0x8000)>>15;
	dec->operand_types[3] = PPC_OPER_TYPE_NUM;
	dec->operand_values[3] = (insword & 0x7800)>>11;
	dec->operand_fmtstr = PPC_FMTSTR_VREG_C_VREG_C_NUM_C_NUM;
	return 0;
}

/* veqv VREG,VREG,VREG */
int veqv_VREG_VREG_VREG(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_VEQV;
	/* 000100AAAAABBBBBCCCCC11010000100 */
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

/* vcmpgtuw. VREG,VREG,VREG */
int vcmpgtuwD_VREG_VREG_VREG(uint32_t insword, struct ppc_decoded *dec)
{
	dec->properties |= PPC_PROPERTY_DOTTED;
	dec->mnemonic = PPC_MNEM_VCMPGTUW;
	/* 000100AAAAABBBBBCCCCC11010000110 */
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

/* udi10fcm NUM,NUM,NUM */
int udi10fcm_NUM_NUM_NUM(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_UDI10FCM;
	/* 000100AAAAABBBBBCCCCC11010000111 */
	dec->operand_n = 3;
	dec->operand_types[0] = PPC_OPER_TYPE_NUM;
	dec->operand_values[0] = (insword & 0x3E00000)>>21;
	dec->operand_types[1] = PPC_OPER_TYPE_NUM;
	dec->operand_values[1] = (insword & 0x1F0000)>>16;
	dec->operand_types[2] = PPC_OPER_TYPE_NUM;
	dec->operand_values[2] = (insword & 0xF800)>>11;
	dec->operand_fmtstr = PPC_FMTSTR_NUM_C_NUM_C_NUM;
	return 0;
}

/* vsum2sws VREG,VREG,VREG */
int vsum2sws_VREG_VREG_VREG(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_VSUM2SWS;
	/* 000100AAAAABBBBBCCCCC11010001000 */
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

/* vmrgow VREG,VREG,VREG */
int vmrgow_VREG_VREG_VREG(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_VMRGOW;
	/* 000100AAAAABBBBBCCCCC11010001100 */
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

/* vextuwlx GPR,GPR,VREG */
int vextuwlx_GPR_GPR_VREG(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_VEXTUWLX;
	/* 000100AAAAABBBBBCCCCC11010001101 */
	dec->operand_n = 3;
	dec->operand_types[0] = PPC_OPER_TYPE_GPR;
	dec->operand_values[0] = (insword & 0x3E00000)>>21;
	dec->operand_types[1] = PPC_OPER_TYPE_GPR;
	dec->operand_values[1] = (insword & 0x1F0000)>>16;
	dec->operand_types[2] = PPC_OPER_TYPE_VREG;
	dec->operand_values[2] = (insword & 0xF800)>>11;
	dec->operand_fmtstr = PPC_FMTSTR_GPR_C_GPR_C_VREG;
	return 0;
}

/* vshasigmad VREG,VREG,NUM,NUM */
int vshasigmad_VREG_VREG_NUM_NUM(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_VSHASIGMAD;
	/* 000100AAAAABBBBBCDDDD11011000010 */
	dec->operand_n = 4;
	dec->operand_types[0] = PPC_OPER_TYPE_VREG;
	dec->operand_values[0] = (insword & 0x3E00000)>>21;
	dec->operand_types[1] = PPC_OPER_TYPE_VREG;
	dec->operand_values[1] = (insword & 0x1F0000)>>16;
	dec->operand_types[2] = PPC_OPER_TYPE_NUM;
	dec->operand_values[2] = (insword & 0x8000)>>15;
	dec->operand_types[3] = PPC_OPER_TYPE_NUM;
	dec->operand_values[3] = (insword & 0x7800)>>11;
	dec->operand_fmtstr = PPC_FMTSTR_VREG_C_VREG_C_NUM_C_NUM;
	return 0;
}

/* vsrd VREG,VREG,VREG */
int vsrd_VREG_VREG_VREG(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_VSRD;
	/* 000100AAAAABBBBBCCCCC11011000100 */
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

/* vcmpgtfp. VREG,VREG,VREG */
int vcmpgtfpD_VREG_VREG_VREG(uint32_t insword, struct ppc_decoded *dec)
{
	dec->properties |= PPC_PROPERTY_DOTTED;
	dec->mnemonic = PPC_MNEM_VCMPGTFP;
	/* 000100AAAAABBBBBCCCCC11011000110 */
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

/* vcmpgtud. VREG,VREG,VREG */
int vcmpgtudD_VREG_VREG_VREG(uint32_t insword, struct ppc_decoded *dec)
{
	dec->properties |= PPC_PROPERTY_DOTTED;
	dec->mnemonic = PPC_MNEM_VCMPGTUD;
	/* 000100AAAAABBBBBCCCCC11011000111 */
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

/* vupklsw VREG,VREG */
int vupklsw_VREG_VREG(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_VUPKLSW;
	/* 000100AAAAA00000BBBBB11011001110 */
	dec->operand_n = 2;
	dec->operand_types[0] = PPC_OPER_TYPE_VREG;
	dec->operand_values[0] = (insword & 0x3E00000)>>21;
	dec->operand_types[1] = PPC_OPER_TYPE_VREG;
	dec->operand_values[1] = (insword & 0xF800)>>11;
	dec->operand_fmtstr = PPC_FMTSTR_VREG_C_VREG;
	return 0;
}

/* vsubsbs VREG,VREG,VREG */
int vsubsbs_VREG_VREG_VREG(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_VSUBSBS;
	/* 000100AAAAABBBBBCCCCC11100000000 */
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

/* vclzb VREG,VREG */
int vclzb_VREG_VREG(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_VCLZB;
	/* 000100AAAAA00000BBBBB11100000010 */
	dec->operand_n = 2;
	dec->operand_types[0] = PPC_OPER_TYPE_VREG;
	dec->operand_values[0] = (insword & 0x3E00000)>>21;
	dec->operand_types[1] = PPC_OPER_TYPE_VREG;
	dec->operand_values[1] = (insword & 0xF800)>>11;
	dec->operand_fmtstr = PPC_FMTSTR_VREG_C_VREG;
	return 0;
}

/* vpopcntb VREG,VREG */
int vpopcntb_VREG_VREG(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_VPOPCNTB;
	/* 000100AAAAA00000BBBBB11100000011 */
	dec->operand_n = 2;
	dec->operand_types[0] = PPC_OPER_TYPE_VREG;
	dec->operand_values[0] = (insword & 0x3E00000)>>21;
	dec->operand_types[1] = PPC_OPER_TYPE_VREG;
	dec->operand_values[1] = (insword & 0xF800)>>11;
	dec->operand_fmtstr = PPC_FMTSTR_VREG_C_VREG;
	return 0;
}

/* vsrv VREG,VREG,VREG */
int vsrv_VREG_VREG_VREG(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_VSRV;
	/* 000100AAAAABBBBBCCCCC11100000100 */
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

/* vcmpgtsb. VREG,VREG,VREG */
int vcmpgtsbD_VREG_VREG_VREG(uint32_t insword, struct ppc_decoded *dec)
{
	dec->properties |= PPC_PROPERTY_DOTTED;
	dec->mnemonic = PPC_MNEM_VCMPGTSB;
	/* 000100AAAAABBBBBCCCCC11100000110 */
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

/* udi12fcm NUM,NUM,NUM */
int udi12fcm_NUM_NUM_NUM(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_UDI12FCM;
	/* 000100AAAAABBBBBCCCCC11100000111 */
	dec->operand_n = 3;
	dec->operand_types[0] = PPC_OPER_TYPE_NUM;
	dec->operand_values[0] = (insword & 0x3E00000)>>21;
	dec->operand_types[1] = PPC_OPER_TYPE_NUM;
	dec->operand_values[1] = (insword & 0x1F0000)>>16;
	dec->operand_types[2] = PPC_OPER_TYPE_NUM;
	dec->operand_values[2] = (insword & 0xF800)>>11;
	dec->operand_fmtstr = PPC_FMTSTR_NUM_C_NUM_C_NUM;
	return 0;
}

/* vsum4sbs VREG,VREG,VREG */
int vsum4sbs_VREG_VREG_VREG(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_VSUM4SBS;
	/* 000100AAAAABBBBBCCCCC11100001000 */
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

/* vextubrx GPR,GPR,VREG */
int vextubrx_GPR_GPR_VREG(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_VEXTUBRX;
	/* 000100AAAAABBBBBCCCCC11100001101 */
	dec->operand_n = 3;
	dec->operand_types[0] = PPC_OPER_TYPE_GPR;
	dec->operand_values[0] = (insword & 0x3E00000)>>21;
	dec->operand_types[1] = PPC_OPER_TYPE_GPR;
	dec->operand_values[1] = (insword & 0x1F0000)>>16;
	dec->operand_types[2] = PPC_OPER_TYPE_VREG;
	dec->operand_values[2] = (insword & 0xF800)>>11;
	dec->operand_fmtstr = PPC_FMTSTR_GPR_C_GPR_C_VREG;
	return 0;
}

/* vsubshs VREG,VREG,VREG */
int vsubshs_VREG_VREG_VREG(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_VSUBSHS;
	/* 000100AAAAABBBBBCCCCC11101000000 */
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

/* vclzh VREG,VREG */
int vclzh_VREG_VREG(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_VCLZH;
	/* 000100AAAAA00000BBBBB11101000010 */
	dec->operand_n = 2;
	dec->operand_types[0] = PPC_OPER_TYPE_VREG;
	dec->operand_values[0] = (insword & 0x3E00000)>>21;
	dec->operand_types[1] = PPC_OPER_TYPE_VREG;
	dec->operand_values[1] = (insword & 0xF800)>>11;
	dec->operand_fmtstr = PPC_FMTSTR_VREG_C_VREG;
	return 0;
}

/* vpopcnth VREG,VREG */
int vpopcnth_VREG_VREG(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_VPOPCNTH;
	/* 000100AAAAA00000BBBBB11101000011 */
	dec->operand_n = 2;
	dec->operand_types[0] = PPC_OPER_TYPE_VREG;
	dec->operand_values[0] = (insword & 0x3E00000)>>21;
	dec->operand_types[1] = PPC_OPER_TYPE_VREG;
	dec->operand_values[1] = (insword & 0xF800)>>11;
	dec->operand_fmtstr = PPC_FMTSTR_VREG_C_VREG;
	return 0;
}

/* vslv VREG,VREG,VREG */
int vslv_VREG_VREG_VREG(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_VSLV;
	/* 000100AAAAABBBBBCCCCC11101000100 */
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

/* vcmpgtsh. VREG,VREG,VREG */
int vcmpgtshD_VREG_VREG_VREG(uint32_t insword, struct ppc_decoded *dec)
{
	dec->properties |= PPC_PROPERTY_DOTTED;
	dec->mnemonic = PPC_MNEM_VCMPGTSH;
	/* 000100AAAAABBBBBCCCCC11101000110 */
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

/* udi13fcm NUM,NUM,NUM */
int udi13fcm_NUM_NUM_NUM(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_UDI13FCM;
	/* 000100AAAAABBBBBCCCCC11101000111 */
	dec->operand_n = 3;
	dec->operand_types[0] = PPC_OPER_TYPE_NUM;
	dec->operand_values[0] = (insword & 0x3E00000)>>21;
	dec->operand_types[1] = PPC_OPER_TYPE_NUM;
	dec->operand_values[1] = (insword & 0x1F0000)>>16;
	dec->operand_types[2] = PPC_OPER_TYPE_NUM;
	dec->operand_values[2] = (insword & 0xF800)>>11;
	dec->operand_fmtstr = PPC_FMTSTR_NUM_C_NUM_C_NUM;
	return 0;
}

/* vextuhrx GPR,GPR,VREG */
int vextuhrx_GPR_GPR_VREG(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_VEXTUHRX;
	/* 000100AAAAABBBBBCCCCC11101001101 */
	dec->operand_n = 3;
	dec->operand_types[0] = PPC_OPER_TYPE_GPR;
	dec->operand_values[0] = (insword & 0x3E00000)>>21;
	dec->operand_types[1] = PPC_OPER_TYPE_GPR;
	dec->operand_values[1] = (insword & 0x1F0000)>>16;
	dec->operand_types[2] = PPC_OPER_TYPE_VREG;
	dec->operand_values[2] = (insword & 0xF800)>>11;
	dec->operand_fmtstr = PPC_FMTSTR_GPR_C_GPR_C_VREG;
	return 0;
}

/* vsubsws VREG,VREG,VREG */
int vsubsws_VREG_VREG_VREG(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_VSUBSWS;
	/* 000100AAAAABBBBBCCCCC11110000000 */
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

/* vclzw VREG,VREG */
int vclzw_VREG_VREG(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_VCLZW;
	/* 000100AAAAA00000BBBBB11110000010 */
	dec->operand_n = 2;
	dec->operand_types[0] = PPC_OPER_TYPE_VREG;
	dec->operand_values[0] = (insword & 0x3E00000)>>21;
	dec->operand_types[1] = PPC_OPER_TYPE_VREG;
	dec->operand_values[1] = (insword & 0xF800)>>11;
	dec->operand_fmtstr = PPC_FMTSTR_VREG_C_VREG;
	return 0;
}

/* vpopcntw VREG,VREG */
int vpopcntw_VREG_VREG(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_VPOPCNTW;
	/* 000100AAAAA00000BBBBB11110000011 */
	dec->operand_n = 2;
	dec->operand_types[0] = PPC_OPER_TYPE_VREG;
	dec->operand_values[0] = (insword & 0x3E00000)>>21;
	dec->operand_types[1] = PPC_OPER_TYPE_VREG;
	dec->operand_values[1] = (insword & 0xF800)>>11;
	dec->operand_fmtstr = PPC_FMTSTR_VREG_C_VREG;
	return 0;
}

/* vcmpgtsw. VREG,VREG,VREG */
int vcmpgtswD_VREG_VREG_VREG(uint32_t insword, struct ppc_decoded *dec)
{
	dec->properties |= PPC_PROPERTY_DOTTED;
	dec->mnemonic = PPC_MNEM_VCMPGTSW;
	/* 000100AAAAABBBBBCCCCC11110000110 */
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

/* udi14fcm NUM,NUM,NUM */
int udi14fcm_NUM_NUM_NUM(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_UDI14FCM;
	/* 000100AAAAABBBBBCCCCC11110000111 */
	dec->operand_n = 3;
	dec->operand_types[0] = PPC_OPER_TYPE_NUM;
	dec->operand_values[0] = (insword & 0x3E00000)>>21;
	dec->operand_types[1] = PPC_OPER_TYPE_NUM;
	dec->operand_values[1] = (insword & 0x1F0000)>>16;
	dec->operand_types[2] = PPC_OPER_TYPE_NUM;
	dec->operand_values[2] = (insword & 0xF800)>>11;
	dec->operand_fmtstr = PPC_FMTSTR_NUM_C_NUM_C_NUM;
	return 0;
}

/* vsumsws VREG,VREG,VREG */
int vsumsws_VREG_VREG_VREG(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_VSUMSWS;
	/* 000100AAAAABBBBBCCCCC11110001000 */
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

/* vmrgew VREG,VREG,VREG */
int vmrgew_VREG_VREG_VREG(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_VMRGEW;
	/* 000100AAAAABBBBBCCCCC11110001100 */
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

/* vextuwrx GPR,GPR,VREG */
int vextuwrx_GPR_GPR_VREG(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_VEXTUWRX;
	/* 000100AAAAABBBBBCCCCC11110001101 */
	dec->operand_n = 3;
	dec->operand_types[0] = PPC_OPER_TYPE_GPR;
	dec->operand_values[0] = (insword & 0x3E00000)>>21;
	dec->operand_types[1] = PPC_OPER_TYPE_GPR;
	dec->operand_values[1] = (insword & 0x1F0000)>>16;
	dec->operand_types[2] = PPC_OPER_TYPE_VREG;
	dec->operand_values[2] = (insword & 0xF800)>>11;
	dec->operand_fmtstr = PPC_FMTSTR_GPR_C_GPR_C_VREG;
	return 0;
}

/* vclzd VREG,VREG */
int vclzd_VREG_VREG(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_VCLZD;
	/* 000100AAAAA00000BBBBB11111000010 */
	dec->operand_n = 2;
	dec->operand_types[0] = PPC_OPER_TYPE_VREG;
	dec->operand_values[0] = (insword & 0x3E00000)>>21;
	dec->operand_types[1] = PPC_OPER_TYPE_VREG;
	dec->operand_values[1] = (insword & 0xF800)>>11;
	dec->operand_fmtstr = PPC_FMTSTR_VREG_C_VREG;
	return 0;
}

/* vpopcntd VREG,VREG */
int vpopcntd_VREG_VREG(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_VPOPCNTD;
	/* 000100AAAAA00000BBBBB11111000011 */
	dec->operand_n = 2;
	dec->operand_types[0] = PPC_OPER_TYPE_VREG;
	dec->operand_values[0] = (insword & 0x3E00000)>>21;
	dec->operand_types[1] = PPC_OPER_TYPE_VREG;
	dec->operand_values[1] = (insword & 0xF800)>>11;
	dec->operand_fmtstr = PPC_FMTSTR_VREG_C_VREG;
	return 0;
}

/* vcmpbfp. VREG,VREG,VREG */
int vcmpbfpD_VREG_VREG_VREG(uint32_t insword, struct ppc_decoded *dec)
{
	dec->properties |= PPC_PROPERTY_DOTTED;
	dec->mnemonic = PPC_MNEM_VCMPBFP;
	/* 000100AAAAABBBBBCCCCC11111000110 */
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

/* vcmpgtsd. VREG,VREG,VREG */
int vcmpgtsdD_VREG_VREG_VREG(uint32_t insword, struct ppc_decoded *dec)
{
	dec->properties |= PPC_PROPERTY_DOTTED;
	dec->mnemonic = PPC_MNEM_VCMPGTSD;
	/* 000100AAAAABBBBBCCCCC11111000111 */
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

/* dcbz_l GPR,GPR */
int dcbz_l_GPR_GPR(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_DCBZ_L;
	/* 00010000000AAAAABBBBB11111101100 */
	dec->operand_n = 2;
	dec->operand_types[0] = PPC_OPER_TYPE_GPR;
	dec->operand_values[0] = (insword & 0x1F0000)>>16;
	dec->operand_types[1] = PPC_OPER_TYPE_GPR;
	dec->operand_values[1] = (insword & 0xF800)>>11;
	dec->operand_fmtstr = PPC_FMTSTR_GPR_C_GPR;
	return 0;
}

/* machhwu GPR,GPR,GPR */
int machhwu_GPR_GPR_GPR(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_MACHHWU;
	/* 000100AAAAABBBBBCCCCC00000011000 */
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

/* machhwu. GPR,GPR,GPR */
int machhwuD_GPR_GPR_GPR(uint32_t insword, struct ppc_decoded *dec)
{
	dec->properties |= PPC_PROPERTY_DOTTED;
	dec->mnemonic = PPC_MNEM_MACHHWU;
	/* 000100AAAAABBBBBCCCCC00000011001 */
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

/* machhw GPR,GPR,GPR */
int machhw_GPR_GPR_GPR(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_MACHHW;
	/* 000100AAAAABBBBBCCCCC00001011000 */
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

/* machhw. GPR,GPR,GPR */
int machhwD_GPR_GPR_GPR(uint32_t insword, struct ppc_decoded *dec)
{
	dec->properties |= PPC_PROPERTY_DOTTED;
	dec->mnemonic = PPC_MNEM_MACHHW;
	/* 000100AAAAABBBBBCCCCC00001011001 */
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

/* machhwsu GPR,GPR,GPR */
int machhwsu_GPR_GPR_GPR(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_MACHHWSU;
	/* 000100AAAAABBBBBCCCCC00010011000 */
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

/* machhwsu. GPR,GPR,GPR */
int machhwsuD_GPR_GPR_GPR(uint32_t insword, struct ppc_decoded *dec)
{
	dec->properties |= PPC_PROPERTY_DOTTED;
	dec->mnemonic = PPC_MNEM_MACHHWSU;
	/* 000100AAAAABBBBBCxCCC00010011001 */
	dec->operand_n = 3;
	dec->operand_types[0] = PPC_OPER_TYPE_GPR;
	dec->operand_values[0] = (insword & 0x3E00000)>>21;
	dec->operand_types[1] = PPC_OPER_TYPE_GPR;
	dec->operand_values[1] = (insword & 0x1F0000)>>16;
	dec->operand_types[2] = PPC_OPER_TYPE_GPR;
	dec->operand_values[2] = ((insword & 0x8000)>>12)|((insword & 0x3800)>>11);
	dec->operand_fmtstr = PPC_FMTSTR_GPR_C_GPR_C_GPR;
	return 0;
}

/* machhws GPR,GPR,GPR */
int machhws_GPR_GPR_GPR(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_MACHHWS;
	/* 000100AAAAABBBBBCCCCC00011011000 */
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

/* machhws. GPR,GPR,GPR */
int machhwsD_GPR_GPR_GPR(uint32_t insword, struct ppc_decoded *dec)
{
	dec->properties |= PPC_PROPERTY_DOTTED;
	dec->mnemonic = PPC_MNEM_MACHHWS;
	/* 000100AAAAABBBBBCCCCC00011011001 */
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

/* macchwu GPR,GPR,GPR */
int macchwu_GPR_GPR_GPR(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_MACCHWU;
	/* 000100AAAAABBBBBCCCCC00100011000 */
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

/* macchwu. GPR,GPR,GPR */
int macchwuD_GPR_GPR_GPR(uint32_t insword, struct ppc_decoded *dec)
{
	dec->properties |= PPC_PROPERTY_DOTTED;
	dec->mnemonic = PPC_MNEM_MACCHWU;
	/* 000100AAAAABBBBBCCCCC00100011001 */
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

/* macchw GPR,GPR,GPR */
int macchw_GPR_GPR_GPR(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_MACCHW;
	/* 000100AAAAABBBBBCCCCC00101011000 */
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

/* macchw. GPR,GPR,GPR */
int macchwD_GPR_GPR_GPR(uint32_t insword, struct ppc_decoded *dec)
{
	dec->properties |= PPC_PROPERTY_DOTTED;
	dec->mnemonic = PPC_MNEM_MACCHW;
	/* 000100AAAAABBBBBCCCCC00101011001 */
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

/* macchwsu GPR,GPR,GPR */
int macchwsu_GPR_GPR_GPR(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_MACCHWSU;
	/* 000100AAAAABBBBBCCCCC00110011000 */
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

/* macchwsu. GPR,GPR,GPR */
int macchwsuD_GPR_GPR_GPR(uint32_t insword, struct ppc_decoded *dec)
{
	dec->properties |= PPC_PROPERTY_DOTTED;
	dec->mnemonic = PPC_MNEM_MACCHWSU;
	/* 000100AAAAABBBBBCCCCC00110011001 */
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

/* macchws GPR,GPR,GPR */
int macchws_GPR_GPR_GPR(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_MACCHWS;
	/* 000100AAAAABBBBBCCCCC00111011000 */
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

/* macchws. GPR,GPR,GPR */
int macchwsD_GPR_GPR_GPR(uint32_t insword, struct ppc_decoded *dec)
{
	dec->properties |= PPC_PROPERTY_DOTTED;
	dec->mnemonic = PPC_MNEM_MACCHWS;
	/* 000100AAAAABBBBBCCxCC00111011001 */
	dec->operand_n = 3;
	dec->operand_types[0] = PPC_OPER_TYPE_GPR;
	dec->operand_values[0] = (insword & 0x3E00000)>>21;
	dec->operand_types[1] = PPC_OPER_TYPE_GPR;
	dec->operand_values[1] = (insword & 0x1F0000)>>16;
	dec->operand_types[2] = PPC_OPER_TYPE_GPR;
	dec->operand_values[2] = ((insword & 0xC000)>>12)|((insword & 0x1800)>>11);
	dec->operand_fmtstr = PPC_FMTSTR_GPR_C_GPR_C_GPR;
	return 0;
}

/* evnor GPR,GPR,GPR */
int evnor_GPR_GPR_GPR(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_EVNOR;
	/* 000100AAAAABBBBBCCCCC01000011000 */
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

/* eveqv GPR,GPR,GPR */
int eveqv_GPR_GPR_GPR(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_EVEQV;
	/* 000100AAAAABBBBBCCCCC01000011001 */
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

/* evorc GPR,GPR,GPR */
int evorc_GPR_GPR_GPR(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_EVORC;
	/* 000100AAAAABBBBBCCCCC01000011011 */
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

/* evcmpltu CREG,GPR,GPR */
int evcmpltu_CREG_GPR_GPR(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_EVCMPLTU;
	/* 000100AAAxxBBBBBCCCCC01000110010 */
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

/* evfsctuiz GPR,GPR */
int evfsctuiz_GPR_GPR(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_EVFSCTUIZ;
	/* 000100AAAAAxxxxxBBBBB01010011000 */
	dec->operand_n = 2;
	dec->operand_types[0] = PPC_OPER_TYPE_GPR;
	dec->operand_values[0] = (insword & 0x3E00000)>>21;
	dec->operand_types[1] = PPC_OPER_TYPE_GPR;
	dec->operand_values[1] = (insword & 0xF800)>>11;
	dec->operand_fmtstr = PPC_FMTSTR_GPR_C_GPR;
	return 0;
}

/* evfsctsiz GPR,GPR */
int evfsctsiz_GPR_GPR(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_EVFSCTSIZ;
	/* 000100AAAAAxxxxxBBBBB01010011010 */
	dec->operand_n = 2;
	dec->operand_types[0] = PPC_OPER_TYPE_GPR;
	dec->operand_values[0] = (insword & 0x3E00000)>>21;
	dec->operand_types[1] = PPC_OPER_TYPE_GPR;
	dec->operand_values[1] = (insword & 0xF800)>>11;
	dec->operand_fmtstr = PPC_FMTSTR_GPR_C_GPR;
	return 0;
}

/* efsctuiz GPR,GPR */
int efsctuiz_GPR_GPR(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_EFSCTUIZ;
	/* 000100AAAAAxxxxxBBBBB01011011000 */
	dec->operand_n = 2;
	dec->operand_types[0] = PPC_OPER_TYPE_GPR;
	dec->operand_values[0] = (insword & 0x3E00000)>>21;
	dec->operand_types[1] = PPC_OPER_TYPE_GPR;
	dec->operand_values[1] = (insword & 0xF800)>>11;
	dec->operand_fmtstr = PPC_FMTSTR_GPR_C_GPR;
	return 0;
}

/* efsctsiz GPR,GPR */
int efsctsiz_GPR_GPR(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_EFSCTSIZ;
	/* 000100AAAAAxxxxxBBBBB01011011010 */
	dec->operand_n = 2;
	dec->operand_types[0] = PPC_OPER_TYPE_GPR;
	dec->operand_values[0] = (insword & 0x3E00000)>>21;
	dec->operand_types[1] = PPC_OPER_TYPE_GPR;
	dec->operand_values[1] = (insword & 0xF800)>>11;
	dec->operand_fmtstr = PPC_FMTSTR_GPR_C_GPR;
	return 0;
}

/* efdcfuf GPR,GPR */
int efdcfuf_GPR_GPR(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_EFDCFUF;
	/* 000100AAAAAxxxxxBBBBB01011110010 */
	dec->operand_n = 2;
	dec->operand_types[0] = PPC_OPER_TYPE_GPR;
	dec->operand_values[0] = (insword & 0x3E00000)>>21;
	dec->operand_types[1] = PPC_OPER_TYPE_GPR;
	dec->operand_values[1] = (insword & 0xF800)>>11;
	dec->operand_fmtstr = PPC_FMTSTR_GPR_C_GPR;
	return 0;
}

/* maclhwu GPR,GPR,GPR */
int maclhwu_GPR_GPR_GPR(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_MACLHWU;
	/* 000100AAAAABBBBBCCxCC01100011000 */
	dec->operand_n = 3;
	dec->operand_types[0] = PPC_OPER_TYPE_GPR;
	dec->operand_values[0] = (insword & 0x3E00000)>>21;
	dec->operand_types[1] = PPC_OPER_TYPE_GPR;
	dec->operand_values[1] = (insword & 0x1F0000)>>16;
	dec->operand_types[2] = PPC_OPER_TYPE_GPR;
	dec->operand_values[2] = ((insword & 0xC000)>>12)|((insword & 0x1800)>>11);
	dec->operand_fmtstr = PPC_FMTSTR_GPR_C_GPR_C_GPR;
	return 0;
}

/* maclhwu. GPR,GPR,GPR */
int maclhwuD_GPR_GPR_GPR(uint32_t insword, struct ppc_decoded *dec)
{
	dec->properties |= PPC_PROPERTY_DOTTED;
	dec->mnemonic = PPC_MNEM_MACLHWU;
	/* 000100AAAAABBBBBCCCCC01100011001 */
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

/* maclhw GPR,GPR,GPR */
int maclhw_GPR_GPR_GPR(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_MACLHW;
	/* 000100AAAAABBBBBCCCCC01101011000 */
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

/* maclhw. GPR,GPR,GPR */
int maclhwD_GPR_GPR_GPR(uint32_t insword, struct ppc_decoded *dec)
{
	dec->properties |= PPC_PROPERTY_DOTTED;
	dec->mnemonic = PPC_MNEM_MACLHW;
	/* 000100AAAAABBBBBCCCCC01101011001 */
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

/* maclhwsu GPR,GPR,GPR */
int maclhwsu_GPR_GPR_GPR(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_MACLHWSU;
	/* 000100AAAAABBBBBCCCCC01110011000 */
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

/* maclhwsu. GPR,GPR,GPR */
int maclhwsuD_GPR_GPR_GPR(uint32_t insword, struct ppc_decoded *dec)
{
	dec->properties |= PPC_PROPERTY_DOTTED;
	dec->mnemonic = PPC_MNEM_MACLHWSU;
	/* 000100AAAAABBBBBCCCCC01110011001 */
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

/* maclhws GPR,GPR,GPR */
int maclhws_GPR_GPR_GPR(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_MACLHWS;
	/* 000100AAAAABBBBBCCCCC01111011000 */
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

/* maclhws. GPR,GPR,GPR */
int maclhwsD_GPR_GPR_GPR(uint32_t insword, struct ppc_decoded *dec)
{
	dec->properties |= PPC_PROPERTY_DOTTED;
	dec->mnemonic = PPC_MNEM_MACLHWS;
	/* 000100AAAAABBBBBCCCCC01111011001 */
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

/* machhwuo GPR,GPR,GPR */
int machhwuo_GPR_GPR_GPR(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_MACHHWUO;
	/* 000100AAAAABBBBBCCCCC10000011000 */
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

/* machhwuo. GPR,GPR,GPR */
int machhwuoD_GPR_GPR_GPR(uint32_t insword, struct ppc_decoded *dec)
{
	dec->properties |= PPC_PROPERTY_DOTTED;
	dec->mnemonic = PPC_MNEM_MACHHWUO;
	/* 000100AAAAABBBBBCCCCC10000011001 */
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

/* machhwo GPR,GPR,GPR */
int machhwo_GPR_GPR_GPR(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_MACHHWO;
	/* 000100AAAAABBBBBCCCCC10001011000 */
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

/* machhwo. GPR,GPR,GPR */
int machhwoD_GPR_GPR_GPR(uint32_t insword, struct ppc_decoded *dec)
{
	dec->properties |= PPC_PROPERTY_DOTTED;
	dec->mnemonic = PPC_MNEM_MACHHWO;
	/* 000100AAAAABBBBBCCCCC10001011001 */
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

/* evmwsmf GPR,GPR,GPR */
int evmwsmf_GPR_GPR_GPR(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_EVMWSMF;
	/* 000100AAAAABBBBBCCCCC10001011011 */
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

/* vor VREG,VREG,VREG */
int vor_VREG_VREG_VREG(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_VOR;
	/* 000100AAAAABBBBBCCCCC10010000100 */
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

/* machhwsuo GPR,GPR,GPR */
int machhwsuo_GPR_GPR_GPR(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_MACHHWSUO;
	/* 000100AAAAABBBBBCCCCC10010011000 */
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

/* machhwsuo. GPR,GPR,GPR */
int machhwsuoD_GPR_GPR_GPR(uint32_t insword, struct ppc_decoded *dec)
{
	dec->properties |= PPC_PROPERTY_DOTTED;
	dec->mnemonic = PPC_MNEM_MACHHWSUO;
	/* 000100AAAAABBBBBCCCCC10010011001 */
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

/* machhwso GPR,GPR,GPR */
int machhwso_GPR_GPR_GPR(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_MACHHWSO;
	/* 000100AAAAABBBBBCCCCC10011011000 */
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

/* machhwso. GPR,GPR,GPR */
int machhwsoD_GPR_GPR_GPR(uint32_t insword, struct ppc_decoded *dec)
{
	dec->properties |= PPC_PROPERTY_DOTTED;
	dec->mnemonic = PPC_MNEM_MACHHWSO;
	/* 000100AAAAABBBBBCCCCC10011011001 */
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

/* vnor VREG,VREG,VREG */
int vnor_VREG_VREG_VREG(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_VNOR;
	/* 000100AAAAABBBBBCCCCC10100000100 */
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

/* macchwuo GPR,GPR,GPR */
int macchwuo_GPR_GPR_GPR(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_MACCHWUO;
	/* 000100AAAAABBBBBCCCCC10100011000 */
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

/* macchwuo. GPR,GPR,GPR */
int macchwuoD_GPR_GPR_GPR(uint32_t insword, struct ppc_decoded *dec)
{
	dec->properties |= PPC_PROPERTY_DOTTED;
	dec->mnemonic = PPC_MNEM_MACCHWUO;
	/* 000100AAAAABBBBBCCCCC10100011001 */
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

/* macchwo GPR,GPR,GPR */
int macchwo_GPR_GPR_GPR(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_MACCHWO;
	/* 000100AAAAABBBBBCCCCC10101011000 */
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

/* macchwo. GPR,GPR,GPR */
int macchwoD_GPR_GPR_GPR(uint32_t insword, struct ppc_decoded *dec)
{
	dec->properties |= PPC_PROPERTY_DOTTED;
	dec->mnemonic = PPC_MNEM_MACCHWO;
	/* 000100AAAAABBBBBCCCCC10101011001 */
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

/* evmwsmfaa GPR,GPR,GPR */
int evmwsmfaa_GPR_GPR_GPR(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_EVMWSMFAA;
	/* 000100AAAAABBBBBCCCCC10101011011 */
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

/* macchwsuo GPR,GPR,GPR */
int macchwsuo_GPR_GPR_GPR(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_MACCHWSUO;
	/* 000100AAAAABBBBBCCCCC10110011000 */
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

/* macchwsuo. GPR,GPR,GPR */
int macchwsuoD_GPR_GPR_GPR(uint32_t insword, struct ppc_decoded *dec)
{
	dec->properties |= PPC_PROPERTY_DOTTED;
	dec->mnemonic = PPC_MNEM_MACCHWSUO;
	/* 000100AAAAABBBBBCCCCC10110011001 */
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

/* evmwlumianw GPR,GPR,GPR */
int evmwlumianw_GPR_GPR_GPR(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_EVMWLUMIANW;
	/* 000100AAAAABBBBBCCCCC10111001000 */
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

/* macchwso GPR,GPR,GPR */
int macchwso_GPR_GPR_GPR(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_MACCHWSO;
	/* 000100AAAAABBBBBCCCCC10111011000 */
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

/* macchwso. GPR,GPR,GPR */
int macchwsoD_GPR_GPR_GPR(uint32_t insword, struct ppc_decoded *dec)
{
	dec->properties |= PPC_PROPERTY_DOTTED;
	dec->mnemonic = PPC_MNEM_MACCHWSO;
	/* 000100AAAAABBBBBCCCCC10111011001 */
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

/* evmwsmfan GPR,GPR,GPR */
int evmwsmfan_GPR_GPR_GPR(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_EVMWSMFAN;
	/* 000100AAAAABBBBBCCCCC10111011011 */
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

/* maclhwuo GPR,GPR,GPR */
int maclhwuo_GPR_GPR_GPR(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_MACLHWUO;
	/* 000100AAAAABBBBBCCCCC11100011000 */
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

/* maclhwuo. GPR,GPR,GPR */
int maclhwuoD_GPR_GPR_GPR(uint32_t insword, struct ppc_decoded *dec)
{
	dec->properties |= PPC_PROPERTY_DOTTED;
	dec->mnemonic = PPC_MNEM_MACLHWUO;
	/* 000100AAAAABBBBBCCCCC11100011001 */
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

/* maclhwo GPR,GPR,GPR */
int maclhwo_GPR_GPR_GPR(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_MACLHWO;
	/* 000100AAAAABBBBBCCCCC11101011000 */
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

/* maclhwo. GPR,GPR,GPR */
int maclhwoD_GPR_GPR_GPR(uint32_t insword, struct ppc_decoded *dec)
{
	dec->properties |= PPC_PROPERTY_DOTTED;
	dec->mnemonic = PPC_MNEM_MACLHWO;
	/* 000100AAAAABBBBBxCCCC11101011001 */
	dec->operand_n = 3;
	dec->operand_types[0] = PPC_OPER_TYPE_GPR;
	dec->operand_values[0] = (insword & 0x3E00000)>>21;
	dec->operand_types[1] = PPC_OPER_TYPE_GPR;
	dec->operand_values[1] = (insword & 0x1F0000)>>16;
	dec->operand_types[2] = PPC_OPER_TYPE_GPR;
	dec->operand_values[2] = (insword & 0x7800)>>11;
	dec->operand_fmtstr = PPC_FMTSTR_GPR_C_GPR_C_GPR;
	return 0;
}

/* maclhwsuo GPR,GPR,GPR */
int maclhwsuo_GPR_GPR_GPR(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_MACLHWSUO;
	/* 000100AAAAABBBBBCCCCC11110011000 */
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

/* maclhwsuo. GPR,GPR,GPR */
int maclhwsuoD_GPR_GPR_GPR(uint32_t insword, struct ppc_decoded *dec)
{
	dec->properties |= PPC_PROPERTY_DOTTED;
	dec->mnemonic = PPC_MNEM_MACLHWSUO;
	/* 000100AAAAABBBBBCCCCC11110011001 */
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

/* maclhwso GPR,GPR,GPR */
int maclhwso_GPR_GPR_GPR(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_MACLHWSO;
	/* 000100AAAAABBBBBCCCCC11111011000 */
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

/* maclhwso. GPR,GPR,GPR */
int maclhwsoD_GPR_GPR_GPR(uint32_t insword, struct ppc_decoded *dec)
{
	dec->properties |= PPC_PROPERTY_DOTTED;
	dec->mnemonic = PPC_MNEM_MACLHWSO;
	/* 000100AAAAABBBBBCCxCC11111011001 */
	dec->operand_n = 3;
	dec->operand_types[0] = PPC_OPER_TYPE_GPR;
	dec->operand_values[0] = (insword & 0x3E00000)>>21;
	dec->operand_types[1] = PPC_OPER_TYPE_GPR;
	dec->operand_values[1] = (insword & 0x1F0000)>>16;
	dec->operand_types[2] = PPC_OPER_TYPE_GPR;
	dec->operand_values[2] = ((insword & 0xC000)>>12)|((insword & 0x1800)>>11);
	dec->operand_fmtstr = PPC_FMTSTR_GPR_C_GPR_C_GPR;
	return 0;
}

/* mulhhw GPR,GPR,GPR */
int mulhhw_GPR_GPR_GPR(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_MULHHW;
	/* 000100AAAAABBBBBCCCCC00001010000 */
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

/* mulhhw. GPR,GPR,GPR */
int mulhhwD_GPR_GPR_GPR(uint32_t insword, struct ppc_decoded *dec)
{
	dec->properties |= PPC_PROPERTY_DOTTED;
	dec->mnemonic = PPC_MNEM_MULHHW;
	/* 000100AAAAAxBBBBCCCCC00001010001 */
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

/* mulchwu GPR,GPR,GPR */
int mulchwu_GPR_GPR_GPR(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_MULCHWU;
	/* 000100AAAAABxBBBCCCCC00100010000 */
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

/* mulchwu. GPR,GPR,GPR */
int mulchwuD_GPR_GPR_GPR(uint32_t insword, struct ppc_decoded *dec)
{
	dec->properties |= PPC_PROPERTY_DOTTED;
	dec->mnemonic = PPC_MNEM_MULCHWU;
	/* 000100AAAAABBBBBCCCCC00100010001 */
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

/* evextsb GPR,GPR */
int evextsb_GPR_GPR(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_EVEXTSB;
	/* 000100AAAAABBBBBxxxxx01000001010 */
	dec->operand_n = 2;
	dec->operand_types[0] = PPC_OPER_TYPE_GPR;
	dec->operand_values[0] = (insword & 0x3E00000)>>21;
	dec->operand_types[1] = PPC_OPER_TYPE_GPR;
	dec->operand_values[1] = (insword & 0x1F0000)>>16;
	dec->operand_fmtstr = PPC_FMTSTR_GPR_C_GPR;
	return 0;
}

/* evand GPR,GPR,GPR */
int evand_GPR_GPR_GPR(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_EVAND;
	/* 000100AAAAABBBBBCCCCC01000010001 */
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

/* evfsnmadd GPR,GPR,GPR */
int evfsnmadd_GPR_GPR_GPR(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_EVFSNMADD;
	/* 000100AAAAABBBxBCCCCC01010001010 */
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

/* efsnmadd GPR,GPR,GPR */
int efsnmadd_GPR_GPR_GPR(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_EFSNMADD;
	/* 000100AAAAABBBBBCCCCC01011001010 */
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

/* evmhessianw GPR,GPR,GPR */
int evmhessianw_GPR_GPR_GPR(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_EVMHESSIANW;
	/* 000100AAAAABBxBBCCCCC10110000001 */
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

/* vctzlsbb GPR,VREG */
int vctzlsbb_GPR_VREG(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_VCTZLSBB;
	/* 000100AAAAA00001BBBBB11000000010 */
	dec->operand_n = 2;
	dec->operand_types[0] = PPC_OPER_TYPE_GPR;
	dec->operand_values[0] = (insword & 0x3E00000)>>21;
	dec->operand_types[1] = PPC_OPER_TYPE_VREG;
	dec->operand_values[1] = (insword & 0xF800)>>11;
	dec->operand_fmtstr = PPC_FMTSTR_GPR_C_VREG;
	return 0;
}

/* bcdcfsq. VREG,VREG,NUM */
int bcdcfsqD_VREG_VREG_NUM(uint32_t insword, struct ppc_decoded *dec)
{
	dec->properties |= PPC_PROPERTY_DOTTED;
	dec->mnemonic = PPC_MNEM_BCDCFSQ;
	/* 000100AAAAA00010BBBBB1C110000001 */
	dec->operand_n = 3;
	dec->operand_types[0] = PPC_OPER_TYPE_VREG;
	dec->operand_values[0] = (insword & 0x3E00000)>>21;
	dec->operand_types[1] = PPC_OPER_TYPE_VREG;
	dec->operand_values[1] = (insword & 0xF800)>>11;
	dec->operand_types[2] = PPC_OPER_TYPE_NUM;
	dec->operand_values[2] = (insword & 0x200)>>9;
	dec->operand_fmtstr = PPC_FMTSTR_VREG_C_VREG_C_NUM;
	return 0;
}

/* evfscfh GPR,GPR */
int evfscfh_GPR_GPR(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_EVFSCFH;
	/* 000100AAAAA00100BBBBB01010010001 */
	dec->operand_n = 2;
	dec->operand_types[0] = PPC_OPER_TYPE_GPR;
	dec->operand_values[0] = (insword & 0x3E00000)>>21;
	dec->operand_types[1] = PPC_OPER_TYPE_GPR;
	dec->operand_values[1] = (insword & 0xF800)>>11;
	dec->operand_fmtstr = PPC_FMTSTR_GPR_C_GPR;
	return 0;
}

/* efscfh GPR,GPR */
int efscfh_GPR_GPR(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_EFSCFH;
	/* 000100AAAAA00100BBBBB01011010001 */
	dec->operand_n = 2;
	dec->operand_types[0] = PPC_OPER_TYPE_GPR;
	dec->operand_values[0] = (insword & 0x3E00000)>>21;
	dec->operand_types[1] = PPC_OPER_TYPE_GPR;
	dec->operand_values[1] = (insword & 0xF800)>>11;
	dec->operand_fmtstr = PPC_FMTSTR_GPR_C_GPR;
	return 0;
}

/* efdcth GPR,GPR */
int efdcth_GPR_GPR(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_EFDCTH;
	/* 000100AAAAA00100BBBBB01011110101 */
	dec->operand_n = 2;
	dec->operand_types[0] = PPC_OPER_TYPE_GPR;
	dec->operand_values[0] = (insword & 0x3E00000)>>21;
	dec->operand_types[1] = PPC_OPER_TYPE_GPR;
	dec->operand_values[1] = (insword & 0xF800)>>11;
	dec->operand_fmtstr = PPC_FMTSTR_GPR_C_GPR;
	return 0;
}

/* bcdctz. VREG,VREG,NUM */
int bcdctzD_VREG_VREG_NUM(uint32_t insword, struct ppc_decoded *dec)
{
	dec->properties |= PPC_PROPERTY_DOTTED;
	dec->mnemonic = PPC_MNEM_BCDCTZ;
	/* 000100AAAAA00100BBBBB1C110000001 */
	dec->operand_n = 3;
	dec->operand_types[0] = PPC_OPER_TYPE_VREG;
	dec->operand_values[0] = (insword & 0x3E00000)>>21;
	dec->operand_types[1] = PPC_OPER_TYPE_VREG;
	dec->operand_values[1] = (insword & 0xF800)>>11;
	dec->operand_types[2] = PPC_OPER_TYPE_NUM;
	dec->operand_values[2] = (insword & 0x200)>>9;
	dec->operand_fmtstr = PPC_FMTSTR_VREG_C_VREG_C_NUM;
	return 0;
}

/* bcdctn. VREG,VREG */
int bcdctnD_VREG_VREG(uint32_t insword, struct ppc_decoded *dec)
{
	dec->properties |= PPC_PROPERTY_DOTTED;
	dec->mnemonic = PPC_MNEM_BCDCTN;
	/* 000100AAAAA00101BBBBB10110000001 */
	dec->operand_n = 2;
	dec->operand_types[0] = PPC_OPER_TYPE_VREG;
	dec->operand_values[0] = (insword & 0x3E00000)>>21;
	dec->operand_types[1] = PPC_OPER_TYPE_VREG;
	dec->operand_values[1] = (insword & 0xF800)>>11;
	dec->operand_fmtstr = PPC_FMTSTR_VREG_C_VREG;
	return 0;
}

/* bcdcfz. VREG,VREG,NUM */
int bcdcfzD_VREG_VREG_NUM(uint32_t insword, struct ppc_decoded *dec)
{
	dec->properties |= PPC_PROPERTY_DOTTED;
	dec->mnemonic = PPC_MNEM_BCDCFZ;
	/* 000100AAAAA00110BBBBB1C110000001 */
	dec->operand_n = 3;
	dec->operand_types[0] = PPC_OPER_TYPE_VREG;
	dec->operand_values[0] = (insword & 0x3E00000)>>21;
	dec->operand_types[1] = PPC_OPER_TYPE_VREG;
	dec->operand_values[1] = (insword & 0xF800)>>11;
	dec->operand_types[2] = PPC_OPER_TYPE_NUM;
	dec->operand_values[2] = (insword & 0x200)>>9;
	dec->operand_fmtstr = PPC_FMTSTR_VREG_C_VREG_C_NUM;
	return 0;
}

/* vnegw VREG,VREG */
int vnegw_VREG_VREG(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_VNEGW;
	/* 000100AAAAA00110BBBBB11000000010 */
	dec->operand_n = 2;
	dec->operand_types[0] = PPC_OPER_TYPE_VREG;
	dec->operand_values[0] = (insword & 0x3E00000)>>21;
	dec->operand_types[1] = PPC_OPER_TYPE_VREG;
	dec->operand_values[1] = (insword & 0xF800)>>11;
	dec->operand_fmtstr = PPC_FMTSTR_VREG_C_VREG;
	return 0;
}

/* bcdcfn. VREG,VREG,NUM */
int bcdcfnD_VREG_VREG_NUM(uint32_t insword, struct ppc_decoded *dec)
{
	dec->properties |= PPC_PROPERTY_DOTTED;
	dec->mnemonic = PPC_MNEM_BCDCFN;
	/* 000100AAAAA00111BBBBB1C110000001 */
	dec->operand_n = 3;
	dec->operand_types[0] = PPC_OPER_TYPE_VREG;
	dec->operand_values[0] = (insword & 0x3E00000)>>21;
	dec->operand_types[1] = PPC_OPER_TYPE_VREG;
	dec->operand_values[1] = (insword & 0xF800)>>11;
	dec->operand_types[2] = PPC_OPER_TYPE_NUM;
	dec->operand_values[2] = (insword & 0x200)>>9;
	dec->operand_fmtstr = PPC_FMTSTR_VREG_C_VREG_C_NUM;
	return 0;
}

/* vnegd VREG,VREG */
int vnegd_VREG_VREG(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_VNEGD;
	/* 000100AAAAA00111BBBBB11000000010 */
	dec->operand_n = 2;
	dec->operand_types[0] = PPC_OPER_TYPE_VREG;
	dec->operand_values[0] = (insword & 0x3E00000)>>21;
	dec->operand_types[1] = PPC_OPER_TYPE_VREG;
	dec->operand_values[1] = (insword & 0xF800)>>11;
	dec->operand_fmtstr = PPC_FMTSTR_VREG_C_VREG;
	return 0;
}

/* vprtybw VREG,VREG */
int vprtybw_VREG_VREG(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_VPRTYBW;
	/* 000100AAAAA01000BBBBB11000000010 */
	dec->operand_n = 2;
	dec->operand_types[0] = PPC_OPER_TYPE_VREG;
	dec->operand_values[0] = (insword & 0x3E00000)>>21;
	dec->operand_types[1] = PPC_OPER_TYPE_VREG;
	dec->operand_values[1] = (insword & 0xF800)>>11;
	dec->operand_fmtstr = PPC_FMTSTR_VREG_C_VREG;
	return 0;
}

/* vprtybd VREG,VREG */
int vprtybd_VREG_VREG(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_VPRTYBD;
	/* 000100AAAAA01001BBBBB11000000010 */
	dec->operand_n = 2;
	dec->operand_types[0] = PPC_OPER_TYPE_VREG;
	dec->operand_values[0] = (insword & 0x3E00000)>>21;
	dec->operand_types[1] = PPC_OPER_TYPE_VREG;
	dec->operand_values[1] = (insword & 0xF800)>>11;
	dec->operand_fmtstr = PPC_FMTSTR_VREG_C_VREG;
	return 0;
}

/* vprtybq VREG,VREG */
int vprtybq_VREG_VREG(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_VPRTYBQ;
	/* 000100AAAAA01010BBBBB11000000010 */
	dec->operand_n = 2;
	dec->operand_types[0] = PPC_OPER_TYPE_VREG;
	dec->operand_values[0] = (insword & 0x3E00000)>>21;
	dec->operand_types[1] = PPC_OPER_TYPE_VREG;
	dec->operand_values[1] = (insword & 0xF800)>>11;
	dec->operand_fmtstr = PPC_FMTSTR_VREG_C_VREG;
	return 0;
}

/* vextsb2w VREG,VREG */
int vextsb2w_VREG_VREG(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_VEXTSB2W;
	/* 000100AAAAA10000BBBBB11000000010 */
	dec->operand_n = 2;
	dec->operand_types[0] = PPC_OPER_TYPE_VREG;
	dec->operand_values[0] = (insword & 0x3E00000)>>21;
	dec->operand_types[1] = PPC_OPER_TYPE_VREG;
	dec->operand_values[1] = (insword & 0xF800)>>11;
	dec->operand_fmtstr = PPC_FMTSTR_VREG_C_VREG;
	return 0;
}

/* vextsh2w VREG,VREG */
int vextsh2w_VREG_VREG(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_VEXTSH2W;
	/* 000100AAAAA10001BBBBB11000000010 */
	dec->operand_n = 2;
	dec->operand_types[0] = PPC_OPER_TYPE_VREG;
	dec->operand_values[0] = (insword & 0x3E00000)>>21;
	dec->operand_types[1] = PPC_OPER_TYPE_VREG;
	dec->operand_values[1] = (insword & 0xF800)>>11;
	dec->operand_fmtstr = PPC_FMTSTR_VREG_C_VREG;
	return 0;
}

/* vextsb2d VREG,VREG */
int vextsb2d_VREG_VREG(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_VEXTSB2D;
	/* 000100AAAAA11000BBBBB11000000010 */
	dec->operand_n = 2;
	dec->operand_types[0] = PPC_OPER_TYPE_VREG;
	dec->operand_values[0] = (insword & 0x3E00000)>>21;
	dec->operand_types[1] = PPC_OPER_TYPE_VREG;
	dec->operand_values[1] = (insword & 0xF800)>>11;
	dec->operand_fmtstr = PPC_FMTSTR_VREG_C_VREG;
	return 0;
}

/* vextsh2d VREG,VREG */
int vextsh2d_VREG_VREG(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_VEXTSH2D;
	/* 000100AAAAA11001BBBBB11000000010 */
	dec->operand_n = 2;
	dec->operand_types[0] = PPC_OPER_TYPE_VREG;
	dec->operand_values[0] = (insword & 0x3E00000)>>21;
	dec->operand_types[1] = PPC_OPER_TYPE_VREG;
	dec->operand_values[1] = (insword & 0xF800)>>11;
	dec->operand_fmtstr = PPC_FMTSTR_VREG_C_VREG;
	return 0;
}

/* vextsw2d VREG,VREG */
int vextsw2d_VREG_VREG(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_VEXTSW2D;
	/* 000100AAAAA11010BBBBB11000000010 */
	dec->operand_n = 2;
	dec->operand_types[0] = PPC_OPER_TYPE_VREG;
	dec->operand_values[0] = (insword & 0x3E00000)>>21;
	dec->operand_types[1] = PPC_OPER_TYPE_VREG;
	dec->operand_values[1] = (insword & 0xF800)>>11;
	dec->operand_fmtstr = PPC_FMTSTR_VREG_C_VREG;
	return 0;
}

/* vctzb VREG,VREG */
int vctzb_VREG_VREG(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_VCTZB;
	/* 000100AAAAA11100BBBBB11000000010 */
	dec->operand_n = 2;
	dec->operand_types[0] = PPC_OPER_TYPE_VREG;
	dec->operand_values[0] = (insword & 0x3E00000)>>21;
	dec->operand_types[1] = PPC_OPER_TYPE_VREG;
	dec->operand_values[1] = (insword & 0xF800)>>11;
	dec->operand_fmtstr = PPC_FMTSTR_VREG_C_VREG;
	return 0;
}

/* vctzh VREG,VREG */
int vctzh_VREG_VREG(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_VCTZH;
	/* 000100AAAAA11101BBBBB11000000010 */
	dec->operand_n = 2;
	dec->operand_types[0] = PPC_OPER_TYPE_VREG;
	dec->operand_values[0] = (insword & 0x3E00000)>>21;
	dec->operand_types[1] = PPC_OPER_TYPE_VREG;
	dec->operand_values[1] = (insword & 0xF800)>>11;
	dec->operand_fmtstr = PPC_FMTSTR_VREG_C_VREG;
	return 0;
}

/* vctzw VREG,VREG */
int vctzw_VREG_VREG(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_VCTZW;
	/* 000100AAAAA11110BBBBB11000000010 */
	dec->operand_n = 2;
	dec->operand_types[0] = PPC_OPER_TYPE_VREG;
	dec->operand_values[0] = (insword & 0x3E00000)>>21;
	dec->operand_types[1] = PPC_OPER_TYPE_VREG;
	dec->operand_values[1] = (insword & 0xF800)>>11;
	dec->operand_fmtstr = PPC_FMTSTR_VREG_C_VREG;
	return 0;
}

/* bcdsetsgn. VREG,VREG,NUM */
int bcdsetsgnD_VREG_VREG_NUM(uint32_t insword, struct ppc_decoded *dec)
{
	dec->properties |= PPC_PROPERTY_DOTTED;
	dec->mnemonic = PPC_MNEM_BCDSETSGN;
	/* 000100AAAAA11111BBBBB1C110000001 */
	dec->operand_n = 3;
	dec->operand_types[0] = PPC_OPER_TYPE_VREG;
	dec->operand_values[0] = (insword & 0x3E00000)>>21;
	dec->operand_types[1] = PPC_OPER_TYPE_VREG;
	dec->operand_values[1] = (insword & 0xF800)>>11;
	dec->operand_types[2] = PPC_OPER_TYPE_NUM;
	dec->operand_values[2] = (insword & 0x200)>>9;
	dec->operand_fmtstr = PPC_FMTSTR_VREG_C_VREG_C_NUM;
	return 0;
}

/* vctzd VREG,VREG */
int vctzd_VREG_VREG(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_VCTZD;
	/* 000100AAAAA11111BBBBB11000000010 */
	dec->operand_n = 2;
	dec->operand_types[0] = PPC_OPER_TYPE_VREG;
	dec->operand_values[0] = (insword & 0x3E00000)>>21;
	dec->operand_types[1] = PPC_OPER_TYPE_VREG;
	dec->operand_values[1] = (insword & 0xF800)>>11;
	dec->operand_fmtstr = PPC_FMTSTR_VREG_C_VREG;
	return 0;
}

