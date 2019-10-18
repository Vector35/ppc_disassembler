#include "disassembler.h"

/* xsaddsp VSREG,VSREG,VSREG */
int xsaddsp_VSREG_VSREG_VSREG(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_XSADDSP;
	/* 111100AAAAABBBBBCCCCC00000000BCA */
	dec->operand_n = 3;
	dec->operand_types[0] = PPC_OPER_TYPE_VSREG;
	dec->operand_values[0] = ((insword & 0x3E00000)>>20)|((insword & 0x1)>>0);
	dec->operand_types[1] = PPC_OPER_TYPE_VSREG;
	dec->operand_values[1] = ((insword & 0x1F0000)>>15)|((insword & 0x4)>>2);
	dec->operand_types[2] = PPC_OPER_TYPE_VSREG;
	dec->operand_values[2] = ((insword & 0xF800)>>10)|((insword & 0x2)>>1);
	dec->operand_fmtstr = PPC_FMTSTR_VSREG_C_VSREG_C_VSREG;
	return 0;
}

/* xsmaddasp VSREG,VSREG,VSREG */
int xsmaddasp_VSREG_VSREG_VSREG(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_XSMADDASP;
	/* 111100AAAAABBBBBCCCCC00000001BCA */
	dec->operand_n = 3;
	dec->operand_types[0] = PPC_OPER_TYPE_VSREG;
	dec->operand_values[0] = ((insword & 0x3E00000)>>20)|((insword & 0x1)>>0);
	dec->operand_types[1] = PPC_OPER_TYPE_VSREG;
	dec->operand_values[1] = ((insword & 0x1F0000)>>15)|((insword & 0x4)>>2);
	dec->operand_types[2] = PPC_OPER_TYPE_VSREG;
	dec->operand_values[2] = ((insword & 0xF800)>>10)|((insword & 0x2)>>1);
	dec->operand_fmtstr = PPC_FMTSTR_VSREG_C_VSREG_C_VSREG;
	return 0;
}

/* xxsldwi VSREG,VSREG,VSREG,NUM */
int xxsldwi_VSREG_VSREG_VSREG_NUM(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_XXSLDWI;
	/* 111100AAAAABBBBBCCCCC0DD00010BCA */
	dec->operand_n = 4;
	dec->operand_types[0] = PPC_OPER_TYPE_VSREG;
	dec->operand_values[0] = ((insword & 0x3E00000)>>20)|((insword & 0x1)>>0);
	dec->operand_types[1] = PPC_OPER_TYPE_VSREG;
	dec->operand_values[1] = ((insword & 0x1F0000)>>15)|((insword & 0x4)>>2);
	dec->operand_types[2] = PPC_OPER_TYPE_VSREG;
	dec->operand_values[2] = ((insword & 0xF800)>>10)|((insword & 0x2)>>1);
	dec->operand_types[3] = PPC_OPER_TYPE_NUM;
	dec->operand_values[3] = (insword & 0x300)>>8;
	dec->operand_fmtstr = PPC_FMTSTR_VSREG_C_VSREG_C_VSREG_C_NUM;
	return 0;
}

/* xscmpeqdp VSREG,VSREG,VSREG */
int xscmpeqdp_VSREG_VSREG_VSREG(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_XSCMPEQDP;
	/* 111100AAAAABBBBBCCCCC00000011BCA */
	dec->operand_n = 3;
	dec->operand_types[0] = PPC_OPER_TYPE_VSREG;
	dec->operand_values[0] = ((insword & 0x3E00000)>>20)|((insword & 0x1)>>0);
	dec->operand_types[1] = PPC_OPER_TYPE_VSREG;
	dec->operand_values[1] = ((insword & 0x1F0000)>>15)|((insword & 0x4)>>2);
	dec->operand_types[2] = PPC_OPER_TYPE_VSREG;
	dec->operand_values[2] = ((insword & 0xF800)>>10)|((insword & 0x2)>>1);
	dec->operand_fmtstr = PPC_FMTSTR_VSREG_C_VSREG_C_VSREG;
	return 0;
}

/* psq_st FREG,NUM(GPR),NUM,NUM */
int psq_st_FREG_NUM_GPR__NUM_NUM(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_PSQ_ST;
	/* 111100AAAAACCCCCDEEEBBBBBBxxBBBB */
	dec->operand_n = 5;
	dec->operand_types[0] = PPC_OPER_TYPE_FREG;
	dec->operand_values[0] = (insword & 0x3E00000)>>21;
	dec->operand_types[1] = PPC_OPER_TYPE_NUM;
	dec->operand_values[1] = ((insword & 0xFC0)>>2)|((insword & 0xF)>>0);
	dec->operand_types[2] = PPC_OPER_TYPE_GPR;
	dec->operand_values[2] = (insword & 0x1F0000)>>16;
	dec->operand_types[3] = PPC_OPER_TYPE_NUM;
	dec->operand_values[3] = (insword & 0x8000)>>15;
	dec->operand_types[4] = PPC_OPER_TYPE_NUM;
	dec->operand_values[4] = (insword & 0x7000)>>12;
	dec->operand_fmtstr = PPC_FMTSTR_FREG_C_NUM_LPAREN_GPR_RPAREN__C_NUM_C_NUM;
	return 0;
}

/* xsrsqrtesp VSREG,VSREG */
int xsrsqrtesp_VSREG_VSREG(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_XSRSQRTESP;
	/* 111100AAAAA00000BBBBB000001010BA */
	dec->operand_n = 2;
	dec->operand_types[0] = PPC_OPER_TYPE_VSREG;
	dec->operand_values[0] = ((insword & 0x3E00000)>>20)|((insword & 0x1)>>0);
	dec->operand_types[1] = PPC_OPER_TYPE_VSREG;
	dec->operand_values[1] = ((insword & 0xF800)>>10)|((insword & 0x2)>>1);
	dec->operand_fmtstr = PPC_FMTSTR_VSREG_C_VSREG;
	return 0;
}

/* xssqrtsp VSREG,VSREG */
int xssqrtsp_VSREG_VSREG(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_XSSQRTSP;
	/* 111100AAAAA00000BBBBB000001011BA */
	dec->operand_n = 2;
	dec->operand_types[0] = PPC_OPER_TYPE_VSREG;
	dec->operand_values[0] = ((insword & 0x3E00000)>>20)|((insword & 0x1)>>0);
	dec->operand_types[1] = PPC_OPER_TYPE_VSREG;
	dec->operand_values[1] = ((insword & 0xF800)>>10)|((insword & 0x2)>>1);
	dec->operand_fmtstr = PPC_FMTSTR_VSREG_C_VSREG;
	return 0;
}

/* xxsel VSREG,VSREG,VSREG,VSREG */
int xxsel_VSREG_VSREG_VSREG_VSREG(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_XXSEL;
	/* 111100AAAAABBBBBCCCCCDDDDD11DBCA */
	dec->operand_n = 4;
	dec->operand_types[0] = PPC_OPER_TYPE_VSREG;
	dec->operand_values[0] = ((insword & 0x3E00000)>>20)|((insword & 0x1)>>0);
	dec->operand_types[1] = PPC_OPER_TYPE_VSREG;
	dec->operand_values[1] = ((insword & 0x1F0000)>>15)|((insword & 0x4)>>2);
	dec->operand_types[2] = PPC_OPER_TYPE_VSREG;
	dec->operand_values[2] = ((insword & 0xF800)>>10)|((insword & 0x2)>>1);
	dec->operand_types[3] = PPC_OPER_TYPE_VSREG;
	dec->operand_values[3] = ((insword & 0x7C0)>>5)|((insword & 0x8)>>3);
	dec->operand_fmtstr = PPC_FMTSTR_VSREG_C_VSREG_C_VSREG_C_VSREG;
	return 0;
}

/* xssubsp VSREG,VSREG,VSREG */
int xssubsp_VSREG_VSREG_VSREG(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_XSSUBSP;
	/* 111100AAAAABBBBBCCCCC00001000BCA */
	dec->operand_n = 3;
	dec->operand_types[0] = PPC_OPER_TYPE_VSREG;
	dec->operand_values[0] = ((insword & 0x3E00000)>>20)|((insword & 0x1)>>0);
	dec->operand_types[1] = PPC_OPER_TYPE_VSREG;
	dec->operand_values[1] = ((insword & 0x1F0000)>>15)|((insword & 0x4)>>2);
	dec->operand_types[2] = PPC_OPER_TYPE_VSREG;
	dec->operand_values[2] = ((insword & 0xF800)>>10)|((insword & 0x2)>>1);
	dec->operand_fmtstr = PPC_FMTSTR_VSREG_C_VSREG_C_VSREG;
	return 0;
}

/* xsmaddmsp VSREG,VSREG,VSREG */
int xsmaddmsp_VSREG_VSREG_VSREG(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_XSMADDMSP;
	/* 111100AAAAABBBBBCCCCC00001001BCA */
	dec->operand_n = 3;
	dec->operand_types[0] = PPC_OPER_TYPE_VSREG;
	dec->operand_values[0] = ((insword & 0x3E00000)>>20)|((insword & 0x1)>>0);
	dec->operand_types[1] = PPC_OPER_TYPE_VSREG;
	dec->operand_values[1] = ((insword & 0x1F0000)>>15)|((insword & 0x4)>>2);
	dec->operand_types[2] = PPC_OPER_TYPE_VSREG;
	dec->operand_values[2] = ((insword & 0xF800)>>10)|((insword & 0x2)>>1);
	dec->operand_fmtstr = PPC_FMTSTR_VSREG_C_VSREG_C_VSREG;
	return 0;
}

/* xxspltd VSREG,VSREG,NUM */
int xxspltd_VSREG_VSREG_NUM(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_XXSPLTD;
	/* 111100AAAAAxxxxxxxxxx0xx01010xxA */
	dec->operand_n = 3;
	dec->operand_types[0] = PPC_OPER_TYPE_VSREG;
	dec->operand_values[0] = ((insword & 0x3E00000)>>20)|((insword & 0x1)>>0);
	dec->operand_types[1] = PPC_OPER_TYPE_VSREG;
	dec->operand_types[2] = PPC_OPER_TYPE_NUM;
	dec->operand_fmtstr = PPC_FMTSTR_VSREG_C_VSREG_C_NUM;
	return 0;
}

/* xxmrghd VSREG,VSREG,VSREG */
int xxmrghd_VSREG_VSREG_VSREG(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_XXMRGHD;
	/* 111100AAAAABBBBBCCCCC00001010BCA */
	dec->operand_n = 3;
	dec->operand_types[0] = PPC_OPER_TYPE_VSREG;
	dec->operand_values[0] = ((insword & 0x3E00000)>>20)|((insword & 0x1)>>0);
	dec->operand_types[1] = PPC_OPER_TYPE_VSREG;
	dec->operand_values[1] = ((insword & 0x1F0000)>>15)|((insword & 0x4)>>2);
	dec->operand_types[2] = PPC_OPER_TYPE_VSREG;
	dec->operand_values[2] = ((insword & 0xF800)>>10)|((insword & 0x2)>>1);
	dec->operand_fmtstr = PPC_FMTSTR_VSREG_C_VSREG_C_VSREG;
	return 0;
}

/* xscmpgtdp VSREG,VSREG,VSREG */
int xscmpgtdp_VSREG_VSREG_VSREG(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_XSCMPGTDP;
	/* 111100AAAAABBBBBCCCCC00001011BCA */
	dec->operand_n = 3;
	dec->operand_types[0] = PPC_OPER_TYPE_VSREG;
	dec->operand_values[0] = ((insword & 0x3E00000)>>20)|((insword & 0x1)>>0);
	dec->operand_types[1] = PPC_OPER_TYPE_VSREG;
	dec->operand_values[1] = ((insword & 0x1F0000)>>15)|((insword & 0x4)>>2);
	dec->operand_types[2] = PPC_OPER_TYPE_VSREG;
	dec->operand_values[2] = ((insword & 0xF800)>>10)|((insword & 0x2)>>1);
	dec->operand_fmtstr = PPC_FMTSTR_VSREG_C_VSREG_C_VSREG;
	return 0;
}

/* xsresp VSREG,VSREG */
int xsresp_VSREG_VSREG(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_XSRESP;
	/* 111100AAAAA00000BBBBB000011010BA */
	dec->operand_n = 2;
	dec->operand_types[0] = PPC_OPER_TYPE_VSREG;
	dec->operand_values[0] = ((insword & 0x3E00000)>>20)|((insword & 0x1)>>0);
	dec->operand_types[1] = PPC_OPER_TYPE_VSREG;
	dec->operand_values[1] = ((insword & 0xF800)>>10)|((insword & 0x2)>>1);
	dec->operand_fmtstr = PPC_FMTSTR_VSREG_C_VSREG;
	return 0;
}

/* xsmulsp VSREG,VSREG,VSREG */
int xsmulsp_VSREG_VSREG_VSREG(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_XSMULSP;
	/* 111100AAAAABBBBBCCCCC00010000BCA */
	dec->operand_n = 3;
	dec->operand_types[0] = PPC_OPER_TYPE_VSREG;
	dec->operand_values[0] = ((insword & 0x3E00000)>>20)|((insword & 0x1)>>0);
	dec->operand_types[1] = PPC_OPER_TYPE_VSREG;
	dec->operand_values[1] = ((insword & 0x1F0000)>>15)|((insword & 0x4)>>2);
	dec->operand_types[2] = PPC_OPER_TYPE_VSREG;
	dec->operand_values[2] = ((insword & 0xF800)>>10)|((insword & 0x2)>>1);
	dec->operand_fmtstr = PPC_FMTSTR_VSREG_C_VSREG_C_VSREG;
	return 0;
}

/* xsmsubasp VSREG,VSREG,VSREG */
int xsmsubasp_VSREG_VSREG_VSREG(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_XSMSUBASP;
	/* 111100AAAAABBBBBCCCCC00010001BCA */
	dec->operand_n = 3;
	dec->operand_types[0] = PPC_OPER_TYPE_VSREG;
	dec->operand_values[0] = ((insword & 0x3E00000)>>20)|((insword & 0x1)>>0);
	dec->operand_types[1] = PPC_OPER_TYPE_VSREG;
	dec->operand_values[1] = ((insword & 0x1F0000)>>15)|((insword & 0x4)>>2);
	dec->operand_types[2] = PPC_OPER_TYPE_VSREG;
	dec->operand_values[2] = ((insword & 0xF800)>>10)|((insword & 0x2)>>1);
	dec->operand_fmtstr = PPC_FMTSTR_VSREG_C_VSREG_C_VSREG;
	return 0;
}

/* xxmrghw VSREG,VSREG,VSREG */
int xxmrghw_VSREG_VSREG_VSREG(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_XXMRGHW;
	/* 111100AAAAABBBBBCCCCC00010010BCA */
	dec->operand_n = 3;
	dec->operand_types[0] = PPC_OPER_TYPE_VSREG;
	dec->operand_values[0] = ((insword & 0x3E00000)>>20)|((insword & 0x1)>>0);
	dec->operand_types[1] = PPC_OPER_TYPE_VSREG;
	dec->operand_values[1] = ((insword & 0x1F0000)>>15)|((insword & 0x4)>>2);
	dec->operand_types[2] = PPC_OPER_TYPE_VSREG;
	dec->operand_values[2] = ((insword & 0xF800)>>10)|((insword & 0x2)>>1);
	dec->operand_fmtstr = PPC_FMTSTR_VSREG_C_VSREG_C_VSREG;
	return 0;
}

/* xscmpgedp VSREG,VSREG,VSREG */
int xscmpgedp_VSREG_VSREG_VSREG(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_XSCMPGEDP;
	/* 111100AAAAABBBBBCCCCC00010011BCA */
	dec->operand_n = 3;
	dec->operand_types[0] = PPC_OPER_TYPE_VSREG;
	dec->operand_values[0] = ((insword & 0x3E00000)>>20)|((insword & 0x1)>>0);
	dec->operand_types[1] = PPC_OPER_TYPE_VSREG;
	dec->operand_values[1] = ((insword & 0x1F0000)>>15)|((insword & 0x4)>>2);
	dec->operand_types[2] = PPC_OPER_TYPE_VSREG;
	dec->operand_values[2] = ((insword & 0xF800)>>10)|((insword & 0x2)>>1);
	dec->operand_fmtstr = PPC_FMTSTR_VSREG_C_VSREG_C_VSREG;
	return 0;
}

/* xsdivsp VSREG,VSREG,VSREG */
int xsdivsp_VSREG_VSREG_VSREG(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_XSDIVSP;
	/* 111100AAAAABBBBBCCCCC00011000BCA */
	dec->operand_n = 3;
	dec->operand_types[0] = PPC_OPER_TYPE_VSREG;
	dec->operand_values[0] = ((insword & 0x3E00000)>>20)|((insword & 0x1)>>0);
	dec->operand_types[1] = PPC_OPER_TYPE_VSREG;
	dec->operand_values[1] = ((insword & 0x1F0000)>>15)|((insword & 0x4)>>2);
	dec->operand_types[2] = PPC_OPER_TYPE_VSREG;
	dec->operand_values[2] = ((insword & 0xF800)>>10)|((insword & 0x2)>>1);
	dec->operand_fmtstr = PPC_FMTSTR_VSREG_C_VSREG_C_VSREG;
	return 0;
}

/* xsmsubmsp VSREG,VSREG,VSREG */
int xsmsubmsp_VSREG_VSREG_VSREG(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_XSMSUBMSP;
	/* 111100AAAAABBBBBCCCCC00011001BCA */
	dec->operand_n = 3;
	dec->operand_types[0] = PPC_OPER_TYPE_VSREG;
	dec->operand_values[0] = ((insword & 0x3E00000)>>20)|((insword & 0x1)>>0);
	dec->operand_types[1] = PPC_OPER_TYPE_VSREG;
	dec->operand_values[1] = ((insword & 0x1F0000)>>15)|((insword & 0x4)>>2);
	dec->operand_types[2] = PPC_OPER_TYPE_VSREG;
	dec->operand_values[2] = ((insword & 0xF800)>>10)|((insword & 0x2)>>1);
	dec->operand_fmtstr = PPC_FMTSTR_VSREG_C_VSREG_C_VSREG;
	return 0;
}

/* xxperm VSREG,VSREG,VSREG */
int xxperm_VSREG_VSREG_VSREG(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_XXPERM;
	/* 111100AAAAABBBBBCCCCC00011010BCA */
	dec->operand_n = 3;
	dec->operand_types[0] = PPC_OPER_TYPE_VSREG;
	dec->operand_values[0] = ((insword & 0x3E00000)>>20)|((insword & 0x1)>>0);
	dec->operand_types[1] = PPC_OPER_TYPE_VSREG;
	dec->operand_values[1] = ((insword & 0x1F0000)>>15)|((insword & 0x4)>>2);
	dec->operand_types[2] = PPC_OPER_TYPE_VSREG;
	dec->operand_values[2] = ((insword & 0xF800)>>10)|((insword & 0x2)>>1);
	dec->operand_fmtstr = PPC_FMTSTR_VSREG_C_VSREG_C_VSREG;
	return 0;
}

/* xsadddp VSREG,VSREG,VSREG */
int xsadddp_VSREG_VSREG_VSREG(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_XSADDDP;
	/* 111100AAAAABBBBBCCCCC00100000BCA */
	dec->operand_n = 3;
	dec->operand_types[0] = PPC_OPER_TYPE_VSREG;
	dec->operand_values[0] = ((insword & 0x3E00000)>>20)|((insword & 0x1)>>0);
	dec->operand_types[1] = PPC_OPER_TYPE_VSREG;
	dec->operand_values[1] = ((insword & 0x1F0000)>>15)|((insword & 0x4)>>2);
	dec->operand_types[2] = PPC_OPER_TYPE_VSREG;
	dec->operand_values[2] = ((insword & 0xF800)>>10)|((insword & 0x2)>>1);
	dec->operand_fmtstr = PPC_FMTSTR_VSREG_C_VSREG_C_VSREG;
	return 0;
}

