#include "disassembler.h"

/* dadd FREG,FREG,FREG */
int dadd_FREG_FREG_FREG(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_DADD;
	/* 111011AAAAABBBBBCCCCC00000000100 */
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

/* dadd. FREG,FREG,FREG */
int daddD_FREG_FREG_FREG(uint32_t insword, struct ppc_decoded *dec)
{
	dec->properties |= PPC_PROPERTY_DOTTED;
	dec->mnemonic = PPC_MNEM_DADD;
	/* 111011AAAAABBBBBCCCCC00000000101 */
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

/* dqua FREG,FREG,FREG,NUM */
int dqua_FREG_FREG_FREG_NUM(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_DQUA;
	/* 111011AAAAABBBBBCCCCCDD000000110 */
	dec->operand_n = 4;
	dec->operand_types[0] = PPC_OPER_TYPE_FREG;
	dec->operand_values[0] = (insword & 0x3E00000)>>21;
	dec->operand_types[1] = PPC_OPER_TYPE_FREG;
	dec->operand_values[1] = (insword & 0x1F0000)>>16;
	dec->operand_types[2] = PPC_OPER_TYPE_FREG;
	dec->operand_values[2] = (insword & 0xF800)>>11;
	dec->operand_types[3] = PPC_OPER_TYPE_NUM;
	dec->operand_values[3] = (insword & 0x600)>>9;
	dec->operand_fmtstr = PPC_FMTSTR_FREG_C_FREG_C_FREG_C_NUM;
	return 0;
}

/* dqua. FREG,FREG,FREG,NUM */
int dquaD_FREG_FREG_FREG_NUM(uint32_t insword, struct ppc_decoded *dec)
{
	dec->properties |= PPC_PROPERTY_DOTTED;
	dec->mnemonic = PPC_MNEM_DQUA;
	/* 111011AAAAABBBBBCCCCCDD000000111 */
	dec->operand_n = 4;
	dec->operand_types[0] = PPC_OPER_TYPE_FREG;
	dec->operand_values[0] = (insword & 0x3E00000)>>21;
	dec->operand_types[1] = PPC_OPER_TYPE_FREG;
	dec->operand_values[1] = (insword & 0x1F0000)>>16;
	dec->operand_types[2] = PPC_OPER_TYPE_FREG;
	dec->operand_values[2] = (insword & 0xF800)>>11;
	dec->operand_types[3] = PPC_OPER_TYPE_NUM;
	dec->operand_values[3] = (insword & 0x600)>>9;
	dec->operand_fmtstr = PPC_FMTSTR_FREG_C_FREG_C_FREG_C_NUM;
	return 0;
}

/* fdivs FREG,FREG,FREG */
int fdivs_FREG_FREG_FREG(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_FDIVS;
	/* 111011AAAAABBBBBCCCCC00000100100 */
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

/* fdivs. FREG,FREG,FREG */
int fdivsD_FREG_FREG_FREG(uint32_t insword, struct ppc_decoded *dec)
{
	dec->properties |= PPC_PROPERTY_DOTTED;
	dec->mnemonic = PPC_MNEM_FDIVS;
	/* 111011AAAAABBBBBCCCCC00000100101 */
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

/* fsubs FREG,FREG,FREG */
int fsubs_FREG_FREG_FREG(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_FSUBS;
	/* 111011AAAAABBBBBCCCCC00000101000 */
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

/* fsubs. FREG,FREG,FREG */
int fsubsD_FREG_FREG_FREG(uint32_t insword, struct ppc_decoded *dec)
{
	dec->properties |= PPC_PROPERTY_DOTTED;
	dec->mnemonic = PPC_MNEM_FSUBS;
	/* 111011AAAAABBBBBCCCCC00000101001 */
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

/* fadds FREG,FREG,FREG */
int fadds_FREG_FREG_FREG(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_FADDS;
	/* 111011AAAAABBBBBCCCCC00000101010 */
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

/* fadds. FREG,FREG,FREG */
int faddsD_FREG_FREG_FREG(uint32_t insword, struct ppc_decoded *dec)
{
	dec->properties |= PPC_PROPERTY_DOTTED;
	dec->mnemonic = PPC_MNEM_FADDS;
	/* 111011AAAAABBBBBCCCCC00000101011 */
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

/* fsqrts FREG,FREG */
int fsqrts_FREG_FREG(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_FSQRTS;
	/* 111011AAAAA00000BBBBB00000101100 */
	dec->operand_n = 2;
	dec->operand_types[0] = PPC_OPER_TYPE_FREG;
	dec->operand_values[0] = (insword & 0x3E00000)>>21;
	dec->operand_types[1] = PPC_OPER_TYPE_FREG;
	dec->operand_values[1] = (insword & 0xF800)>>11;
	dec->operand_fmtstr = PPC_FMTSTR_FREG_C_FREG;
	return 0;
}

/* fsqrts. FREG,FREG */
int fsqrtsD_FREG_FREG(uint32_t insword, struct ppc_decoded *dec)
{
	dec->properties |= PPC_PROPERTY_DOTTED;
	dec->mnemonic = PPC_MNEM_FSQRTS;
	/* 111011AAAAA00000BBBBB00000101101 */
	dec->operand_n = 2;
	dec->operand_types[0] = PPC_OPER_TYPE_FREG;
	dec->operand_values[0] = (insword & 0x3E00000)>>21;
	dec->operand_types[1] = PPC_OPER_TYPE_FREG;
	dec->operand_values[1] = (insword & 0xF800)>>11;
	dec->operand_fmtstr = PPC_FMTSTR_FREG_C_FREG;
	return 0;
}

/* fres FREG,FREG */
int fres_FREG_FREG(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_FRES;
	/* 111011AAAAA00000BBBBB00000110000 */
	dec->operand_n = 2;
	dec->operand_types[0] = PPC_OPER_TYPE_FREG;
	dec->operand_values[0] = (insword & 0x3E00000)>>21;
	dec->operand_types[1] = PPC_OPER_TYPE_FREG;
	dec->operand_values[1] = (insword & 0xF800)>>11;
	dec->operand_fmtstr = PPC_FMTSTR_FREG_C_FREG;
	return 0;
}

/* fres. FREG,FREG */
int fresD_FREG_FREG(uint32_t insword, struct ppc_decoded *dec)
{
	dec->properties |= PPC_PROPERTY_DOTTED;
	dec->mnemonic = PPC_MNEM_FRES;
	/* 111011AAAAA00000BBBBB00000110001 */
	dec->operand_n = 2;
	dec->operand_types[0] = PPC_OPER_TYPE_FREG;
	dec->operand_values[0] = (insword & 0x3E00000)>>21;
	dec->operand_types[1] = PPC_OPER_TYPE_FREG;
	dec->operand_values[1] = (insword & 0xF800)>>11;
	dec->operand_fmtstr = PPC_FMTSTR_FREG_C_FREG;
	return 0;
}

/* fmuls FREG,FREG,FREG */
int fmuls_FREG_FREG_FREG(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_FMULS;
	/* 111011AAAAABBBBB00000CCCCC110010 */
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

/* fmuls. FREG,FREG,FREG */
int fmulsD_FREG_FREG_FREG(uint32_t insword, struct ppc_decoded *dec)
{
	dec->properties |= PPC_PROPERTY_DOTTED;
	dec->mnemonic = PPC_MNEM_FMULS;
	/* 111011AAAAABBBBB00000CCCCC110011 */
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

/* frsqrtes FREG,FREG */
int frsqrtes_FREG_FREG(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_FRSQRTES;
	/* 111011AAAAA00000BBBBB00000110100 */
	dec->operand_n = 2;
	dec->operand_types[0] = PPC_OPER_TYPE_FREG;
	dec->operand_values[0] = (insword & 0x3E00000)>>21;
	dec->operand_types[1] = PPC_OPER_TYPE_FREG;
	dec->operand_values[1] = (insword & 0xF800)>>11;
	dec->operand_fmtstr = PPC_FMTSTR_FREG_C_FREG;
	return 0;
}

/* frsqrtes. FREG,FREG */
int frsqrtesD_FREG_FREG(uint32_t insword, struct ppc_decoded *dec)
{
	dec->properties |= PPC_PROPERTY_DOTTED;
	dec->mnemonic = PPC_MNEM_FRSQRTES;
	/* 111011AAAAA00000BBBBB00000110101 */
	dec->operand_n = 2;
	dec->operand_types[0] = PPC_OPER_TYPE_FREG;
	dec->operand_values[0] = (insword & 0x3E00000)>>21;
	dec->operand_types[1] = PPC_OPER_TYPE_FREG;
	dec->operand_values[1] = (insword & 0xF800)>>11;
	dec->operand_fmtstr = PPC_FMTSTR_FREG_C_FREG;
	return 0;
}

/* fmsubs FREG,FREG,FREG,FREG */
int fmsubs_FREG_FREG_FREG_FREG(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_FMSUBS;
	/* 111011AAAAABBBBBDDDDDCCCCC111000 */
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

/* fmsubs. FREG,FREG,FREG,FREG */
int fmsubsD_FREG_FREG_FREG_FREG(uint32_t insword, struct ppc_decoded *dec)
{
	dec->properties |= PPC_PROPERTY_DOTTED;
	dec->mnemonic = PPC_MNEM_FMSUBS;
	/* 111011AAAAABBBBBDDDDDCCCCC111001 */
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

/* fmadds FREG,FREG,FREG,FREG */
int fmadds_FREG_FREG_FREG_FREG(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_FMADDS;
	/* 111011AAAAABBBBBDDDDDCCCCC111010 */
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

/* fmadds. FREG,FREG,FREG,FREG */
int fmaddsD_FREG_FREG_FREG_FREG(uint32_t insword, struct ppc_decoded *dec)
{
	dec->properties |= PPC_PROPERTY_DOTTED;
	dec->mnemonic = PPC_MNEM_FMADDS;
	/* 111011AAAAABBBBBDDDDDCCCCC111011 */
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

/* fnmsubs FREG,FREG,FREG,FREG */
int fnmsubs_FREG_FREG_FREG_FREG(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_FNMSUBS;
	/* 111011AAAAABBBBBDDDDDCCCCC111100 */
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

/* fnmsubs. FREG,FREG,FREG,FREG */
int fnmsubsD_FREG_FREG_FREG_FREG(uint32_t insword, struct ppc_decoded *dec)
{
	dec->properties |= PPC_PROPERTY_DOTTED;
	dec->mnemonic = PPC_MNEM_FNMSUBS;
	/* 111011AAAAABBBBBDDDDDCCCCC111101 */
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

/* fnmadds FREG,FREG,FREG,FREG */
int fnmadds_FREG_FREG_FREG_FREG(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_FNMADDS;
	/* 111011AAAAABBBBBDDDDDCCCCC111110 */
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

/* fnmadds. FREG,FREG,FREG,FREG */
int fnmaddsD_FREG_FREG_FREG_FREG(uint32_t insword, struct ppc_decoded *dec)
{
	dec->properties |= PPC_PROPERTY_DOTTED;
	dec->mnemonic = PPC_MNEM_FNMADDS;
	/* 111011AAAAABBBBBDDDDDCCCCC111111 */
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

/* dmul FREG,FREG,FREG */
int dmul_FREG_FREG_FREG(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_DMUL;
	/* 111011AAAAABBBBBCCCCC00001000100 */
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

/* dmul. FREG,FREG,FREG */
int dmulD_FREG_FREG_FREG(uint32_t insword, struct ppc_decoded *dec)
{
	dec->properties |= PPC_PROPERTY_DOTTED;
	dec->mnemonic = PPC_MNEM_DMUL;
	/* 111011AAAAABBBBBCCCCC00001000101 */
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

/* drrnd FREG,FREG,FREG,NUM */
int drrnd_FREG_FREG_FREG_NUM(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_DRRND;
	/* 111011AAAAABBBBBCCCCCDD001000110 */
	dec->operand_n = 4;
	dec->operand_types[0] = PPC_OPER_TYPE_FREG;
	dec->operand_values[0] = (insword & 0x3E00000)>>21;
	dec->operand_types[1] = PPC_OPER_TYPE_FREG;
	dec->operand_values[1] = (insword & 0x1F0000)>>16;
	dec->operand_types[2] = PPC_OPER_TYPE_FREG;
	dec->operand_values[2] = (insword & 0xF800)>>11;
	dec->operand_types[3] = PPC_OPER_TYPE_NUM;
	dec->operand_values[3] = (insword & 0x600)>>9;
	dec->operand_fmtstr = PPC_FMTSTR_FREG_C_FREG_C_FREG_C_NUM;
	return 0;
}

/* drrnd. FREG,FREG,FREG,NUM */
int drrndD_FREG_FREG_FREG_NUM(uint32_t insword, struct ppc_decoded *dec)
{
	dec->properties |= PPC_PROPERTY_DOTTED;
	dec->mnemonic = PPC_MNEM_DRRND;
	/* 111011AAAAABBBBBCCCCCDD001000111 */
	dec->operand_n = 4;
	dec->operand_types[0] = PPC_OPER_TYPE_FREG;
	dec->operand_values[0] = (insword & 0x3E00000)>>21;
	dec->operand_types[1] = PPC_OPER_TYPE_FREG;
	dec->operand_values[1] = (insword & 0x1F0000)>>16;
	dec->operand_types[2] = PPC_OPER_TYPE_FREG;
	dec->operand_values[2] = (insword & 0xF800)>>11;
	dec->operand_types[3] = PPC_OPER_TYPE_NUM;
	dec->operand_values[3] = (insword & 0x600)>>9;
	dec->operand_fmtstr = PPC_FMTSTR_FREG_C_FREG_C_FREG_C_NUM;
	return 0;
}

/* dscli FREG,FREG,NUM */
int dscli_FREG_FREG_NUM(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_DSCLI;
	/* 111011AAAAABBBBBCCCCCC0010000100 */
	dec->operand_n = 3;
	dec->operand_types[0] = PPC_OPER_TYPE_FREG;
	dec->operand_values[0] = (insword & 0x3E00000)>>21;
	dec->operand_types[1] = PPC_OPER_TYPE_FREG;
	dec->operand_values[1] = (insword & 0x1F0000)>>16;
	dec->operand_types[2] = PPC_OPER_TYPE_NUM;
	dec->operand_values[2] = (insword & 0xFC00)>>10;
	dec->operand_fmtstr = PPC_FMTSTR_FREG_C_FREG_C_NUM;
	return 0;
}

/* dscli. FREG,FREG,NUM */
int dscliD_FREG_FREG_NUM(uint32_t insword, struct ppc_decoded *dec)
{
	dec->properties |= PPC_PROPERTY_DOTTED;
	dec->mnemonic = PPC_MNEM_DSCLI;
	/* 111011AAAAABBBBBCCCCCC0010000101 */
	dec->operand_n = 3;
	dec->operand_types[0] = PPC_OPER_TYPE_FREG;
	dec->operand_values[0] = (insword & 0x3E00000)>>21;
	dec->operand_types[1] = PPC_OPER_TYPE_FREG;
	dec->operand_values[1] = (insword & 0x1F0000)>>16;
	dec->operand_types[2] = PPC_OPER_TYPE_NUM;
	dec->operand_values[2] = (insword & 0xFC00)>>10;
	dec->operand_fmtstr = PPC_FMTSTR_FREG_C_FREG_C_NUM;
	return 0;
}

/* dquai NUM,FREG,FREG,NUM */
int dquai_NUM_FREG_FREG_NUM(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_DQUAI;
	/* 111011BBBBBAAAAACCCCCDD010000110 */
	dec->operand_n = 4;
	dec->operand_types[0] = PPC_OPER_TYPE_NUM;
	dec->operand_values[0] = (insword & 0x1F0000)>>16;
	dec->operand_types[1] = PPC_OPER_TYPE_FREG;
	dec->operand_values[1] = (insword & 0x3E00000)>>21;
	dec->operand_types[2] = PPC_OPER_TYPE_FREG;
	dec->operand_values[2] = (insword & 0xF800)>>11;
	dec->operand_types[3] = PPC_OPER_TYPE_NUM;
	dec->operand_values[3] = (insword & 0x600)>>9;
	dec->operand_fmtstr = PPC_FMTSTR_NUM_C_FREG_C_FREG_C_NUM;
	return 0;
}

/* dquai. NUM,FREG,FREG,NUM */
int dquaiD_NUM_FREG_FREG_NUM(uint32_t insword, struct ppc_decoded *dec)
{
	dec->properties |= PPC_PROPERTY_DOTTED;
	dec->mnemonic = PPC_MNEM_DQUAI;
	/* 111011BBBBBAAAAACCCCCDD010000111 */
	dec->operand_n = 4;
	dec->operand_types[0] = PPC_OPER_TYPE_NUM;
	dec->operand_values[0] = (insword & 0x1F0000)>>16;
	dec->operand_types[1] = PPC_OPER_TYPE_FREG;
	dec->operand_values[1] = (insword & 0x3E00000)>>21;
	dec->operand_types[2] = PPC_OPER_TYPE_FREG;
	dec->operand_values[2] = (insword & 0xF800)>>11;
	dec->operand_types[3] = PPC_OPER_TYPE_NUM;
	dec->operand_values[3] = (insword & 0x600)>>9;
	dec->operand_fmtstr = PPC_FMTSTR_NUM_C_FREG_C_FREG_C_NUM;
	return 0;
}

/* dscri FREG,FREG,NUM */
int dscri_FREG_FREG_NUM(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_DSCRI;
	/* 111011AAAAABBBBBCCCCCC0011000100 */
	dec->operand_n = 3;
	dec->operand_types[0] = PPC_OPER_TYPE_FREG;
	dec->operand_values[0] = (insword & 0x3E00000)>>21;
	dec->operand_types[1] = PPC_OPER_TYPE_FREG;
	dec->operand_values[1] = (insword & 0x1F0000)>>16;
	dec->operand_types[2] = PPC_OPER_TYPE_NUM;
	dec->operand_values[2] = (insword & 0xFC00)>>10;
	dec->operand_fmtstr = PPC_FMTSTR_FREG_C_FREG_C_NUM;
	return 0;
}

/* dscri. FREG,FREG,NUM */
int dscriD_FREG_FREG_NUM(uint32_t insword, struct ppc_decoded *dec)
{
	dec->properties |= PPC_PROPERTY_DOTTED;
	dec->mnemonic = PPC_MNEM_DSCRI;
	/* 111011AAAAABBBBBCCCCCC0011000101 */
	dec->operand_n = 3;
	dec->operand_types[0] = PPC_OPER_TYPE_FREG;
	dec->operand_values[0] = (insword & 0x3E00000)>>21;
	dec->operand_types[1] = PPC_OPER_TYPE_FREG;
	dec->operand_values[1] = (insword & 0x1F0000)>>16;
	dec->operand_types[2] = PPC_OPER_TYPE_NUM;
	dec->operand_values[2] = (insword & 0xFC00)>>10;
	dec->operand_fmtstr = PPC_FMTSTR_FREG_C_FREG_C_NUM;
	return 0;
}

/* drintx NUM,FREG,FREG,NUM */
int drintx_NUM_FREG_FREG_NUM(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_DRINTX;
	/* 111011BBBBBxxxxACCCCCDD011000110 */
	dec->operand_n = 4;
	dec->operand_types[0] = PPC_OPER_TYPE_NUM;
	dec->operand_values[0] = (insword & 0x10000)>>16;
	dec->operand_types[1] = PPC_OPER_TYPE_FREG;
	dec->operand_values[1] = (insword & 0x3E00000)>>21;
	dec->operand_types[2] = PPC_OPER_TYPE_FREG;
	dec->operand_values[2] = (insword & 0xF800)>>11;
	dec->operand_types[3] = PPC_OPER_TYPE_NUM;
	dec->operand_values[3] = (insword & 0x600)>>9;
	dec->operand_fmtstr = PPC_FMTSTR_NUM_C_FREG_C_FREG_C_NUM;
	return 0;
}

/* drintx. NUM,FREG,FREG,NUM */
int drintxD_NUM_FREG_FREG_NUM(uint32_t insword, struct ppc_decoded *dec)
{
	dec->properties |= PPC_PROPERTY_DOTTED;
	dec->mnemonic = PPC_MNEM_DRINTX;
	/* 111011BBBBBxxxxACCCCCDD011000111 */
	dec->operand_n = 4;
	dec->operand_types[0] = PPC_OPER_TYPE_NUM;
	dec->operand_values[0] = (insword & 0x10000)>>16;
	dec->operand_types[1] = PPC_OPER_TYPE_FREG;
	dec->operand_values[1] = (insword & 0x3E00000)>>21;
	dec->operand_types[2] = PPC_OPER_TYPE_FREG;
	dec->operand_values[2] = (insword & 0xF800)>>11;
	dec->operand_types[3] = PPC_OPER_TYPE_NUM;
	dec->operand_values[3] = (insword & 0x600)>>9;
	dec->operand_fmtstr = PPC_FMTSTR_NUM_C_FREG_C_FREG_C_NUM;
	return 0;
}

/* dcmpo CREG,FREG,FREG */
int dcmpo_CREG_FREG_FREG(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_DCMPO;
	/* 111011AAAxxBBBBBCCCCC00100000100 */
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

/* dtstex CREG,FREG,FREG */
int dtstex_CREG_FREG_FREG(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_DTSTEX;
	/* 111011AAAxxBBBBBCCCCC00101000100 */
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

/* dtstdc CREG,FREG,NUM */
int dtstdc_CREG_FREG_NUM(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_DTSTDC;
	/* 111011AAAxxBBBBBCCCCCC0110000100 */
	dec->operand_n = 3;
	dec->operand_types[0] = PPC_OPER_TYPE_CREG;
	dec->operand_values[0] = (insword & 0x3800000)>>23;
	dec->operand_types[1] = PPC_OPER_TYPE_FREG;
	dec->operand_values[1] = (insword & 0x1F0000)>>16;
	dec->operand_types[2] = PPC_OPER_TYPE_NUM;
	dec->operand_values[2] = (insword & 0xFC00)>>10;
	dec->operand_fmtstr = PPC_FMTSTR_CREG_C_FREG_C_NUM;
	return 0;
}

/* dtstdg CREG,FREG,NUM */
int dtstdg_CREG_FREG_NUM(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_DTSTDG;
	/* 111011AAAxxBBBBBCCCCCC0111000100 */
	dec->operand_n = 3;
	dec->operand_types[0] = PPC_OPER_TYPE_CREG;
	dec->operand_values[0] = (insword & 0x3800000)>>23;
	dec->operand_types[1] = PPC_OPER_TYPE_FREG;
	dec->operand_values[1] = (insword & 0x1F0000)>>16;
	dec->operand_types[2] = PPC_OPER_TYPE_NUM;
	dec->operand_values[2] = (insword & 0xFC00)>>10;
	dec->operand_fmtstr = PPC_FMTSTR_CREG_C_FREG_C_NUM;
	return 0;
}

/* drintn NUM,FREG,FREG,NUM */
int drintn_NUM_FREG_FREG_NUM(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_DRINTN;
	/* 111011BBBBBxxxxACCCCCDD111000110 */
	dec->operand_n = 4;
	dec->operand_types[0] = PPC_OPER_TYPE_NUM;
	dec->operand_values[0] = (insword & 0x10000)>>16;
	dec->operand_types[1] = PPC_OPER_TYPE_FREG;
	dec->operand_values[1] = (insword & 0x3E00000)>>21;
	dec->operand_types[2] = PPC_OPER_TYPE_FREG;
	dec->operand_values[2] = (insword & 0xF800)>>11;
	dec->operand_types[3] = PPC_OPER_TYPE_NUM;
	dec->operand_values[3] = (insword & 0x600)>>9;
	dec->operand_fmtstr = PPC_FMTSTR_NUM_C_FREG_C_FREG_C_NUM;
	return 0;
}

/* drintn. NUM,FREG,FREG,NUM */
int drintnD_NUM_FREG_FREG_NUM(uint32_t insword, struct ppc_decoded *dec)
{
	dec->properties |= PPC_PROPERTY_DOTTED;
	dec->mnemonic = PPC_MNEM_DRINTN;
	/* 111011BBBBBxxxxACCCCCDD111000111 */
	dec->operand_n = 4;
	dec->operand_types[0] = PPC_OPER_TYPE_NUM;
	dec->operand_values[0] = (insword & 0x10000)>>16;
	dec->operand_types[1] = PPC_OPER_TYPE_FREG;
	dec->operand_values[1] = (insword & 0x3E00000)>>21;
	dec->operand_types[2] = PPC_OPER_TYPE_FREG;
	dec->operand_values[2] = (insword & 0xF800)>>11;
	dec->operand_types[3] = PPC_OPER_TYPE_NUM;
	dec->operand_values[3] = (insword & 0x600)>>9;
	dec->operand_fmtstr = PPC_FMTSTR_NUM_C_FREG_C_FREG_C_NUM;
	return 0;
}

/* dctdp FREG,FREG */
int dctdp_FREG_FREG(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_DCTDP;
	/* 111011AAAAAxxxxxBBBBB01000000100 */
	dec->operand_n = 2;
	dec->operand_types[0] = PPC_OPER_TYPE_FREG;
	dec->operand_values[0] = (insword & 0x3E00000)>>21;
	dec->operand_types[1] = PPC_OPER_TYPE_FREG;
	dec->operand_values[1] = (insword & 0xF800)>>11;
	dec->operand_fmtstr = PPC_FMTSTR_FREG_C_FREG;
	return 0;
}

/* dctdp. FREG,FREG */
int dctdpD_FREG_FREG(uint32_t insword, struct ppc_decoded *dec)
{
	dec->properties |= PPC_PROPERTY_DOTTED;
	dec->mnemonic = PPC_MNEM_DCTDP;
	/* 111011AAAAAxxxxxBBBBB01000000101 */
	dec->operand_n = 2;
	dec->operand_types[0] = PPC_OPER_TYPE_FREG;
	dec->operand_values[0] = (insword & 0x3E00000)>>21;
	dec->operand_types[1] = PPC_OPER_TYPE_FREG;
	dec->operand_values[1] = (insword & 0xF800)>>11;
	dec->operand_fmtstr = PPC_FMTSTR_FREG_C_FREG;
	return 0;
}

/* dctfix FREG,FREG */
int dctfix_FREG_FREG(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_DCTFIX;
	/* 111011AAAAAxxxxxBBBBB01001000100 */
	dec->operand_n = 2;
	dec->operand_types[0] = PPC_OPER_TYPE_FREG;
	dec->operand_values[0] = (insword & 0x3E00000)>>21;
	dec->operand_types[1] = PPC_OPER_TYPE_FREG;
	dec->operand_values[1] = (insword & 0xF800)>>11;
	dec->operand_fmtstr = PPC_FMTSTR_FREG_C_FREG;
	return 0;
}

/* dctfix. FREG,FREG */
int dctfixD_FREG_FREG(uint32_t insword, struct ppc_decoded *dec)
{
	dec->properties |= PPC_PROPERTY_DOTTED;
	dec->mnemonic = PPC_MNEM_DCTFIX;
	/* 111011AAAAAxxxxxBBBBB01001000101 */
	dec->operand_n = 2;
	dec->operand_types[0] = PPC_OPER_TYPE_FREG;
	dec->operand_values[0] = (insword & 0x3E00000)>>21;
	dec->operand_types[1] = PPC_OPER_TYPE_FREG;
	dec->operand_values[1] = (insword & 0xF800)>>11;
	dec->operand_fmtstr = PPC_FMTSTR_FREG_C_FREG;
	return 0;
}

/* ddedpd NUM,FREG,FREG */
int ddedpd_NUM_FREG_FREG(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_DDEDPD;
	/* 111011BBBBBAAxxxCCCCC01010000100 */
	dec->operand_n = 3;
	dec->operand_types[0] = PPC_OPER_TYPE_NUM;
	dec->operand_values[0] = (insword & 0x180000)>>19;
	dec->operand_types[1] = PPC_OPER_TYPE_FREG;
	dec->operand_values[1] = (insword & 0x3E00000)>>21;
	dec->operand_types[2] = PPC_OPER_TYPE_FREG;
	dec->operand_values[2] = (insword & 0xF800)>>11;
	dec->operand_fmtstr = PPC_FMTSTR_NUM_C_FREG_C_FREG;
	return 0;
}

/* ddedpd. NUM,FREG,FREG */
int ddedpdD_NUM_FREG_FREG(uint32_t insword, struct ppc_decoded *dec)
{
	dec->properties |= PPC_PROPERTY_DOTTED;
	dec->mnemonic = PPC_MNEM_DDEDPD;
	/* 111011BBBBBAAxxxCCCCC01010000101 */
	dec->operand_n = 3;
	dec->operand_types[0] = PPC_OPER_TYPE_NUM;
	dec->operand_values[0] = (insword & 0x180000)>>19;
	dec->operand_types[1] = PPC_OPER_TYPE_FREG;
	dec->operand_values[1] = (insword & 0x3E00000)>>21;
	dec->operand_types[2] = PPC_OPER_TYPE_FREG;
	dec->operand_values[2] = (insword & 0xF800)>>11;
	dec->operand_fmtstr = PPC_FMTSTR_NUM_C_FREG_C_FREG;
	return 0;
}

/* dxex FREG,FREG */
int dxex_FREG_FREG(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_DXEX;
	/* 111011AAAAAxxxxxBBBBB01011000100 */
	dec->operand_n = 2;
	dec->operand_types[0] = PPC_OPER_TYPE_FREG;
	dec->operand_values[0] = (insword & 0x3E00000)>>21;
	dec->operand_types[1] = PPC_OPER_TYPE_FREG;
	dec->operand_values[1] = (insword & 0xF800)>>11;
	dec->operand_fmtstr = PPC_FMTSTR_FREG_C_FREG;
	return 0;
}

/* dxex. FREG,FREG */
int dxexD_FREG_FREG(uint32_t insword, struct ppc_decoded *dec)
{
	dec->properties |= PPC_PROPERTY_DOTTED;
	dec->mnemonic = PPC_MNEM_DXEX;
	/* 111011AAAAAxxxxxBBBBB01011000101 */
	dec->operand_n = 2;
	dec->operand_types[0] = PPC_OPER_TYPE_FREG;
	dec->operand_values[0] = (insword & 0x3E00000)>>21;
	dec->operand_types[1] = PPC_OPER_TYPE_FREG;
	dec->operand_values[1] = (insword & 0xF800)>>11;
	dec->operand_fmtstr = PPC_FMTSTR_FREG_C_FREG;
	return 0;
}

/* dsub FREG,FREG,FREG */
int dsub_FREG_FREG_FREG(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_DSUB;
	/* 111011AAAAABBBBBCCCCC10000000100 */
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

/* dsub. FREG,FREG,FREG */
int dsubD_FREG_FREG_FREG(uint32_t insword, struct ppc_decoded *dec)
{
	dec->properties |= PPC_PROPERTY_DOTTED;
	dec->mnemonic = PPC_MNEM_DSUB;
	/* 111011AAAAABBBBBCCCCC10000000101 */
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

/* ddiv FREG,FREG,FREG */
int ddiv_FREG_FREG_FREG(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_DDIV;
	/* 111011AAAAABBBBBCCCCC10001000100 */
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

/* ddiv. FREG,FREG,FREG */
int ddivD_FREG_FREG_FREG(uint32_t insword, struct ppc_decoded *dec)
{
	dec->properties |= PPC_PROPERTY_DOTTED;
	dec->mnemonic = PPC_MNEM_DDIV;
	/* 111011AAAAABBBBBCCCCC10001000101 */
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

/* dcmpu CREG,FREG,FREG */
int dcmpu_CREG_FREG_FREG(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_DCMPU;
	/* 111011AAAxxBBBBBCCCCC10100000100 */
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

/* dtstsf CREG,FREG,FREG */
int dtstsf_CREG_FREG_FREG(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_DTSTSF;
	/* 111011AAAxxBBBBBCCCCC10101000100 */
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

/* dtstsfi CREG,NUM,FREG */
int dtstsfi_CREG_NUM_FREG(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_DTSTSFI;
	/* 111011AAA0BBBBBBCCCCC10101000110 */
	dec->operand_n = 3;
	dec->operand_types[0] = PPC_OPER_TYPE_CREG;
	dec->operand_values[0] = (insword & 0x3800000)>>23;
	dec->operand_types[1] = PPC_OPER_TYPE_NUM;
	dec->operand_values[1] = (insword & 0x3F0000)>>16;
	dec->operand_types[2] = PPC_OPER_TYPE_FREG;
	dec->operand_values[2] = (insword & 0xF800)>>11;
	dec->operand_fmtstr = PPC_FMTSTR_CREG_C_NUM_C_FREG;
	return 0;
}

/* drsp FREG,FREG */
int drsp_FREG_FREG(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_DRSP;
	/* 111011AAAAAxxxxxBBBBB11000000100 */
	dec->operand_n = 2;
	dec->operand_types[0] = PPC_OPER_TYPE_FREG;
	dec->operand_values[0] = (insword & 0x3E00000)>>21;
	dec->operand_types[1] = PPC_OPER_TYPE_FREG;
	dec->operand_values[1] = (insword & 0xF800)>>11;
	dec->operand_fmtstr = PPC_FMTSTR_FREG_C_FREG;
	return 0;
}

/* drsp. FREG,FREG */
int drspD_FREG_FREG(uint32_t insword, struct ppc_decoded *dec)
{
	dec->properties |= PPC_PROPERTY_DOTTED;
	dec->mnemonic = PPC_MNEM_DRSP;
	/* 111011AAAAAxxxxxBBBBB11000000101 */
	dec->operand_n = 2;
	dec->operand_types[0] = PPC_OPER_TYPE_FREG;
	dec->operand_values[0] = (insword & 0x3E00000)>>21;
	dec->operand_types[1] = PPC_OPER_TYPE_FREG;
	dec->operand_values[1] = (insword & 0xF800)>>11;
	dec->operand_fmtstr = PPC_FMTSTR_FREG_C_FREG;
	return 0;
}

/* dcffix FREG,FREG */
int dcffix_FREG_FREG(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_DCFFIX;
	/* 111011AAAAA00000BBBBB11001000100 */
	dec->operand_n = 2;
	dec->operand_types[0] = PPC_OPER_TYPE_FREG;
	dec->operand_values[0] = (insword & 0x3E00000)>>21;
	dec->operand_types[1] = PPC_OPER_TYPE_FREG;
	dec->operand_values[1] = (insword & 0xF800)>>11;
	dec->operand_fmtstr = PPC_FMTSTR_FREG_C_FREG;
	return 0;
}

/* dcffix. FREG,FREG */
int dcffixD_FREG_FREG(uint32_t insword, struct ppc_decoded *dec)
{
	dec->properties |= PPC_PROPERTY_DOTTED;
	dec->mnemonic = PPC_MNEM_DCFFIX;
	/* 111011AAAAA00000BBBBB11001000101 */
	dec->operand_n = 2;
	dec->operand_types[0] = PPC_OPER_TYPE_FREG;
	dec->operand_values[0] = (insword & 0x3E00000)>>21;
	dec->operand_types[1] = PPC_OPER_TYPE_FREG;
	dec->operand_values[1] = (insword & 0xF800)>>11;
	dec->operand_fmtstr = PPC_FMTSTR_FREG_C_FREG;
	return 0;
}

/* denbcd NUM,FREG,FREG */
int denbcd_NUM_FREG_FREG(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_DENBCD;
	/* 111011BBBBBAxxxxCCCCC11010000100 */
	dec->operand_n = 3;
	dec->operand_types[0] = PPC_OPER_TYPE_NUM;
	dec->operand_values[0] = (insword & 0x100000)>>20;
	dec->operand_types[1] = PPC_OPER_TYPE_FREG;
	dec->operand_values[1] = (insword & 0x3E00000)>>21;
	dec->operand_types[2] = PPC_OPER_TYPE_FREG;
	dec->operand_values[2] = (insword & 0xF800)>>11;
	dec->operand_fmtstr = PPC_FMTSTR_NUM_C_FREG_C_FREG;
	return 0;
}

/* denbcd. NUM,FREG,FREG */
int denbcdD_NUM_FREG_FREG(uint32_t insword, struct ppc_decoded *dec)
{
	dec->properties |= PPC_PROPERTY_DOTTED;
	dec->mnemonic = PPC_MNEM_DENBCD;
	/* 111011BBBBBAxxxxCCCCC11010000101 */
	dec->operand_n = 3;
	dec->operand_types[0] = PPC_OPER_TYPE_NUM;
	dec->operand_values[0] = (insword & 0x100000)>>20;
	dec->operand_types[1] = PPC_OPER_TYPE_FREG;
	dec->operand_values[1] = (insword & 0x3E00000)>>21;
	dec->operand_types[2] = PPC_OPER_TYPE_FREG;
	dec->operand_values[2] = (insword & 0xF800)>>11;
	dec->operand_fmtstr = PPC_FMTSTR_NUM_C_FREG_C_FREG;
	return 0;
}

/* fcfids FREG,FREG */
int fcfids_FREG_FREG(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_FCFIDS;
	/* 111011AAAAA00000BBBBB11010011100 */
	dec->operand_n = 2;
	dec->operand_types[0] = PPC_OPER_TYPE_FREG;
	dec->operand_values[0] = (insword & 0x3E00000)>>21;
	dec->operand_types[1] = PPC_OPER_TYPE_FREG;
	dec->operand_values[1] = (insword & 0xF800)>>11;
	dec->operand_fmtstr = PPC_FMTSTR_FREG_C_FREG;
	return 0;
}

/* fcfids. FREG,FREG */
int fcfidsD_FREG_FREG(uint32_t insword, struct ppc_decoded *dec)
{
	dec->properties |= PPC_PROPERTY_DOTTED;
	dec->mnemonic = PPC_MNEM_FCFIDS;
	/* 111011AAAAA00000BBBBB11010011101 */
	dec->operand_n = 2;
	dec->operand_types[0] = PPC_OPER_TYPE_FREG;
	dec->operand_values[0] = (insword & 0x3E00000)>>21;
	dec->operand_types[1] = PPC_OPER_TYPE_FREG;
	dec->operand_values[1] = (insword & 0xF800)>>11;
	dec->operand_fmtstr = PPC_FMTSTR_FREG_C_FREG;
	return 0;
}

/* diex FREG,FREG,FREG */
int diex_FREG_FREG_FREG(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_DIEX;
	/* 111011AAAAABBBBBCCCCC11011000100 */
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

/* diex. FREG,FREG,FREG */
int diexD_FREG_FREG_FREG(uint32_t insword, struct ppc_decoded *dec)
{
	dec->properties |= PPC_PROPERTY_DOTTED;
	dec->mnemonic = PPC_MNEM_DIEX;
	/* 111011AAAAABBBBBCCCCC11011000101 */
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

/* fcfidus FREG,FREG */
int fcfidus_FREG_FREG(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_FCFIDUS;
	/* 111011AAAAA00000BBBBB11110011100 */
	dec->operand_n = 2;
	dec->operand_types[0] = PPC_OPER_TYPE_FREG;
	dec->operand_values[0] = (insword & 0x3E00000)>>21;
	dec->operand_types[1] = PPC_OPER_TYPE_FREG;
	dec->operand_values[1] = (insword & 0xF800)>>11;
	dec->operand_fmtstr = PPC_FMTSTR_FREG_C_FREG;
	return 0;
}

/* fcfidus. FREG,FREG */
int fcfidusD_FREG_FREG(uint32_t insword, struct ppc_decoded *dec)
{
	dec->properties |= PPC_PROPERTY_DOTTED;
	dec->mnemonic = PPC_MNEM_FCFIDUS;
	/* 111011AAAAA00000BBBBB11110011101 */
	dec->operand_n = 2;
	dec->operand_types[0] = PPC_OPER_TYPE_FREG;
	dec->operand_values[0] = (insword & 0x3E00000)>>21;
	dec->operand_types[1] = PPC_OPER_TYPE_FREG;
	dec->operand_values[1] = (insword & 0xF800)>>11;
	dec->operand_fmtstr = PPC_FMTSTR_FREG_C_FREG;
	return 0;
}

/* fres FREG,FREG,NUM */
int fres_FREG_FREG_NUM(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_FRES;
	/* 111011AAAAA00001BBBBB00000110000 */
	dec->operand_n = 3;
	dec->operand_types[0] = PPC_OPER_TYPE_FREG;
	dec->operand_values[0] = (insword & 0x3E00000)>>21;
	dec->operand_types[1] = PPC_OPER_TYPE_FREG;
	dec->operand_values[1] = (insword & 0xF800)>>11;
	dec->operand_types[2] = PPC_OPER_TYPE_NUM;
	dec->operand_fmtstr = PPC_FMTSTR_FREG_C_FREG_C_NUM;
	return 0;
}

/* fres. FREG,FREG,NUM */
int fresD_FREG_FREG_NUM(uint32_t insword, struct ppc_decoded *dec)
{
	dec->properties |= PPC_PROPERTY_DOTTED;
	dec->mnemonic = PPC_MNEM_FRES;
	/* 111011AAAAA00001BBBBB00000110001 */
	dec->operand_n = 3;
	dec->operand_types[0] = PPC_OPER_TYPE_FREG;
	dec->operand_values[0] = (insword & 0x3E00000)>>21;
	dec->operand_types[1] = PPC_OPER_TYPE_FREG;
	dec->operand_values[1] = (insword & 0xF800)>>11;
	dec->operand_types[2] = PPC_OPER_TYPE_NUM;
	dec->operand_fmtstr = PPC_FMTSTR_FREG_C_FREG_C_NUM;
	return 0;
}

/* frsqrtes FREG,FREG,NUM */
int frsqrtes_FREG_FREG_NUM(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_FRSQRTES;
	/* 111011AAAAA00001BBBBB00000110100 */
	dec->operand_n = 3;
	dec->operand_types[0] = PPC_OPER_TYPE_FREG;
	dec->operand_values[0] = (insword & 0x3E00000)>>21;
	dec->operand_types[1] = PPC_OPER_TYPE_FREG;
	dec->operand_values[1] = (insword & 0xF800)>>11;
	dec->operand_types[2] = PPC_OPER_TYPE_NUM;
	dec->operand_fmtstr = PPC_FMTSTR_FREG_C_FREG_C_NUM;
	return 0;
}

/* frsqrtes. FREG,FREG,NUM */
int frsqrtesD_FREG_FREG_NUM(uint32_t insword, struct ppc_decoded *dec)
{
	dec->properties |= PPC_PROPERTY_DOTTED;
	dec->mnemonic = PPC_MNEM_FRSQRTES;
	/* 111011AAAAA00001BBBBB00000110101 */
	dec->operand_n = 3;
	dec->operand_types[0] = PPC_OPER_TYPE_FREG;
	dec->operand_values[0] = (insword & 0x3E00000)>>21;
	dec->operand_types[1] = PPC_OPER_TYPE_FREG;
	dec->operand_values[1] = (insword & 0xF800)>>11;
	dec->operand_types[2] = PPC_OPER_TYPE_NUM;
	dec->operand_fmtstr = PPC_FMTSTR_FREG_C_FREG_C_NUM;
	return 0;
}