/* xsmaddadp VSREG,VSREG,VSREG */
int xsmaddadp_VSREG_VSREG_VSREG(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_XSMADDADP;
	/* 111100AAAAABBBBBCCCCC00100001BCA */
	dec->operand_n = 3;
	dec->operand_types[0] = PPC_OPER_TYPE_VSREG;
	dec->operand_values[0] = ((insword & 0x3E00000)>>20)|((insword & 0x1)>>0);
	dec->operand_types[1] = PPC_OPER_TYPE_VSREG;
	dec->operand_values[1] = ((insword & 0x1F0000)>>15)|((insword & 0x4)>>2);
	dec->operand_types[2] = PPC_OPER_TYPE_VSREG;
	dec->operand_values[2] = ((insword & 0xF800)>>10)|((insword & 0x2)>>1);
	dec->operand_fmtstr = PPC_FMTSTR_VSREG_C_VSREG_C_VSREG;
	return 0;
}

/* xscmpudp CREG,VSREG,VSREG */
int xscmpudp_CREG_VSREG_VSREG(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_XSCMPUDP;
	/* 111100AAA00BBBBBCCCCC00100011BC0 */
	dec->operand_n = 3;
	dec->operand_types[0] = PPC_OPER_TYPE_CREG;
	dec->operand_values[0] = (insword & 0x3800000)>>23;
	dec->operand_types[1] = PPC_OPER_TYPE_VSREG;
	dec->operand_values[1] = ((insword & 0x1F0000)>>15)|((insword & 0x4)>>2);
	dec->operand_types[2] = PPC_OPER_TYPE_VSREG;
	dec->operand_values[2] = ((insword & 0xF800)>>10)|((insword & 0x2)>>1);
	dec->operand_fmtstr = PPC_FMTSTR_CREG_C_VSREG_C_VSREG;
	return 0;
}

/* xscvdpuxws VSREG,VSREG */
int xscvdpuxws_VSREG_VSREG(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_XSCVDPUXWS;
	/* 111100AAAAA00000BBBBB001001000BA */
	dec->operand_n = 2;
	dec->operand_types[0] = PPC_OPER_TYPE_VSREG;
	dec->operand_values[0] = ((insword & 0x3E00000)>>20)|((insword & 0x1)>>0);
	dec->operand_types[1] = PPC_OPER_TYPE_VSREG;
	dec->operand_values[1] = ((insword & 0xF800)>>10)|((insword & 0x2)>>1);
	dec->operand_fmtstr = PPC_FMTSTR_VSREG_C_VSREG;
	return 0;
}

/* xsrdpi VSREG,VSREG */
int xsrdpi_VSREG_VSREG(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_XSRDPI;
	/* 111100AAAAA00000BBBBB001001001BA */
	dec->operand_n = 2;
	dec->operand_types[0] = PPC_OPER_TYPE_VSREG;
	dec->operand_values[0] = ((insword & 0x3E00000)>>20)|((insword & 0x1)>>0);
	dec->operand_types[1] = PPC_OPER_TYPE_VSREG;
	dec->operand_values[1] = ((insword & 0xF800)>>10)|((insword & 0x2)>>1);
	dec->operand_fmtstr = PPC_FMTSTR_VSREG_C_VSREG;
	return 0;
}

/* xsrsqrtedp VSREG,VSREG */
int xsrsqrtedp_VSREG_VSREG(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_XSRSQRTEDP;
	/* 111100AAAAA00000BBBBB001001010BA */
	dec->operand_n = 2;
	dec->operand_types[0] = PPC_OPER_TYPE_VSREG;
	dec->operand_values[0] = ((insword & 0x3E00000)>>20)|((insword & 0x1)>>0);
	dec->operand_types[1] = PPC_OPER_TYPE_VSREG;
	dec->operand_values[1] = ((insword & 0xF800)>>10)|((insword & 0x2)>>1);
	dec->operand_fmtstr = PPC_FMTSTR_VSREG_C_VSREG;
	return 0;
}

/* xssqrtdp VSREG,VSREG */
int xssqrtdp_VSREG_VSREG(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_XSSQRTDP;
	/* 111100AAAAA00000BBBBB001001011BA */
	dec->operand_n = 2;
	dec->operand_types[0] = PPC_OPER_TYPE_VSREG;
	dec->operand_values[0] = ((insword & 0x3E00000)>>20)|((insword & 0x1)>>0);
	dec->operand_types[1] = PPC_OPER_TYPE_VSREG;
	dec->operand_values[1] = ((insword & 0xF800)>>10)|((insword & 0x2)>>1);
	dec->operand_fmtstr = PPC_FMTSTR_VSREG_C_VSREG;
	return 0;
}

/* xssubdp VSREG,VSREG,VSREG */
int xssubdp_VSREG_VSREG_VSREG(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_XSSUBDP;
	/* 111100AAAAABBBBBCCCCC00101000BCA */
	dec->operand_n = 3;
	dec->operand_types[0] = PPC_OPER_TYPE_VSREG;
	dec->operand_values[0] = ((insword & 0x3E00000)>>20)|((insword & 0x1)>>0);
	dec->operand_types[1] = PPC_OPER_TYPE_VSREG;
	dec->operand_values[1] = ((insword & 0x1F0000)>>15)|((insword & 0x4)>>2);
	dec->operand_types[2] = PPC_OPER_TYPE_VSREG;
	dec->operand_values[2] = ((insword & 0xF800)>>10)|((insword & 0x2)>>1);
	dec->operand_fmtstr = PPC_FMTSTR_VSREG_C_VSREG_C_VSREG;
	return 0;
}

/* xsmaddmdp VSREG,VSREG,VSREG */
int xsmaddmdp_VSREG_VSREG_VSREG(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_XSMADDMDP;
	/* 111100AAAAABBBBBCCCCC00101001BCA */
	dec->operand_n = 3;
	dec->operand_types[0] = PPC_OPER_TYPE_VSREG;
	dec->operand_values[0] = ((insword & 0x3E00000)>>20)|((insword & 0x1)>>0);
	dec->operand_types[1] = PPC_OPER_TYPE_VSREG;
	dec->operand_values[1] = ((insword & 0x1F0000)>>15)|((insword & 0x4)>>2);
	dec->operand_types[2] = PPC_OPER_TYPE_VSREG;
	dec->operand_values[2] = ((insword & 0xF800)>>10)|((insword & 0x2)>>1);
	dec->operand_fmtstr = PPC_FMTSTR_VSREG_C_VSREG_C_VSREG;
	return 0;
}

/* xxpermdi VSREG,VSREG,VSREG,NUM */
int xxpermdi_VSREG_VSREG_VSREG_NUM(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_XXPERMDI;
	/* 111100AAAAABBBBBCCCCC0xx01010BCA */
	dec->operand_n = 4;
	dec->operand_types[0] = PPC_OPER_TYPE_VSREG;
	dec->operand_values[0] = ((insword & 0x3E00000)>>20)|((insword & 0x1)>>0);
	dec->operand_types[1] = PPC_OPER_TYPE_VSREG;
	dec->operand_values[1] = ((insword & 0x1F0000)>>15)|((insword & 0x4)>>2);
	dec->operand_types[2] = PPC_OPER_TYPE_VSREG;
	dec->operand_values[2] = ((insword & 0xF800)>>10)|((insword & 0x2)>>1);
	dec->operand_types[3] = PPC_OPER_TYPE_NUM;
	dec->operand_fmtstr = PPC_FMTSTR_VSREG_C_VSREG_C_VSREG_C_NUM;
	return 0;
}

/* xscmpodp CREG,VSREG,VSREG */
int xscmpodp_CREG_VSREG_VSREG(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_XSCMPODP;
	/* 111100AAA00BBBBBCCCCC00101011BC0 */
	dec->operand_n = 3;
	dec->operand_types[0] = PPC_OPER_TYPE_CREG;
	dec->operand_values[0] = (insword & 0x3800000)>>23;
	dec->operand_types[1] = PPC_OPER_TYPE_VSREG;
	dec->operand_values[1] = ((insword & 0x1F0000)>>15)|((insword & 0x4)>>2);
	dec->operand_types[2] = PPC_OPER_TYPE_VSREG;
	dec->operand_values[2] = ((insword & 0xF800)>>10)|((insword & 0x2)>>1);
	dec->operand_fmtstr = PPC_FMTSTR_CREG_C_VSREG_C_VSREG;
	return 0;
}

/* xscvdpsxws VSREG,VSREG */
int xscvdpsxws_VSREG_VSREG(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_XSCVDPSXWS;
	/* 111100AAAAA00000BBBBB001011000BA */
	dec->operand_n = 2;
	dec->operand_types[0] = PPC_OPER_TYPE_VSREG;
	dec->operand_values[0] = ((insword & 0x3E00000)>>20)|((insword & 0x1)>>0);
	dec->operand_types[1] = PPC_OPER_TYPE_VSREG;
	dec->operand_values[1] = ((insword & 0xF800)>>10)|((insword & 0x2)>>1);
	dec->operand_fmtstr = PPC_FMTSTR_VSREG_C_VSREG;
	return 0;
}

/* xsrdpiz VSREG,VSREG */
int xsrdpiz_VSREG_VSREG(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_XSRDPIZ;
	/* 111100AAAAA00000BBBBB001011001BA */
	dec->operand_n = 2;
	dec->operand_types[0] = PPC_OPER_TYPE_VSREG;
	dec->operand_values[0] = ((insword & 0x3E00000)>>20)|((insword & 0x1)>>0);
	dec->operand_types[1] = PPC_OPER_TYPE_VSREG;
	dec->operand_values[1] = ((insword & 0xF800)>>10)|((insword & 0x2)>>1);
	dec->operand_fmtstr = PPC_FMTSTR_VSREG_C_VSREG;
	return 0;
}

/* xsredp VSREG,VSREG */
int xsredp_VSREG_VSREG(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_XSREDP;
	/* 111100AAAAA00000BBBBB001011010BA */
	dec->operand_n = 2;
	dec->operand_types[0] = PPC_OPER_TYPE_VSREG;
	dec->operand_values[0] = ((insword & 0x3E00000)>>20)|((insword & 0x1)>>0);
	dec->operand_types[1] = PPC_OPER_TYPE_VSREG;
	dec->operand_values[1] = ((insword & 0xF800)>>10)|((insword & 0x2)>>1);
	dec->operand_fmtstr = PPC_FMTSTR_VSREG_C_VSREG;
	return 0;
}

/* xsmuldp VSREG,VSREG,VSREG */
int xsmuldp_VSREG_VSREG_VSREG(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_XSMULDP;
	/* 111100AAAAABBBBBCCCCC00110000BCA */
	dec->operand_n = 3;
	dec->operand_types[0] = PPC_OPER_TYPE_VSREG;
	dec->operand_values[0] = ((insword & 0x3E00000)>>20)|((insword & 0x1)>>0);
	dec->operand_types[1] = PPC_OPER_TYPE_VSREG;
	dec->operand_values[1] = ((insword & 0x1F0000)>>15)|((insword & 0x4)>>2);
	dec->operand_types[2] = PPC_OPER_TYPE_VSREG;
	dec->operand_values[2] = ((insword & 0xF800)>>10)|((insword & 0x2)>>1);
	dec->operand_fmtstr = PPC_FMTSTR_VSREG_C_VSREG_C_VSREG;
	return 0;
}

/* xsmsubadp VSREG,VSREG,VSREG */
int xsmsubadp_VSREG_VSREG_VSREG(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_XSMSUBADP;
	/* 111100AAAAABBBBBCCCCC00110001BCA */
	dec->operand_n = 3;
	dec->operand_types[0] = PPC_OPER_TYPE_VSREG;
	dec->operand_values[0] = ((insword & 0x3E00000)>>20)|((insword & 0x1)>>0);
	dec->operand_types[1] = PPC_OPER_TYPE_VSREG;
	dec->operand_values[1] = ((insword & 0x1F0000)>>15)|((insword & 0x4)>>2);
	dec->operand_types[2] = PPC_OPER_TYPE_VSREG;
	dec->operand_values[2] = ((insword & 0xF800)>>10)|((insword & 0x2)>>1);
	dec->operand_fmtstr = PPC_FMTSTR_VSREG_C_VSREG_C_VSREG;
	return 0;
}

/* xxmrglw VSREG,VSREG,VSREG */
int xxmrglw_VSREG_VSREG_VSREG(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_XXMRGLW;
	/* 111100AAAAABBBBBCCCCC00110010BCA */
	dec->operand_n = 3;
	dec->operand_types[0] = PPC_OPER_TYPE_VSREG;
	dec->operand_values[0] = ((insword & 0x3E00000)>>20)|((insword & 0x1)>>0);
	dec->operand_types[1] = PPC_OPER_TYPE_VSREG;
	dec->operand_values[1] = ((insword & 0x1F0000)>>15)|((insword & 0x4)>>2);
	dec->operand_types[2] = PPC_OPER_TYPE_VSREG;
	dec->operand_values[2] = ((insword & 0xF800)>>10)|((insword & 0x2)>>1);
	dec->operand_fmtstr = PPC_FMTSTR_VSREG_C_VSREG_C_VSREG;
	return 0;
}

/* xsrdpip VSREG,VSREG */
int xsrdpip_VSREG_VSREG(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_XSRDPIP;
	/* 111100AAAAA00000BBBBB001101001BA */
	dec->operand_n = 2;
	dec->operand_types[0] = PPC_OPER_TYPE_VSREG;
	dec->operand_values[0] = ((insword & 0x3E00000)>>20)|((insword & 0x1)>>0);
	dec->operand_types[1] = PPC_OPER_TYPE_VSREG;
	dec->operand_values[1] = ((insword & 0xF800)>>10)|((insword & 0x2)>>1);
	dec->operand_fmtstr = PPC_FMTSTR_VSREG_C_VSREG;
	return 0;
}

/* xstsqrtdp CREG,VSREG */
int xstsqrtdp_CREG_VSREG(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_XSTSQRTDP;
	/* 111100AAA0000000BBBBB001101010B0 */
	dec->operand_n = 2;
	dec->operand_types[0] = PPC_OPER_TYPE_CREG;
	dec->operand_values[0] = (insword & 0x3800000)>>23;
	dec->operand_types[1] = PPC_OPER_TYPE_VSREG;
	dec->operand_values[1] = ((insword & 0xF800)>>10)|((insword & 0x2)>>1);
	dec->operand_fmtstr = PPC_FMTSTR_CREG_C_VSREG;
	return 0;
}

/* xsrdpic VSREG,VSREG */
int xsrdpic_VSREG_VSREG(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_XSRDPIC;
	/* 111100AAAAA00000BBBBB001101011BA */
	dec->operand_n = 2;
	dec->operand_types[0] = PPC_OPER_TYPE_VSREG;
	dec->operand_values[0] = ((insword & 0x3E00000)>>20)|((insword & 0x1)>>0);
	dec->operand_types[1] = PPC_OPER_TYPE_VSREG;
	dec->operand_values[1] = ((insword & 0xF800)>>10)|((insword & 0x2)>>1);
	dec->operand_fmtstr = PPC_FMTSTR_VSREG_C_VSREG;
	return 0;
}

/* xsdivdp VSREG,VSREG,VSREG */
int xsdivdp_VSREG_VSREG_VSREG(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_XSDIVDP;
	/* 111100AAAAABBBBBCCCCC00111000BCA */
	dec->operand_n = 3;
	dec->operand_types[0] = PPC_OPER_TYPE_VSREG;
	dec->operand_values[0] = ((insword & 0x3E00000)>>20)|((insword & 0x1)>>0);
	dec->operand_types[1] = PPC_OPER_TYPE_VSREG;
	dec->operand_values[1] = ((insword & 0x1F0000)>>15)|((insword & 0x4)>>2);
	dec->operand_types[2] = PPC_OPER_TYPE_VSREG;
	dec->operand_values[2] = ((insword & 0xF800)>>10)|((insword & 0x2)>>1);
	dec->operand_fmtstr = PPC_FMTSTR_VSREG_C_VSREG_C_VSREG;
	return 0;
}

/* xsmsubmdp VSREG,VSREG,VSREG */
int xsmsubmdp_VSREG_VSREG_VSREG(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_XSMSUBMDP;
	/* 111100AAAAABBBBBCCCCC00111001BCA */
	dec->operand_n = 3;
	dec->operand_types[0] = PPC_OPER_TYPE_VSREG;
	dec->operand_values[0] = ((insword & 0x3E00000)>>20)|((insword & 0x1)>>0);
	dec->operand_types[1] = PPC_OPER_TYPE_VSREG;
	dec->operand_values[1] = ((insword & 0x1F0000)>>15)|((insword & 0x4)>>2);
	dec->operand_types[2] = PPC_OPER_TYPE_VSREG;
	dec->operand_values[2] = ((insword & 0xF800)>>10)|((insword & 0x2)>>1);
	dec->operand_fmtstr = PPC_FMTSTR_VSREG_C_VSREG_C_VSREG;
	return 0;
}

/* xxpermr VSREG,VSREG,VSREG */
int xxpermr_VSREG_VSREG_VSREG(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_XXPERMR;
	/* 111100AAAAABBBBBCCCCC00111010BCA */
	dec->operand_n = 3;
	dec->operand_types[0] = PPC_OPER_TYPE_VSREG;
	dec->operand_values[0] = ((insword & 0x3E00000)>>20)|((insword & 0x1)>>0);
	dec->operand_types[1] = PPC_OPER_TYPE_VSREG;
	dec->operand_values[1] = ((insword & 0x1F0000)>>15)|((insword & 0x4)>>2);
	dec->operand_types[2] = PPC_OPER_TYPE_VSREG;
	dec->operand_values[2] = ((insword & 0xF800)>>10)|((insword & 0x2)>>1);
	dec->operand_fmtstr = PPC_FMTSTR_VSREG_C_VSREG_C_VSREG;
	return 0;
}

/* xscmpexpdp CREG,VSREG,VSREG */
int xscmpexpdp_CREG_VSREG_VSREG(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_XSCMPEXPDP;
	/* 111100AAA00BBBBBCCCCC00111011BC0 */
	dec->operand_n = 3;
	dec->operand_types[0] = PPC_OPER_TYPE_CREG;
	dec->operand_values[0] = (insword & 0x3800000)>>23;
	dec->operand_types[1] = PPC_OPER_TYPE_VSREG;
	dec->operand_values[1] = ((insword & 0x1F0000)>>15)|((insword & 0x4)>>2);
	dec->operand_types[2] = PPC_OPER_TYPE_VSREG;
	dec->operand_values[2] = ((insword & 0xF800)>>10)|((insword & 0x2)>>1);
	dec->operand_fmtstr = PPC_FMTSTR_CREG_C_VSREG_C_VSREG;
	return 0;
}

/* xsrdpim VSREG,VSREG */
int xsrdpim_VSREG_VSREG(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_XSRDPIM;
	/* 111100AAAAA00000BBBBB001111001BA */
	dec->operand_n = 2;
	dec->operand_types[0] = PPC_OPER_TYPE_VSREG;
	dec->operand_values[0] = ((insword & 0x3E00000)>>20)|((insword & 0x1)>>0);
	dec->operand_types[1] = PPC_OPER_TYPE_VSREG;
	dec->operand_values[1] = ((insword & 0xF800)>>10)|((insword & 0x2)>>1);
	dec->operand_fmtstr = PPC_FMTSTR_VSREG_C_VSREG;
	return 0;
}

/* xstdivdp CREG,VSREG,VSREG */
int xstdivdp_CREG_VSREG_VSREG(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_XSTDIVDP;
	/* 111100AAA00BBBBBCCCCC00111101BC0 */
	dec->operand_n = 3;
	dec->operand_types[0] = PPC_OPER_TYPE_CREG;
	dec->operand_values[0] = (insword & 0x3800000)>>23;
	dec->operand_types[1] = PPC_OPER_TYPE_VSREG;
	dec->operand_values[1] = ((insword & 0x1F0000)>>15)|((insword & 0x4)>>2);
	dec->operand_types[2] = PPC_OPER_TYPE_VSREG;
	dec->operand_values[2] = ((insword & 0xF800)>>10)|((insword & 0x2)>>1);
	dec->operand_fmtstr = PPC_FMTSTR_CREG_C_VSREG_C_VSREG;
	return 0;
}

/* xvaddsp VSREG,VSREG,VSREG */
int xvaddsp_VSREG_VSREG_VSREG(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_XVADDSP;
	/* 111100AAAAABBBBBCCCCC01000000BCA */
	dec->operand_n = 3;
	dec->operand_types[0] = PPC_OPER_TYPE_VSREG;
	dec->operand_values[0] = ((insword & 0x3E00000)>>20)|((insword & 0x1)>>0);
	dec->operand_types[1] = PPC_OPER_TYPE_VSREG;
	dec->operand_values[1] = ((insword & 0x1F0000)>>15)|((insword & 0x4)>>2);
	dec->operand_types[2] = PPC_OPER_TYPE_VSREG;
	dec->operand_values[2] = ((insword & 0xF800)>>10)|((insword & 0x2)>>1);
	dec->operand_fmtstr = PPC_FMTSTR_VSREG_C_VSREG_C_VSREG;
	return 0;
}

/* xvmaddasp VSREG,VSREG,VSREG */
int xvmaddasp_VSREG_VSREG_VSREG(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_XVMADDASP;
	/* 111100AAAAABBBBBCCCCC01000001BCA */
	dec->operand_n = 3;
	dec->operand_types[0] = PPC_OPER_TYPE_VSREG;
	dec->operand_values[0] = ((insword & 0x3E00000)>>20)|((insword & 0x1)>>0);
	dec->operand_types[1] = PPC_OPER_TYPE_VSREG;
	dec->operand_values[1] = ((insword & 0x1F0000)>>15)|((insword & 0x4)>>2);
	dec->operand_types[2] = PPC_OPER_TYPE_VSREG;
	dec->operand_values[2] = ((insword & 0xF800)>>10)|((insword & 0x2)>>1);
	dec->operand_fmtstr = PPC_FMTSTR_VSREG_C_VSREG_C_VSREG;
	return 0;
}

/* xvcmpeqsp VSREG,VSREG,VSREG */
int xvcmpeqsp_VSREG_VSREG_VSREG(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_XVCMPEQSP;
	/* 111100AAAAABBBBBCCCCC01000011BCA */
	dec->operand_n = 3;
	dec->operand_types[0] = PPC_OPER_TYPE_VSREG;
	dec->operand_values[0] = ((insword & 0x3E00000)>>20)|((insword & 0x1)>>0);
	dec->operand_types[1] = PPC_OPER_TYPE_VSREG;
	dec->operand_values[1] = ((insword & 0x1F0000)>>15)|((insword & 0x4)>>2);
	dec->operand_types[2] = PPC_OPER_TYPE_VSREG;
	dec->operand_values[2] = ((insword & 0xF800)>>10)|((insword & 0x2)>>1);
	dec->operand_fmtstr = PPC_FMTSTR_VSREG_C_VSREG_C_VSREG;
	return 0;
}

/* xvcvspuxws VSREG,VSREG */
int xvcvspuxws_VSREG_VSREG(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_XVCVSPUXWS;
	/* 111100AAAAA00000BBBBB010001000BA */
	dec->operand_n = 2;
	dec->operand_types[0] = PPC_OPER_TYPE_VSREG;
	dec->operand_values[0] = ((insword & 0x3E00000)>>20)|((insword & 0x1)>>0);
	dec->operand_types[1] = PPC_OPER_TYPE_VSREG;
	dec->operand_values[1] = ((insword & 0xF800)>>10)|((insword & 0x2)>>1);
	dec->operand_fmtstr = PPC_FMTSTR_VSREG_C_VSREG;
	return 0;
}

/* xvrspi VSREG,VSREG */
int xvrspi_VSREG_VSREG(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_XVRSPI;
	/* 111100AAAAA00000BBBBB010001001BA */
	dec->operand_n = 2;
	dec->operand_types[0] = PPC_OPER_TYPE_VSREG;
	dec->operand_values[0] = ((insword & 0x3E00000)>>20)|((insword & 0x1)>>0);
	dec->operand_types[1] = PPC_OPER_TYPE_VSREG;
	dec->operand_values[1] = ((insword & 0xF800)>>10)|((insword & 0x2)>>1);
	dec->operand_fmtstr = PPC_FMTSTR_VSREG_C_VSREG;
	return 0;
}

/* xvrsqrtesp VSREG,VSREG */
int xvrsqrtesp_VSREG_VSREG(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_XVRSQRTESP;
	/* 111100AAAAA00000BBBBB010001010BA */
	dec->operand_n = 2;
	dec->operand_types[0] = PPC_OPER_TYPE_VSREG;
	dec->operand_values[0] = ((insword & 0x3E00000)>>20)|((insword & 0x1)>>0);
	dec->operand_types[1] = PPC_OPER_TYPE_VSREG;
	dec->operand_values[1] = ((insword & 0xF800)>>10)|((insword & 0x2)>>1);
	dec->operand_fmtstr = PPC_FMTSTR_VSREG_C_VSREG;
	return 0;
}

/* xvsqrtsp VSREG,VSREG */
int xvsqrtsp_VSREG_VSREG(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_XVSQRTSP;
	/* 111100AAAAA00000BBBBB010001011BA */
	dec->operand_n = 2;
	dec->operand_types[0] = PPC_OPER_TYPE_VSREG;
	dec->operand_values[0] = ((insword & 0x3E00000)>>20)|((insword & 0x1)>>0);
	dec->operand_types[1] = PPC_OPER_TYPE_VSREG;
	dec->operand_values[1] = ((insword & 0xF800)>>10)|((insword & 0x2)>>1);
	dec->operand_fmtstr = PPC_FMTSTR_VSREG_C_VSREG;
	return 0;
}

/* xvsubsp VSREG,VSREG,VSREG */
int xvsubsp_VSREG_VSREG_VSREG(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_XVSUBSP;
	/* 111100AAAAABBBBBCCCCC01001000BCA */
	dec->operand_n = 3;
	dec->operand_types[0] = PPC_OPER_TYPE_VSREG;
	dec->operand_values[0] = ((insword & 0x3E00000)>>20)|((insword & 0x1)>>0);
	dec->operand_types[1] = PPC_OPER_TYPE_VSREG;
	dec->operand_values[1] = ((insword & 0x1F0000)>>15)|((insword & 0x4)>>2);
	dec->operand_types[2] = PPC_OPER_TYPE_VSREG;
	dec->operand_values[2] = ((insword & 0xF800)>>10)|((insword & 0x2)>>1);
	dec->operand_fmtstr = PPC_FMTSTR_VSREG_C_VSREG_C_VSREG;
	return 0;
}

/* xvmaddmsp VSREG,VSREG,VSREG */
int xvmaddmsp_VSREG_VSREG_VSREG(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_XVMADDMSP;
	/* 111100AAAAABBBBBCCCCC01001001BCA */
	dec->operand_n = 3;
	dec->operand_types[0] = PPC_OPER_TYPE_VSREG;
	dec->operand_values[0] = ((insword & 0x3E00000)>>20)|((insword & 0x1)>>0);
	dec->operand_types[1] = PPC_OPER_TYPE_VSREG;
	dec->operand_values[1] = ((insword & 0x1F0000)>>15)|((insword & 0x4)>>2);
	dec->operand_types[2] = PPC_OPER_TYPE_VSREG;
	dec->operand_values[2] = ((insword & 0xF800)>>10)|((insword & 0x2)>>1);
	dec->operand_fmtstr = PPC_FMTSTR_VSREG_C_VSREG_C_VSREG;
	return 0;
}

/* xxswapd VSREG,VSREG */
int xxswapd_VSREG_VSREG(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_XXSWAPD;
	/* 111100AAAAAxxxxxxxxxx01001010xxA */
	dec->operand_n = 2;
	dec->operand_types[0] = PPC_OPER_TYPE_VSREG;
	dec->operand_values[0] = ((insword & 0x3E00000)>>20)|((insword & 0x1)>>0);
	dec->operand_types[1] = PPC_OPER_TYPE_VSREG;
	dec->operand_fmtstr = PPC_FMTSTR_VSREG_C_VSREG;
	return 0;
}

/* xvcmpgtsp VSREG,VSREG,VSREG */
int xvcmpgtsp_VSREG_VSREG_VSREG(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_XVCMPGTSP;
	/* 111100AAAAABBBBBCCCCC01001011BCA */
	dec->operand_n = 3;
	dec->operand_types[0] = PPC_OPER_TYPE_VSREG;
	dec->operand_values[0] = ((insword & 0x3E00000)>>20)|((insword & 0x1)>>0);
	dec->operand_types[1] = PPC_OPER_TYPE_VSREG;
	dec->operand_values[1] = ((insword & 0x1F0000)>>15)|((insword & 0x4)>>2);
	dec->operand_types[2] = PPC_OPER_TYPE_VSREG;
	dec->operand_values[2] = ((insword & 0xF800)>>10)|((insword & 0x2)>>1);
	dec->operand_fmtstr = PPC_FMTSTR_VSREG_C_VSREG_C_VSREG;
	return 0;
}

/* xvcvspsxws VSREG,VSREG */
int xvcvspsxws_VSREG_VSREG(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_XVCVSPSXWS;
	/* 111100AAAAA00000BBBBB010011000BA */
	dec->operand_n = 2;
	dec->operand_types[0] = PPC_OPER_TYPE_VSREG;
	dec->operand_values[0] = ((insword & 0x3E00000)>>20)|((insword & 0x1)>>0);
	dec->operand_types[1] = PPC_OPER_TYPE_VSREG;
	dec->operand_values[1] = ((insword & 0xF800)>>10)|((insword & 0x2)>>1);
	dec->operand_fmtstr = PPC_FMTSTR_VSREG_C_VSREG;
	return 0;
}

/* xvrspiz VSREG,VSREG */
int xvrspiz_VSREG_VSREG(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_XVRSPIZ;
	/* 111100AAAAA00000BBBBB010011001BA */
	dec->operand_n = 2;
	dec->operand_types[0] = PPC_OPER_TYPE_VSREG;
	dec->operand_values[0] = ((insword & 0x3E00000)>>20)|((insword & 0x1)>>0);
	dec->operand_types[1] = PPC_OPER_TYPE_VSREG;
	dec->operand_values[1] = ((insword & 0xF800)>>10)|((insword & 0x2)>>1);
	dec->operand_fmtstr = PPC_FMTSTR_VSREG_C_VSREG;
	return 0;
}

/* xvresp VSREG,VSREG */
int xvresp_VSREG_VSREG(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_XVRESP;
	/* 111100AAAAA00000BBBBB010011010BA */
	dec->operand_n = 2;
	dec->operand_types[0] = PPC_OPER_TYPE_VSREG;
	dec->operand_values[0] = ((insword & 0x3E00000)>>20)|((insword & 0x1)>>0);
	dec->operand_types[1] = PPC_OPER_TYPE_VSREG;
	dec->operand_values[1] = ((insword & 0xF800)>>10)|((insword & 0x2)>>1);
	dec->operand_fmtstr = PPC_FMTSTR_VSREG_C_VSREG;
	return 0;
}

/* xvmulsp VSREG,VSREG,VSREG */
int xvmulsp_VSREG_VSREG_VSREG(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_XVMULSP;
	/* 111100AAAAABBBBBCCCCC01010000BCA */
	dec->operand_n = 3;
	dec->operand_types[0] = PPC_OPER_TYPE_VSREG;
	dec->operand_values[0] = ((insword & 0x3E00000)>>20)|((insword & 0x1)>>0);
	dec->operand_types[1] = PPC_OPER_TYPE_VSREG;
	dec->operand_values[1] = ((insword & 0x1F0000)>>15)|((insword & 0x4)>>2);
	dec->operand_types[2] = PPC_OPER_TYPE_VSREG;
	dec->operand_values[2] = ((insword & 0xF800)>>10)|((insword & 0x2)>>1);
	dec->operand_fmtstr = PPC_FMTSTR_VSREG_C_VSREG_C_VSREG;
	return 0;
}

/* xvmsubasp VSREG,VSREG,VSREG */
int xvmsubasp_VSREG_VSREG_VSREG(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_XVMSUBASP;
	/* 111100AAAAABBBBBCCCCC01010001BCA */
	dec->operand_n = 3;
	dec->operand_types[0] = PPC_OPER_TYPE_VSREG;
	dec->operand_values[0] = ((insword & 0x3E00000)>>20)|((insword & 0x1)>>0);
	dec->operand_types[1] = PPC_OPER_TYPE_VSREG;
	dec->operand_values[1] = ((insword & 0x1F0000)>>15)|((insword & 0x4)>>2);
	dec->operand_types[2] = PPC_OPER_TYPE_VSREG;
	dec->operand_values[2] = ((insword & 0xF800)>>10)|((insword & 0x2)>>1);
	dec->operand_fmtstr = PPC_FMTSTR_VSREG_C_VSREG_C_VSREG;
	return 0;
}

/* xxspltw VSREG,VSREG,NUM */
int xxspltw_VSREG_VSREG_NUM(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_XXSPLTW;
	/* 111100AAAAA000CCBBBBB010100100BA */
	dec->operand_n = 3;
	dec->operand_types[0] = PPC_OPER_TYPE_VSREG;
	dec->operand_values[0] = ((insword & 0x3E00000)>>20)|((insword & 0x1)>>0);
	dec->operand_types[1] = PPC_OPER_TYPE_VSREG;
	dec->operand_values[1] = ((insword & 0xF800)>>10)|((insword & 0x2)>>1);
	dec->operand_types[2] = PPC_OPER_TYPE_NUM;
	dec->operand_values[2] = (insword & 0x30000)>>16;
	dec->operand_fmtstr = PPC_FMTSTR_VSREG_C_VSREG_C_NUM;
	return 0;
}

/* xxextractuw VSREG,VSREG,NUM */
int xxextractuw_VSREG_VSREG_NUM(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_XXEXTRACTUW;
	/* 111100AAAAA0CCCCBBBBB010100101BA */
	dec->operand_n = 3;
	dec->operand_types[0] = PPC_OPER_TYPE_VSREG;
	dec->operand_values[0] = ((insword & 0x3E00000)>>20)|((insword & 0x1)>>0);
	dec->operand_types[1] = PPC_OPER_TYPE_VSREG;
	dec->operand_values[1] = ((insword & 0xF800)>>10)|((insword & 0x2)>>1);
	dec->operand_types[2] = PPC_OPER_TYPE_NUM;
	dec->operand_values[2] = (insword & 0xF0000)>>16;
	dec->operand_fmtstr = PPC_FMTSTR_VSREG_C_VSREG_C_NUM;
	return 0;
}

/* xvcmpgesp VSREG,VSREG,VSREG */
int xvcmpgesp_VSREG_VSREG_VSREG(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_XVCMPGESP;
	/* 111100AAAAABBBBBCCCCC01010011BCA */
	dec->operand_n = 3;
	dec->operand_types[0] = PPC_OPER_TYPE_VSREG;
	dec->operand_values[0] = ((insword & 0x3E00000)>>20)|((insword & 0x1)>>0);
	dec->operand_types[1] = PPC_OPER_TYPE_VSREG;
	dec->operand_values[1] = ((insword & 0x1F0000)>>15)|((insword & 0x4)>>2);
	dec->operand_types[2] = PPC_OPER_TYPE_VSREG;
	dec->operand_values[2] = ((insword & 0xF800)>>10)|((insword & 0x2)>>1);
	dec->operand_fmtstr = PPC_FMTSTR_VSREG_C_VSREG_C_VSREG;
	return 0;
}

/* xvcvuxwsp VSREG,VSREG */
int xvcvuxwsp_VSREG_VSREG(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_XVCVUXWSP;
	/* 111100AAAAA00000BBBBB010101000BA */
	dec->operand_n = 2;
	dec->operand_types[0] = PPC_OPER_TYPE_VSREG;
	dec->operand_values[0] = ((insword & 0x3E00000)>>20)|((insword & 0x1)>>0);
	dec->operand_types[1] = PPC_OPER_TYPE_VSREG;
	dec->operand_values[1] = ((insword & 0xF800)>>10)|((insword & 0x2)>>1);
	dec->operand_fmtstr = PPC_FMTSTR_VSREG_C_VSREG;
	return 0;
}

/* xvrspip VSREG,VSREG */
int xvrspip_VSREG_VSREG(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_XVRSPIP;
	/* 111100AAAAA00000BBBBB010101001BA */
	dec->operand_n = 2;
	dec->operand_types[0] = PPC_OPER_TYPE_VSREG;
	dec->operand_values[0] = ((insword & 0x3E00000)>>20)|((insword & 0x1)>>0);
	dec->operand_types[1] = PPC_OPER_TYPE_VSREG;
	dec->operand_values[1] = ((insword & 0xF800)>>10)|((insword & 0x2)>>1);
	dec->operand_fmtstr = PPC_FMTSTR_VSREG_C_VSREG;
	return 0;
}

/* xvtsqrtsp CREG,VSREG */
int xvtsqrtsp_CREG_VSREG(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_XVTSQRTSP;
	/* 111100AAA0000000BBBBB010101010B0 */
	dec->operand_n = 2;
	dec->operand_types[0] = PPC_OPER_TYPE_CREG;
	dec->operand_values[0] = (insword & 0x3800000)>>23;
	dec->operand_types[1] = PPC_OPER_TYPE_VSREG;
	dec->operand_values[1] = ((insword & 0xF800)>>10)|((insword & 0x2)>>1);
	dec->operand_fmtstr = PPC_FMTSTR_CREG_C_VSREG;
	return 0;
}

/* xvrspic VSREG,VSREG */
int xvrspic_VSREG_VSREG(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_XVRSPIC;
	/* 111100AAAAA00000BBBBB010101011BA */
	dec->operand_n = 2;
	dec->operand_types[0] = PPC_OPER_TYPE_VSREG;
	dec->operand_values[0] = ((insword & 0x3E00000)>>20)|((insword & 0x1)>>0);
	dec->operand_types[1] = PPC_OPER_TYPE_VSREG;
	dec->operand_values[1] = ((insword & 0xF800)>>10)|((insword & 0x2)>>1);
	dec->operand_fmtstr = PPC_FMTSTR_VSREG_C_VSREG;
	return 0;
}

/* xvdivsp VSREG,VSREG,VSREG */
int xvdivsp_VSREG_VSREG_VSREG(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_XVDIVSP;
	/* 111100AAAAABBBBBCCCCC01011000BCA */
	dec->operand_n = 3;
	dec->operand_types[0] = PPC_OPER_TYPE_VSREG;
	dec->operand_values[0] = ((insword & 0x3E00000)>>20)|((insword & 0x1)>>0);
	dec->operand_types[1] = PPC_OPER_TYPE_VSREG;
	dec->operand_values[1] = ((insword & 0x1F0000)>>15)|((insword & 0x4)>>2);
	dec->operand_types[2] = PPC_OPER_TYPE_VSREG;
	dec->operand_values[2] = ((insword & 0xF800)>>10)|((insword & 0x2)>>1);
	dec->operand_fmtstr = PPC_FMTSTR_VSREG_C_VSREG_C_VSREG;
	return 0;
}

/* xvmsubmsp VSREG,VSREG,VSREG */
int xvmsubmsp_VSREG_VSREG_VSREG(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_XVMSUBMSP;
	/* 111100AAAAABBBBBCCCCC01011001BCA */
	dec->operand_n = 3;
	dec->operand_types[0] = PPC_OPER_TYPE_VSREG;
	dec->operand_values[0] = ((insword & 0x3E00000)>>20)|((insword & 0x1)>>0);
	dec->operand_types[1] = PPC_OPER_TYPE_VSREG;
	dec->operand_values[1] = ((insword & 0x1F0000)>>15)|((insword & 0x4)>>2);
	dec->operand_types[2] = PPC_OPER_TYPE_VSREG;
	dec->operand_values[2] = ((insword & 0xF800)>>10)|((insword & 0x2)>>1);
	dec->operand_fmtstr = PPC_FMTSTR_VSREG_C_VSREG_C_VSREG;
	return 0;
}

/* xxspltib VSREG,NUM */
int xxspltib_VSREG_NUM(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_XXSPLTIB;
	/* 111100AAAAA00BBBBBBBB0101101000A */
	dec->operand_n = 2;
	dec->operand_types[0] = PPC_OPER_TYPE_VSREG;
	dec->operand_values[0] = ((insword & 0x3E00000)>>20)|((insword & 0x1)>>0);
	dec->operand_types[1] = PPC_OPER_TYPE_NUM;
	dec->operand_values[1] = (insword & 0x7F800)>>11;
	dec->operand_fmtstr = PPC_FMTSTR_VSREG_C_NUM;
	return 0;
}

/* xxinsertw VSREG,VSREG,NUM */
int xxinsertw_VSREG_VSREG_NUM(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_XXINSERTW;
	/* 111100AAAAA0CCCCBBBBB010110101BA */
	dec->operand_n = 3;
	dec->operand_types[0] = PPC_OPER_TYPE_VSREG;
	dec->operand_values[0] = ((insword & 0x3E00000)>>20)|((insword & 0x1)>>0);
	dec->operand_types[1] = PPC_OPER_TYPE_VSREG;
	dec->operand_values[1] = ((insword & 0xF800)>>10)|((insword & 0x2)>>1);
	dec->operand_types[2] = PPC_OPER_TYPE_NUM;
	dec->operand_values[2] = (insword & 0xF0000)>>16;
	dec->operand_fmtstr = PPC_FMTSTR_VSREG_C_VSREG_C_NUM;
	return 0;
}

/* xvcvsxwsp VSREG,VSREG */
int xvcvsxwsp_VSREG_VSREG(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_XVCVSXWSP;
	/* 111100AAAAA00000BBBBB010111000BA */
	dec->operand_n = 2;
	dec->operand_types[0] = PPC_OPER_TYPE_VSREG;
	dec->operand_values[0] = ((insword & 0x3E00000)>>20)|((insword & 0x1)>>0);
	dec->operand_types[1] = PPC_OPER_TYPE_VSREG;
	dec->operand_values[1] = ((insword & 0xF800)>>10)|((insword & 0x2)>>1);
	dec->operand_fmtstr = PPC_FMTSTR_VSREG_C_VSREG;
	return 0;
}

/* xvrspim VSREG,VSREG */
int xvrspim_VSREG_VSREG(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_XVRSPIM;
	/* 111100AAAAA00000BBBBB010111001BA */
	dec->operand_n = 2;
	dec->operand_types[0] = PPC_OPER_TYPE_VSREG;
	dec->operand_values[0] = ((insword & 0x3E00000)>>20)|((insword & 0x1)>>0);
	dec->operand_types[1] = PPC_OPER_TYPE_VSREG;
	dec->operand_values[1] = ((insword & 0xF800)>>10)|((insword & 0x2)>>1);
	dec->operand_fmtstr = PPC_FMTSTR_VSREG_C_VSREG;
	return 0;
}

/* xvtdivsp CREG,VSREG,VSREG */
int xvtdivsp_CREG_VSREG_VSREG(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_XVTDIVSP;
	/* 111100AAA00BBBBBCCCCC01011101BC0 */
	dec->operand_n = 3;
	dec->operand_types[0] = PPC_OPER_TYPE_CREG;
	dec->operand_values[0] = (insword & 0x3800000)>>23;
	dec->operand_types[1] = PPC_OPER_TYPE_VSREG;
	dec->operand_values[1] = ((insword & 0x1F0000)>>15)|((insword & 0x4)>>2);
	dec->operand_types[2] = PPC_OPER_TYPE_VSREG;
	dec->operand_values[2] = ((insword & 0xF800)>>10)|((insword & 0x2)>>1);
	dec->operand_fmtstr = PPC_FMTSTR_CREG_C_VSREG_C_VSREG;
	return 0;
}

/* xvadddp VSREG,VSREG,VSREG */
int xvadddp_VSREG_VSREG_VSREG(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_XVADDDP;
	/* 111100AAAAABBBBBCCCCC01100000BCA */
	dec->operand_n = 3;
	dec->operand_types[0] = PPC_OPER_TYPE_VSREG;
	dec->operand_values[0] = ((insword & 0x3E00000)>>20)|((insword & 0x1)>>0);
	dec->operand_types[1] = PPC_OPER_TYPE_VSREG;
	dec->operand_values[1] = ((insword & 0x1F0000)>>15)|((insword & 0x4)>>2);
	dec->operand_types[2] = PPC_OPER_TYPE_VSREG;
	dec->operand_values[2] = ((insword & 0xF800)>>10)|((insword & 0x2)>>1);
	dec->operand_fmtstr = PPC_FMTSTR_VSREG_C_VSREG_C_VSREG;
	return 0;
}

/* xvmaddadp VSREG,VSREG,VSREG */
int xvmaddadp_VSREG_VSREG_VSREG(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_XVMADDADP;
	/* 111100AAAAABBBBBCCCCC01100001BCA */
	dec->operand_n = 3;
	dec->operand_types[0] = PPC_OPER_TYPE_VSREG;
	dec->operand_values[0] = ((insword & 0x3E00000)>>20)|((insword & 0x1)>>0);
	dec->operand_types[1] = PPC_OPER_TYPE_VSREG;
	dec->operand_values[1] = ((insword & 0x1F0000)>>15)|((insword & 0x4)>>2);
	dec->operand_types[2] = PPC_OPER_TYPE_VSREG;
	dec->operand_values[2] = ((insword & 0xF800)>>10)|((insword & 0x2)>>1);
	dec->operand_fmtstr = PPC_FMTSTR_VSREG_C_VSREG_C_VSREG;
	return 0;
}

/* xvcmpeqdp VSREG,VSREG,VSREG */
int xvcmpeqdp_VSREG_VSREG_VSREG(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_XVCMPEQDP;
	/* 111100AAAAABBBBBCCCCC01100011BCA */
	dec->operand_n = 3;
	dec->operand_types[0] = PPC_OPER_TYPE_VSREG;
	dec->operand_values[0] = ((insword & 0x3E00000)>>20)|((insword & 0x1)>>0);
	dec->operand_types[1] = PPC_OPER_TYPE_VSREG;
	dec->operand_values[1] = ((insword & 0x1F0000)>>15)|((insword & 0x4)>>2);
	dec->operand_types[2] = PPC_OPER_TYPE_VSREG;
	dec->operand_values[2] = ((insword & 0xF800)>>10)|((insword & 0x2)>>1);
	dec->operand_fmtstr = PPC_FMTSTR_VSREG_C_VSREG_C_VSREG;
	return 0;
}

/* xvcvdpuxws VSREG,VSREG */
int xvcvdpuxws_VSREG_VSREG(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_XVCVDPUXWS;
	/* 111100AAAAA00000BBBBB011001000BA */
	dec->operand_n = 2;
	dec->operand_types[0] = PPC_OPER_TYPE_VSREG;
	dec->operand_values[0] = ((insword & 0x3E00000)>>20)|((insword & 0x1)>>0);
	dec->operand_types[1] = PPC_OPER_TYPE_VSREG;
	dec->operand_values[1] = ((insword & 0xF800)>>10)|((insword & 0x2)>>1);
	dec->operand_fmtstr = PPC_FMTSTR_VSREG_C_VSREG;
	return 0;
}

/* xvrdpi VSREG,VSREG */
int xvrdpi_VSREG_VSREG(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_XVRDPI;
	/* 111100AAAAA00000BBBBB011001001BA */
	dec->operand_n = 2;
	dec->operand_types[0] = PPC_OPER_TYPE_VSREG;
	dec->operand_values[0] = ((insword & 0x3E00000)>>20)|((insword & 0x1)>>0);
	dec->operand_types[1] = PPC_OPER_TYPE_VSREG;
	dec->operand_values[1] = ((insword & 0xF800)>>10)|((insword & 0x2)>>1);
	dec->operand_fmtstr = PPC_FMTSTR_VSREG_C_VSREG;
	return 0;
}

/* xvrsqrtedp VSREG,VSREG */
int xvrsqrtedp_VSREG_VSREG(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_XVRSQRTEDP;
	/* 111100AAAAA00000BBBBB011001010BA */
	dec->operand_n = 2;
	dec->operand_types[0] = PPC_OPER_TYPE_VSREG;
	dec->operand_values[0] = ((insword & 0x3E00000)>>20)|((insword & 0x1)>>0);
	dec->operand_types[1] = PPC_OPER_TYPE_VSREG;
	dec->operand_values[1] = ((insword & 0xF800)>>10)|((insword & 0x2)>>1);
	dec->operand_fmtstr = PPC_FMTSTR_VSREG_C_VSREG;
	return 0;
}

/* xvsqrtdp VSREG,VSREG */
int xvsqrtdp_VSREG_VSREG(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_XVSQRTDP;
	/* 111100AAAAA00000BBBBB011001011BA */
	dec->operand_n = 2;
	dec->operand_types[0] = PPC_OPER_TYPE_VSREG;
	dec->operand_values[0] = ((insword & 0x3E00000)>>20)|((insword & 0x1)>>0);
	dec->operand_types[1] = PPC_OPER_TYPE_VSREG;
	dec->operand_values[1] = ((insword & 0xF800)>>10)|((insword & 0x2)>>1);
	dec->operand_fmtstr = PPC_FMTSTR_VSREG_C_VSREG;
	return 0;
}

/* xvsubdp VSREG,VSREG,VSREG */
int xvsubdp_VSREG_VSREG_VSREG(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_XVSUBDP;
	/* 111100AAAAABBBBBCCCCC01101000BCA */
	dec->operand_n = 3;
	dec->operand_types[0] = PPC_OPER_TYPE_VSREG;
	dec->operand_values[0] = ((insword & 0x3E00000)>>20)|((insword & 0x1)>>0);
	dec->operand_types[1] = PPC_OPER_TYPE_VSREG;
	dec->operand_values[1] = ((insword & 0x1F0000)>>15)|((insword & 0x4)>>2);
	dec->operand_types[2] = PPC_OPER_TYPE_VSREG;
	dec->operand_values[2] = ((insword & 0xF800)>>10)|((insword & 0x2)>>1);
	dec->operand_fmtstr = PPC_FMTSTR_VSREG_C_VSREG_C_VSREG;
	return 0;
}

/* xvmaddmdp VSREG,VSREG,VSREG */
int xvmaddmdp_VSREG_VSREG_VSREG(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_XVMADDMDP;
	/* 111100AAAAABBBBBCCCCC01101001BCA */
	dec->operand_n = 3;
	dec->operand_types[0] = PPC_OPER_TYPE_VSREG;
	dec->operand_values[0] = ((insword & 0x3E00000)>>20)|((insword & 0x1)>>0);
	dec->operand_types[1] = PPC_OPER_TYPE_VSREG;
	dec->operand_values[1] = ((insword & 0x1F0000)>>15)|((insword & 0x4)>>2);
	dec->operand_types[2] = PPC_OPER_TYPE_VSREG;
	dec->operand_values[2] = ((insword & 0xF800)>>10)|((insword & 0x2)>>1);
	dec->operand_fmtstr = PPC_FMTSTR_VSREG_C_VSREG_C_VSREG;
	return 0;
}

/* xxmrgld VSREG,VSREG,VSREG */
int xxmrgld_VSREG_VSREG_VSREG(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_XXMRGLD;
	/* 111100AAAAABBBBBCCCCC01101010BCA */
	dec->operand_n = 3;
	dec->operand_types[0] = PPC_OPER_TYPE_VSREG;
	dec->operand_values[0] = ((insword & 0x3E00000)>>20)|((insword & 0x1)>>0);
	dec->operand_types[1] = PPC_OPER_TYPE_VSREG;
	dec->operand_values[1] = ((insword & 0x1F0000)>>15)|((insword & 0x4)>>2);
	dec->operand_types[2] = PPC_OPER_TYPE_VSREG;
	dec->operand_values[2] = ((insword & 0xF800)>>10)|((insword & 0x2)>>1);
	dec->operand_fmtstr = PPC_FMTSTR_VSREG_C_VSREG_C_VSREG;
	return 0;
}

/* xvcmpgtdp VSREG,VSREG,VSREG */
int xvcmpgtdp_VSREG_VSREG_VSREG(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_XVCMPGTDP;
	/* 111100AAAAABBBBBCCCCC01101011BCA */
	dec->operand_n = 3;
	dec->operand_types[0] = PPC_OPER_TYPE_VSREG;
	dec->operand_values[0] = ((insword & 0x3E00000)>>20)|((insword & 0x1)>>0);
	dec->operand_types[1] = PPC_OPER_TYPE_VSREG;
	dec->operand_values[1] = ((insword & 0x1F0000)>>15)|((insword & 0x4)>>2);
	dec->operand_types[2] = PPC_OPER_TYPE_VSREG;
	dec->operand_values[2] = ((insword & 0xF800)>>10)|((insword & 0x2)>>1);
	dec->operand_fmtstr = PPC_FMTSTR_VSREG_C_VSREG_C_VSREG;
	return 0;
}

/* xvcvdpsxws VSREG,VSREG */
int xvcvdpsxws_VSREG_VSREG(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_XVCVDPSXWS;
	/* 111100AAAAA00000BBBBB011011000BA */
	dec->operand_n = 2;
	dec->operand_types[0] = PPC_OPER_TYPE_VSREG;
	dec->operand_values[0] = ((insword & 0x3E00000)>>20)|((insword & 0x1)>>0);
	dec->operand_types[1] = PPC_OPER_TYPE_VSREG;
	dec->operand_values[1] = ((insword & 0xF800)>>10)|((insword & 0x2)>>1);
	dec->operand_fmtstr = PPC_FMTSTR_VSREG_C_VSREG;
	return 0;
}

/* xvrdpiz VSREG,VSREG */
int xvrdpiz_VSREG_VSREG(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_XVRDPIZ;
	/* 111100AAAAA00000BBBBB011011001BA */
	dec->operand_n = 2;
	dec->operand_types[0] = PPC_OPER_TYPE_VSREG;
	dec->operand_values[0] = ((insword & 0x3E00000)>>20)|((insword & 0x1)>>0);
	dec->operand_types[1] = PPC_OPER_TYPE_VSREG;
	dec->operand_values[1] = ((insword & 0xF800)>>10)|((insword & 0x2)>>1);
	dec->operand_fmtstr = PPC_FMTSTR_VSREG_C_VSREG;
	return 0;
}

/* xvredp VSREG,VSREG */
int xvredp_VSREG_VSREG(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_XVREDP;
	/* 111100AAAAA00000BBBBB011011010BA */
	dec->operand_n = 2;
	dec->operand_types[0] = PPC_OPER_TYPE_VSREG;
	dec->operand_values[0] = ((insword & 0x3E00000)>>20)|((insword & 0x1)>>0);
	dec->operand_types[1] = PPC_OPER_TYPE_VSREG;
	dec->operand_values[1] = ((insword & 0xF800)>>10)|((insword & 0x2)>>1);
	dec->operand_fmtstr = PPC_FMTSTR_VSREG_C_VSREG;
	return 0;
}

/* xvmuldp VSREG,VSREG,VSREG */
int xvmuldp_VSREG_VSREG_VSREG(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_XVMULDP;
	/* 111100AAAAABBBBBCCCCC01110000BCA */
	dec->operand_n = 3;
	dec->operand_types[0] = PPC_OPER_TYPE_VSREG;
	dec->operand_values[0] = ((insword & 0x3E00000)>>20)|((insword & 0x1)>>0);
	dec->operand_types[1] = PPC_OPER_TYPE_VSREG;
	dec->operand_values[1] = ((insword & 0x1F0000)>>15)|((insword & 0x4)>>2);
	dec->operand_types[2] = PPC_OPER_TYPE_VSREG;
	dec->operand_values[2] = ((insword & 0xF800)>>10)|((insword & 0x2)>>1);
	dec->operand_fmtstr = PPC_FMTSTR_VSREG_C_VSREG_C_VSREG;
	return 0;
}

/* xvmsubadp VSREG,VSREG,VSREG */
int xvmsubadp_VSREG_VSREG_VSREG(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_XVMSUBADP;
	/* 111100AAAAABBBBBCCCCC01110001BCA */
	dec->operand_n = 3;
	dec->operand_types[0] = PPC_OPER_TYPE_VSREG;
	dec->operand_values[0] = ((insword & 0x3E00000)>>20)|((insword & 0x1)>>0);
	dec->operand_types[1] = PPC_OPER_TYPE_VSREG;
	dec->operand_values[1] = ((insword & 0x1F0000)>>15)|((insword & 0x4)>>2);
	dec->operand_types[2] = PPC_OPER_TYPE_VSREG;
	dec->operand_values[2] = ((insword & 0xF800)>>10)|((insword & 0x2)>>1);
	dec->operand_fmtstr = PPC_FMTSTR_VSREG_C_VSREG_C_VSREG;
	return 0;
}

/* xvcmpgedp VSREG,VSREG,VSREG */
int xvcmpgedp_VSREG_VSREG_VSREG(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_XVCMPGEDP;
	/* 111100AAAAABBBBBCCCCC01110011BCA */
	dec->operand_n = 3;
	dec->operand_types[0] = PPC_OPER_TYPE_VSREG;
	dec->operand_values[0] = ((insword & 0x3E00000)>>20)|((insword & 0x1)>>0);
	dec->operand_types[1] = PPC_OPER_TYPE_VSREG;
	dec->operand_values[1] = ((insword & 0x1F0000)>>15)|((insword & 0x4)>>2);
	dec->operand_types[2] = PPC_OPER_TYPE_VSREG;
	dec->operand_values[2] = ((insword & 0xF800)>>10)|((insword & 0x2)>>1);
	dec->operand_fmtstr = PPC_FMTSTR_VSREG_C_VSREG_C_VSREG;
	return 0;
}

/* xvcvuxwdp VSREG,VSREG */
int xvcvuxwdp_VSREG_VSREG(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_XVCVUXWDP;
	/* 111100AAAAA00000BBBBB011101000BA */
	dec->operand_n = 2;
	dec->operand_types[0] = PPC_OPER_TYPE_VSREG;
	dec->operand_values[0] = ((insword & 0x3E00000)>>20)|((insword & 0x1)>>0);
	dec->operand_types[1] = PPC_OPER_TYPE_VSREG;
	dec->operand_values[1] = ((insword & 0xF800)>>10)|((insword & 0x2)>>1);
	dec->operand_fmtstr = PPC_FMTSTR_VSREG_C_VSREG;
	return 0;
}

/* xvrdpip VSREG,VSREG */
int xvrdpip_VSREG_VSREG(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_XVRDPIP;
	/* 111100AAAAA00000BBBBB011101001BA */
	dec->operand_n = 2;
	dec->operand_types[0] = PPC_OPER_TYPE_VSREG;
	dec->operand_values[0] = ((insword & 0x3E00000)>>20)|((insword & 0x1)>>0);
	dec->operand_types[1] = PPC_OPER_TYPE_VSREG;
	dec->operand_values[1] = ((insword & 0xF800)>>10)|((insword & 0x2)>>1);
	dec->operand_fmtstr = PPC_FMTSTR_VSREG_C_VSREG;
	return 0;
}

/* xvtsqrtdp CREG,VSREG */
int xvtsqrtdp_CREG_VSREG(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_XVTSQRTDP;
	/* 111100AAA0000000BBBBB011101010B0 */
	dec->operand_n = 2;
	dec->operand_types[0] = PPC_OPER_TYPE_CREG;
	dec->operand_values[0] = (insword & 0x3800000)>>23;
	dec->operand_types[1] = PPC_OPER_TYPE_VSREG;
	dec->operand_values[1] = ((insword & 0xF800)>>10)|((insword & 0x2)>>1);
	dec->operand_fmtstr = PPC_FMTSTR_CREG_C_VSREG;
	return 0;
}

/* xvrdpic VSREG,VSREG */
int xvrdpic_VSREG_VSREG(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_XVRDPIC;
	/* 111100AAAAA00000BBBBB011101011BA */
	dec->operand_n = 2;
	dec->operand_types[0] = PPC_OPER_TYPE_VSREG;
	dec->operand_values[0] = ((insword & 0x3E00000)>>20)|((insword & 0x1)>>0);
	dec->operand_types[1] = PPC_OPER_TYPE_VSREG;
	dec->operand_values[1] = ((insword & 0xF800)>>10)|((insword & 0x2)>>1);
	dec->operand_fmtstr = PPC_FMTSTR_VSREG_C_VSREG;
	return 0;
}

/* xvdivdp VSREG,VSREG,VSREG */
int xvdivdp_VSREG_VSREG_VSREG(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_XVDIVDP;
	/* 111100AAAAABBBBBCCCCC01111000BCA */
	dec->operand_n = 3;
	dec->operand_types[0] = PPC_OPER_TYPE_VSREG;
	dec->operand_values[0] = ((insword & 0x3E00000)>>20)|((insword & 0x1)>>0);
	dec->operand_types[1] = PPC_OPER_TYPE_VSREG;
	dec->operand_values[1] = ((insword & 0x1F0000)>>15)|((insword & 0x4)>>2);
	dec->operand_types[2] = PPC_OPER_TYPE_VSREG;
	dec->operand_values[2] = ((insword & 0xF800)>>10)|((insword & 0x2)>>1);
	dec->operand_fmtstr = PPC_FMTSTR_VSREG_C_VSREG_C_VSREG;
	return 0;
}

/* xvmsubmdp VSREG,VSREG,VSREG */
int xvmsubmdp_VSREG_VSREG_VSREG(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_XVMSUBMDP;
	/* 111100AAAAABBBBBCCCCC01111001BCA */
	dec->operand_n = 3;
	dec->operand_types[0] = PPC_OPER_TYPE_VSREG;
	dec->operand_values[0] = ((insword & 0x3E00000)>>20)|((insword & 0x1)>>0);
	dec->operand_types[1] = PPC_OPER_TYPE_VSREG;
	dec->operand_values[1] = ((insword & 0x1F0000)>>15)|((insword & 0x4)>>2);
	dec->operand_types[2] = PPC_OPER_TYPE_VSREG;
	dec->operand_values[2] = ((insword & 0xF800)>>10)|((insword & 0x2)>>1);
	dec->operand_fmtstr = PPC_FMTSTR_VSREG_C_VSREG_C_VSREG;
	return 0;
}

/* xvcvsxwdp VSREG,VSREG */
int xvcvsxwdp_VSREG_VSREG(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_XVCVSXWDP;
	/* 111100AAAAA00000BBBBB011111000BA */
	dec->operand_n = 2;
	dec->operand_types[0] = PPC_OPER_TYPE_VSREG;
	dec->operand_values[0] = ((insword & 0x3E00000)>>20)|((insword & 0x1)>>0);
	dec->operand_types[1] = PPC_OPER_TYPE_VSREG;
	dec->operand_values[1] = ((insword & 0xF800)>>10)|((insword & 0x2)>>1);
	dec->operand_fmtstr = PPC_FMTSTR_VSREG_C_VSREG;
	return 0;
}

/* xvrdpim VSREG,VSREG */
int xvrdpim_VSREG_VSREG(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_XVRDPIM;
	/* 111100AAAAA00000BBBBB011111001BA */
	dec->operand_n = 2;
	dec->operand_types[0] = PPC_OPER_TYPE_VSREG;
	dec->operand_values[0] = ((insword & 0x3E00000)>>20)|((insword & 0x1)>>0);
	dec->operand_types[1] = PPC_OPER_TYPE_VSREG;
	dec->operand_values[1] = ((insword & 0xF800)>>10)|((insword & 0x2)>>1);
	dec->operand_fmtstr = PPC_FMTSTR_VSREG_C_VSREG;
	return 0;
}

/* xvtdivdp CREG,VSREG,VSREG */
int xvtdivdp_CREG_VSREG_VSREG(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_XVTDIVDP;
	/* 111100AAA00BBBBBCCCCC01111101BC0 */
	dec->operand_n = 3;
	dec->operand_types[0] = PPC_OPER_TYPE_CREG;
	dec->operand_values[0] = (insword & 0x3800000)>>23;
	dec->operand_types[1] = PPC_OPER_TYPE_VSREG;
	dec->operand_values[1] = ((insword & 0x1F0000)>>15)|((insword & 0x4)>>2);
	dec->operand_types[2] = PPC_OPER_TYPE_VSREG;
	dec->operand_values[2] = ((insword & 0xF800)>>10)|((insword & 0x2)>>1);
	dec->operand_fmtstr = PPC_FMTSTR_CREG_C_VSREG_C_VSREG;
	return 0;
}

/* xsmaxcdp VSREG,VSREG,VSREG */
int xsmaxcdp_VSREG_VSREG_VSREG(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_XSMAXCDP;
	/* 111100AAAAABBBBBCCCCC10000000BCA */
	dec->operand_n = 3;
	dec->operand_types[0] = PPC_OPER_TYPE_VSREG;
	dec->operand_values[0] = ((insword & 0x3E00000)>>20)|((insword & 0x1)>>0);
	dec->operand_types[1] = PPC_OPER_TYPE_VSREG;
	dec->operand_values[1] = ((insword & 0x1F0000)>>15)|((insword & 0x4)>>2);
	dec->operand_types[2] = PPC_OPER_TYPE_VSREG;
	dec->operand_values[2] = ((insword & 0xF800)>>10)|((insword & 0x2)>>1);
	dec->operand_fmtstr = PPC_FMTSTR_VSREG_C_VSREG_C_VSREG;
	return 0;
}

/* xsnmaddasp VSREG,VSREG,VSREG */
int xsnmaddasp_VSREG_VSREG_VSREG(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_XSNMADDASP;
	/* 111100AAAAABBBBBCCCCC10000001BCA */
	dec->operand_n = 3;
	dec->operand_types[0] = PPC_OPER_TYPE_VSREG;
	dec->operand_values[0] = ((insword & 0x3E00000)>>20)|((insword & 0x1)>>0);
	dec->operand_types[1] = PPC_OPER_TYPE_VSREG;
	dec->operand_values[1] = ((insword & 0x1F0000)>>15)|((insword & 0x4)>>2);
	dec->operand_types[2] = PPC_OPER_TYPE_VSREG;
	dec->operand_values[2] = ((insword & 0xF800)>>10)|((insword & 0x2)>>1);
	dec->operand_fmtstr = PPC_FMTSTR_VSREG_C_VSREG_C_VSREG;
	return 0;
}

/* xxland VSREG,VSREG,VSREG */
int xxland_VSREG_VSREG_VSREG(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_XXLAND;
	/* 111100AAAAABBBBBCCCCC10000010BCA */
	dec->operand_n = 3;
	dec->operand_types[0] = PPC_OPER_TYPE_VSREG;
	dec->operand_values[0] = ((insword & 0x3E00000)>>20)|((insword & 0x1)>>0);
	dec->operand_types[1] = PPC_OPER_TYPE_VSREG;
	dec->operand_values[1] = ((insword & 0x1F0000)>>15)|((insword & 0x4)>>2);
	dec->operand_types[2] = PPC_OPER_TYPE_VSREG;
	dec->operand_values[2] = ((insword & 0xF800)>>10)|((insword & 0x2)>>1);
	dec->operand_fmtstr = PPC_FMTSTR_VSREG_C_VSREG_C_VSREG;
	return 0;
}

/* xscvdpsp VSREG,VSREG */
int xscvdpsp_VSREG_VSREG(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_XSCVDPSP;
	/* 111100AAAAA00000BBBBB100001001BA */
	dec->operand_n = 2;
	dec->operand_types[0] = PPC_OPER_TYPE_VSREG;
	dec->operand_values[0] = ((insword & 0x3E00000)>>20)|((insword & 0x1)>>0);
	dec->operand_types[1] = PPC_OPER_TYPE_VSREG;
	dec->operand_values[1] = ((insword & 0xF800)>>10)|((insword & 0x2)>>1);
	dec->operand_fmtstr = PPC_FMTSTR_VSREG_C_VSREG;
	return 0;
}

/* xscvdpspn VSREG,VSREG */
int xscvdpspn_VSREG_VSREG(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_XSCVDPSPN;
	/* 111100AAAAA00000BBBBB100001011BA */
	dec->operand_n = 2;
	dec->operand_types[0] = PPC_OPER_TYPE_VSREG;
	dec->operand_values[0] = ((insword & 0x3E00000)>>20)|((insword & 0x1)>>0);
	dec->operand_types[1] = PPC_OPER_TYPE_VSREG;
	dec->operand_values[1] = ((insword & 0xF800)>>10)|((insword & 0x2)>>1);
	dec->operand_fmtstr = PPC_FMTSTR_VSREG_C_VSREG;
	return 0;
}

/* xsmincdp VSREG,VSREG,VSREG */
int xsmincdp_VSREG_VSREG_VSREG(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_XSMINCDP;
	/* 111100AAAAABBBBBCCCCC10001000BCA */
	dec->operand_n = 3;
	dec->operand_types[0] = PPC_OPER_TYPE_VSREG;
	dec->operand_values[0] = ((insword & 0x3E00000)>>20)|((insword & 0x1)>>0);
	dec->operand_types[1] = PPC_OPER_TYPE_VSREG;
	dec->operand_values[1] = ((insword & 0x1F0000)>>15)|((insword & 0x4)>>2);
	dec->operand_types[2] = PPC_OPER_TYPE_VSREG;
	dec->operand_values[2] = ((insword & 0xF800)>>10)|((insword & 0x2)>>1);
	dec->operand_fmtstr = PPC_FMTSTR_VSREG_C_VSREG_C_VSREG;
	return 0;
}

/* xsnmaddmsp VSREG,VSREG,VSREG */
int xsnmaddmsp_VSREG_VSREG_VSREG(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_XSNMADDMSP;
	/* 111100AAAAABBBBBCCCCC10001001BCA */
	dec->operand_n = 3;
	dec->operand_types[0] = PPC_OPER_TYPE_VSREG;
	dec->operand_values[0] = ((insword & 0x3E00000)>>20)|((insword & 0x1)>>0);
	dec->operand_types[1] = PPC_OPER_TYPE_VSREG;
	dec->operand_values[1] = ((insword & 0x1F0000)>>15)|((insword & 0x4)>>2);
	dec->operand_types[2] = PPC_OPER_TYPE_VSREG;
	dec->operand_values[2] = ((insword & 0xF800)>>10)|((insword & 0x2)>>1);
	dec->operand_fmtstr = PPC_FMTSTR_VSREG_C_VSREG_C_VSREG;
	return 0;
}

/* xxlandc VSREG,VSREG,VSREG */
int xxlandc_VSREG_VSREG_VSREG(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_XXLANDC;
	/* 111100AAAAABBBBBCCCCC10001010BCA */
	dec->operand_n = 3;
	dec->operand_types[0] = PPC_OPER_TYPE_VSREG;
	dec->operand_values[0] = ((insword & 0x3E00000)>>20)|((insword & 0x1)>>0);
	dec->operand_types[1] = PPC_OPER_TYPE_VSREG;
	dec->operand_values[1] = ((insword & 0x1F0000)>>15)|((insword & 0x4)>>2);
	dec->operand_types[2] = PPC_OPER_TYPE_VSREG;
	dec->operand_values[2] = ((insword & 0xF800)>>10)|((insword & 0x2)>>1);
	dec->operand_fmtstr = PPC_FMTSTR_VSREG_C_VSREG_C_VSREG;
	return 0;
}

/* xsrsp VSREG,VSREG */
int xsrsp_VSREG_VSREG(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_XSRSP;
	/* 111100AAAAA00000BBBBB100011001BA */
	dec->operand_n = 2;
	dec->operand_types[0] = PPC_OPER_TYPE_VSREG;
	dec->operand_values[0] = ((insword & 0x3E00000)>>20)|((insword & 0x1)>>0);
	dec->operand_types[1] = PPC_OPER_TYPE_VSREG;
	dec->operand_values[1] = ((insword & 0xF800)>>10)|((insword & 0x2)>>1);
	dec->operand_fmtstr = PPC_FMTSTR_VSREG_C_VSREG;
	return 0;
}

/* xsmaxjdp VSREG,VSREG,VSREG */
int xsmaxjdp_VSREG_VSREG_VSREG(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_XSMAXJDP;
	/* 111100AAAAABBBBBCCCCC10010000BCA */
	dec->operand_n = 3;
	dec->operand_types[0] = PPC_OPER_TYPE_VSREG;
	dec->operand_values[0] = ((insword & 0x3E00000)>>20)|((insword & 0x1)>>0);
	dec->operand_types[1] = PPC_OPER_TYPE_VSREG;
	dec->operand_values[1] = ((insword & 0x1F0000)>>15)|((insword & 0x4)>>2);
	dec->operand_types[2] = PPC_OPER_TYPE_VSREG;
	dec->operand_values[2] = ((insword & 0xF800)>>10)|((insword & 0x2)>>1);
	dec->operand_fmtstr = PPC_FMTSTR_VSREG_C_VSREG_C_VSREG;
	return 0;
}

/* xsnmsubasp VSREG,VSREG,VSREG */
int xsnmsubasp_VSREG_VSREG_VSREG(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_XSNMSUBASP;
	/* 111100AAAAABBBBBCCCCC10010001BCA */
	dec->operand_n = 3;
	dec->operand_types[0] = PPC_OPER_TYPE_VSREG;
	dec->operand_values[0] = ((insword & 0x3E00000)>>20)|((insword & 0x1)>>0);
	dec->operand_types[1] = PPC_OPER_TYPE_VSREG;
	dec->operand_values[1] = ((insword & 0x1F0000)>>15)|((insword & 0x4)>>2);
	dec->operand_types[2] = PPC_OPER_TYPE_VSREG;
	dec->operand_values[2] = ((insword & 0xF800)>>10)|((insword & 0x2)>>1);
	dec->operand_fmtstr = PPC_FMTSTR_VSREG_C_VSREG_C_VSREG;
	return 0;
}

/* xxlor VSREG,VSREG,VSREG */
int xxlor_VSREG_VSREG_VSREG(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_XXLOR;
	/* 111100AAAAABBBBBCCCCC10010010BCA */
	dec->operand_n = 3;
	dec->operand_types[0] = PPC_OPER_TYPE_VSREG;
	dec->operand_values[0] = ((insword & 0x3E00000)>>20)|((insword & 0x1)>>0);
	dec->operand_types[1] = PPC_OPER_TYPE_VSREG;
	dec->operand_values[1] = ((insword & 0x1F0000)>>15)|((insword & 0x4)>>2);
	dec->operand_types[2] = PPC_OPER_TYPE_VSREG;
	dec->operand_values[2] = ((insword & 0xF800)>>10)|((insword & 0x2)>>1);
	dec->operand_fmtstr = PPC_FMTSTR_VSREG_C_VSREG_C_VSREG;
	return 0;
}

/* xscvuxdsp VSREG,VSREG */
int xscvuxdsp_VSREG_VSREG(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_XSCVUXDSP;
	/* 111100AAAAA00000BBBBB100101000BA */
	dec->operand_n = 2;
	dec->operand_types[0] = PPC_OPER_TYPE_VSREG;
	dec->operand_values[0] = ((insword & 0x3E00000)>>20)|((insword & 0x1)>>0);
	dec->operand_types[1] = PPC_OPER_TYPE_VSREG;
	dec->operand_values[1] = ((insword & 0xF800)>>10)|((insword & 0x2)>>1);
	dec->operand_fmtstr = PPC_FMTSTR_VSREG_C_VSREG;
	return 0;
}

/* xststdcsp CREG,VSREG,NUM */
int xststdcsp_CREG_VSREG_NUM(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_XSTSTDCSP;
	/* 111100AAACCCCCCCBBBBB100101010B0 */
	dec->operand_n = 3;
	dec->operand_types[0] = PPC_OPER_TYPE_CREG;
	dec->operand_values[0] = (insword & 0x3800000)>>23;
	dec->operand_types[1] = PPC_OPER_TYPE_VSREG;
	dec->operand_values[1] = ((insword & 0xF800)>>10)|((insword & 0x2)>>1);
	dec->operand_types[2] = PPC_OPER_TYPE_NUM;
	dec->operand_values[2] = (insword & 0x7F0000)>>16;
	dec->operand_fmtstr = PPC_FMTSTR_CREG_C_VSREG_C_NUM;
	return 0;
}

/* xsminjdp VSREG,VSREG,VSREG */
int xsminjdp_VSREG_VSREG_VSREG(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_XSMINJDP;
	/* 111100AAAAABBBBBCCCCC10011000BCA */
	dec->operand_n = 3;
	dec->operand_types[0] = PPC_OPER_TYPE_VSREG;
	dec->operand_values[0] = ((insword & 0x3E00000)>>20)|((insword & 0x1)>>0);
	dec->operand_types[1] = PPC_OPER_TYPE_VSREG;
	dec->operand_values[1] = ((insword & 0x1F0000)>>15)|((insword & 0x4)>>2);
	dec->operand_types[2] = PPC_OPER_TYPE_VSREG;
	dec->operand_values[2] = ((insword & 0xF800)>>10)|((insword & 0x2)>>1);
	dec->operand_fmtstr = PPC_FMTSTR_VSREG_C_VSREG_C_VSREG;
	return 0;
}

/* xsnmsubmsp VSREG,VSREG,VSREG */
int xsnmsubmsp_VSREG_VSREG_VSREG(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_XSNMSUBMSP;
	/* 111100AAAAABBBBBCCCCC10011001BCA */
	dec->operand_n = 3;
	dec->operand_types[0] = PPC_OPER_TYPE_VSREG;
	dec->operand_values[0] = ((insword & 0x3E00000)>>20)|((insword & 0x1)>>0);
	dec->operand_types[1] = PPC_OPER_TYPE_VSREG;
	dec->operand_values[1] = ((insword & 0x1F0000)>>15)|((insword & 0x4)>>2);
	dec->operand_types[2] = PPC_OPER_TYPE_VSREG;
	dec->operand_values[2] = ((insword & 0xF800)>>10)|((insword & 0x2)>>1);
	dec->operand_fmtstr = PPC_FMTSTR_VSREG_C_VSREG_C_VSREG;
	return 0;
}

/* xxlxor VSREG,VSREG,VSREG */
int xxlxor_VSREG_VSREG_VSREG(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_XXLXOR;
	/* 111100AAAAABBBBBCCCCC10011010BCA */
	dec->operand_n = 3;
	dec->operand_types[0] = PPC_OPER_TYPE_VSREG;
	dec->operand_values[0] = ((insword & 0x3E00000)>>20)|((insword & 0x1)>>0);
	dec->operand_types[1] = PPC_OPER_TYPE_VSREG;
	dec->operand_values[1] = ((insword & 0x1F0000)>>15)|((insword & 0x4)>>2);
	dec->operand_types[2] = PPC_OPER_TYPE_VSREG;
	dec->operand_values[2] = ((insword & 0xF800)>>10)|((insword & 0x2)>>1);
	dec->operand_fmtstr = PPC_FMTSTR_VSREG_C_VSREG_C_VSREG;
	return 0;
}

/* xscvsxdsp VSREG,VSREG */
int xscvsxdsp_VSREG_VSREG(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_XSCVSXDSP;
	/* 111100AAAAA00000BBBBB100111000BA */
	dec->operand_n = 2;
	dec->operand_types[0] = PPC_OPER_TYPE_VSREG;
	dec->operand_values[0] = ((insword & 0x3E00000)>>20)|((insword & 0x1)>>0);
	dec->operand_types[1] = PPC_OPER_TYPE_VSREG;
	dec->operand_values[1] = ((insword & 0xF800)>>10)|((insword & 0x2)>>1);
	dec->operand_fmtstr = PPC_FMTSTR_VSREG_C_VSREG;
	return 0;
}

/* xsmaxdp VSREG,VSREG,VSREG */
int xsmaxdp_VSREG_VSREG_VSREG(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_XSMAXDP;
	/* 111100AAAAABBBBBCCCCC10100000BCA */
	dec->operand_n = 3;
	dec->operand_types[0] = PPC_OPER_TYPE_VSREG;
	dec->operand_values[0] = ((insword & 0x3E00000)>>20)|((insword & 0x1)>>0);
	dec->operand_types[1] = PPC_OPER_TYPE_VSREG;
	dec->operand_values[1] = ((insword & 0x1F0000)>>15)|((insword & 0x4)>>2);
	dec->operand_types[2] = PPC_OPER_TYPE_VSREG;
	dec->operand_values[2] = ((insword & 0xF800)>>10)|((insword & 0x2)>>1);
	dec->operand_fmtstr = PPC_FMTSTR_VSREG_C_VSREG_C_VSREG;
	return 0;
}

/* xsnmaddadp VSREG,VSREG,VSREG */
int xsnmaddadp_VSREG_VSREG_VSREG(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_XSNMADDADP;
	/* 111100AAAAABBBBBCCCCC10100001BCA */
	dec->operand_n = 3;
	dec->operand_types[0] = PPC_OPER_TYPE_VSREG;
	dec->operand_values[0] = ((insword & 0x3E00000)>>20)|((insword & 0x1)>>0);
	dec->operand_types[1] = PPC_OPER_TYPE_VSREG;
	dec->operand_values[1] = ((insword & 0x1F0000)>>15)|((insword & 0x4)>>2);
	dec->operand_types[2] = PPC_OPER_TYPE_VSREG;
	dec->operand_values[2] = ((insword & 0xF800)>>10)|((insword & 0x2)>>1);
	dec->operand_fmtstr = PPC_FMTSTR_VSREG_C_VSREG_C_VSREG;
	return 0;
}

/* xxlnor VSREG,VSREG,VSREG */
int xxlnor_VSREG_VSREG_VSREG(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_XXLNOR;
	/* 111100AAAAABBBBBCCCCC10100010BCA */
	dec->operand_n = 3;
	dec->operand_types[0] = PPC_OPER_TYPE_VSREG;
	dec->operand_values[0] = ((insword & 0x3E00000)>>20)|((insword & 0x1)>>0);
	dec->operand_types[1] = PPC_OPER_TYPE_VSREG;
	dec->operand_values[1] = ((insword & 0x1F0000)>>15)|((insword & 0x4)>>2);
	dec->operand_types[2] = PPC_OPER_TYPE_VSREG;
	dec->operand_values[2] = ((insword & 0xF800)>>10)|((insword & 0x2)>>1);
	dec->operand_fmtstr = PPC_FMTSTR_VSREG_C_VSREG_C_VSREG;
	return 0;
}

/* xscvdpuxds VSREG,VSREG */
int xscvdpuxds_VSREG_VSREG(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_XSCVDPUXDS;
	/* 111100AAAAA00000BBBBB101001000BA */
	dec->operand_n = 2;
	dec->operand_types[0] = PPC_OPER_TYPE_VSREG;
	dec->operand_values[0] = ((insword & 0x3E00000)>>20)|((insword & 0x1)>>0);
	dec->operand_types[1] = PPC_OPER_TYPE_VSREG;
	dec->operand_values[1] = ((insword & 0xF800)>>10)|((insword & 0x2)>>1);
	dec->operand_fmtstr = PPC_FMTSTR_VSREG_C_VSREG;
	return 0;
}

/* xscvspdp VSREG,VSREG */
int xscvspdp_VSREG_VSREG(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_XSCVSPDP;
	/* 111100AAAAA00000BBBBB101001001BA */
	dec->operand_n = 2;
	dec->operand_types[0] = PPC_OPER_TYPE_VSREG;
	dec->operand_values[0] = ((insword & 0x3E00000)>>20)|((insword & 0x1)>>0);
	dec->operand_types[1] = PPC_OPER_TYPE_VSREG;
	dec->operand_values[1] = ((insword & 0xF800)>>10)|((insword & 0x2)>>1);
	dec->operand_fmtstr = PPC_FMTSTR_VSREG_C_VSREG;
	return 0;
}

/* xscvspdpn VSREG,VSREG */
int xscvspdpn_VSREG_VSREG(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_XSCVSPDPN;
	/* 111100AAAAA00000BBBBB101001011BA */
	dec->operand_n = 2;
	dec->operand_types[0] = PPC_OPER_TYPE_VSREG;
	dec->operand_values[0] = ((insword & 0x3E00000)>>20)|((insword & 0x1)>>0);
	dec->operand_types[1] = PPC_OPER_TYPE_VSREG;
	dec->operand_values[1] = ((insword & 0xF800)>>10)|((insword & 0x2)>>1);
	dec->operand_fmtstr = PPC_FMTSTR_VSREG_C_VSREG;
	return 0;
}

/* xsmindp VSREG,VSREG,VSREG */
int xsmindp_VSREG_VSREG_VSREG(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_XSMINDP;
	/* 111100AAAAABBBBBCCCCC10101000BCA */
	dec->operand_n = 3;
	dec->operand_types[0] = PPC_OPER_TYPE_VSREG;
	dec->operand_values[0] = ((insword & 0x3E00000)>>20)|((insword & 0x1)>>0);
	dec->operand_types[1] = PPC_OPER_TYPE_VSREG;
	dec->operand_values[1] = ((insword & 0x1F0000)>>15)|((insword & 0x4)>>2);
	dec->operand_types[2] = PPC_OPER_TYPE_VSREG;
	dec->operand_values[2] = ((insword & 0xF800)>>10)|((insword & 0x2)>>1);
	dec->operand_fmtstr = PPC_FMTSTR_VSREG_C_VSREG_C_VSREG;
	return 0;
}

/* xsnmaddmdp VSREG,VSREG,VSREG */
int xsnmaddmdp_VSREG_VSREG_VSREG(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_XSNMADDMDP;
	/* 111100AAAAABBBBBCCCCC10101001BCA */
	dec->operand_n = 3;
	dec->operand_types[0] = PPC_OPER_TYPE_VSREG;
	dec->operand_values[0] = ((insword & 0x3E00000)>>20)|((insword & 0x1)>>0);
	dec->operand_types[1] = PPC_OPER_TYPE_VSREG;
	dec->operand_values[1] = ((insword & 0x1F0000)>>15)|((insword & 0x4)>>2);
	dec->operand_types[2] = PPC_OPER_TYPE_VSREG;
	dec->operand_values[2] = ((insword & 0xF800)>>10)|((insword & 0x2)>>1);
	dec->operand_fmtstr = PPC_FMTSTR_VSREG_C_VSREG_C_VSREG;
	return 0;
}

/* xxlorc VSREG,VSREG,VSREG */
int xxlorc_VSREG_VSREG_VSREG(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_XXLORC;
	/* 111100AAAAABBBBBCCCCC10101010BCA */
	dec->operand_n = 3;
	dec->operand_types[0] = PPC_OPER_TYPE_VSREG;
	dec->operand_values[0] = ((insword & 0x3E00000)>>20)|((insword & 0x1)>>0);
	dec->operand_types[1] = PPC_OPER_TYPE_VSREG;
	dec->operand_values[1] = ((insword & 0x1F0000)>>15)|((insword & 0x4)>>2);
	dec->operand_types[2] = PPC_OPER_TYPE_VSREG;
	dec->operand_values[2] = ((insword & 0xF800)>>10)|((insword & 0x2)>>1);
	dec->operand_fmtstr = PPC_FMTSTR_VSREG_C_VSREG_C_VSREG;
	return 0;
}

/* xscvdpsxds VSREG,VSREG */
int xscvdpsxds_VSREG_VSREG(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_XSCVDPSXDS;
	/* 111100AAAAA00000BBBBB101011000BA */
	dec->operand_n = 2;
	dec->operand_types[0] = PPC_OPER_TYPE_VSREG;
	dec->operand_values[0] = ((insword & 0x3E00000)>>20)|((insword & 0x1)>>0);
	dec->operand_types[1] = PPC_OPER_TYPE_VSREG;
	dec->operand_values[1] = ((insword & 0xF800)>>10)|((insword & 0x2)>>1);
	dec->operand_fmtstr = PPC_FMTSTR_VSREG_C_VSREG;
	return 0;
}

/* xsabsdp VSREG,VSREG */
int xsabsdp_VSREG_VSREG(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_XSABSDP;
	/* 111100AAAAA00000BBBBB101011001BA */
	dec->operand_n = 2;
	dec->operand_types[0] = PPC_OPER_TYPE_VSREG;
	dec->operand_values[0] = ((insword & 0x3E00000)>>20)|((insword & 0x1)>>0);
	dec->operand_types[1] = PPC_OPER_TYPE_VSREG;
	dec->operand_values[1] = ((insword & 0xF800)>>10)|((insword & 0x2)>>1);
	dec->operand_fmtstr = PPC_FMTSTR_VSREG_C_VSREG;
	return 0;
}

/* xsxexpdp GPR,VSREG */
int xsxexpdp_GPR_VSREG(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_XSXEXPDP;
	/* 111100AAAAA00000BBBBB101011011B0 */
	dec->operand_n = 2;
	dec->operand_types[0] = PPC_OPER_TYPE_GPR;
	dec->operand_values[0] = (insword & 0x3E00000)>>21;
	dec->operand_types[1] = PPC_OPER_TYPE_VSREG;
	dec->operand_values[1] = ((insword & 0xF800)>>10)|((insword & 0x2)>>1);
	dec->operand_fmtstr = PPC_FMTSTR_GPR_C_VSREG;
	return 0;
}

/* xscpsgndp VSREG,VSREG,VSREG */
int xscpsgndp_VSREG_VSREG_VSREG(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_XSCPSGNDP;
	/* 111100AAAAABBBBBCCCCC10110000BCA */
	dec->operand_n = 3;
	dec->operand_types[0] = PPC_OPER_TYPE_VSREG;
	dec->operand_values[0] = ((insword & 0x3E00000)>>20)|((insword & 0x1)>>0);
	dec->operand_types[1] = PPC_OPER_TYPE_VSREG;
	dec->operand_values[1] = ((insword & 0x1F0000)>>15)|((insword & 0x4)>>2);
	dec->operand_types[2] = PPC_OPER_TYPE_VSREG;
	dec->operand_values[2] = ((insword & 0xF800)>>10)|((insword & 0x2)>>1);
	dec->operand_fmtstr = PPC_FMTSTR_VSREG_C_VSREG_C_VSREG;
	return 0;
}

/* xsnmsubadp VSREG,VSREG,VSREG */
int xsnmsubadp_VSREG_VSREG_VSREG(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_XSNMSUBADP;
	/* 111100AAAAABBBBBCCCCC10110001BCA */
	dec->operand_n = 3;
	dec->operand_types[0] = PPC_OPER_TYPE_VSREG;
	dec->operand_values[0] = ((insword & 0x3E00000)>>20)|((insword & 0x1)>>0);
	dec->operand_types[1] = PPC_OPER_TYPE_VSREG;
	dec->operand_values[1] = ((insword & 0x1F0000)>>15)|((insword & 0x4)>>2);
	dec->operand_types[2] = PPC_OPER_TYPE_VSREG;
	dec->operand_values[2] = ((insword & 0xF800)>>10)|((insword & 0x2)>>1);
	dec->operand_fmtstr = PPC_FMTSTR_VSREG_C_VSREG_C_VSREG;
	return 0;
}

/* xxlnand VSREG,VSREG,VSREG */
int xxlnand_VSREG_VSREG_VSREG(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_XXLNAND;
	/* 111100AAAAABBBBBCCCCC10110010BCA */
	dec->operand_n = 3;
	dec->operand_types[0] = PPC_OPER_TYPE_VSREG;
	dec->operand_values[0] = ((insword & 0x3E00000)>>20)|((insword & 0x1)>>0);
	dec->operand_types[1] = PPC_OPER_TYPE_VSREG;
	dec->operand_values[1] = ((insword & 0x1F0000)>>15)|((insword & 0x4)>>2);
	dec->operand_types[2] = PPC_OPER_TYPE_VSREG;
	dec->operand_values[2] = ((insword & 0xF800)>>10)|((insword & 0x2)>>1);
	dec->operand_fmtstr = PPC_FMTSTR_VSREG_C_VSREG_C_VSREG;
	return 0;
}

/* xscvuxddp VSREG,VSREG */
int xscvuxddp_VSREG_VSREG(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_XSCVUXDDP;
	/* 111100AAAAA00000BBBBB101101000BA */
	dec->operand_n = 2;
	dec->operand_types[0] = PPC_OPER_TYPE_VSREG;
	dec->operand_values[0] = ((insword & 0x3E00000)>>20)|((insword & 0x1)>>0);
	dec->operand_types[1] = PPC_OPER_TYPE_VSREG;
	dec->operand_values[1] = ((insword & 0xF800)>>10)|((insword & 0x2)>>1);
	dec->operand_fmtstr = PPC_FMTSTR_VSREG_C_VSREG;
	return 0;
}

/* xsnabsdp VSREG,VSREG */
int xsnabsdp_VSREG_VSREG(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_XSNABSDP;
	/* 111100AAAAA00000BBBBB101101001BA */
	dec->operand_n = 2;
	dec->operand_types[0] = PPC_OPER_TYPE_VSREG;
	dec->operand_values[0] = ((insword & 0x3E00000)>>20)|((insword & 0x1)>>0);
	dec->operand_types[1] = PPC_OPER_TYPE_VSREG;
	dec->operand_values[1] = ((insword & 0xF800)>>10)|((insword & 0x2)>>1);
	dec->operand_fmtstr = PPC_FMTSTR_VSREG_C_VSREG;
	return 0;
}

/* xststdcdp CREG,VSREG,NUM */
int xststdcdp_CREG_VSREG_NUM(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_XSTSTDCDP;
	/* 111100AAACCCCCCCBBBBB101101010B0 */
	dec->operand_n = 3;
	dec->operand_types[0] = PPC_OPER_TYPE_CREG;
	dec->operand_values[0] = (insword & 0x3800000)>>23;
	dec->operand_types[1] = PPC_OPER_TYPE_VSREG;
	dec->operand_values[1] = ((insword & 0xF800)>>10)|((insword & 0x2)>>1);
	dec->operand_types[2] = PPC_OPER_TYPE_NUM;
	dec->operand_values[2] = (insword & 0x7F0000)>>16;
	dec->operand_fmtstr = PPC_FMTSTR_CREG_C_VSREG_C_NUM;
	return 0;
}

/* xsnmsubmdp VSREG,VSREG,VSREG */
int xsnmsubmdp_VSREG_VSREG_VSREG(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_XSNMSUBMDP;
	/* 111100AAAAABBBBBCCCCC10111001BCA */
	dec->operand_n = 3;
	dec->operand_types[0] = PPC_OPER_TYPE_VSREG;
	dec->operand_values[0] = ((insword & 0x3E00000)>>20)|((insword & 0x1)>>0);
	dec->operand_types[1] = PPC_OPER_TYPE_VSREG;
	dec->operand_values[1] = ((insword & 0x1F0000)>>15)|((insword & 0x4)>>2);
	dec->operand_types[2] = PPC_OPER_TYPE_VSREG;
	dec->operand_values[2] = ((insword & 0xF800)>>10)|((insword & 0x2)>>1);
	dec->operand_fmtstr = PPC_FMTSTR_VSREG_C_VSREG_C_VSREG;
	return 0;
}

/* xxleqv VSREG,VSREG,VSREG */
int xxleqv_VSREG_VSREG_VSREG(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_XXLEQV;
	/* 111100AAAAABBBBBCCCCC10111010BCA */
	dec->operand_n = 3;
	dec->operand_types[0] = PPC_OPER_TYPE_VSREG;
	dec->operand_values[0] = ((insword & 0x3E00000)>>20)|((insword & 0x1)>>0);
	dec->operand_types[1] = PPC_OPER_TYPE_VSREG;
	dec->operand_values[1] = ((insword & 0x1F0000)>>15)|((insword & 0x4)>>2);
	dec->operand_types[2] = PPC_OPER_TYPE_VSREG;
	dec->operand_values[2] = ((insword & 0xF800)>>10)|((insword & 0x2)>>1);
	dec->operand_fmtstr = PPC_FMTSTR_VSREG_C_VSREG_C_VSREG;
	return 0;
}

/* xscvsxddp VSREG,VSREG */
int xscvsxddp_VSREG_VSREG(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_XSCVSXDDP;
	/* 111100AAAAA00000BBBBB101111000BA */
	dec->operand_n = 2;
	dec->operand_types[0] = PPC_OPER_TYPE_VSREG;
	dec->operand_values[0] = ((insword & 0x3E00000)>>20)|((insword & 0x1)>>0);
	dec->operand_types[1] = PPC_OPER_TYPE_VSREG;
	dec->operand_values[1] = ((insword & 0xF800)>>10)|((insword & 0x2)>>1);
	dec->operand_fmtstr = PPC_FMTSTR_VSREG_C_VSREG;
	return 0;
}

/* xsnegdp VSREG,VSREG */
int xsnegdp_VSREG_VSREG(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_XSNEGDP;
	/* 111100AAAAA00000BBBBB101111001BA */
	dec->operand_n = 2;
	dec->operand_types[0] = PPC_OPER_TYPE_VSREG;
	dec->operand_values[0] = ((insword & 0x3E00000)>>20)|((insword & 0x1)>>0);
	dec->operand_types[1] = PPC_OPER_TYPE_VSREG;
	dec->operand_values[1] = ((insword & 0xF800)>>10)|((insword & 0x2)>>1);
	dec->operand_fmtstr = PPC_FMTSTR_VSREG_C_VSREG;
	return 0;
}

/* xvmaxsp VSREG,VSREG,VSREG */
int xvmaxsp_VSREG_VSREG_VSREG(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_XVMAXSP;
	/* 111100AAAAABBBBBCCCCC11000000BCA */
	dec->operand_n = 3;
	dec->operand_types[0] = PPC_OPER_TYPE_VSREG;
	dec->operand_values[0] = ((insword & 0x3E00000)>>20)|((insword & 0x1)>>0);
	dec->operand_types[1] = PPC_OPER_TYPE_VSREG;
	dec->operand_values[1] = ((insword & 0x1F0000)>>15)|((insword & 0x4)>>2);
	dec->operand_types[2] = PPC_OPER_TYPE_VSREG;
	dec->operand_values[2] = ((insword & 0xF800)>>10)|((insword & 0x2)>>1);
	dec->operand_fmtstr = PPC_FMTSTR_VSREG_C_VSREG_C_VSREG;
	return 0;
}

/* xvnmaddasp VSREG,VSREG,VSREG */
int xvnmaddasp_VSREG_VSREG_VSREG(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_XVNMADDASP;
	/* 111100AAAAABBBBBCCCCC11000001BCA */
	dec->operand_n = 3;
	dec->operand_types[0] = PPC_OPER_TYPE_VSREG;
	dec->operand_values[0] = ((insword & 0x3E00000)>>20)|((insword & 0x1)>>0);
	dec->operand_types[1] = PPC_OPER_TYPE_VSREG;
	dec->operand_values[1] = ((insword & 0x1F0000)>>15)|((insword & 0x4)>>2);
	dec->operand_types[2] = PPC_OPER_TYPE_VSREG;
	dec->operand_values[2] = ((insword & 0xF800)>>10)|((insword & 0x2)>>1);
	dec->operand_fmtstr = PPC_FMTSTR_VSREG_C_VSREG_C_VSREG;
	return 0;
}

/* xvcmpeqsp. VSREG,VSREG,VSREG */
int xvcmpeqspD_VSREG_VSREG_VSREG(uint32_t insword, struct ppc_decoded *dec)
{
	dec->properties |= PPC_PROPERTY_DOTTED;
	dec->mnemonic = PPC_MNEM_XVCMPEQSP;
	/* 111100AAAAABBBBBCCCCC11000011BCA */
	dec->operand_n = 3;
	dec->operand_types[0] = PPC_OPER_TYPE_VSREG;
	dec->operand_values[0] = ((insword & 0x3E00000)>>20)|((insword & 0x1)>>0);
	dec->operand_types[1] = PPC_OPER_TYPE_VSREG;
	dec->operand_values[1] = ((insword & 0x1F0000)>>15)|((insword & 0x4)>>2);
	dec->operand_types[2] = PPC_OPER_TYPE_VSREG;
	dec->operand_values[2] = ((insword & 0xF800)>>10)|((insword & 0x2)>>1);
	dec->operand_fmtstr = PPC_FMTSTR_VSREG_C_VSREG_C_VSREG;
	return 0;
}

/* xvcvspuxds VSREG,VSREG */
int xvcvspuxds_VSREG_VSREG(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_XVCVSPUXDS;
	/* 111100AAAAA00000BBBBB110001000BA */
	dec->operand_n = 2;
	dec->operand_types[0] = PPC_OPER_TYPE_VSREG;
	dec->operand_values[0] = ((insword & 0x3E00000)>>20)|((insword & 0x1)>>0);
	dec->operand_types[1] = PPC_OPER_TYPE_VSREG;
	dec->operand_values[1] = ((insword & 0xF800)>>10)|((insword & 0x2)>>1);
	dec->operand_fmtstr = PPC_FMTSTR_VSREG_C_VSREG;
	return 0;
}

/* xvcvdpsp VSREG,VSREG */
int xvcvdpsp_VSREG_VSREG(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_XVCVDPSP;
	/* 111100AAAAA00000BBBBB110001001BA */
	dec->operand_n = 2;
	dec->operand_types[0] = PPC_OPER_TYPE_VSREG;
	dec->operand_values[0] = ((insword & 0x3E00000)>>20)|((insword & 0x1)>>0);
	dec->operand_types[1] = PPC_OPER_TYPE_VSREG;
	dec->operand_values[1] = ((insword & 0xF800)>>10)|((insword & 0x2)>>1);
	dec->operand_fmtstr = PPC_FMTSTR_VSREG_C_VSREG;
	return 0;
}

/* xvminsp VSREG,VSREG,VSREG */
int xvminsp_VSREG_VSREG_VSREG(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_XVMINSP;
	/* 111100AAAAABBBBBCCCCC11001000BCA */
	dec->operand_n = 3;
	dec->operand_types[0] = PPC_OPER_TYPE_VSREG;
	dec->operand_values[0] = ((insword & 0x3E00000)>>20)|((insword & 0x1)>>0);
	dec->operand_types[1] = PPC_OPER_TYPE_VSREG;
	dec->operand_values[1] = ((insword & 0x1F0000)>>15)|((insword & 0x4)>>2);
	dec->operand_types[2] = PPC_OPER_TYPE_VSREG;
	dec->operand_values[2] = ((insword & 0xF800)>>10)|((insword & 0x2)>>1);
	dec->operand_fmtstr = PPC_FMTSTR_VSREG_C_VSREG_C_VSREG;
	return 0;
}

/* xvnmaddmsp VSREG,VSREG,VSREG */
int xvnmaddmsp_VSREG_VSREG_VSREG(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_XVNMADDMSP;
	/* 111100AAAAABBBBBCCCCC11001001BCA */
	dec->operand_n = 3;
	dec->operand_types[0] = PPC_OPER_TYPE_VSREG;
	dec->operand_values[0] = ((insword & 0x3E00000)>>20)|((insword & 0x1)>>0);
	dec->operand_types[1] = PPC_OPER_TYPE_VSREG;
	dec->operand_values[1] = ((insword & 0x1F0000)>>15)|((insword & 0x4)>>2);
	dec->operand_types[2] = PPC_OPER_TYPE_VSREG;
	dec->operand_values[2] = ((insword & 0xF800)>>10)|((insword & 0x2)>>1);
	dec->operand_fmtstr = PPC_FMTSTR_VSREG_C_VSREG_C_VSREG;
	return 0;
}

/* xvcmpgtsp. VSREG,VSREG,VSREG */
int xvcmpgtspD_VSREG_VSREG_VSREG(uint32_t insword, struct ppc_decoded *dec)
{
	dec->properties |= PPC_PROPERTY_DOTTED;
	dec->mnemonic = PPC_MNEM_XVCMPGTSP;
	/* 111100AAAAABBBBBCCCCC11001011BCA */
	dec->operand_n = 3;
	dec->operand_types[0] = PPC_OPER_TYPE_VSREG;
	dec->operand_values[0] = ((insword & 0x3E00000)>>20)|((insword & 0x1)>>0);
	dec->operand_types[1] = PPC_OPER_TYPE_VSREG;
	dec->operand_values[1] = ((insword & 0x1F0000)>>15)|((insword & 0x4)>>2);
	dec->operand_types[2] = PPC_OPER_TYPE_VSREG;
	dec->operand_values[2] = ((insword & 0xF800)>>10)|((insword & 0x2)>>1);
	dec->operand_fmtstr = PPC_FMTSTR_VSREG_C_VSREG_C_VSREG;
	return 0;
}

/* xvcvspsxds VSREG,VSREG */
int xvcvspsxds_VSREG_VSREG(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_XVCVSPSXDS;
	/* 111100AAAAA00000BBBBB110011000BA */
	dec->operand_n = 2;
	dec->operand_types[0] = PPC_OPER_TYPE_VSREG;
	dec->operand_values[0] = ((insword & 0x3E00000)>>20)|((insword & 0x1)>>0);
	dec->operand_types[1] = PPC_OPER_TYPE_VSREG;
	dec->operand_values[1] = ((insword & 0xF800)>>10)|((insword & 0x2)>>1);
	dec->operand_fmtstr = PPC_FMTSTR_VSREG_C_VSREG;
	return 0;
}

/* xvabssp VSREG,VSREG */
int xvabssp_VSREG_VSREG(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_XVABSSP;
	/* 111100AAAAA00000BBBBB110011001BA */
	dec->operand_n = 2;
	dec->operand_types[0] = PPC_OPER_TYPE_VSREG;
	dec->operand_values[0] = ((insword & 0x3E00000)>>20)|((insword & 0x1)>>0);
	dec->operand_types[1] = PPC_OPER_TYPE_VSREG;
	dec->operand_values[1] = ((insword & 0xF800)>>10)|((insword & 0x2)>>1);
	dec->operand_fmtstr = PPC_FMTSTR_VSREG_C_VSREG;
	return 0;
}

/* xvmovsp VSREG,VSREG */
int xvmovsp_VSREG_VSREG(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_XVMOVSP;
	/* 111100AAAAAxxxxxxxxxx11010000xxA */
	dec->operand_n = 2;
	dec->operand_types[0] = PPC_OPER_TYPE_VSREG;
	dec->operand_values[0] = ((insword & 0x3E00000)>>20)|((insword & 0x1)>>0);
	dec->operand_types[1] = PPC_OPER_TYPE_VSREG;
	dec->operand_fmtstr = PPC_FMTSTR_VSREG_C_VSREG;
	return 0;
}

/* xvcpsgnsp VSREG,VSREG,VSREG */
int xvcpsgnsp_VSREG_VSREG_VSREG(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_XVCPSGNSP;
	/* 111100AAAAABBBBBCCCCC11010000BCA */
	dec->operand_n = 3;
	dec->operand_types[0] = PPC_OPER_TYPE_VSREG;
	dec->operand_values[0] = ((insword & 0x3E00000)>>20)|((insword & 0x1)>>0);
	dec->operand_types[1] = PPC_OPER_TYPE_VSREG;
	dec->operand_values[1] = ((insword & 0x1F0000)>>15)|((insword & 0x4)>>2);
	dec->operand_types[2] = PPC_OPER_TYPE_VSREG;
	dec->operand_values[2] = ((insword & 0xF800)>>10)|((insword & 0x2)>>1);
	dec->operand_fmtstr = PPC_FMTSTR_VSREG_C_VSREG_C_VSREG;
	return 0;
}

/* xvnmsubasp VSREG,VSREG,VSREG */
int xvnmsubasp_VSREG_VSREG_VSREG(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_XVNMSUBASP;
	/* 111100AAAAABBBBBCCCCC11010001BCA */
	dec->operand_n = 3;
	dec->operand_types[0] = PPC_OPER_TYPE_VSREG;
	dec->operand_values[0] = ((insword & 0x3E00000)>>20)|((insword & 0x1)>>0);
	dec->operand_types[1] = PPC_OPER_TYPE_VSREG;
	dec->operand_values[1] = ((insword & 0x1F0000)>>15)|((insword & 0x4)>>2);
	dec->operand_types[2] = PPC_OPER_TYPE_VSREG;
	dec->operand_values[2] = ((insword & 0xF800)>>10)|((insword & 0x2)>>1);
	dec->operand_fmtstr = PPC_FMTSTR_VSREG_C_VSREG_C_VSREG;
	return 0;
}

/* xvcmpgesp. VSREG,VSREG,VSREG */
int xvcmpgespD_VSREG_VSREG_VSREG(uint32_t insword, struct ppc_decoded *dec)
{
	dec->properties |= PPC_PROPERTY_DOTTED;
	dec->mnemonic = PPC_MNEM_XVCMPGESP;
	/* 111100AAAAABBBBBCCCCC11010011BCA */
	dec->operand_n = 3;
	dec->operand_types[0] = PPC_OPER_TYPE_VSREG;
	dec->operand_values[0] = ((insword & 0x3E00000)>>20)|((insword & 0x1)>>0);
	dec->operand_types[1] = PPC_OPER_TYPE_VSREG;
	dec->operand_values[1] = ((insword & 0x1F0000)>>15)|((insword & 0x4)>>2);
	dec->operand_types[2] = PPC_OPER_TYPE_VSREG;
	dec->operand_values[2] = ((insword & 0xF800)>>10)|((insword & 0x2)>>1);
	dec->operand_fmtstr = PPC_FMTSTR_VSREG_C_VSREG_C_VSREG;
	return 0;
}

/* xvcvuxdsp VSREG,VSREG */
int xvcvuxdsp_VSREG_VSREG(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_XVCVUXDSP;
	/* 111100AAAAA00000BBBBB110101000BA */
	dec->operand_n = 2;
	dec->operand_types[0] = PPC_OPER_TYPE_VSREG;
	dec->operand_values[0] = ((insword & 0x3E00000)>>20)|((insword & 0x1)>>0);
	dec->operand_types[1] = PPC_OPER_TYPE_VSREG;
	dec->operand_values[1] = ((insword & 0xF800)>>10)|((insword & 0x2)>>1);
	dec->operand_fmtstr = PPC_FMTSTR_VSREG_C_VSREG;
	return 0;
}

/* xvnabssp VSREG,VSREG */
int xvnabssp_VSREG_VSREG(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_XVNABSSP;
	/* 111100AAAAA00000BBBBB110101001BA */
	dec->operand_n = 2;
	dec->operand_types[0] = PPC_OPER_TYPE_VSREG;
	dec->operand_values[0] = ((insword & 0x3E00000)>>20)|((insword & 0x1)>>0);
	dec->operand_types[1] = PPC_OPER_TYPE_VSREG;
	dec->operand_values[1] = ((insword & 0xF800)>>10)|((insword & 0x2)>>1);
	dec->operand_fmtstr = PPC_FMTSTR_VSREG_C_VSREG;
	return 0;
}

/* xvtstdcsp VSREG,VSREG,NUM */
int xvtstdcsp_VSREG_VSREG_NUM(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_XVTSTDCSP;
	/* 111100AAAAACCCCCBBBBB1101C101CBA */
	dec->operand_n = 3;
	dec->operand_types[0] = PPC_OPER_TYPE_VSREG;
	dec->operand_values[0] = ((insword & 0x3E00000)>>20)|((insword & 0x1)>>0);
	dec->operand_types[1] = PPC_OPER_TYPE_VSREG;
	dec->operand_values[1] = ((insword & 0xF800)>>10)|((insword & 0x2)>>1);
	dec->operand_types[2] = PPC_OPER_TYPE_NUM;
	dec->operand_values[2] = ((insword & 0x1F0000)>>14)|((insword & 0x40)>>5)|((insword & 0x4)>>2);
	dec->operand_fmtstr = PPC_FMTSTR_VSREG_C_VSREG_C_NUM;
	return 0;
}

/* xviexpsp VSREG,VSREG,VSREG */
int xviexpsp_VSREG_VSREG_VSREG(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_XVIEXPSP;
	/* 111100AAAAABBBBBCCCCC11011000BCA */
	dec->operand_n = 3;
	dec->operand_types[0] = PPC_OPER_TYPE_VSREG;
	dec->operand_values[0] = ((insword & 0x3E00000)>>20)|((insword & 0x1)>>0);
	dec->operand_types[1] = PPC_OPER_TYPE_VSREG;
	dec->operand_values[1] = ((insword & 0x1F0000)>>15)|((insword & 0x4)>>2);
	dec->operand_types[2] = PPC_OPER_TYPE_VSREG;
	dec->operand_values[2] = ((insword & 0xF800)>>10)|((insword & 0x2)>>1);
	dec->operand_fmtstr = PPC_FMTSTR_VSREG_C_VSREG_C_VSREG;
	return 0;
}

/* xvnmsubmsp VSREG,VSREG,VSREG */
int xvnmsubmsp_VSREG_VSREG_VSREG(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_XVNMSUBMSP;
	/* 111100AAAAABBBBBCCCCC11011001BCA */
	dec->operand_n = 3;
	dec->operand_types[0] = PPC_OPER_TYPE_VSREG;
	dec->operand_values[0] = ((insword & 0x3E00000)>>20)|((insword & 0x1)>>0);
	dec->operand_types[1] = PPC_OPER_TYPE_VSREG;
	dec->operand_values[1] = ((insword & 0x1F0000)>>15)|((insword & 0x4)>>2);
	dec->operand_types[2] = PPC_OPER_TYPE_VSREG;
	dec->operand_values[2] = ((insword & 0xF800)>>10)|((insword & 0x2)>>1);
	dec->operand_fmtstr = PPC_FMTSTR_VSREG_C_VSREG_C_VSREG;
	return 0;
}

/* xvcvsxdsp VSREG,VSREG */
int xvcvsxdsp_VSREG_VSREG(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_XVCVSXDSP;
	/* 111100AAAAA00000BBBBB110111000BA */
	dec->operand_n = 2;
	dec->operand_types[0] = PPC_OPER_TYPE_VSREG;
	dec->operand_values[0] = ((insword & 0x3E00000)>>20)|((insword & 0x1)>>0);
	dec->operand_types[1] = PPC_OPER_TYPE_VSREG;
	dec->operand_values[1] = ((insword & 0xF800)>>10)|((insword & 0x2)>>1);
	dec->operand_fmtstr = PPC_FMTSTR_VSREG_C_VSREG;
	return 0;
}

/* xvnegsp VSREG,VSREG */
int xvnegsp_VSREG_VSREG(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_XVNEGSP;
	/* 111100AAAAA00000BBBBB110111001BA */
	dec->operand_n = 2;
	dec->operand_types[0] = PPC_OPER_TYPE_VSREG;
	dec->operand_values[0] = ((insword & 0x3E00000)>>20)|((insword & 0x1)>>0);
	dec->operand_types[1] = PPC_OPER_TYPE_VSREG;
	dec->operand_values[1] = ((insword & 0xF800)>>10)|((insword & 0x2)>>1);
	dec->operand_fmtstr = PPC_FMTSTR_VSREG_C_VSREG;
	return 0;
}

/* xvmaxdp VSREG,VSREG,VSREG */
int xvmaxdp_VSREG_VSREG_VSREG(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_XVMAXDP;
	/* 111100AAAAABBBBBCCCCC11100000BCA */
	dec->operand_n = 3;
	dec->operand_types[0] = PPC_OPER_TYPE_VSREG;
	dec->operand_values[0] = ((insword & 0x3E00000)>>20)|((insword & 0x1)>>0);
	dec->operand_types[1] = PPC_OPER_TYPE_VSREG;
	dec->operand_values[1] = ((insword & 0x1F0000)>>15)|((insword & 0x4)>>2);
	dec->operand_types[2] = PPC_OPER_TYPE_VSREG;
	dec->operand_values[2] = ((insword & 0xF800)>>10)|((insword & 0x2)>>1);
	dec->operand_fmtstr = PPC_FMTSTR_VSREG_C_VSREG_C_VSREG;
	return 0;
}

/* xvnmaddadp VSREG,VSREG,VSREG */
int xvnmaddadp_VSREG_VSREG_VSREG(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_XVNMADDADP;
	/* 111100AAAAABBBBBCCCCC11100001BCA */
	dec->operand_n = 3;
	dec->operand_types[0] = PPC_OPER_TYPE_VSREG;
	dec->operand_values[0] = ((insword & 0x3E00000)>>20)|((insword & 0x1)>>0);
	dec->operand_types[1] = PPC_OPER_TYPE_VSREG;
	dec->operand_values[1] = ((insword & 0x1F0000)>>15)|((insword & 0x4)>>2);
	dec->operand_types[2] = PPC_OPER_TYPE_VSREG;
	dec->operand_values[2] = ((insword & 0xF800)>>10)|((insword & 0x2)>>1);
	dec->operand_fmtstr = PPC_FMTSTR_VSREG_C_VSREG_C_VSREG;
	return 0;
}

/* xvcmpeqdp. VSREG,VSREG,VSREG */
int xvcmpeqdpD_VSREG_VSREG_VSREG(uint32_t insword, struct ppc_decoded *dec)
{
	dec->properties |= PPC_PROPERTY_DOTTED;
	dec->mnemonic = PPC_MNEM_XVCMPEQDP;
	/* 111100AAAAABBBBBCCCCC11100011BCA */
	dec->operand_n = 3;
	dec->operand_types[0] = PPC_OPER_TYPE_VSREG;
	dec->operand_values[0] = ((insword & 0x3E00000)>>20)|((insword & 0x1)>>0);
	dec->operand_types[1] = PPC_OPER_TYPE_VSREG;
	dec->operand_values[1] = ((insword & 0x1F0000)>>15)|((insword & 0x4)>>2);
	dec->operand_types[2] = PPC_OPER_TYPE_VSREG;
	dec->operand_values[2] = ((insword & 0xF800)>>10)|((insword & 0x2)>>1);
	dec->operand_fmtstr = PPC_FMTSTR_VSREG_C_VSREG_C_VSREG;
	return 0;
}

/* xvcvdpuxds VSREG,VSREG */
int xvcvdpuxds_VSREG_VSREG(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_XVCVDPUXDS;
	/* 111100AAAAA00000BBBBB111001000BA */
	dec->operand_n = 2;
	dec->operand_types[0] = PPC_OPER_TYPE_VSREG;
	dec->operand_values[0] = ((insword & 0x3E00000)>>20)|((insword & 0x1)>>0);
	dec->operand_types[1] = PPC_OPER_TYPE_VSREG;
	dec->operand_values[1] = ((insword & 0xF800)>>10)|((insword & 0x2)>>1);
	dec->operand_fmtstr = PPC_FMTSTR_VSREG_C_VSREG;
	return 0;
}

/* xvcvspdp VSREG,VSREG */
int xvcvspdp_VSREG_VSREG(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_XVCVSPDP;
	/* 111100AAAAA00000BBBBB111001001BA */
	dec->operand_n = 2;
	dec->operand_types[0] = PPC_OPER_TYPE_VSREG;
	dec->operand_values[0] = ((insword & 0x3E00000)>>20)|((insword & 0x1)>>0);
	dec->operand_types[1] = PPC_OPER_TYPE_VSREG;
	dec->operand_values[1] = ((insword & 0xF800)>>10)|((insword & 0x2)>>1);
	dec->operand_fmtstr = PPC_FMTSTR_VSREG_C_VSREG;
	return 0;
}

/* xsiexpdp VSREG,GPR,GPR */
int xsiexpdp_VSREG_GPR_GPR(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_XSIEXPDP;
	/* 111100AAAAABBBBBCCCCC1110010110A */
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

/* xvmindp VSREG,VSREG,VSREG */
int xvmindp_VSREG_VSREG_VSREG(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_XVMINDP;
	/* 111100AAAAABBBBBCCCCC11101000BCA */
	dec->operand_n = 3;
	dec->operand_types[0] = PPC_OPER_TYPE_VSREG;
	dec->operand_values[0] = ((insword & 0x3E00000)>>20)|((insword & 0x1)>>0);
	dec->operand_types[1] = PPC_OPER_TYPE_VSREG;
	dec->operand_values[1] = ((insword & 0x1F0000)>>15)|((insword & 0x4)>>2);
	dec->operand_types[2] = PPC_OPER_TYPE_VSREG;
	dec->operand_values[2] = ((insword & 0xF800)>>10)|((insword & 0x2)>>1);
	dec->operand_fmtstr = PPC_FMTSTR_VSREG_C_VSREG_C_VSREG;
	return 0;
}

/* xvnmaddmdp VSREG,VSREG,VSREG */
int xvnmaddmdp_VSREG_VSREG_VSREG(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_XVNMADDMDP;
	/* 111100AAAAABBBBBCCCCC11101001BCA */
	dec->operand_n = 3;
	dec->operand_types[0] = PPC_OPER_TYPE_VSREG;
	dec->operand_values[0] = ((insword & 0x3E00000)>>20)|((insword & 0x1)>>0);
	dec->operand_types[1] = PPC_OPER_TYPE_VSREG;
	dec->operand_values[1] = ((insword & 0x1F0000)>>15)|((insword & 0x4)>>2);
	dec->operand_types[2] = PPC_OPER_TYPE_VSREG;
	dec->operand_values[2] = ((insword & 0xF800)>>10)|((insword & 0x2)>>1);
	dec->operand_fmtstr = PPC_FMTSTR_VSREG_C_VSREG_C_VSREG;
	return 0;
}

/* xvcmpgtdp. VSREG,VSREG,VSREG */
int xvcmpgtdpD_VSREG_VSREG_VSREG(uint32_t insword, struct ppc_decoded *dec)
{
	dec->properties |= PPC_PROPERTY_DOTTED;
	dec->mnemonic = PPC_MNEM_XVCMPGTDP;
	/* 111100AAAAABBBBBCCCCC11101011BCA */
	dec->operand_n = 3;
	dec->operand_types[0] = PPC_OPER_TYPE_VSREG;
	dec->operand_values[0] = ((insword & 0x3E00000)>>20)|((insword & 0x1)>>0);
	dec->operand_types[1] = PPC_OPER_TYPE_VSREG;
	dec->operand_values[1] = ((insword & 0x1F0000)>>15)|((insword & 0x4)>>2);
	dec->operand_types[2] = PPC_OPER_TYPE_VSREG;
	dec->operand_values[2] = ((insword & 0xF800)>>10)|((insword & 0x2)>>1);
	dec->operand_fmtstr = PPC_FMTSTR_VSREG_C_VSREG_C_VSREG;
	return 0;
}

/* xvcvdpsxds VSREG,VSREG */
int xvcvdpsxds_VSREG_VSREG(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_XVCVDPSXDS;
	/* 111100AAAAA00000BBBBB111011000BA */
	dec->operand_n = 2;
	dec->operand_types[0] = PPC_OPER_TYPE_VSREG;
	dec->operand_values[0] = ((insword & 0x3E00000)>>20)|((insword & 0x1)>>0);
	dec->operand_types[1] = PPC_OPER_TYPE_VSREG;
	dec->operand_values[1] = ((insword & 0xF800)>>10)|((insword & 0x2)>>1);
	dec->operand_fmtstr = PPC_FMTSTR_VSREG_C_VSREG;
	return 0;
}

/* xvabsdp VSREG,VSREG */
int xvabsdp_VSREG_VSREG(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_XVABSDP;
	/* 111100AAAAA00000BBBBB111011001BA */
	dec->operand_n = 2;
	dec->operand_types[0] = PPC_OPER_TYPE_VSREG;
	dec->operand_values[0] = ((insword & 0x3E00000)>>20)|((insword & 0x1)>>0);
	dec->operand_types[1] = PPC_OPER_TYPE_VSREG;
	dec->operand_values[1] = ((insword & 0xF800)>>10)|((insword & 0x2)>>1);
	dec->operand_fmtstr = PPC_FMTSTR_VSREG_C_VSREG;
	return 0;
}

/* xvxexpdp VSREG,VSREG */
int xvxexpdp_VSREG_VSREG(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_XVXEXPDP;
	/* 111100AAAAA00000BBBBB111011011BA */
	dec->operand_n = 2;
	dec->operand_types[0] = PPC_OPER_TYPE_VSREG;
	dec->operand_values[0] = ((insword & 0x3E00000)>>20)|((insword & 0x1)>>0);
	dec->operand_types[1] = PPC_OPER_TYPE_VSREG;
	dec->operand_values[1] = ((insword & 0xF800)>>10)|((insword & 0x2)>>1);
	dec->operand_fmtstr = PPC_FMTSTR_VSREG_C_VSREG;
	return 0;
}

/* xvmovdp VSREG,VSREG */
int xvmovdp_VSREG_VSREG(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_XVMOVDP;
	/* 111100AAAAAxxxxxxxxxx11110000xxA */
	dec->operand_n = 2;
	dec->operand_types[0] = PPC_OPER_TYPE_VSREG;
	dec->operand_values[0] = ((insword & 0x3E00000)>>20)|((insword & 0x1)>>0);
	dec->operand_types[1] = PPC_OPER_TYPE_VSREG;
	dec->operand_fmtstr = PPC_FMTSTR_VSREG_C_VSREG;
	return 0;
}

/* xvcpsgndp VSREG,VSREG,VSREG */
int xvcpsgndp_VSREG_VSREG_VSREG(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_XVCPSGNDP;
	/* 111100AAAAABBBBBCCCCC11110000BCA */
	dec->operand_n = 3;
	dec->operand_types[0] = PPC_OPER_TYPE_VSREG;
	dec->operand_values[0] = ((insword & 0x3E00000)>>20)|((insword & 0x1)>>0);
	dec->operand_types[1] = PPC_OPER_TYPE_VSREG;
	dec->operand_values[1] = ((insword & 0x1F0000)>>15)|((insword & 0x4)>>2);
	dec->operand_types[2] = PPC_OPER_TYPE_VSREG;
	dec->operand_values[2] = ((insword & 0xF800)>>10)|((insword & 0x2)>>1);
	dec->operand_fmtstr = PPC_FMTSTR_VSREG_C_VSREG_C_VSREG;
	return 0;
}

/* xvnmsubadp VSREG,VSREG,VSREG */
int xvnmsubadp_VSREG_VSREG_VSREG(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_XVNMSUBADP;
	/* 111100AAAAABBBBBCCCCC11110001BCA */
	dec->operand_n = 3;
	dec->operand_types[0] = PPC_OPER_TYPE_VSREG;
	dec->operand_values[0] = ((insword & 0x3E00000)>>20)|((insword & 0x1)>>0);
	dec->operand_types[1] = PPC_OPER_TYPE_VSREG;
	dec->operand_values[1] = ((insword & 0x1F0000)>>15)|((insword & 0x4)>>2);
	dec->operand_types[2] = PPC_OPER_TYPE_VSREG;
	dec->operand_values[2] = ((insword & 0xF800)>>10)|((insword & 0x2)>>1);
	dec->operand_fmtstr = PPC_FMTSTR_VSREG_C_VSREG_C_VSREG;
	return 0;
}

/* xvcmpgedp. VSREG,VSREG,VSREG */
int xvcmpgedpD_VSREG_VSREG_VSREG(uint32_t insword, struct ppc_decoded *dec)
{
	dec->properties |= PPC_PROPERTY_DOTTED;
	dec->mnemonic = PPC_MNEM_XVCMPGEDP;
	/* 111100AAAAABBBBBCCCCC11110011BCA */
	dec->operand_n = 3;
	dec->operand_types[0] = PPC_OPER_TYPE_VSREG;
	dec->operand_values[0] = ((insword & 0x3E00000)>>20)|((insword & 0x1)>>0);
	dec->operand_types[1] = PPC_OPER_TYPE_VSREG;
	dec->operand_values[1] = ((insword & 0x1F0000)>>15)|((insword & 0x4)>>2);
	dec->operand_types[2] = PPC_OPER_TYPE_VSREG;
	dec->operand_values[2] = ((insword & 0xF800)>>10)|((insword & 0x2)>>1);
	dec->operand_fmtstr = PPC_FMTSTR_VSREG_C_VSREG_C_VSREG;
	return 0;
}

/* xvcvuxddp VSREG,VSREG */
int xvcvuxddp_VSREG_VSREG(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_XVCVUXDDP;
	/* 111100AAAAA00000BBBBB111101000BA */
	dec->operand_n = 2;
	dec->operand_types[0] = PPC_OPER_TYPE_VSREG;
	dec->operand_values[0] = ((insword & 0x3E00000)>>20)|((insword & 0x1)>>0);
	dec->operand_types[1] = PPC_OPER_TYPE_VSREG;
	dec->operand_values[1] = ((insword & 0xF800)>>10)|((insword & 0x2)>>1);
	dec->operand_fmtstr = PPC_FMTSTR_VSREG_C_VSREG;
	return 0;
}

/* xvnabsdp VSREG,VSREG */
int xvnabsdp_VSREG_VSREG(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_XVNABSDP;
	/* 111100AAAAA00000BBBBB111101001BA */
	dec->operand_n = 2;
	dec->operand_types[0] = PPC_OPER_TYPE_VSREG;
	dec->operand_values[0] = ((insword & 0x3E00000)>>20)|((insword & 0x1)>>0);
	dec->operand_types[1] = PPC_OPER_TYPE_VSREG;
	dec->operand_values[1] = ((insword & 0xF800)>>10)|((insword & 0x2)>>1);
	dec->operand_fmtstr = PPC_FMTSTR_VSREG_C_VSREG;
	return 0;
}

/* xvtstdcdp VSREG,VSREG,NUM */
int xvtstdcdp_VSREG_VSREG_NUM(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_XVTSTDCDP;
	/* 111100AAAAACCCCCBBBBB1111C101CBA */
	dec->operand_n = 3;
	dec->operand_types[0] = PPC_OPER_TYPE_VSREG;
	dec->operand_values[0] = ((insword & 0x3E00000)>>20)|((insword & 0x1)>>0);
	dec->operand_types[1] = PPC_OPER_TYPE_VSREG;
	dec->operand_values[1] = ((insword & 0xF800)>>10)|((insword & 0x2)>>1);
	dec->operand_types[2] = PPC_OPER_TYPE_NUM;
	dec->operand_values[2] = ((insword & 0x1F0000)>>14)|((insword & 0x40)>>5)|((insword & 0x4)>>2);
	dec->operand_fmtstr = PPC_FMTSTR_VSREG_C_VSREG_C_NUM;
	return 0;
}

/* xviexpdp VSREG,VSREG,VSREG */
int xviexpdp_VSREG_VSREG_VSREG(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_XVIEXPDP;
	/* 111100AAAAABBBBBCCCCC11111000BCA */
	dec->operand_n = 3;
	dec->operand_types[0] = PPC_OPER_TYPE_VSREG;
	dec->operand_values[0] = ((insword & 0x3E00000)>>20)|((insword & 0x1)>>0);
	dec->operand_types[1] = PPC_OPER_TYPE_VSREG;
	dec->operand_values[1] = ((insword & 0x1F0000)>>15)|((insword & 0x4)>>2);
	dec->operand_types[2] = PPC_OPER_TYPE_VSREG;
	dec->operand_values[2] = ((insword & 0xF800)>>10)|((insword & 0x2)>>1);
	dec->operand_fmtstr = PPC_FMTSTR_VSREG_C_VSREG_C_VSREG;
	return 0;
}

/* xvnmsubmdp VSREG,VSREG,VSREG */
int xvnmsubmdp_VSREG_VSREG_VSREG(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_XVNMSUBMDP;
	/* 111100AAAAABBBBBCCCCC11111001BCA */
	dec->operand_n = 3;
	dec->operand_types[0] = PPC_OPER_TYPE_VSREG;
	dec->operand_values[0] = ((insword & 0x3E00000)>>20)|((insword & 0x1)>>0);
	dec->operand_types[1] = PPC_OPER_TYPE_VSREG;
	dec->operand_values[1] = ((insword & 0x1F0000)>>15)|((insword & 0x4)>>2);
	dec->operand_types[2] = PPC_OPER_TYPE_VSREG;
	dec->operand_values[2] = ((insword & 0xF800)>>10)|((insword & 0x2)>>1);
	dec->operand_fmtstr = PPC_FMTSTR_VSREG_C_VSREG_C_VSREG;
	return 0;
}

/* xvcvsxddp VSREG,VSREG */
int xvcvsxddp_VSREG_VSREG(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_XVCVSXDDP;
	/* 111100AAAAA00000BBBBB111111000BA */
	dec->operand_n = 2;
	dec->operand_types[0] = PPC_OPER_TYPE_VSREG;
	dec->operand_values[0] = ((insword & 0x3E00000)>>20)|((insword & 0x1)>>0);
	dec->operand_types[1] = PPC_OPER_TYPE_VSREG;
	dec->operand_values[1] = ((insword & 0xF800)>>10)|((insword & 0x2)>>1);
	dec->operand_fmtstr = PPC_FMTSTR_VSREG_C_VSREG;
	return 0;
}

/* xvnegdp VSREG,VSREG */
int xvnegdp_VSREG_VSREG(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_XVNEGDP;
	/* 111100AAAAA00000BBBBB111111001BA */
	dec->operand_n = 2;
	dec->operand_types[0] = PPC_OPER_TYPE_VSREG;
	dec->operand_values[0] = ((insword & 0x3E00000)>>20)|((insword & 0x1)>>0);
	dec->operand_types[1] = PPC_OPER_TYPE_VSREG;
	dec->operand_values[1] = ((insword & 0xF800)>>10)|((insword & 0x2)>>1);
	dec->operand_fmtstr = PPC_FMTSTR_VSREG_C_VSREG;
	return 0;
}

/* xsxsigdp GPR,VSREG */
int xsxsigdp_GPR_VSREG(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_XSXSIGDP;
	/* 111100AAAAA00001BBBBB101011011B0 */
	dec->operand_n = 2;
	dec->operand_types[0] = PPC_OPER_TYPE_GPR;
	dec->operand_values[0] = (insword & 0x3E00000)>>21;
	dec->operand_types[1] = PPC_OPER_TYPE_VSREG;
	dec->operand_values[1] = ((insword & 0xF800)>>10)|((insword & 0x2)>>1);
	dec->operand_fmtstr = PPC_FMTSTR_GPR_C_VSREG;
	return 0;
}

/* xvxsigdp VSREG,VSREG */
int xvxsigdp_VSREG_VSREG(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_XVXSIGDP;
	/* 111100AAAAA00001BBBBB111011011BA */
	dec->operand_n = 2;
	dec->operand_types[0] = PPC_OPER_TYPE_VSREG;
	dec->operand_values[0] = ((insword & 0x3E00000)>>20)|((insword & 0x1)>>0);
	dec->operand_types[1] = PPC_OPER_TYPE_VSREG;
	dec->operand_values[1] = ((insword & 0xF800)>>10)|((insword & 0x2)>>1);
	dec->operand_fmtstr = PPC_FMTSTR_VSREG_C_VSREG;
	return 0;
}

/* xxbrh VSREG,VSREG */
int xxbrh_VSREG_VSREG(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_XXBRH;
	/* 111100AAAAA00111BBBBB111011011BA */
	dec->operand_n = 2;
	dec->operand_types[0] = PPC_OPER_TYPE_VSREG;
	dec->operand_values[0] = ((insword & 0x3E00000)>>20)|((insword & 0x1)>>0);
	dec->operand_types[1] = PPC_OPER_TYPE_VSREG;
	dec->operand_values[1] = ((insword & 0xF800)>>10)|((insword & 0x2)>>1);
	dec->operand_fmtstr = PPC_FMTSTR_VSREG_C_VSREG;
	return 0;
}

/* xvxexpsp VSREG,VSREG */
int xvxexpsp_VSREG_VSREG(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_XVXEXPSP;
	/* 111100AAAAA01000BBBBB111011011BA */
	dec->operand_n = 2;
	dec->operand_types[0] = PPC_OPER_TYPE_VSREG;
	dec->operand_values[0] = ((insword & 0x3E00000)>>20)|((insword & 0x1)>>0);
	dec->operand_types[1] = PPC_OPER_TYPE_VSREG;
	dec->operand_values[1] = ((insword & 0xF800)>>10)|((insword & 0x2)>>1);
	dec->operand_fmtstr = PPC_FMTSTR_VSREG_C_VSREG;
	return 0;
}

/* xvxsigsp VSREG,VSREG */
int xvxsigsp_VSREG_VSREG(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_XVXSIGSP;
	/* 111100AAAAA01001BBBBB111011011BA */
	dec->operand_n = 2;
	dec->operand_types[0] = PPC_OPER_TYPE_VSREG;
	dec->operand_values[0] = ((insword & 0x3E00000)>>20)|((insword & 0x1)>>0);
	dec->operand_types[1] = PPC_OPER_TYPE_VSREG;
	dec->operand_values[1] = ((insword & 0xF800)>>10)|((insword & 0x2)>>1);
	dec->operand_fmtstr = PPC_FMTSTR_VSREG_C_VSREG;
	return 0;
}

/* xxbrw VSREG,VSREG */
int xxbrw_VSREG_VSREG(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_XXBRW;
	/* 111100AAAAA01111BBBBB111011011BA */
	dec->operand_n = 2;
	dec->operand_types[0] = PPC_OPER_TYPE_VSREG;
	dec->operand_values[0] = ((insword & 0x3E00000)>>20)|((insword & 0x1)>>0);
	dec->operand_types[1] = PPC_OPER_TYPE_VSREG;
	dec->operand_values[1] = ((insword & 0xF800)>>10)|((insword & 0x2)>>1);
	dec->operand_fmtstr = PPC_FMTSTR_VSREG_C_VSREG;
	return 0;
}

/* xscvhpdp VSREG,VSREG */
int xscvhpdp_VSREG_VSREG(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_XSCVHPDP;
	/* 111100AAAAA10000BBBBB101011011BA */
	dec->operand_n = 2;
	dec->operand_types[0] = PPC_OPER_TYPE_VSREG;
	dec->operand_values[0] = ((insword & 0x3E00000)>>20)|((insword & 0x1)>>0);
	dec->operand_types[1] = PPC_OPER_TYPE_VSREG;
	dec->operand_values[1] = ((insword & 0xF800)>>10)|((insword & 0x2)>>1);
	dec->operand_fmtstr = PPC_FMTSTR_VSREG_C_VSREG;
	return 0;
}

/* xscvdphp VSREG,VSREG */
int xscvdphp_VSREG_VSREG(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_XSCVDPHP;
	/* 111100AAAAA10001BBBBB101011011BA */
	dec->operand_n = 2;
	dec->operand_types[0] = PPC_OPER_TYPE_VSREG;
	dec->operand_values[0] = ((insword & 0x3E00000)>>20)|((insword & 0x1)>>0);
	dec->operand_types[1] = PPC_OPER_TYPE_VSREG;
	dec->operand_values[1] = ((insword & 0xF800)>>10)|((insword & 0x2)>>1);
	dec->operand_fmtstr = PPC_FMTSTR_VSREG_C_VSREG;
	return 0;
}

/* xxbrd VSREG,VSREG */
int xxbrd_VSREG_VSREG(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_XXBRD;
	/* 111100AAAAA10111BBBBB111011011BA */
	dec->operand_n = 2;
	dec->operand_types[0] = PPC_OPER_TYPE_VSREG;
	dec->operand_values[0] = ((insword & 0x3E00000)>>20)|((insword & 0x1)>>0);
	dec->operand_types[1] = PPC_OPER_TYPE_VSREG;
	dec->operand_values[1] = ((insword & 0xF800)>>10)|((insword & 0x2)>>1);
	dec->operand_fmtstr = PPC_FMTSTR_VSREG_C_VSREG;
	return 0;
}

/* xvcvhpsp VSREG,VSREG */
int xvcvhpsp_VSREG_VSREG(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_XVCVHPSP;
	/* 111100AAAAA11000BBBBB111011011BA */
	dec->operand_n = 2;
	dec->operand_types[0] = PPC_OPER_TYPE_VSREG;
	dec->operand_values[0] = ((insword & 0x3E00000)>>20)|((insword & 0x1)>>0);
	dec->operand_types[1] = PPC_OPER_TYPE_VSREG;
	dec->operand_values[1] = ((insword & 0xF800)>>10)|((insword & 0x2)>>1);
	dec->operand_fmtstr = PPC_FMTSTR_VSREG_C_VSREG;
	return 0;
}

/* xvcvsphp VSREG,VSREG */
int xvcvsphp_VSREG_VSREG(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_XVCVSPHP;
	/* 111100AAAAA11001BBBBB111011011BA */
	dec->operand_n = 2;
	dec->operand_types[0] = PPC_OPER_TYPE_VSREG;
	dec->operand_values[0] = ((insword & 0x3E00000)>>20)|((insword & 0x1)>>0);
	dec->operand_types[1] = PPC_OPER_TYPE_VSREG;
	dec->operand_values[1] = ((insword & 0xF800)>>10)|((insword & 0x2)>>1);
	dec->operand_fmtstr = PPC_FMTSTR_VSREG_C_VSREG;
	return 0;
}

/* xxbrq VSREG,VSREG */
int xxbrq_VSREG_VSREG(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_XXBRQ;
	/* 111100AAAAA11111BBBBB111011011BA */
	dec->operand_n = 2;
	dec->operand_types[0] = PPC_OPER_TYPE_VSREG;
	dec->operand_values[0] = ((insword & 0x3E00000)>>20)|((insword & 0x1)>>0);
	dec->operand_types[1] = PPC_OPER_TYPE_VSREG;
	dec->operand_values[1] = ((insword & 0xF800)>>10)|((insword & 0x2)>>1);
	dec->operand_fmtstr = PPC_FMTSTR_VSREG_C_VSREG;
	return 0;
}

