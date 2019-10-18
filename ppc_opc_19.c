#include "disassembler.h"

/* mcrf CREG,CREG */
int mcrf_CREG_CREG(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_MCRF;
	/* 010011AAA00BBB000000000000000000 */
	dec->operand_n = 2;
	dec->operand_types[0] = PPC_OPER_TYPE_CREG;
	dec->operand_values[0] = (insword & 0x3800000)>>23;
	dec->operand_types[1] = PPC_OPER_TYPE_CREG;
	dec->operand_values[1] = (insword & 0x1C0000)>>18;
	dec->operand_fmtstr = PPC_FMTSTR_CREG_C_CREG;
	return 0;
}

/* lnia GPR */
int lnia_GPR(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_LNIA;
	/* 010011AAAAA000000000000000000100 */
	dec->operand_n = 1;
	dec->operand_types[0] = PPC_OPER_TYPE_GPR;
	dec->operand_values[0] = (insword & 0x3E00000)>>21;
	dec->operand_fmtstr = PPC_FMTSTR_GPR;
	return 0;
}

/* addpcis GPR,NUM */
int addpcis_GPR_NUM(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_ADDPCIS;
	/* 010011AAAAABBBBBBBBBBBBBBB00010B */
	dec->operand_n = 2;
	dec->operand_types[0] = PPC_OPER_TYPE_GPR;
	dec->operand_values[0] = (insword & 0x3E00000)>>21;
	dec->operand_types[1] = PPC_OPER_TYPE_NUM;
	dec->operand_values[1] = ((insword & 0x1FFFC0)>>5)|((insword & 0x1)>>0);
	dec->operand_fmtstr = PPC_FMTSTR_GPR_C_NUM;
	return 0;
}

/* bdnzflr FLAG */
int bdnzflr_FLAG(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_BDNZFLR;
	/* 01001100000000AA0000000000100000 */
	dec->operand_n = 1;
	dec->operand_types[0] = PPC_OPER_TYPE_FLAG;
	dec->operand_values[0] = (insword & 0x30000)>>16;
	dec->operand_fmtstr = PPC_FMTSTR_FLAG;
	return 0;
}

/* bdnzflrl FLAG */
int bdnzflrl_FLAG(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_BDNZFLRL;
	/* 01001100000000AA0000000000100001 */
	dec->operand_n = 1;
	dec->operand_types[0] = PPC_OPER_TYPE_FLAG;
	dec->operand_values[0] = (insword & 0x30000)>>16;
	dec->operand_fmtstr = PPC_FMTSTR_FLAG;
	return 0;
}

/* rfid */
int rfid(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_RFID;
	return 0;
}

/* crnot FLAG,FLAG */
int crnot_FLAG_FLAG(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_CRNOT;
	/* 010011000AA000xx000xx00001000010 */
	dec->operand_n = 2;
	dec->operand_types[0] = PPC_OPER_TYPE_FLAG;
	dec->operand_values[0] = (insword & 0x600000)>>21;
	dec->operand_types[1] = PPC_OPER_TYPE_FLAG;
	dec->operand_fmtstr = PPC_FMTSTR_FLAG_C_FLAG;
	return 0;
}

/* rfmci */
int rfmci(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_RFMCI;
	return 0;
}

/* rfdi */
int rfdi(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_RFDI;
	return 0;
}

/* rfi */
int rfi(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_RFI;
	return 0;
}

/* rfci */
int rfci(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_RFCI;
	return 0;
}

/* rfscv */
int rfscv(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_RFSCV;
	return 0;
}

/* rfgi */
int rfgi(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_RFGI;
	return 0;
}

/* crandc FLAG,FLAG,FLAG */
int crandc_FLAG_FLAG_FLAG(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_CRANDC;
	/* 010011000AA000BB000CC00100000010 */
	dec->operand_n = 3;
	dec->operand_types[0] = PPC_OPER_TYPE_FLAG;
	dec->operand_values[0] = (insword & 0x600000)>>21;
	dec->operand_types[1] = PPC_OPER_TYPE_FLAG;
	dec->operand_values[1] = (insword & 0x30000)>>16;
	dec->operand_types[2] = PPC_OPER_TYPE_FLAG;
	dec->operand_values[2] = (insword & 0x1800)>>11;
	dec->operand_fmtstr = PPC_FMTSTR_FLAG_C_FLAG_C_FLAG;
	return 0;
}

/* rfebb NUM */
int rfebb_NUM(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_RFEBB;
	/* 01001100000000000000000100100100 */
	dec->operand_n = 1;
	dec->operand_types[0] = PPC_OPER_TYPE_NUM;
	dec->operand_fmtstr = PPC_FMTSTR_NUM;
	return 0;
}

/* isync */
int isync(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_ISYNC;
	return 0;
}

/* crclr FLAG */
int crclr_FLAG(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_CRCLR;
	/* 010011000xx000xx000xx00110000010 */
	dec->operand_n = 1;
	dec->operand_types[0] = PPC_OPER_TYPE_FLAG;
	dec->operand_fmtstr = PPC_FMTSTR_FLAG;
	return 0;
}

/* dnh NUM,NUM */
int dnh_NUM_NUM(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_DNH;
	/* 010011AAAAABBBBBBBBBB00110001100 */
	dec->operand_n = 2;
	dec->operand_types[0] = PPC_OPER_TYPE_NUM;
	dec->operand_values[0] = (insword & 0x3E00000)>>21;
	dec->operand_types[1] = PPC_OPER_TYPE_NUM;
	dec->operand_values[1] = (insword & 0x1FF800)>>11;
	dec->operand_fmtstr = PPC_FMTSTR_NUM_C_NUM;
	return 0;
}

/* crnand FLAG,FLAG,FLAG */
int crnand_FLAG_FLAG_FLAG(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_CRNAND;
	/* 010011000AA000BB000CC00111000010 */
	dec->operand_n = 3;
	dec->operand_types[0] = PPC_OPER_TYPE_FLAG;
	dec->operand_values[0] = (insword & 0x600000)>>21;
	dec->operand_types[1] = PPC_OPER_TYPE_FLAG;
	dec->operand_values[1] = (insword & 0x30000)>>16;
	dec->operand_types[2] = PPC_OPER_TYPE_FLAG;
	dec->operand_values[2] = (insword & 0x1800)>>11;
	dec->operand_fmtstr = PPC_FMTSTR_FLAG_C_FLAG_C_FLAG;
	return 0;
}

/* crand FLAG,FLAG,FLAG */
int crand_FLAG_FLAG_FLAG(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_CRAND;
	/* 010011000AA000BB000CC01000000010 */
	dec->operand_n = 3;
	dec->operand_types[0] = PPC_OPER_TYPE_FLAG;
	dec->operand_values[0] = (insword & 0x600000)>>21;
	dec->operand_types[1] = PPC_OPER_TYPE_FLAG;
	dec->operand_values[1] = (insword & 0x30000)>>16;
	dec->operand_types[2] = PPC_OPER_TYPE_FLAG;
	dec->operand_values[2] = (insword & 0x1800)>>11;
	dec->operand_fmtstr = PPC_FMTSTR_FLAG_C_FLAG_C_FLAG;
	return 0;
}

/* hrfid */
int hrfid(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_HRFID;
	return 0;
}

/* crset FLAG */
int crset_FLAG(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_CRSET;
	/* 010011000xx000xx000xx01001000010 */
	dec->operand_n = 1;
	dec->operand_types[0] = PPC_OPER_TYPE_FLAG;
	dec->operand_fmtstr = PPC_FMTSTR_FLAG;
	return 0;
}

/* urfid */
int urfid(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_URFID;
	return 0;
}

/* stop */
int stop(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_STOP;
	return 0;
}

/* doze */
int doze(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_DOZE;
	return 0;
}

/* crorc FLAG,FLAG,FLAG */
int crorc_FLAG_FLAG_FLAG(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_CRORC;
	/* 010011000AA000BB000CC01101000010 */
	dec->operand_n = 3;
	dec->operand_types[0] = PPC_OPER_TYPE_FLAG;
	dec->operand_values[0] = (insword & 0x600000)>>21;
	dec->operand_types[1] = PPC_OPER_TYPE_FLAG;
	dec->operand_values[1] = (insword & 0x30000)>>16;
	dec->operand_types[2] = PPC_OPER_TYPE_FLAG;
	dec->operand_values[2] = (insword & 0x1800)>>11;
	dec->operand_fmtstr = PPC_FMTSTR_FLAG_C_FLAG_C_FLAG;
	return 0;
}

/* nap */
int nap(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_NAP;
	return 0;
}

/* crmove FLAG,FLAG */
int crmove_FLAG_FLAG(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_CRMOVE;
	/* 010011000AA000xx000xx01110000010 */
	dec->operand_n = 2;
	dec->operand_types[0] = PPC_OPER_TYPE_FLAG;
	dec->operand_values[0] = (insword & 0x600000)>>21;
	dec->operand_types[1] = PPC_OPER_TYPE_FLAG;
	dec->operand_fmtstr = PPC_FMTSTR_FLAG_C_FLAG;
	return 0;
}

/* sleep */
int sleep(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_SLEEP;
	return 0;
}

/* rvwinkle */
int rvwinkle(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_RVWINKLE;
	return 0;
}

/* bcctr -NUM,FLAG */
int bcctr_NNUM_FLAG(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_BCCTR;
	/* 010011AAxA0000BB0000010000100000 */
	dec->operand_n = 2;
	dec->operand_types[0] = PPC_OPER_TYPE_NUM;
	dec->operand_values[0] = ((insword & 0x3000000)>>23)|((insword & 0x400000)>>22);
	dec->operand_types[1] = PPC_OPER_TYPE_FLAG;
	dec->operand_values[1] = (insword & 0x30000)>>16;
	dec->operand_fmtstr = PPC_FMTSTR__NEG_NUM_C_FLAG;
	return 0;
}

/* bcctrl -NUM,FLAG */
int bcctrl_NNUM_FLAG(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_BCCTRL;
	/* 010011AAxA0000BB0000010000100001 */
	dec->operand_n = 2;
	dec->operand_types[0] = PPC_OPER_TYPE_NUM;
	dec->operand_values[0] = ((insword & 0x3000000)>>23)|((insword & 0x400000)>>22);
	dec->operand_types[1] = PPC_OPER_TYPE_FLAG;
	dec->operand_values[1] = (insword & 0x30000)>>16;
	dec->operand_fmtstr = PPC_FMTSTR__NEG_NUM_C_FLAG;
	return 0;
}

/* bctar -NUM,FLAG */
int bctar_NNUM_FLAG(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_BCTAR;
	/* 010011xAAA0000BB0000010001100000 */
	dec->operand_n = 2;
	dec->operand_types[0] = PPC_OPER_TYPE_NUM;
	dec->operand_values[0] = (insword & 0x1C00000)>>22;
	dec->operand_types[1] = PPC_OPER_TYPE_FLAG;
	dec->operand_values[1] = (insword & 0x30000)>>16;
	dec->operand_fmtstr = PPC_FMTSTR__NEG_NUM_C_FLAG;
	return 0;
}

/* bctarl -NUM,FLAG */
int bctarl_NNUM_FLAG(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_BCTARL;
	/* 010011AAAA0000BB0000010001100001 */
	dec->operand_n = 2;
	dec->operand_types[0] = PPC_OPER_TYPE_NUM;
	dec->operand_values[0] = (insword & 0x3C00000)>>22;
	dec->operand_types[1] = PPC_OPER_TYPE_FLAG;
	dec->operand_values[1] = (insword & 0x30000)>>16;
	dec->operand_fmtstr = PPC_FMTSTR__NEG_NUM_C_FLAG;
	return 0;
}

/* bclr NUM,FLAG,NUM */
int bclr_NUM_FLAG_NUM(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_BCLR;
	/* 010011AxAxx000BB000Cx00000100000 */
	dec->operand_n = 3;
	dec->operand_types[0] = PPC_OPER_TYPE_NUM;
	dec->operand_values[0] = ((insword & 0x2000000)>>24)|((insword & 0x800000)>>23);
	dec->operand_types[1] = PPC_OPER_TYPE_FLAG;
	dec->operand_values[1] = (insword & 0x30000)>>16;
	dec->operand_types[2] = PPC_OPER_TYPE_NUM;
	dec->operand_values[2] = (insword & 0x1000)>>12;
	dec->operand_fmtstr = PPC_FMTSTR_NUM_C_FLAG_C_NUM;
	return 0;
}

/* bclrl NUM,FLAG,NUM */
int bclrl_NUM_FLAG_NUM(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_BCLRL;
	/* 010011xAxAA000BB000xC00000100001 */
	dec->operand_n = 3;
	dec->operand_types[0] = PPC_OPER_TYPE_NUM;
	dec->operand_values[0] = ((insword & 0x1000000)>>22)|((insword & 0x600000)>>21);
	dec->operand_types[1] = PPC_OPER_TYPE_FLAG;
	dec->operand_values[1] = (insword & 0x30000)>>16;
	dec->operand_types[2] = PPC_OPER_TYPE_NUM;
	dec->operand_values[2] = (insword & 0x800)>>11;
	dec->operand_fmtstr = PPC_FMTSTR_NUM_C_FLAG_C_NUM;
	return 0;
}

/* crnor FLAG,FLAG,FLAG */
int crnor_FLAG_FLAG_FLAG(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_CRNOR;
	/* 010011000AA000xB000xC00001000010 */
	dec->operand_n = 3;
	dec->operand_types[0] = PPC_OPER_TYPE_FLAG;
	dec->operand_values[0] = (insword & 0x600000)>>21;
	dec->operand_types[1] = PPC_OPER_TYPE_FLAG;
	dec->operand_values[1] = (insword & 0x10000)>>16;
	dec->operand_types[2] = PPC_OPER_TYPE_FLAG;
	dec->operand_values[2] = (insword & 0x800)>>11;
	dec->operand_fmtstr = PPC_FMTSTR_FLAG_C_FLAG_C_FLAG;
	return 0;
}

/* rfebb */
int rfebb(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_RFEBB;
	return 0;
}

/* crxor FLAG,FLAG,FLAG */
int crxor_FLAG_FLAG_FLAG(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_CRXOR;
	/* 010011000AA000xB000CC00110000010 */
	dec->operand_n = 3;
	dec->operand_types[0] = PPC_OPER_TYPE_FLAG;
	dec->operand_values[0] = (insword & 0x600000)>>21;
	dec->operand_types[1] = PPC_OPER_TYPE_FLAG;
	dec->operand_values[1] = (insword & 0x10000)>>16;
	dec->operand_types[2] = PPC_OPER_TYPE_FLAG;
	dec->operand_values[2] = (insword & 0x1800)>>11;
	dec->operand_fmtstr = PPC_FMTSTR_FLAG_C_FLAG_C_FLAG;
	return 0;
}

/* creqv FLAG,FLAG,FLAG */
int creqv_FLAG_FLAG_FLAG(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_CREQV;
	/* 010011000AA000BB000CC01001000010 */
	dec->operand_n = 3;
	dec->operand_types[0] = PPC_OPER_TYPE_FLAG;
	dec->operand_values[0] = (insword & 0x600000)>>21;
	dec->operand_types[1] = PPC_OPER_TYPE_FLAG;
	dec->operand_values[1] = (insword & 0x30000)>>16;
	dec->operand_types[2] = PPC_OPER_TYPE_FLAG;
	dec->operand_values[2] = (insword & 0x1800)>>11;
	dec->operand_fmtstr = PPC_FMTSTR_FLAG_C_FLAG_C_FLAG;
	return 0;
}

/* cror FLAG,FLAG,FLAG */
int cror_FLAG_FLAG_FLAG(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_CROR;
	/* 010011000AA000Bx000Cx01110000010 */
	dec->operand_n = 3;
	dec->operand_types[0] = PPC_OPER_TYPE_FLAG;
	dec->operand_values[0] = (insword & 0x600000)>>21;
	dec->operand_types[1] = PPC_OPER_TYPE_FLAG;
	dec->operand_values[1] = (insword & 0x20000)>>17;
	dec->operand_types[2] = PPC_OPER_TYPE_FLAG;
	dec->operand_values[2] = (insword & 0x1000)>>12;
	dec->operand_fmtstr = PPC_FMTSTR_FLAG_C_FLAG_C_FLAG;
	return 0;
}

/* bcctr NUM,FLAG,NUM */
int bcctr_NUM_FLAG_NUM(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_BCCTR;
	/* 010011AAAAA000BB000CC10000100000 */
	dec->operand_n = 3;
	dec->operand_types[0] = PPC_OPER_TYPE_NUM;
	dec->operand_values[0] = (insword & 0x3E00000)>>21;
	dec->operand_types[1] = PPC_OPER_TYPE_FLAG;
	dec->operand_values[1] = (insword & 0x30000)>>16;
	dec->operand_types[2] = PPC_OPER_TYPE_NUM;
	dec->operand_values[2] = (insword & 0x1800)>>11;
	dec->operand_fmtstr = PPC_FMTSTR_NUM_C_FLAG_C_NUM;
	return 0;
}

/* bcctrl NUM,FLAG,NUM */
int bcctrl_NUM_FLAG_NUM(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_BCCTRL;
	/* 010011AAxAA000BB000CC10000100001 */
	dec->operand_n = 3;
	dec->operand_types[0] = PPC_OPER_TYPE_NUM;
	dec->operand_values[0] = ((insword & 0x3000000)>>22)|((insword & 0x600000)>>21);
	dec->operand_types[1] = PPC_OPER_TYPE_FLAG;
	dec->operand_values[1] = (insword & 0x30000)>>16;
	dec->operand_types[2] = PPC_OPER_TYPE_NUM;
	dec->operand_values[2] = (insword & 0x1800)>>11;
	dec->operand_fmtstr = PPC_FMTSTR_NUM_C_FLAG_C_NUM;
	return 0;
}

/* bctar NUM,FLAG,NUM */
int bctar_NUM_FLAG_NUM(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_BCTAR;
	/* 010011AAAAx000BB000xC10001100000 */
	dec->operand_n = 3;
	dec->operand_types[0] = PPC_OPER_TYPE_NUM;
	dec->operand_values[0] = (insword & 0x3C00000)>>22;
	dec->operand_types[1] = PPC_OPER_TYPE_FLAG;
	dec->operand_values[1] = (insword & 0x30000)>>16;
	dec->operand_types[2] = PPC_OPER_TYPE_NUM;
	dec->operand_values[2] = (insword & 0x800)>>11;
	dec->operand_fmtstr = PPC_FMTSTR_NUM_C_FLAG_C_NUM;
	return 0;
}

/* bctarl NUM,FLAG,NUM */
int bctarl_NUM_FLAG_NUM(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_BCTARL;
	/* 010011AAAAA000BB000CC10001100001 */
	dec->operand_n = 3;
	dec->operand_types[0] = PPC_OPER_TYPE_NUM;
	dec->operand_values[0] = (insword & 0x3E00000)>>21;
	dec->operand_types[1] = PPC_OPER_TYPE_FLAG;
	dec->operand_values[1] = (insword & 0x30000)>>16;
	dec->operand_types[2] = PPC_OPER_TYPE_NUM;
	dec->operand_values[2] = (insword & 0x1800)>>11;
	dec->operand_fmtstr = PPC_FMTSTR_NUM_C_FLAG_C_NUM;
	return 0;
}

/* crnor FLAG,FLAG,NUM*CREG+FLAG */
int crnor_FLAG_FLAG_NUM_CREGPFLAG(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_CRNOR;
	/* 010011000AA000BBDDDEE00001000010 */
	dec->operand_n = 5;
	dec->operand_types[0] = PPC_OPER_TYPE_FLAG;
	dec->operand_values[0] = (insword & 0x600000)>>21;
	dec->operand_types[1] = PPC_OPER_TYPE_FLAG;
	dec->operand_values[1] = (insword & 0x30000)>>16;
	dec->operand_types[2] = PPC_OPER_TYPE_NUM;
	dec->operand_types[3] = PPC_OPER_TYPE_CREG;
	dec->operand_values[3] = (insword & 0xE000)>>13;
	dec->operand_types[4] = PPC_OPER_TYPE_FLAG;
	dec->operand_values[4] = (insword & 0x1800)>>11;
	dec->operand_fmtstr = PPC_FMTSTR_FLAG_C_FLAG_C_NUM_MUL_CREG_POS_FLAG;
	return 0;
}

/* crandc FLAG,FLAG,NUM*CREG+FLAG */
int crandc_FLAG_FLAG_NUM_CREGPFLAG(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_CRANDC;
	/* 010011000AA000BBDDxEE00100000010 */
	dec->operand_n = 5;
	dec->operand_types[0] = PPC_OPER_TYPE_FLAG;
	dec->operand_values[0] = (insword & 0x600000)>>21;
	dec->operand_types[1] = PPC_OPER_TYPE_FLAG;
	dec->operand_values[1] = (insword & 0x30000)>>16;
	dec->operand_types[2] = PPC_OPER_TYPE_NUM;
	dec->operand_types[3] = PPC_OPER_TYPE_CREG;
	dec->operand_values[3] = (insword & 0xC000)>>14;
	dec->operand_types[4] = PPC_OPER_TYPE_FLAG;
	dec->operand_values[4] = (insword & 0x1800)>>11;
	dec->operand_fmtstr = PPC_FMTSTR_FLAG_C_FLAG_C_NUM_MUL_CREG_POS_FLAG;
	return 0;
}

/* crxor FLAG,FLAG,NUM*CREG+FLAG */
int crxor_FLAG_FLAG_NUM_CREGPFLAG(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_CRXOR;
	/* 010011000AA000BBDDDEE00110000010 */
	dec->operand_n = 5;
	dec->operand_types[0] = PPC_OPER_TYPE_FLAG;
	dec->operand_values[0] = (insword & 0x600000)>>21;
	dec->operand_types[1] = PPC_OPER_TYPE_FLAG;
	dec->operand_values[1] = (insword & 0x30000)>>16;
	dec->operand_types[2] = PPC_OPER_TYPE_NUM;
	dec->operand_types[3] = PPC_OPER_TYPE_CREG;
	dec->operand_values[3] = (insword & 0xE000)>>13;
	dec->operand_types[4] = PPC_OPER_TYPE_FLAG;
	dec->operand_values[4] = (insword & 0x1800)>>11;
	dec->operand_fmtstr = PPC_FMTSTR_FLAG_C_FLAG_C_NUM_MUL_CREG_POS_FLAG;
	return 0;
}

/* crnand FLAG,FLAG,NUM*CREG+FLAG */
int crnand_FLAG_FLAG_NUM_CREGPFLAG(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_CRNAND;
	/* 010011000AA000BBDDxEE00111000010 */
	dec->operand_n = 5;
	dec->operand_types[0] = PPC_OPER_TYPE_FLAG;
	dec->operand_values[0] = (insword & 0x600000)>>21;
	dec->operand_types[1] = PPC_OPER_TYPE_FLAG;
	dec->operand_values[1] = (insword & 0x30000)>>16;
	dec->operand_types[2] = PPC_OPER_TYPE_NUM;
	dec->operand_types[3] = PPC_OPER_TYPE_CREG;
	dec->operand_values[3] = (insword & 0xC000)>>14;
	dec->operand_types[4] = PPC_OPER_TYPE_FLAG;
	dec->operand_values[4] = (insword & 0x1800)>>11;
	dec->operand_fmtstr = PPC_FMTSTR_FLAG_C_FLAG_C_NUM_MUL_CREG_POS_FLAG;
	return 0;
}

/* crand FLAG,FLAG,NUM*CREG+FLAG */
int crand_FLAG_FLAG_NUM_CREGPFLAG(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_CRAND;
	/* 010011000AA000BBxDDEE01000000010 */
	dec->operand_n = 5;
	dec->operand_types[0] = PPC_OPER_TYPE_FLAG;
	dec->operand_values[0] = (insword & 0x600000)>>21;
	dec->operand_types[1] = PPC_OPER_TYPE_FLAG;
	dec->operand_values[1] = (insword & 0x30000)>>16;
	dec->operand_types[2] = PPC_OPER_TYPE_NUM;
	dec->operand_types[3] = PPC_OPER_TYPE_CREG;
	dec->operand_values[3] = (insword & 0x6000)>>13;
	dec->operand_types[4] = PPC_OPER_TYPE_FLAG;
	dec->operand_values[4] = (insword & 0x1800)>>11;
	dec->operand_fmtstr = PPC_FMTSTR_FLAG_C_FLAG_C_NUM_MUL_CREG_POS_FLAG;
	return 0;
}

/* creqv FLAG,FLAG,NUM*CREG+FLAG */
int creqv_FLAG_FLAG_NUM_CREGPFLAG(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_CREQV;
	/* 010011000AA000BBxDDEE01001000010 */
	dec->operand_n = 5;
	dec->operand_types[0] = PPC_OPER_TYPE_FLAG;
	dec->operand_values[0] = (insword & 0x600000)>>21;
	dec->operand_types[1] = PPC_OPER_TYPE_FLAG;
	dec->operand_values[1] = (insword & 0x30000)>>16;
	dec->operand_types[2] = PPC_OPER_TYPE_NUM;
	dec->operand_types[3] = PPC_OPER_TYPE_CREG;
	dec->operand_values[3] = (insword & 0x6000)>>13;
	dec->operand_types[4] = PPC_OPER_TYPE_FLAG;
	dec->operand_values[4] = (insword & 0x1800)>>11;
	dec->operand_fmtstr = PPC_FMTSTR_FLAG_C_FLAG_C_NUM_MUL_CREG_POS_FLAG;
	return 0;
}

/* crorc FLAG,FLAG,NUM*CREG+FLAG */
int crorc_FLAG_FLAG_NUM_CREGPFLAG(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_CRORC;
	/* 010011000AA000BBDDDEE01101000010 */
	dec->operand_n = 5;
	dec->operand_types[0] = PPC_OPER_TYPE_FLAG;
	dec->operand_values[0] = (insword & 0x600000)>>21;
	dec->operand_types[1] = PPC_OPER_TYPE_FLAG;
	dec->operand_values[1] = (insword & 0x30000)>>16;
	dec->operand_types[2] = PPC_OPER_TYPE_NUM;
	dec->operand_types[3] = PPC_OPER_TYPE_CREG;
	dec->operand_values[3] = (insword & 0xE000)>>13;
	dec->operand_types[4] = PPC_OPER_TYPE_FLAG;
	dec->operand_values[4] = (insword & 0x1800)>>11;
	dec->operand_fmtstr = PPC_FMTSTR_FLAG_C_FLAG_C_NUM_MUL_CREG_POS_FLAG;
	return 0;
}

/* cror FLAG,FLAG,NUM*CREG+FLAG */
int cror_FLAG_FLAG_NUM_CREGPFLAG(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_CROR;
	/* 010011000AA000BBDDDEE01110000010 */
	dec->operand_n = 5;
	dec->operand_types[0] = PPC_OPER_TYPE_FLAG;
	dec->operand_values[0] = (insword & 0x600000)>>21;
	dec->operand_types[1] = PPC_OPER_TYPE_FLAG;
	dec->operand_values[1] = (insword & 0x30000)>>16;
	dec->operand_types[2] = PPC_OPER_TYPE_NUM;
	dec->operand_types[3] = PPC_OPER_TYPE_CREG;
	dec->operand_values[3] = (insword & 0xE000)>>13;
	dec->operand_types[4] = PPC_OPER_TYPE_FLAG;
	dec->operand_values[4] = (insword & 0x1800)>>11;
	dec->operand_fmtstr = PPC_FMTSTR_FLAG_C_FLAG_C_NUM_MUL_CREG_POS_FLAG;
	return 0;
}

/* bdnzflr NUM*CREG+FLAG */
int bdnzflr_NUM_CREGPFLAG(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_BDNZFLR;
	/* 01001100000BBBCC0000000000100000 */
	dec->operand_n = 3;
	dec->operand_types[0] = PPC_OPER_TYPE_NUM;
	dec->operand_types[1] = PPC_OPER_TYPE_CREG;
	dec->operand_values[1] = (insword & 0x1C0000)>>18;
	dec->operand_types[2] = PPC_OPER_TYPE_FLAG;
	dec->operand_values[2] = (insword & 0x30000)>>16;
	dec->operand_fmtstr = PPC_FMTSTR_NUM_MUL_CREG_POS_FLAG;
	return 0;
}

/* bdnzflrl NUM*CREG+FLAG */
int bdnzflrl_NUM_CREGPFLAG(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_BDNZFLRL;
	/* 01001100000xBBCC0000000000100001 */
	dec->operand_n = 3;
	dec->operand_types[0] = PPC_OPER_TYPE_NUM;
	dec->operand_types[1] = PPC_OPER_TYPE_CREG;
	dec->operand_values[1] = (insword & 0xC0000)>>18;
	dec->operand_types[2] = PPC_OPER_TYPE_FLAG;
	dec->operand_values[2] = (insword & 0x30000)>>16;
	dec->operand_fmtstr = PPC_FMTSTR_NUM_MUL_CREG_POS_FLAG;
	return 0;
}

/* crnor FLAG,NUM*CREG+FLAG,FLAG */
int crnor_FLAG_NUM_CREGPFLAG_FLAG(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_CRNOR;
	/* 010011000AACxCDD000EE00001000010 */
	dec->operand_n = 5;
	dec->operand_types[0] = PPC_OPER_TYPE_FLAG;
	dec->operand_values[0] = (insword & 0x600000)>>21;
	dec->operand_types[1] = PPC_OPER_TYPE_NUM;
	dec->operand_types[2] = PPC_OPER_TYPE_CREG;
	dec->operand_values[2] = ((insword & 0x100000)>>19)|((insword & 0x40000)>>18);
	dec->operand_types[3] = PPC_OPER_TYPE_FLAG;
	dec->operand_values[3] = (insword & 0x30000)>>16;
	dec->operand_types[4] = PPC_OPER_TYPE_FLAG;
	dec->operand_values[4] = (insword & 0x1800)>>11;
	dec->operand_fmtstr = PPC_FMTSTR_FLAG_C_NUM_MUL_CREG_POS_FLAG_C_FLAG;
	return 0;
}

/* crandc FLAG,NUM*CREG+FLAG,FLAG */
int crandc_FLAG_NUM_CREGPFLAG_FLAG(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_CRANDC;
	/* 010011000AAxCCDD000EE00100000010 */
	dec->operand_n = 5;
	dec->operand_types[0] = PPC_OPER_TYPE_FLAG;
	dec->operand_values[0] = (insword & 0x600000)>>21;
	dec->operand_types[1] = PPC_OPER_TYPE_NUM;
	dec->operand_types[2] = PPC_OPER_TYPE_CREG;
	dec->operand_values[2] = (insword & 0xC0000)>>18;
	dec->operand_types[3] = PPC_OPER_TYPE_FLAG;
	dec->operand_values[3] = (insword & 0x30000)>>16;
	dec->operand_types[4] = PPC_OPER_TYPE_FLAG;
	dec->operand_values[4] = (insword & 0x1800)>>11;
	dec->operand_fmtstr = PPC_FMTSTR_FLAG_C_NUM_MUL_CREG_POS_FLAG_C_FLAG;
	return 0;
}

/* crxor FLAG,NUM*CREG+FLAG,FLAG */
int crxor_FLAG_NUM_CREGPFLAG_FLAG(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_CRXOR;
	/* 010011000AACCxDD000EE00110000010 */
	dec->operand_n = 5;
	dec->operand_types[0] = PPC_OPER_TYPE_FLAG;
	dec->operand_values[0] = (insword & 0x600000)>>21;
	dec->operand_types[1] = PPC_OPER_TYPE_NUM;
	dec->operand_types[2] = PPC_OPER_TYPE_CREG;
	dec->operand_values[2] = (insword & 0x180000)>>19;
	dec->operand_types[3] = PPC_OPER_TYPE_FLAG;
	dec->operand_values[3] = (insword & 0x30000)>>16;
	dec->operand_types[4] = PPC_OPER_TYPE_FLAG;
	dec->operand_values[4] = (insword & 0x1800)>>11;
	dec->operand_fmtstr = PPC_FMTSTR_FLAG_C_NUM_MUL_CREG_POS_FLAG_C_FLAG;
	return 0;
}

/* crnand FLAG,NUM*CREG+FLAG,FLAG */
int crnand_FLAG_NUM_CREGPFLAG_FLAG(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_CRNAND;
	/* 010011000AACCCDD000EE00111000010 */
	dec->operand_n = 5;
	dec->operand_types[0] = PPC_OPER_TYPE_FLAG;
	dec->operand_values[0] = (insword & 0x600000)>>21;
	dec->operand_types[1] = PPC_OPER_TYPE_NUM;
	dec->operand_types[2] = PPC_OPER_TYPE_CREG;
	dec->operand_values[2] = (insword & 0x1C0000)>>18;
	dec->operand_types[3] = PPC_OPER_TYPE_FLAG;
	dec->operand_values[3] = (insword & 0x30000)>>16;
	dec->operand_types[4] = PPC_OPER_TYPE_FLAG;
	dec->operand_values[4] = (insword & 0x1800)>>11;
	dec->operand_fmtstr = PPC_FMTSTR_FLAG_C_NUM_MUL_CREG_POS_FLAG_C_FLAG;
	return 0;
}

/* crand FLAG,NUM*CREG+FLAG,FLAG */
int crand_FLAG_NUM_CREGPFLAG_FLAG(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_CRAND;
	/* 010011000AACCCDD000EE01000000010 */
	dec->operand_n = 5;
	dec->operand_types[0] = PPC_OPER_TYPE_FLAG;
	dec->operand_values[0] = (insword & 0x600000)>>21;
	dec->operand_types[1] = PPC_OPER_TYPE_NUM;
	dec->operand_types[2] = PPC_OPER_TYPE_CREG;
	dec->operand_values[2] = (insword & 0x1C0000)>>18;
	dec->operand_types[3] = PPC_OPER_TYPE_FLAG;
	dec->operand_values[3] = (insword & 0x30000)>>16;
	dec->operand_types[4] = PPC_OPER_TYPE_FLAG;
	dec->operand_values[4] = (insword & 0x1800)>>11;
	dec->operand_fmtstr = PPC_FMTSTR_FLAG_C_NUM_MUL_CREG_POS_FLAG_C_FLAG;
	return 0;
}

/* creqv FLAG,NUM*CREG+FLAG,FLAG */
int creqv_FLAG_NUM_CREGPFLAG_FLAG(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_CREQV;
	/* 010011000AAxCCDD000EE01001000010 */
	dec->operand_n = 5;
	dec->operand_types[0] = PPC_OPER_TYPE_FLAG;
	dec->operand_values[0] = (insword & 0x600000)>>21;
	dec->operand_types[1] = PPC_OPER_TYPE_NUM;
	dec->operand_types[2] = PPC_OPER_TYPE_CREG;
	dec->operand_values[2] = (insword & 0xC0000)>>18;
	dec->operand_types[3] = PPC_OPER_TYPE_FLAG;
	dec->operand_values[3] = (insword & 0x30000)>>16;
	dec->operand_types[4] = PPC_OPER_TYPE_FLAG;
	dec->operand_values[4] = (insword & 0x1800)>>11;
	dec->operand_fmtstr = PPC_FMTSTR_FLAG_C_NUM_MUL_CREG_POS_FLAG_C_FLAG;
	return 0;
}

/* crorc FLAG,NUM*CREG+FLAG,FLAG */
int crorc_FLAG_NUM_CREGPFLAG_FLAG(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_CRORC;
	/* 010011000AACCCDD000EE01101000010 */
	dec->operand_n = 5;
	dec->operand_types[0] = PPC_OPER_TYPE_FLAG;
	dec->operand_values[0] = (insword & 0x600000)>>21;
	dec->operand_types[1] = PPC_OPER_TYPE_NUM;
	dec->operand_types[2] = PPC_OPER_TYPE_CREG;
	dec->operand_values[2] = (insword & 0x1C0000)>>18;
	dec->operand_types[3] = PPC_OPER_TYPE_FLAG;
	dec->operand_values[3] = (insword & 0x30000)>>16;
	dec->operand_types[4] = PPC_OPER_TYPE_FLAG;
	dec->operand_values[4] = (insword & 0x1800)>>11;
	dec->operand_fmtstr = PPC_FMTSTR_FLAG_C_NUM_MUL_CREG_POS_FLAG_C_FLAG;
	return 0;
}

/* cror FLAG,NUM*CREG+FLAG,FLAG */
int cror_FLAG_NUM_CREGPFLAG_FLAG(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_CROR;
	/* 010011000AACCCDD000EE01110000010 */
	dec->operand_n = 5;
	dec->operand_types[0] = PPC_OPER_TYPE_FLAG;
	dec->operand_values[0] = (insword & 0x600000)>>21;
	dec->operand_types[1] = PPC_OPER_TYPE_NUM;
	dec->operand_types[2] = PPC_OPER_TYPE_CREG;
	dec->operand_values[2] = (insword & 0x1C0000)>>18;
	dec->operand_types[3] = PPC_OPER_TYPE_FLAG;
	dec->operand_values[3] = (insword & 0x30000)>>16;
	dec->operand_types[4] = PPC_OPER_TYPE_FLAG;
	dec->operand_values[4] = (insword & 0x1800)>>11;
	dec->operand_fmtstr = PPC_FMTSTR_FLAG_C_NUM_MUL_CREG_POS_FLAG_C_FLAG;
	return 0;
}

/* bcctr -NUM,NUM*CREG+FLAG */
int bcctr_NNUM_NUM_CREGPFLAG(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_BCCTR;
	/* 010011AAAA0CCCDD0000010000100000 */
	dec->operand_n = 4;
	dec->operand_types[0] = PPC_OPER_TYPE_NUM;
	dec->operand_values[0] = (insword & 0x3C00000)>>22;
	dec->operand_types[1] = PPC_OPER_TYPE_NUM;
	dec->operand_types[2] = PPC_OPER_TYPE_CREG;
	dec->operand_values[2] = (insword & 0x1C0000)>>18;
	dec->operand_types[3] = PPC_OPER_TYPE_FLAG;
	dec->operand_values[3] = (insword & 0x30000)>>16;
	dec->operand_fmtstr = PPC_FMTSTR__NEG_NUM_C_NUM_MUL_CREG_POS_FLAG;
	return 0;
}

/* bcctrl -NUM,NUM*CREG+FLAG */
int bcctrl_NNUM_NUM_CREGPFLAG(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_BCCTRL;
	/* 010011AAxA0CCxDD0000010000100001 */
	dec->operand_n = 4;
	dec->operand_types[0] = PPC_OPER_TYPE_NUM;
	dec->operand_values[0] = ((insword & 0x3000000)>>23)|((insword & 0x400000)>>22);
	dec->operand_types[1] = PPC_OPER_TYPE_NUM;
	dec->operand_types[2] = PPC_OPER_TYPE_CREG;
	dec->operand_values[2] = (insword & 0x180000)>>19;
	dec->operand_types[3] = PPC_OPER_TYPE_FLAG;
	dec->operand_values[3] = (insword & 0x30000)>>16;
	dec->operand_fmtstr = PPC_FMTSTR__NEG_NUM_C_NUM_MUL_CREG_POS_FLAG;
	return 0;
}

/* bctar -NUM,NUM*CREG+FLAG */
int bctar_NNUM_NUM_CREGPFLAG(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_BCTAR;
	/* 010011AAAA0CCxDD0000010001100000 */
	dec->operand_n = 4;
	dec->operand_types[0] = PPC_OPER_TYPE_NUM;
	dec->operand_values[0] = (insword & 0x3C00000)>>22;
	dec->operand_types[1] = PPC_OPER_TYPE_NUM;
	dec->operand_types[2] = PPC_OPER_TYPE_CREG;
	dec->operand_values[2] = (insword & 0x180000)>>19;
	dec->operand_types[3] = PPC_OPER_TYPE_FLAG;
	dec->operand_values[3] = (insword & 0x30000)>>16;
	dec->operand_fmtstr = PPC_FMTSTR__NEG_NUM_C_NUM_MUL_CREG_POS_FLAG;
	return 0;
}

/* bctarl -NUM,NUM*CREG+FLAG */
int bctarl_NNUM_NUM_CREGPFLAG(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_BCTARL;
	/* 010011xAAA0CCxDD0000010001100001 */
	dec->operand_n = 4;
	dec->operand_types[0] = PPC_OPER_TYPE_NUM;
	dec->operand_values[0] = (insword & 0x1C00000)>>22;
	dec->operand_types[1] = PPC_OPER_TYPE_NUM;
	dec->operand_types[2] = PPC_OPER_TYPE_CREG;
	dec->operand_values[2] = (insword & 0x180000)>>19;
	dec->operand_types[3] = PPC_OPER_TYPE_FLAG;
	dec->operand_values[3] = (insword & 0x30000)>>16;
	dec->operand_fmtstr = PPC_FMTSTR__NEG_NUM_C_NUM_MUL_CREG_POS_FLAG;
	return 0;
}

/* bclr NUM,NUM*CREG+FLAG,NUM */
int bclr_NUM_NUM_CREGPFLAG_NUM(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_BCLR;
	/* 010011AAAAxCCxDD000xE00000100000 */
	dec->operand_n = 5;
	dec->operand_types[0] = PPC_OPER_TYPE_NUM;
	dec->operand_values[0] = (insword & 0x3C00000)>>22;
	dec->operand_types[1] = PPC_OPER_TYPE_NUM;
	dec->operand_types[2] = PPC_OPER_TYPE_CREG;
	dec->operand_values[2] = (insword & 0x180000)>>19;
	dec->operand_types[3] = PPC_OPER_TYPE_FLAG;
	dec->operand_values[3] = (insword & 0x30000)>>16;
	dec->operand_types[4] = PPC_OPER_TYPE_NUM;
	dec->operand_values[4] = (insword & 0x800)>>11;
	dec->operand_fmtstr = PPC_FMTSTR_NUM_C_NUM_MUL_CREG_POS_FLAG_C_NUM;
	return 0;
}

/* bclrl NUM,NUM*CREG+FLAG,NUM */
int bclrl_NUM_NUM_CREGPFLAG_NUM(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_BCLRL;
	/* 010011AAAAxxCCDD000xE00000100001 */
	dec->operand_n = 5;
	dec->operand_types[0] = PPC_OPER_TYPE_NUM;
	dec->operand_values[0] = (insword & 0x3C00000)>>22;
	dec->operand_types[1] = PPC_OPER_TYPE_NUM;
	dec->operand_types[2] = PPC_OPER_TYPE_CREG;
	dec->operand_values[2] = (insword & 0xC0000)>>18;
	dec->operand_types[3] = PPC_OPER_TYPE_FLAG;
	dec->operand_values[3] = (insword & 0x30000)>>16;
	dec->operand_types[4] = PPC_OPER_TYPE_NUM;
	dec->operand_values[4] = (insword & 0x800)>>11;
	dec->operand_fmtstr = PPC_FMTSTR_NUM_C_NUM_MUL_CREG_POS_FLAG_C_NUM;
	return 0;
}

/* bcctr NUM,NUM*CREG+FLAG,NUM */
int bcctr_NUM_NUM_CREGPFLAG_NUM(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_BCCTR;
	/* 010011AAxAACCCDD000EE10000100000 */
	dec->operand_n = 5;
	dec->operand_types[0] = PPC_OPER_TYPE_NUM;
	dec->operand_values[0] = ((insword & 0x3000000)>>22)|((insword & 0x600000)>>21);
	dec->operand_types[1] = PPC_OPER_TYPE_NUM;
	dec->operand_types[2] = PPC_OPER_TYPE_CREG;
	dec->operand_values[2] = (insword & 0x1C0000)>>18;
	dec->operand_types[3] = PPC_OPER_TYPE_FLAG;
	dec->operand_values[3] = (insword & 0x30000)>>16;
	dec->operand_types[4] = PPC_OPER_TYPE_NUM;
	dec->operand_values[4] = (insword & 0x1800)>>11;
	dec->operand_fmtstr = PPC_FMTSTR_NUM_C_NUM_MUL_CREG_POS_FLAG_C_NUM;
	return 0;
}

/* bcctrl NUM,NUM*CREG+FLAG,NUM */
int bcctrl_NUM_NUM_CREGPFLAG_NUM(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_BCCTRL;
	/* 010011xAAAACCxDD000Ex10000100001 */
	dec->operand_n = 5;
	dec->operand_types[0] = PPC_OPER_TYPE_NUM;
	dec->operand_values[0] = (insword & 0x1E00000)>>21;
	dec->operand_types[1] = PPC_OPER_TYPE_NUM;
	dec->operand_types[2] = PPC_OPER_TYPE_CREG;
	dec->operand_values[2] = (insword & 0x180000)>>19;
	dec->operand_types[3] = PPC_OPER_TYPE_FLAG;
	dec->operand_values[3] = (insword & 0x30000)>>16;
	dec->operand_types[4] = PPC_OPER_TYPE_NUM;
	dec->operand_values[4] = (insword & 0x1000)>>12;
	dec->operand_fmtstr = PPC_FMTSTR_NUM_C_NUM_MUL_CREG_POS_FLAG_C_NUM;
	return 0;
}

/* bctar NUM,NUM*CREG+FLAG,NUM */
int bctar_NUM_NUM_CREGPFLAG_NUM(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_BCTAR;
	/* 010011AAxAAxCCDD000Ex10001100000 */
	dec->operand_n = 5;
	dec->operand_types[0] = PPC_OPER_TYPE_NUM;
	dec->operand_values[0] = ((insword & 0x3000000)>>22)|((insword & 0x600000)>>21);
	dec->operand_types[1] = PPC_OPER_TYPE_NUM;
	dec->operand_types[2] = PPC_OPER_TYPE_CREG;
	dec->operand_values[2] = (insword & 0xC0000)>>18;
	dec->operand_types[3] = PPC_OPER_TYPE_FLAG;
	dec->operand_values[3] = (insword & 0x30000)>>16;
	dec->operand_types[4] = PPC_OPER_TYPE_NUM;
	dec->operand_values[4] = (insword & 0x1000)>>12;
	dec->operand_fmtstr = PPC_FMTSTR_NUM_C_NUM_MUL_CREG_POS_FLAG_C_NUM;
	return 0;
}

/* bctarl NUM,NUM*CREG+FLAG,NUM */
int bctarl_NUM_NUM_CREGPFLAG_NUM(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_BCTARL;
	/* 010011xAxAACCCDD000Ex10001100001 */
	dec->operand_n = 5;
	dec->operand_types[0] = PPC_OPER_TYPE_NUM;
	dec->operand_values[0] = ((insword & 0x1000000)>>22)|((insword & 0x600000)>>21);
	dec->operand_types[1] = PPC_OPER_TYPE_NUM;
	dec->operand_types[2] = PPC_OPER_TYPE_CREG;
	dec->operand_values[2] = (insword & 0x1C0000)>>18;
	dec->operand_types[3] = PPC_OPER_TYPE_FLAG;
	dec->operand_values[3] = (insword & 0x30000)>>16;
	dec->operand_types[4] = PPC_OPER_TYPE_NUM;
	dec->operand_values[4] = (insword & 0x1000)>>12;
	dec->operand_fmtstr = PPC_FMTSTR_NUM_C_NUM_MUL_CREG_POS_FLAG_C_NUM;
	return 0;
}

/* crnot FLAG,NUM*CREG+FLAG */
int crnot_FLAG_NUM_CREGPFLAG(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_CRNOT;
	/* 010011000AAxxxxxxxxxx00001000010 */
	dec->operand_n = 4;
	dec->operand_types[0] = PPC_OPER_TYPE_FLAG;
	dec->operand_values[0] = (insword & 0x600000)>>21;
	dec->operand_types[1] = PPC_OPER_TYPE_NUM;
	dec->operand_types[2] = PPC_OPER_TYPE_CREG;
	dec->operand_types[3] = PPC_OPER_TYPE_FLAG;
	dec->operand_fmtstr = PPC_FMTSTR_FLAG_C_NUM_MUL_CREG_POS_FLAG;
	return 0;
}

/* crandc FLAG,NUM*CREG+FLAG,NUM*CREG+FLAG */
int crandc_FLAG_NUM_CREGPFLAG_NUM_CREGPFLAG(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_CRANDC;
	/* 010011000AACCCDDFFFGG00100000010 */
	dec->operand_n = 7;
	dec->operand_types[0] = PPC_OPER_TYPE_FLAG;
	dec->operand_values[0] = (insword & 0x600000)>>21;
	dec->operand_types[1] = PPC_OPER_TYPE_NUM;
	dec->operand_types[2] = PPC_OPER_TYPE_CREG;
	dec->operand_values[2] = (insword & 0x1C0000)>>18;
	dec->operand_types[3] = PPC_OPER_TYPE_FLAG;
	dec->operand_values[3] = (insword & 0x30000)>>16;
	dec->operand_types[4] = PPC_OPER_TYPE_NUM;
	dec->operand_types[5] = PPC_OPER_TYPE_CREG;
	dec->operand_values[5] = (insword & 0xE000)>>13;
	dec->operand_types[6] = PPC_OPER_TYPE_FLAG;
	dec->operand_values[6] = (insword & 0x1800)>>11;
	dec->operand_fmtstr = PPC_FMTSTR_FLAG_C_NUM_MUL_CREG_POS_FLAG_C_NUM_MUL_CREG_POS_FLAG;
	return 0;
}

/* crxor FLAG,NUM*CREG+FLAG,NUM*CREG+FLAG */
int crxor_FLAG_NUM_CREGPFLAG_NUM_CREGPFLAG(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_CRXOR;
	/* 010011000AACCCDDFFFGG00110000010 */
	dec->operand_n = 7;
	dec->operand_types[0] = PPC_OPER_TYPE_FLAG;
	dec->operand_values[0] = (insword & 0x600000)>>21;
	dec->operand_types[1] = PPC_OPER_TYPE_NUM;
	dec->operand_types[2] = PPC_OPER_TYPE_CREG;
	dec->operand_values[2] = (insword & 0x1C0000)>>18;
	dec->operand_types[3] = PPC_OPER_TYPE_FLAG;
	dec->operand_values[3] = (insword & 0x30000)>>16;
	dec->operand_types[4] = PPC_OPER_TYPE_NUM;
	dec->operand_types[5] = PPC_OPER_TYPE_CREG;
	dec->operand_values[5] = (insword & 0xE000)>>13;
	dec->operand_types[6] = PPC_OPER_TYPE_FLAG;
	dec->operand_values[6] = (insword & 0x1800)>>11;
	dec->operand_fmtstr = PPC_FMTSTR_FLAG_C_NUM_MUL_CREG_POS_FLAG_C_NUM_MUL_CREG_POS_FLAG;
	return 0;
}

/* crnand FLAG,NUM*CREG+FLAG,NUM*CREG+FLAG */
int crnand_FLAG_NUM_CREGPFLAG_NUM_CREGPFLAG(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_CRNAND;
	/* 010011000AACCCDDFFFGG00111000010 */
	dec->operand_n = 7;
	dec->operand_types[0] = PPC_OPER_TYPE_FLAG;
	dec->operand_values[0] = (insword & 0x600000)>>21;
	dec->operand_types[1] = PPC_OPER_TYPE_NUM;
	dec->operand_types[2] = PPC_OPER_TYPE_CREG;
	dec->operand_values[2] = (insword & 0x1C0000)>>18;
	dec->operand_types[3] = PPC_OPER_TYPE_FLAG;
	dec->operand_values[3] = (insword & 0x30000)>>16;
	dec->operand_types[4] = PPC_OPER_TYPE_NUM;
	dec->operand_types[5] = PPC_OPER_TYPE_CREG;
	dec->operand_values[5] = (insword & 0xE000)>>13;
	dec->operand_types[6] = PPC_OPER_TYPE_FLAG;
	dec->operand_values[6] = (insword & 0x1800)>>11;
	dec->operand_fmtstr = PPC_FMTSTR_FLAG_C_NUM_MUL_CREG_POS_FLAG_C_NUM_MUL_CREG_POS_FLAG;
	return 0;
}

/* crand FLAG,NUM*CREG+FLAG,NUM*CREG+FLAG */
int crand_FLAG_NUM_CREGPFLAG_NUM_CREGPFLAG(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_CRAND;
	/* 010011000AACCCDDFFFGG01000000010 */
	dec->operand_n = 7;
	dec->operand_types[0] = PPC_OPER_TYPE_FLAG;
	dec->operand_values[0] = (insword & 0x600000)>>21;
	dec->operand_types[1] = PPC_OPER_TYPE_NUM;
	dec->operand_types[2] = PPC_OPER_TYPE_CREG;
	dec->operand_values[2] = (insword & 0x1C0000)>>18;
	dec->operand_types[3] = PPC_OPER_TYPE_FLAG;
	dec->operand_values[3] = (insword & 0x30000)>>16;
	dec->operand_types[4] = PPC_OPER_TYPE_NUM;
	dec->operand_types[5] = PPC_OPER_TYPE_CREG;
	dec->operand_values[5] = (insword & 0xE000)>>13;
	dec->operand_types[6] = PPC_OPER_TYPE_FLAG;
	dec->operand_values[6] = (insword & 0x1800)>>11;
	dec->operand_fmtstr = PPC_FMTSTR_FLAG_C_NUM_MUL_CREG_POS_FLAG_C_NUM_MUL_CREG_POS_FLAG;
	return 0;
}

/* creqv FLAG,NUM*CREG+FLAG,NUM*CREG+FLAG */
int creqv_FLAG_NUM_CREGPFLAG_NUM_CREGPFLAG(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_CREQV;
	/* 010011000AAxCCDDxFFGG01001000010 */
	dec->operand_n = 7;
	dec->operand_types[0] = PPC_OPER_TYPE_FLAG;
	dec->operand_values[0] = (insword & 0x600000)>>21;
	dec->operand_types[1] = PPC_OPER_TYPE_NUM;
	dec->operand_types[2] = PPC_OPER_TYPE_CREG;
	dec->operand_values[2] = (insword & 0xC0000)>>18;
	dec->operand_types[3] = PPC_OPER_TYPE_FLAG;
	dec->operand_values[3] = (insword & 0x30000)>>16;
	dec->operand_types[4] = PPC_OPER_TYPE_NUM;
	dec->operand_types[5] = PPC_OPER_TYPE_CREG;
	dec->operand_values[5] = (insword & 0x6000)>>13;
	dec->operand_types[6] = PPC_OPER_TYPE_FLAG;
	dec->operand_values[6] = (insword & 0x1800)>>11;
	dec->operand_fmtstr = PPC_FMTSTR_FLAG_C_NUM_MUL_CREG_POS_FLAG_C_NUM_MUL_CREG_POS_FLAG;
	return 0;
}

/* crorc FLAG,NUM*CREG+FLAG,NUM*CREG+FLAG */
int crorc_FLAG_NUM_CREGPFLAG_NUM_CREGPFLAG(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_CRORC;
	/* 010011000AACxCDDFFFGG01101000010 */
	dec->operand_n = 7;
	dec->operand_types[0] = PPC_OPER_TYPE_FLAG;
	dec->operand_values[0] = (insword & 0x600000)>>21;
	dec->operand_types[1] = PPC_OPER_TYPE_NUM;
	dec->operand_types[2] = PPC_OPER_TYPE_CREG;
	dec->operand_values[2] = ((insword & 0x100000)>>19)|((insword & 0x40000)>>18);
	dec->operand_types[3] = PPC_OPER_TYPE_FLAG;
	dec->operand_values[3] = (insword & 0x30000)>>16;
	dec->operand_types[4] = PPC_OPER_TYPE_NUM;
	dec->operand_types[5] = PPC_OPER_TYPE_CREG;
	dec->operand_values[5] = (insword & 0xE000)>>13;
	dec->operand_types[6] = PPC_OPER_TYPE_FLAG;
	dec->operand_values[6] = (insword & 0x1800)>>11;
	dec->operand_fmtstr = PPC_FMTSTR_FLAG_C_NUM_MUL_CREG_POS_FLAG_C_NUM_MUL_CREG_POS_FLAG;
	return 0;
}

/* crmove FLAG,NUM*CREG+FLAG */
int crmove_FLAG_NUM_CREGPFLAG(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_CRMOVE;
	/* 010011000AAxxxxxxxxxx01110000010 */
	dec->operand_n = 4;
	dec->operand_types[0] = PPC_OPER_TYPE_FLAG;
	dec->operand_values[0] = (insword & 0x600000)>>21;
	dec->operand_types[1] = PPC_OPER_TYPE_NUM;
	dec->operand_types[2] = PPC_OPER_TYPE_CREG;
	dec->operand_types[3] = PPC_OPER_TYPE_FLAG;
	dec->operand_fmtstr = PPC_FMTSTR_FLAG_C_NUM_MUL_CREG_POS_FLAG;
	return 0;
}

/* crnor FLAG,NUM*CREG+FLAG,NUM*CREG+FLAG */
int crnor_FLAG_NUM_CREGPFLAG_NUM_CREGPFLAG(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_CRNOR;
	/* 010011000AACCCDDFFxGG00001000010 */
	dec->operand_n = 7;
	dec->operand_types[0] = PPC_OPER_TYPE_FLAG;
	dec->operand_values[0] = (insword & 0x600000)>>21;
	dec->operand_types[1] = PPC_OPER_TYPE_NUM;
	dec->operand_types[2] = PPC_OPER_TYPE_CREG;
	dec->operand_values[2] = (insword & 0x1C0000)>>18;
	dec->operand_types[3] = PPC_OPER_TYPE_FLAG;
	dec->operand_values[3] = (insword & 0x30000)>>16;
	dec->operand_types[4] = PPC_OPER_TYPE_NUM;
	dec->operand_types[5] = PPC_OPER_TYPE_CREG;
	dec->operand_values[5] = (insword & 0xC000)>>14;
	dec->operand_types[6] = PPC_OPER_TYPE_FLAG;
	dec->operand_values[6] = (insword & 0x1800)>>11;
	dec->operand_fmtstr = PPC_FMTSTR_FLAG_C_NUM_MUL_CREG_POS_FLAG_C_NUM_MUL_CREG_POS_FLAG;
	return 0;
}

/* cror FLAG,NUM*CREG+FLAG,NUM*CREG+FLAG */
int cror_FLAG_NUM_CREGPFLAG_NUM_CREGPFLAG(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_CROR;
	/* 010011000AACCCDDFFFGG01110000010 */
	dec->operand_n = 7;
	dec->operand_types[0] = PPC_OPER_TYPE_FLAG;
	dec->operand_values[0] = (insword & 0x600000)>>21;
	dec->operand_types[1] = PPC_OPER_TYPE_NUM;
	dec->operand_types[2] = PPC_OPER_TYPE_CREG;
	dec->operand_values[2] = (insword & 0x1C0000)>>18;
	dec->operand_types[3] = PPC_OPER_TYPE_FLAG;
	dec->operand_values[3] = (insword & 0x30000)>>16;
	dec->operand_types[4] = PPC_OPER_TYPE_NUM;
	dec->operand_types[5] = PPC_OPER_TYPE_CREG;
	dec->operand_values[5] = (insword & 0xE000)>>13;
	dec->operand_types[6] = PPC_OPER_TYPE_FLAG;
	dec->operand_values[6] = (insword & 0x1800)>>11;
	dec->operand_fmtstr = PPC_FMTSTR_FLAG_C_NUM_MUL_CREG_POS_FLAG_C_NUM_MUL_CREG_POS_FLAG;
	return 0;
}

/* bdnzflr +FLAG */
int bdnzflr_PFLAG(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_BDNZFLR;
	/* 01001100001000AA0000000000100000 */
	dec->operand_n = 1;
	dec->operand_types[0] = PPC_OPER_TYPE_FLAG;
	dec->operand_values[0] = (insword & 0x30000)>>16;
	dec->operand_fmtstr = PPC_FMTSTR__POS_FLAG;
	return 0;
}

/* bdnzflrl +FLAG */
int bdnzflrl_PFLAG(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_BDNZFLRL;
	/* 01001100001000AA0000000000100001 */
	dec->operand_n = 1;
	dec->operand_types[0] = PPC_OPER_TYPE_FLAG;
	dec->operand_values[0] = (insword & 0x30000)>>16;
	dec->operand_fmtstr = PPC_FMTSTR__POS_FLAG;
	return 0;
}

/* bdnzflr +NUM*CREG+FLAG */
int bdnzflr_PNUM_CREGPFLAG(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_BDNZFLR;
	/* 01001100001BBBCC0000000000100000 */
	dec->operand_n = 3;
	dec->operand_types[0] = PPC_OPER_TYPE_NUM;
	dec->operand_types[1] = PPC_OPER_TYPE_CREG;
	dec->operand_values[1] = (insword & 0x1C0000)>>18;
	dec->operand_types[2] = PPC_OPER_TYPE_FLAG;
	dec->operand_values[2] = (insword & 0x30000)>>16;
	dec->operand_fmtstr = PPC_FMTSTR__POS_NUM_MUL_CREG_POS_FLAG;
	return 0;
}

/* bdnzflrl +NUM*CREG+FLAG */
int bdnzflrl_PNUM_CREGPFLAG(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_BDNZFLRL;
	/* 01001100001BBBCC0000000000100001 */
	dec->operand_n = 3;
	dec->operand_types[0] = PPC_OPER_TYPE_NUM;
	dec->operand_types[1] = PPC_OPER_TYPE_CREG;
	dec->operand_values[1] = (insword & 0x1C0000)>>18;
	dec->operand_types[2] = PPC_OPER_TYPE_FLAG;
	dec->operand_values[2] = (insword & 0x30000)>>16;
	dec->operand_fmtstr = PPC_FMTSTR__POS_NUM_MUL_CREG_POS_FLAG;
	return 0;
}

/* bdzflr FLAG */
int bdzflr_FLAG(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_BDZFLR;
	/* 01001100010000AA0000000000100000 */
	dec->operand_n = 1;
	dec->operand_types[0] = PPC_OPER_TYPE_FLAG;
	dec->operand_values[0] = (insword & 0x30000)>>16;
	dec->operand_fmtstr = PPC_FMTSTR_FLAG;
	return 0;
}

/* bdzflrl FLAG */
int bdzflrl_FLAG(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_BDZFLRL;
	/* 01001100010000AA0000000000100001 */
	dec->operand_n = 1;
	dec->operand_types[0] = PPC_OPER_TYPE_FLAG;
	dec->operand_values[0] = (insword & 0x30000)>>16;
	dec->operand_fmtstr = PPC_FMTSTR_FLAG;
	return 0;
}

/* bdzflr NUM*CREG+FLAG */
int bdzflr_NUM_CREGPFLAG(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_BDZFLR;
	/* 01001100010BxBCC0000000000100000 */
	dec->operand_n = 3;
	dec->operand_types[0] = PPC_OPER_TYPE_NUM;
	dec->operand_types[1] = PPC_OPER_TYPE_CREG;
	dec->operand_values[1] = ((insword & 0x100000)>>19)|((insword & 0x40000)>>18);
	dec->operand_types[2] = PPC_OPER_TYPE_FLAG;
	dec->operand_values[2] = (insword & 0x30000)>>16;
	dec->operand_fmtstr = PPC_FMTSTR_NUM_MUL_CREG_POS_FLAG;
	return 0;
}

/* bdzflrl NUM*CREG+FLAG */
int bdzflrl_NUM_CREGPFLAG(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_BDZFLRL;
	/* 01001100010BBxCC0000000000100001 */
	dec->operand_n = 3;
	dec->operand_types[0] = PPC_OPER_TYPE_NUM;
	dec->operand_types[1] = PPC_OPER_TYPE_CREG;
	dec->operand_values[1] = (insword & 0x180000)>>19;
	dec->operand_types[2] = PPC_OPER_TYPE_FLAG;
	dec->operand_values[2] = (insword & 0x30000)>>16;
	dec->operand_fmtstr = PPC_FMTSTR_NUM_MUL_CREG_POS_FLAG;
	return 0;
}

/* bdzflr +FLAG */
int bdzflr_PFLAG(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_BDZFLR;
	/* 01001100011000AA0000000000100000 */
	dec->operand_n = 1;
	dec->operand_types[0] = PPC_OPER_TYPE_FLAG;
	dec->operand_values[0] = (insword & 0x30000)>>16;
	dec->operand_fmtstr = PPC_FMTSTR__POS_FLAG;
	return 0;
}

/* bdzflrl +FLAG */
int bdzflrl_PFLAG(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_BDZFLRL;
	/* 01001100011000AA0000000000100001 */
	dec->operand_n = 1;
	dec->operand_types[0] = PPC_OPER_TYPE_FLAG;
	dec->operand_values[0] = (insword & 0x30000)>>16;
	dec->operand_fmtstr = PPC_FMTSTR__POS_FLAG;
	return 0;
}

/* bdzflr +NUM*CREG+FLAG */
int bdzflr_PNUM_CREGPFLAG(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_BDZFLR;
	/* 01001100011BBxCC0000000000100000 */
	dec->operand_n = 3;
	dec->operand_types[0] = PPC_OPER_TYPE_NUM;
	dec->operand_types[1] = PPC_OPER_TYPE_CREG;
	dec->operand_values[1] = (insword & 0x180000)>>19;
	dec->operand_types[2] = PPC_OPER_TYPE_FLAG;
	dec->operand_values[2] = (insword & 0x30000)>>16;
	dec->operand_fmtstr = PPC_FMTSTR__POS_NUM_MUL_CREG_POS_FLAG;
	return 0;
}

/* bdzflrl +NUM*CREG+FLAG */
int bdzflrl_PNUM_CREGPFLAG(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_BDZFLRL;
	/* 01001100011BBBCC0000000000100001 */
	dec->operand_n = 3;
	dec->operand_types[0] = PPC_OPER_TYPE_NUM;
	dec->operand_types[1] = PPC_OPER_TYPE_CREG;
	dec->operand_values[1] = (insword & 0x1C0000)>>18;
	dec->operand_types[2] = PPC_OPER_TYPE_FLAG;
	dec->operand_values[2] = (insword & 0x30000)>>16;
	dec->operand_fmtstr = PPC_FMTSTR__POS_NUM_MUL_CREG_POS_FLAG;
	return 0;
}

/* bgelr */
int bgelr(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_BGELR;
	return 0;
}

/* bgelrl */
int bgelrl(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_BGELRL;
	return 0;
}

/* crnot NUM*CREG+FLAG,FLAG */
int crnot_NUM_CREGPFLAG_FLAG(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_CRNOT;
	/* 010011xBBCC000xx000xx00001000010 */
	dec->operand_n = 4;
	dec->operand_types[0] = PPC_OPER_TYPE_NUM;
	dec->operand_types[1] = PPC_OPER_TYPE_CREG;
	dec->operand_values[1] = (insword & 0x1800000)>>23;
	dec->operand_types[2] = PPC_OPER_TYPE_FLAG;
	dec->operand_values[2] = (insword & 0x600000)>>21;
	dec->operand_types[3] = PPC_OPER_TYPE_FLAG;
	dec->operand_fmtstr = PPC_FMTSTR_NUM_MUL_CREG_POS_FLAG_C_FLAG;
	return 0;
}

/* crandc NUM*CREG+FLAG,FLAG,FLAG */
int crandc_NUM_CREGPFLAG_FLAG_FLAG(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_CRANDC;
	/* 010011BBBCC000DD000EE00100000010 */
	dec->operand_n = 5;
	dec->operand_types[0] = PPC_OPER_TYPE_NUM;
	dec->operand_types[1] = PPC_OPER_TYPE_CREG;
	dec->operand_values[1] = (insword & 0x3800000)>>23;
	dec->operand_types[2] = PPC_OPER_TYPE_FLAG;
	dec->operand_values[2] = (insword & 0x600000)>>21;
	dec->operand_types[3] = PPC_OPER_TYPE_FLAG;
	dec->operand_values[3] = (insword & 0x30000)>>16;
	dec->operand_types[4] = PPC_OPER_TYPE_FLAG;
	dec->operand_values[4] = (insword & 0x1800)>>11;
	dec->operand_fmtstr = PPC_FMTSTR_NUM_MUL_CREG_POS_FLAG_C_FLAG_C_FLAG;
	return 0;
}

/* crxor NUM*CREG+FLAG,FLAG,FLAG */
int crxor_NUM_CREGPFLAG_FLAG_FLAG(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_CRXOR;
	/* 010011BBBCC000DD000EE00110000010 */
	dec->operand_n = 5;
	dec->operand_types[0] = PPC_OPER_TYPE_NUM;
	dec->operand_types[1] = PPC_OPER_TYPE_CREG;
	dec->operand_values[1] = (insword & 0x3800000)>>23;
	dec->operand_types[2] = PPC_OPER_TYPE_FLAG;
	dec->operand_values[2] = (insword & 0x600000)>>21;
	dec->operand_types[3] = PPC_OPER_TYPE_FLAG;
	dec->operand_values[3] = (insword & 0x30000)>>16;
	dec->operand_types[4] = PPC_OPER_TYPE_FLAG;
	dec->operand_values[4] = (insword & 0x1800)>>11;
	dec->operand_fmtstr = PPC_FMTSTR_NUM_MUL_CREG_POS_FLAG_C_FLAG_C_FLAG;
	return 0;
}

/* crnand NUM*CREG+FLAG,FLAG,FLAG */
int crnand_NUM_CREGPFLAG_FLAG_FLAG(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_CRNAND;
	/* 010011BBxCC000DD000EE00111000010 */
	dec->operand_n = 5;
	dec->operand_types[0] = PPC_OPER_TYPE_NUM;
	dec->operand_types[1] = PPC_OPER_TYPE_CREG;
	dec->operand_values[1] = (insword & 0x3000000)>>24;
	dec->operand_types[2] = PPC_OPER_TYPE_FLAG;
	dec->operand_values[2] = (insword & 0x600000)>>21;
	dec->operand_types[3] = PPC_OPER_TYPE_FLAG;
	dec->operand_values[3] = (insword & 0x30000)>>16;
	dec->operand_types[4] = PPC_OPER_TYPE_FLAG;
	dec->operand_values[4] = (insword & 0x1800)>>11;
	dec->operand_fmtstr = PPC_FMTSTR_NUM_MUL_CREG_POS_FLAG_C_FLAG_C_FLAG;
	return 0;
}

/* crand NUM*CREG+FLAG,FLAG,FLAG */
int crand_NUM_CREGPFLAG_FLAG_FLAG(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_CRAND;
	/* 010011BBBCC000DD000EE01000000010 */
	dec->operand_n = 5;
	dec->operand_types[0] = PPC_OPER_TYPE_NUM;
	dec->operand_types[1] = PPC_OPER_TYPE_CREG;
	dec->operand_values[1] = (insword & 0x3800000)>>23;
	dec->operand_types[2] = PPC_OPER_TYPE_FLAG;
	dec->operand_values[2] = (insword & 0x600000)>>21;
	dec->operand_types[3] = PPC_OPER_TYPE_FLAG;
	dec->operand_values[3] = (insword & 0x30000)>>16;
	dec->operand_types[4] = PPC_OPER_TYPE_FLAG;
	dec->operand_values[4] = (insword & 0x1800)>>11;
	dec->operand_fmtstr = PPC_FMTSTR_NUM_MUL_CREG_POS_FLAG_C_FLAG_C_FLAG;
	return 0;
}

/* creqv NUM*CREG+FLAG,FLAG,FLAG */
int creqv_NUM_CREGPFLAG_FLAG_FLAG(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_CREQV;
	/* 010011BxBCC000DD000EE01001000010 */
	dec->operand_n = 5;
	dec->operand_types[0] = PPC_OPER_TYPE_NUM;
	dec->operand_types[1] = PPC_OPER_TYPE_CREG;
	dec->operand_values[1] = ((insword & 0x2000000)>>24)|((insword & 0x800000)>>23);
	dec->operand_types[2] = PPC_OPER_TYPE_FLAG;
	dec->operand_values[2] = (insword & 0x600000)>>21;
	dec->operand_types[3] = PPC_OPER_TYPE_FLAG;
	dec->operand_values[3] = (insword & 0x30000)>>16;
	dec->operand_types[4] = PPC_OPER_TYPE_FLAG;
	dec->operand_values[4] = (insword & 0x1800)>>11;
	dec->operand_fmtstr = PPC_FMTSTR_NUM_MUL_CREG_POS_FLAG_C_FLAG_C_FLAG;
	return 0;
}

/* crorc NUM*CREG+FLAG,FLAG,FLAG */
int crorc_NUM_CREGPFLAG_FLAG_FLAG(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_CRORC;
	/* 010011BBBCC000DD000EE01101000010 */
	dec->operand_n = 5;
	dec->operand_types[0] = PPC_OPER_TYPE_NUM;
	dec->operand_types[1] = PPC_OPER_TYPE_CREG;
	dec->operand_values[1] = (insword & 0x3800000)>>23;
	dec->operand_types[2] = PPC_OPER_TYPE_FLAG;
	dec->operand_values[2] = (insword & 0x600000)>>21;
	dec->operand_types[3] = PPC_OPER_TYPE_FLAG;
	dec->operand_values[3] = (insword & 0x30000)>>16;
	dec->operand_types[4] = PPC_OPER_TYPE_FLAG;
	dec->operand_values[4] = (insword & 0x1800)>>11;
	dec->operand_fmtstr = PPC_FMTSTR_NUM_MUL_CREG_POS_FLAG_C_FLAG_C_FLAG;
	return 0;
}

/* crmove NUM*CREG+FLAG,FLAG */
int crmove_NUM_CREGPFLAG_FLAG(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_CRMOVE;
	/* 010011BBBCC000xx000xx01110000010 */
	dec->operand_n = 4;
	dec->operand_types[0] = PPC_OPER_TYPE_NUM;
	dec->operand_types[1] = PPC_OPER_TYPE_CREG;
	dec->operand_values[1] = (insword & 0x3800000)>>23;
	dec->operand_types[2] = PPC_OPER_TYPE_FLAG;
	dec->operand_values[2] = (insword & 0x600000)>>21;
	dec->operand_types[3] = PPC_OPER_TYPE_FLAG;
	dec->operand_fmtstr = PPC_FMTSTR_NUM_MUL_CREG_POS_FLAG_C_FLAG;
	return 0;
}

/* bgectr */
int bgectr(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_BGECTR;
	return 0;
}

/* bgectrl */
int bgectrl(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_BGECTRL;
	return 0;
}

/* crnor NUM*CREG+FLAG,FLAG,FLAG */
int crnor_NUM_CREGPFLAG_FLAG_FLAG(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_CRNOR;
	/* 010011BBBCC000Dx000Ex00001000010 */
	dec->operand_n = 5;
	dec->operand_types[0] = PPC_OPER_TYPE_NUM;
	dec->operand_types[1] = PPC_OPER_TYPE_CREG;
	dec->operand_values[1] = (insword & 0x3800000)>>23;
	dec->operand_types[2] = PPC_OPER_TYPE_FLAG;
	dec->operand_values[2] = (insword & 0x600000)>>21;
	dec->operand_types[3] = PPC_OPER_TYPE_FLAG;
	dec->operand_values[3] = (insword & 0x20000)>>17;
	dec->operand_types[4] = PPC_OPER_TYPE_FLAG;
	dec->operand_values[4] = (insword & 0x1000)>>12;
	dec->operand_fmtstr = PPC_FMTSTR_NUM_MUL_CREG_POS_FLAG_C_FLAG_C_FLAG;
	return 0;
}

/* cror NUM*CREG+FLAG,FLAG,FLAG */
int cror_NUM_CREGPFLAG_FLAG_FLAG(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_CROR;
	/* 010011BBBCC000Dx000Ex01110000010 */
	dec->operand_n = 5;
	dec->operand_types[0] = PPC_OPER_TYPE_NUM;
	dec->operand_types[1] = PPC_OPER_TYPE_CREG;
	dec->operand_values[1] = (insword & 0x3800000)>>23;
	dec->operand_types[2] = PPC_OPER_TYPE_FLAG;
	dec->operand_values[2] = (insword & 0x600000)>>21;
	dec->operand_types[3] = PPC_OPER_TYPE_FLAG;
	dec->operand_values[3] = (insword & 0x20000)>>17;
	dec->operand_types[4] = PPC_OPER_TYPE_FLAG;
	dec->operand_values[4] = (insword & 0x1000)>>12;
	dec->operand_fmtstr = PPC_FMTSTR_NUM_MUL_CREG_POS_FLAG_C_FLAG_C_FLAG;
	return 0;
}

/* crnor NUM*CREG+FLAG,FLAG,NUM*CREG+FLAG */
int crnor_NUM_CREGPFLAG_FLAG_NUM_CREGPFLAG(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_CRNOR;
	/* 010011BBBCC000DDFFFGG00001000010 */
	dec->operand_n = 7;
	dec->operand_types[0] = PPC_OPER_TYPE_NUM;
	dec->operand_types[1] = PPC_OPER_TYPE_CREG;
	dec->operand_values[1] = (insword & 0x3800000)>>23;
	dec->operand_types[2] = PPC_OPER_TYPE_FLAG;
	dec->operand_values[2] = (insword & 0x600000)>>21;
	dec->operand_types[3] = PPC_OPER_TYPE_FLAG;
	dec->operand_values[3] = (insword & 0x30000)>>16;
	dec->operand_types[4] = PPC_OPER_TYPE_NUM;
	dec->operand_types[5] = PPC_OPER_TYPE_CREG;
	dec->operand_values[5] = (insword & 0xE000)>>13;
	dec->operand_types[6] = PPC_OPER_TYPE_FLAG;
	dec->operand_values[6] = (insword & 0x1800)>>11;
	dec->operand_fmtstr = PPC_FMTSTR_NUM_MUL_CREG_POS_FLAG_C_FLAG_C_NUM_MUL_CREG_POS_FLAG;
	return 0;
}

/* crandc NUM*CREG+FLAG,FLAG,NUM*CREG+FLAG */
int crandc_NUM_CREGPFLAG_FLAG_NUM_CREGPFLAG(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_CRANDC;
	/* 010011xBBCC000DDFFxGG00100000010 */
	dec->operand_n = 7;
	dec->operand_types[0] = PPC_OPER_TYPE_NUM;
	dec->operand_types[1] = PPC_OPER_TYPE_CREG;
	dec->operand_values[1] = (insword & 0x1800000)>>23;
	dec->operand_types[2] = PPC_OPER_TYPE_FLAG;
	dec->operand_values[2] = (insword & 0x600000)>>21;
	dec->operand_types[3] = PPC_OPER_TYPE_FLAG;
	dec->operand_values[3] = (insword & 0x30000)>>16;
	dec->operand_types[4] = PPC_OPER_TYPE_NUM;
	dec->operand_types[5] = PPC_OPER_TYPE_CREG;
	dec->operand_values[5] = (insword & 0xC000)>>14;
	dec->operand_types[6] = PPC_OPER_TYPE_FLAG;
	dec->operand_values[6] = (insword & 0x1800)>>11;
	dec->operand_fmtstr = PPC_FMTSTR_NUM_MUL_CREG_POS_FLAG_C_FLAG_C_NUM_MUL_CREG_POS_FLAG;
	return 0;
}

/* crxor NUM*CREG+FLAG,FLAG,NUM*CREG+FLAG */
int crxor_NUM_CREGPFLAG_FLAG_NUM_CREGPFLAG(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_CRXOR;
	/* 010011BBBCC000DDFxFGG00110000010 */
	dec->operand_n = 7;
	dec->operand_types[0] = PPC_OPER_TYPE_NUM;
	dec->operand_types[1] = PPC_OPER_TYPE_CREG;
	dec->operand_values[1] = (insword & 0x3800000)>>23;
	dec->operand_types[2] = PPC_OPER_TYPE_FLAG;
	dec->operand_values[2] = (insword & 0x600000)>>21;
	dec->operand_types[3] = PPC_OPER_TYPE_FLAG;
	dec->operand_values[3] = (insword & 0x30000)>>16;
	dec->operand_types[4] = PPC_OPER_TYPE_NUM;
	dec->operand_types[5] = PPC_OPER_TYPE_CREG;
	dec->operand_values[5] = ((insword & 0x8000)>>14)|((insword & 0x2000)>>13);
	dec->operand_types[6] = PPC_OPER_TYPE_FLAG;
	dec->operand_values[6] = (insword & 0x1800)>>11;
	dec->operand_fmtstr = PPC_FMTSTR_NUM_MUL_CREG_POS_FLAG_C_FLAG_C_NUM_MUL_CREG_POS_FLAG;
	return 0;
}

/* crnand NUM*CREG+FLAG,FLAG,NUM*CREG+FLAG */
int crnand_NUM_CREGPFLAG_FLAG_NUM_CREGPFLAG(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_CRNAND;
	/* 010011BBBCC000DDFFFGG00111000010 */
	dec->operand_n = 7;
	dec->operand_types[0] = PPC_OPER_TYPE_NUM;
	dec->operand_types[1] = PPC_OPER_TYPE_CREG;
	dec->operand_values[1] = (insword & 0x3800000)>>23;
	dec->operand_types[2] = PPC_OPER_TYPE_FLAG;
	dec->operand_values[2] = (insword & 0x600000)>>21;
	dec->operand_types[3] = PPC_OPER_TYPE_FLAG;
	dec->operand_values[3] = (insword & 0x30000)>>16;
	dec->operand_types[4] = PPC_OPER_TYPE_NUM;
	dec->operand_types[5] = PPC_OPER_TYPE_CREG;
	dec->operand_values[5] = (insword & 0xE000)>>13;
	dec->operand_types[6] = PPC_OPER_TYPE_FLAG;
	dec->operand_values[6] = (insword & 0x1800)>>11;
	dec->operand_fmtstr = PPC_FMTSTR_NUM_MUL_CREG_POS_FLAG_C_FLAG_C_NUM_MUL_CREG_POS_FLAG;
	return 0;
}

/* crand NUM*CREG+FLAG,FLAG,NUM*CREG+FLAG */
int crand_NUM_CREGPFLAG_FLAG_NUM_CREGPFLAG(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_CRAND;
	/* 010011BBxCC000DDFFFGG01000000010 */
	dec->operand_n = 7;
	dec->operand_types[0] = PPC_OPER_TYPE_NUM;
	dec->operand_types[1] = PPC_OPER_TYPE_CREG;
	dec->operand_values[1] = (insword & 0x3000000)>>24;
	dec->operand_types[2] = PPC_OPER_TYPE_FLAG;
	dec->operand_values[2] = (insword & 0x600000)>>21;
	dec->operand_types[3] = PPC_OPER_TYPE_FLAG;
	dec->operand_values[3] = (insword & 0x30000)>>16;
	dec->operand_types[4] = PPC_OPER_TYPE_NUM;
	dec->operand_types[5] = PPC_OPER_TYPE_CREG;
	dec->operand_values[5] = (insword & 0xE000)>>13;
	dec->operand_types[6] = PPC_OPER_TYPE_FLAG;
	dec->operand_values[6] = (insword & 0x1800)>>11;
	dec->operand_fmtstr = PPC_FMTSTR_NUM_MUL_CREG_POS_FLAG_C_FLAG_C_NUM_MUL_CREG_POS_FLAG;
	return 0;
}

/* creqv NUM*CREG+FLAG,FLAG,NUM*CREG+FLAG */
int creqv_NUM_CREGPFLAG_FLAG_NUM_CREGPFLAG(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_CREQV;
	/* 010011BBBCC000DDFFFGG01001000010 */
	dec->operand_n = 7;
	dec->operand_types[0] = PPC_OPER_TYPE_NUM;
	dec->operand_types[1] = PPC_OPER_TYPE_CREG;
	dec->operand_values[1] = (insword & 0x3800000)>>23;
	dec->operand_types[2] = PPC_OPER_TYPE_FLAG;
	dec->operand_values[2] = (insword & 0x600000)>>21;
	dec->operand_types[3] = PPC_OPER_TYPE_FLAG;
	dec->operand_values[3] = (insword & 0x30000)>>16;
	dec->operand_types[4] = PPC_OPER_TYPE_NUM;
	dec->operand_types[5] = PPC_OPER_TYPE_CREG;
	dec->operand_values[5] = (insword & 0xE000)>>13;
	dec->operand_types[6] = PPC_OPER_TYPE_FLAG;
	dec->operand_values[6] = (insword & 0x1800)>>11;
	dec->operand_fmtstr = PPC_FMTSTR_NUM_MUL_CREG_POS_FLAG_C_FLAG_C_NUM_MUL_CREG_POS_FLAG;
	return 0;
}

/* crorc NUM*CREG+FLAG,FLAG,NUM*CREG+FLAG */
int crorc_NUM_CREGPFLAG_FLAG_NUM_CREGPFLAG(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_CRORC;
	/* 010011BBBCC000DDFFxGG01101000010 */
	dec->operand_n = 7;
	dec->operand_types[0] = PPC_OPER_TYPE_NUM;
	dec->operand_types[1] = PPC_OPER_TYPE_CREG;
	dec->operand_values[1] = (insword & 0x3800000)>>23;
	dec->operand_types[2] = PPC_OPER_TYPE_FLAG;
	dec->operand_values[2] = (insword & 0x600000)>>21;
	dec->operand_types[3] = PPC_OPER_TYPE_FLAG;
	dec->operand_values[3] = (insword & 0x30000)>>16;
	dec->operand_types[4] = PPC_OPER_TYPE_NUM;
	dec->operand_types[5] = PPC_OPER_TYPE_CREG;
	dec->operand_values[5] = (insword & 0xC000)>>14;
	dec->operand_types[6] = PPC_OPER_TYPE_FLAG;
	dec->operand_values[6] = (insword & 0x1800)>>11;
	dec->operand_fmtstr = PPC_FMTSTR_NUM_MUL_CREG_POS_FLAG_C_FLAG_C_NUM_MUL_CREG_POS_FLAG;
	return 0;
}

/* cror NUM*CREG+FLAG,FLAG,NUM*CREG+FLAG */
int cror_NUM_CREGPFLAG_FLAG_NUM_CREGPFLAG(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_CROR;
	/* 010011xBBCC000DDFxFGG01110000010 */
	dec->operand_n = 7;
	dec->operand_types[0] = PPC_OPER_TYPE_NUM;
	dec->operand_types[1] = PPC_OPER_TYPE_CREG;
	dec->operand_values[1] = (insword & 0x1800000)>>23;
	dec->operand_types[2] = PPC_OPER_TYPE_FLAG;
	dec->operand_values[2] = (insword & 0x600000)>>21;
	dec->operand_types[3] = PPC_OPER_TYPE_FLAG;
	dec->operand_values[3] = (insword & 0x30000)>>16;
	dec->operand_types[4] = PPC_OPER_TYPE_NUM;
	dec->operand_types[5] = PPC_OPER_TYPE_CREG;
	dec->operand_values[5] = ((insword & 0x8000)>>14)|((insword & 0x2000)>>13);
	dec->operand_types[6] = PPC_OPER_TYPE_FLAG;
	dec->operand_values[6] = (insword & 0x1800)>>11;
	dec->operand_fmtstr = PPC_FMTSTR_NUM_MUL_CREG_POS_FLAG_C_FLAG_C_NUM_MUL_CREG_POS_FLAG;
	return 0;
}

/* blelr */
int blelr(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_BLELR;
	return 0;
}

/* blelrl */
int blelrl(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_BLELRL;
	return 0;
}

/* blectr */
int blectr(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_BLECTR;
	return 0;
}

/* blectrl */
int blectrl(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_BLECTRL;
	return 0;
}

/* bnelr */
int bnelr(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_BNELR;
	return 0;
}

/* bnelrl */
int bnelrl(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_BNELRL;
	return 0;
}

/* bnectr */
int bnectr(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_BNECTR;
	return 0;
}

/* bnectrl */
int bnectrl(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_BNECTRL;
	return 0;
}

/* bnslr */
int bnslr(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_BNSLR;
	return 0;
}

/* bnslrl */
int bnslrl(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_BNSLRL;
	return 0;
}

/* bnsctr */
int bnsctr(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_BNSCTR;
	return 0;
}

/* bnsctrl */
int bnsctrl(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_BNSCTRL;
	return 0;
}

/* bgelr CREG */
int bgelr_CREG(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_BGELR;
	/* 01001100100xAA000000000000100000 */
	dec->operand_n = 1;
	dec->operand_types[0] = PPC_OPER_TYPE_CREG;
	dec->operand_values[0] = (insword & 0xC0000)>>18;
	dec->operand_fmtstr = PPC_FMTSTR_CREG;
	return 0;
}

/* bgelrl CREG */
int bgelrl_CREG(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_BGELRL;
	/* 01001100100AAA000000000000100001 */
	dec->operand_n = 1;
	dec->operand_types[0] = PPC_OPER_TYPE_CREG;
	dec->operand_values[0] = (insword & 0x1C0000)>>18;
	dec->operand_fmtstr = PPC_FMTSTR_CREG;
	return 0;
}

/* crnor NUM*CREG+FLAG,NUM*CREG+FLAG,FLAG */
int crnor_NUM_CREGPFLAG_NUM_CREGPFLAG_FLAG(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_CRNOR;
	/* 010011BBBCCxEEFF000GG00001000010 */
	dec->operand_n = 7;
	dec->operand_types[0] = PPC_OPER_TYPE_NUM;
	dec->operand_types[1] = PPC_OPER_TYPE_CREG;
	dec->operand_values[1] = (insword & 0x3800000)>>23;
	dec->operand_types[2] = PPC_OPER_TYPE_FLAG;
	dec->operand_values[2] = (insword & 0x600000)>>21;
	dec->operand_types[3] = PPC_OPER_TYPE_NUM;
	dec->operand_types[4] = PPC_OPER_TYPE_CREG;
	dec->operand_values[4] = (insword & 0xC0000)>>18;
	dec->operand_types[5] = PPC_OPER_TYPE_FLAG;
	dec->operand_values[5] = (insword & 0x30000)>>16;
	dec->operand_types[6] = PPC_OPER_TYPE_FLAG;
	dec->operand_values[6] = (insword & 0x1800)>>11;
	dec->operand_fmtstr = PPC_FMTSTR_NUM_MUL_CREG_POS_FLAG_C_NUM_MUL_CREG_POS_FLAG_C_FLAG;
	return 0;
}

/* crandc NUM*CREG+FLAG,NUM*CREG+FLAG,FLAG */
int crandc_NUM_CREGPFLAG_NUM_CREGPFLAG_FLAG(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_CRANDC;
	/* 010011BBBCCEEEFF000GG00100000010 */
	dec->operand_n = 7;
	dec->operand_types[0] = PPC_OPER_TYPE_NUM;
	dec->operand_types[1] = PPC_OPER_TYPE_CREG;
	dec->operand_values[1] = (insword & 0x3800000)>>23;
	dec->operand_types[2] = PPC_OPER_TYPE_FLAG;
	dec->operand_values[2] = (insword & 0x600000)>>21;
	dec->operand_types[3] = PPC_OPER_TYPE_NUM;
	dec->operand_types[4] = PPC_OPER_TYPE_CREG;
	dec->operand_values[4] = (insword & 0x1C0000)>>18;
	dec->operand_types[5] = PPC_OPER_TYPE_FLAG;
	dec->operand_values[5] = (insword & 0x30000)>>16;
	dec->operand_types[6] = PPC_OPER_TYPE_FLAG;
	dec->operand_values[6] = (insword & 0x1800)>>11;
	dec->operand_fmtstr = PPC_FMTSTR_NUM_MUL_CREG_POS_FLAG_C_NUM_MUL_CREG_POS_FLAG_C_FLAG;
	return 0;
}

/* crxor NUM*CREG+FLAG,NUM*CREG+FLAG,FLAG */
int crxor_NUM_CREGPFLAG_NUM_CREGPFLAG_FLAG(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_CRXOR;
	/* 010011xBBCCEEEFF000GG00110000010 */
	dec->operand_n = 7;
	dec->operand_types[0] = PPC_OPER_TYPE_NUM;
	dec->operand_types[1] = PPC_OPER_TYPE_CREG;
	dec->operand_values[1] = (insword & 0x1800000)>>23;
	dec->operand_types[2] = PPC_OPER_TYPE_FLAG;
	dec->operand_values[2] = (insword & 0x600000)>>21;
	dec->operand_types[3] = PPC_OPER_TYPE_NUM;
	dec->operand_types[4] = PPC_OPER_TYPE_CREG;
	dec->operand_values[4] = (insword & 0x1C0000)>>18;
	dec->operand_types[5] = PPC_OPER_TYPE_FLAG;
	dec->operand_values[5] = (insword & 0x30000)>>16;
	dec->operand_types[6] = PPC_OPER_TYPE_FLAG;
	dec->operand_values[6] = (insword & 0x1800)>>11;
	dec->operand_fmtstr = PPC_FMTSTR_NUM_MUL_CREG_POS_FLAG_C_NUM_MUL_CREG_POS_FLAG_C_FLAG;
	return 0;
}

/* crnand NUM*CREG+FLAG,NUM*CREG+FLAG,FLAG */
int crnand_NUM_CREGPFLAG_NUM_CREGPFLAG_FLAG(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_CRNAND;
	/* 010011BBBCCEEEFF000GG00111000010 */
	dec->operand_n = 7;
	dec->operand_types[0] = PPC_OPER_TYPE_NUM;
	dec->operand_types[1] = PPC_OPER_TYPE_CREG;
	dec->operand_values[1] = (insword & 0x3800000)>>23;
	dec->operand_types[2] = PPC_OPER_TYPE_FLAG;
	dec->operand_values[2] = (insword & 0x600000)>>21;
	dec->operand_types[3] = PPC_OPER_TYPE_NUM;
	dec->operand_types[4] = PPC_OPER_TYPE_CREG;
	dec->operand_values[4] = (insword & 0x1C0000)>>18;
	dec->operand_types[5] = PPC_OPER_TYPE_FLAG;
	dec->operand_values[5] = (insword & 0x30000)>>16;
	dec->operand_types[6] = PPC_OPER_TYPE_FLAG;
	dec->operand_values[6] = (insword & 0x1800)>>11;
	dec->operand_fmtstr = PPC_FMTSTR_NUM_MUL_CREG_POS_FLAG_C_NUM_MUL_CREG_POS_FLAG_C_FLAG;
	return 0;
}

/* crand NUM*CREG+FLAG,NUM*CREG+FLAG,FLAG */
int crand_NUM_CREGPFLAG_NUM_CREGPFLAG_FLAG(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_CRAND;
	/* 010011BBBCCEEEFF000GG01000000010 */
	dec->operand_n = 7;
	dec->operand_types[0] = PPC_OPER_TYPE_NUM;
	dec->operand_types[1] = PPC_OPER_TYPE_CREG;
	dec->operand_values[1] = (insword & 0x3800000)>>23;
	dec->operand_types[2] = PPC_OPER_TYPE_FLAG;
	dec->operand_values[2] = (insword & 0x600000)>>21;
	dec->operand_types[3] = PPC_OPER_TYPE_NUM;
	dec->operand_types[4] = PPC_OPER_TYPE_CREG;
	dec->operand_values[4] = (insword & 0x1C0000)>>18;
	dec->operand_types[5] = PPC_OPER_TYPE_FLAG;
	dec->operand_values[5] = (insword & 0x30000)>>16;
	dec->operand_types[6] = PPC_OPER_TYPE_FLAG;
	dec->operand_values[6] = (insword & 0x1800)>>11;
	dec->operand_fmtstr = PPC_FMTSTR_NUM_MUL_CREG_POS_FLAG_C_NUM_MUL_CREG_POS_FLAG_C_FLAG;
	return 0;
}

/* creqv NUM*CREG+FLAG,NUM*CREG+FLAG,FLAG */
int creqv_NUM_CREGPFLAG_NUM_CREGPFLAG_FLAG(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_CREQV;
	/* 010011BxBCCEExFF000GG01001000010 */
	dec->operand_n = 7;
	dec->operand_types[0] = PPC_OPER_TYPE_NUM;
	dec->operand_types[1] = PPC_OPER_TYPE_CREG;
	dec->operand_values[1] = ((insword & 0x2000000)>>24)|((insword & 0x800000)>>23);
	dec->operand_types[2] = PPC_OPER_TYPE_FLAG;
	dec->operand_values[2] = (insword & 0x600000)>>21;
	dec->operand_types[3] = PPC_OPER_TYPE_NUM;
	dec->operand_types[4] = PPC_OPER_TYPE_CREG;
	dec->operand_values[4] = (insword & 0x180000)>>19;
	dec->operand_types[5] = PPC_OPER_TYPE_FLAG;
	dec->operand_values[5] = (insword & 0x30000)>>16;
	dec->operand_types[6] = PPC_OPER_TYPE_FLAG;
	dec->operand_values[6] = (insword & 0x1800)>>11;
	dec->operand_fmtstr = PPC_FMTSTR_NUM_MUL_CREG_POS_FLAG_C_NUM_MUL_CREG_POS_FLAG_C_FLAG;
	return 0;
}

/* crorc NUM*CREG+FLAG,NUM*CREG+FLAG,FLAG */
int crorc_NUM_CREGPFLAG_NUM_CREGPFLAG_FLAG(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_CRORC;
	/* 010011BBBCCEEEFF000GG01101000010 */
	dec->operand_n = 7;
	dec->operand_types[0] = PPC_OPER_TYPE_NUM;
	dec->operand_types[1] = PPC_OPER_TYPE_CREG;
	dec->operand_values[1] = (insword & 0x3800000)>>23;
	dec->operand_types[2] = PPC_OPER_TYPE_FLAG;
	dec->operand_values[2] = (insword & 0x600000)>>21;
	dec->operand_types[3] = PPC_OPER_TYPE_NUM;
	dec->operand_types[4] = PPC_OPER_TYPE_CREG;
	dec->operand_values[4] = (insword & 0x1C0000)>>18;
	dec->operand_types[5] = PPC_OPER_TYPE_FLAG;
	dec->operand_values[5] = (insword & 0x30000)>>16;
	dec->operand_types[6] = PPC_OPER_TYPE_FLAG;
	dec->operand_values[6] = (insword & 0x1800)>>11;
	dec->operand_fmtstr = PPC_FMTSTR_NUM_MUL_CREG_POS_FLAG_C_NUM_MUL_CREG_POS_FLAG_C_FLAG;
	return 0;
}

/* cror NUM*CREG+FLAG,NUM*CREG+FLAG,FLAG */
int cror_NUM_CREGPFLAG_NUM_CREGPFLAG_FLAG(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_CROR;
	/* 010011BBBCCxEEFF000GG01110000010 */
	dec->operand_n = 7;
	dec->operand_types[0] = PPC_OPER_TYPE_NUM;
	dec->operand_types[1] = PPC_OPER_TYPE_CREG;
	dec->operand_values[1] = (insword & 0x3800000)>>23;
	dec->operand_types[2] = PPC_OPER_TYPE_FLAG;
	dec->operand_values[2] = (insword & 0x600000)>>21;
	dec->operand_types[3] = PPC_OPER_TYPE_NUM;
	dec->operand_types[4] = PPC_OPER_TYPE_CREG;
	dec->operand_values[4] = (insword & 0xC0000)>>18;
	dec->operand_types[5] = PPC_OPER_TYPE_FLAG;
	dec->operand_values[5] = (insword & 0x30000)>>16;
	dec->operand_types[6] = PPC_OPER_TYPE_FLAG;
	dec->operand_values[6] = (insword & 0x1800)>>11;
	dec->operand_fmtstr = PPC_FMTSTR_NUM_MUL_CREG_POS_FLAG_C_NUM_MUL_CREG_POS_FLAG_C_FLAG;
	return 0;
}

/* bgectr CREG */
int bgectr_CREG(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_BGECTR;
	/* 01001100100AAA000000010000100000 */
	dec->operand_n = 1;
	dec->operand_types[0] = PPC_OPER_TYPE_CREG;
	dec->operand_values[0] = (insword & 0x1C0000)>>18;
	dec->operand_fmtstr = PPC_FMTSTR_CREG;
	return 0;
}

/* bgectrl CREG */
int bgectrl_CREG(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_BGECTRL;
	/* 01001100100AxA000000010000100001 */
	dec->operand_n = 1;
	dec->operand_types[0] = PPC_OPER_TYPE_CREG;
	dec->operand_values[0] = ((insword & 0x100000)>>19)|((insword & 0x40000)>>18);
	dec->operand_fmtstr = PPC_FMTSTR_CREG;
	return 0;
}

/* crnot NUM*CREG+FLAG,NUM*CREG+FLAG */
int crnot_NUM_CREGPFLAG_NUM_CREGPFLAG(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_CRNOT;
	/* 010011BxBCCxxxxxxxxxx00001000010 */
	dec->operand_n = 6;
	dec->operand_types[0] = PPC_OPER_TYPE_NUM;
	dec->operand_types[1] = PPC_OPER_TYPE_CREG;
	dec->operand_values[1] = ((insword & 0x2000000)>>24)|((insword & 0x800000)>>23);
	dec->operand_types[2] = PPC_OPER_TYPE_FLAG;
	dec->operand_values[2] = (insword & 0x600000)>>21;
	dec->operand_types[3] = PPC_OPER_TYPE_NUM;
	dec->operand_types[4] = PPC_OPER_TYPE_CREG;
	dec->operand_types[5] = PPC_OPER_TYPE_FLAG;
	dec->operand_fmtstr = PPC_FMTSTR_NUM_MUL_CREG_POS_FLAG_C_NUM_MUL_CREG_POS_FLAG;
	return 0;
}

/* crandc NUM*CREG+FLAG,NUM*CREG+FLAG,NUM*CREG+FLAG */
int crandc_NUM_CREGPFLAG_NUM_CREGPFLAG_NUM_CREGPFLAG(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_CRANDC;
	/* 010011BBxCCEEEFFHHHII00100000010 */
	dec->operand_n = 9;
	dec->operand_types[0] = PPC_OPER_TYPE_NUM;
	dec->operand_types[1] = PPC_OPER_TYPE_CREG;
	dec->operand_values[1] = (insword & 0x3000000)>>24;
	dec->operand_types[2] = PPC_OPER_TYPE_FLAG;
	dec->operand_values[2] = (insword & 0x600000)>>21;
	dec->operand_types[3] = PPC_OPER_TYPE_NUM;
	dec->operand_types[4] = PPC_OPER_TYPE_CREG;
	dec->operand_values[4] = (insword & 0x1C0000)>>18;
	dec->operand_types[5] = PPC_OPER_TYPE_FLAG;
	dec->operand_values[5] = (insword & 0x30000)>>16;
	dec->operand_types[6] = PPC_OPER_TYPE_NUM;
	dec->operand_types[7] = PPC_OPER_TYPE_CREG;
	dec->operand_values[7] = (insword & 0xE000)>>13;
	dec->operand_types[8] = PPC_OPER_TYPE_FLAG;
	dec->operand_values[8] = (insword & 0x1800)>>11;
	dec->operand_fmtstr = PPC_FMTSTR_NUM_MUL_CREG_POS_FLAG_C_NUM_MUL_CREG_POS_FLAG_C_NUM_MUL_CREG_POS_FLAG;
	return 0;
}

/* crclr NUM*CREG+FLAG */
int crclr_NUM_CREGPFLAG(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_CRCLR;
	/* 010011xxxxxxxxxxxxxxx00110000010 */
	dec->operand_n = 3;
	dec->operand_types[0] = PPC_OPER_TYPE_NUM;
	dec->operand_types[1] = PPC_OPER_TYPE_CREG;
	dec->operand_types[2] = PPC_OPER_TYPE_FLAG;
	dec->operand_fmtstr = PPC_FMTSTR_NUM_MUL_CREG_POS_FLAG;
	return 0;
}

/* crnand NUM*CREG+FLAG,NUM*CREG+FLAG,NUM*CREG+FLAG */
int crnand_NUM_CREGPFLAG_NUM_CREGPFLAG_NUM_CREGPFLAG(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_CRNAND;
	/* 010011xBBCCEExFFHxHII00111000010 */
	dec->operand_n = 9;
	dec->operand_types[0] = PPC_OPER_TYPE_NUM;
	dec->operand_types[1] = PPC_OPER_TYPE_CREG;
	dec->operand_values[1] = (insword & 0x1800000)>>23;
	dec->operand_types[2] = PPC_OPER_TYPE_FLAG;
	dec->operand_values[2] = (insword & 0x600000)>>21;
	dec->operand_types[3] = PPC_OPER_TYPE_NUM;
	dec->operand_types[4] = PPC_OPER_TYPE_CREG;
	dec->operand_values[4] = (insword & 0x180000)>>19;
	dec->operand_types[5] = PPC_OPER_TYPE_FLAG;
	dec->operand_values[5] = (insword & 0x30000)>>16;
	dec->operand_types[6] = PPC_OPER_TYPE_NUM;
	dec->operand_types[7] = PPC_OPER_TYPE_CREG;
	dec->operand_values[7] = ((insword & 0x8000)>>14)|((insword & 0x2000)>>13);
	dec->operand_types[8] = PPC_OPER_TYPE_FLAG;
	dec->operand_values[8] = (insword & 0x1800)>>11;
	dec->operand_fmtstr = PPC_FMTSTR_NUM_MUL_CREG_POS_FLAG_C_NUM_MUL_CREG_POS_FLAG_C_NUM_MUL_CREG_POS_FLAG;
	return 0;
}

/* crand NUM*CREG+FLAG,NUM*CREG+FLAG,NUM*CREG+FLAG */
int crand_NUM_CREGPFLAG_NUM_CREGPFLAG_NUM_CREGPFLAG(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_CRAND;
	/* 010011BBBCCEEEFFHHHII01000000010 */
	dec->operand_n = 9;
	dec->operand_types[0] = PPC_OPER_TYPE_NUM;
	dec->operand_types[1] = PPC_OPER_TYPE_CREG;
	dec->operand_values[1] = (insword & 0x3800000)>>23;
	dec->operand_types[2] = PPC_OPER_TYPE_FLAG;
	dec->operand_values[2] = (insword & 0x600000)>>21;
	dec->operand_types[3] = PPC_OPER_TYPE_NUM;
	dec->operand_types[4] = PPC_OPER_TYPE_CREG;
	dec->operand_values[4] = (insword & 0x1C0000)>>18;
	dec->operand_types[5] = PPC_OPER_TYPE_FLAG;
	dec->operand_values[5] = (insword & 0x30000)>>16;
	dec->operand_types[6] = PPC_OPER_TYPE_NUM;
	dec->operand_types[7] = PPC_OPER_TYPE_CREG;
	dec->operand_values[7] = (insword & 0xE000)>>13;
	dec->operand_types[8] = PPC_OPER_TYPE_FLAG;
	dec->operand_values[8] = (insword & 0x1800)>>11;
	dec->operand_fmtstr = PPC_FMTSTR_NUM_MUL_CREG_POS_FLAG_C_NUM_MUL_CREG_POS_FLAG_C_NUM_MUL_CREG_POS_FLAG;
	return 0;
}

/* crset NUM*CREG+FLAG */
int crset_NUM_CREGPFLAG(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_CRSET;
	/* 010011xxxxxxxxxxxxxxx01001000010 */
	dec->operand_n = 3;
	dec->operand_types[0] = PPC_OPER_TYPE_NUM;
	dec->operand_types[1] = PPC_OPER_TYPE_CREG;
	dec->operand_types[2] = PPC_OPER_TYPE_FLAG;
	dec->operand_fmtstr = PPC_FMTSTR_NUM_MUL_CREG_POS_FLAG;
	return 0;
}

/* crorc NUM*CREG+FLAG,NUM*CREG+FLAG,NUM*CREG+FLAG */
int crorc_NUM_CREGPFLAG_NUM_CREGPFLAG_NUM_CREGPFLAG(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_CRORC;
	/* 010011BBBCCEEEFFHHxII01101000010 */
	dec->operand_n = 9;
	dec->operand_types[0] = PPC_OPER_TYPE_NUM;
	dec->operand_types[1] = PPC_OPER_TYPE_CREG;
	dec->operand_values[1] = (insword & 0x3800000)>>23;
	dec->operand_types[2] = PPC_OPER_TYPE_FLAG;
	dec->operand_values[2] = (insword & 0x600000)>>21;
	dec->operand_types[3] = PPC_OPER_TYPE_NUM;
	dec->operand_types[4] = PPC_OPER_TYPE_CREG;
	dec->operand_values[4] = (insword & 0x1C0000)>>18;
	dec->operand_types[5] = PPC_OPER_TYPE_FLAG;
	dec->operand_values[5] = (insword & 0x30000)>>16;
	dec->operand_types[6] = PPC_OPER_TYPE_NUM;
	dec->operand_types[7] = PPC_OPER_TYPE_CREG;
	dec->operand_values[7] = (insword & 0xC000)>>14;
	dec->operand_types[8] = PPC_OPER_TYPE_FLAG;
	dec->operand_values[8] = (insword & 0x1800)>>11;
	dec->operand_fmtstr = PPC_FMTSTR_NUM_MUL_CREG_POS_FLAG_C_NUM_MUL_CREG_POS_FLAG_C_NUM_MUL_CREG_POS_FLAG;
	return 0;
}

/* crmove NUM*CREG+FLAG,NUM*CREG+FLAG */
int crmove_NUM_CREGPFLAG_NUM_CREGPFLAG(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_CRMOVE;
	/* 010011BBBCCxxxxxxxxxx01110000010 */
	dec->operand_n = 6;
	dec->operand_types[0] = PPC_OPER_TYPE_NUM;
	dec->operand_types[1] = PPC_OPER_TYPE_CREG;
	dec->operand_values[1] = (insword & 0x3800000)>>23;
	dec->operand_types[2] = PPC_OPER_TYPE_FLAG;
	dec->operand_values[2] = (insword & 0x600000)>>21;
	dec->operand_types[3] = PPC_OPER_TYPE_NUM;
	dec->operand_types[4] = PPC_OPER_TYPE_CREG;
	dec->operand_types[5] = PPC_OPER_TYPE_FLAG;
	dec->operand_fmtstr = PPC_FMTSTR_NUM_MUL_CREG_POS_FLAG_C_NUM_MUL_CREG_POS_FLAG;
	return 0;
}

/* crnor NUM*CREG+FLAG,NUM*CREG+FLAG,NUM*CREG+FLAG */
int crnor_NUM_CREGPFLAG_NUM_CREGPFLAG_NUM_CREGPFLAG(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_CRNOR;
	/* 010011xBBCCExEFFHxHII00001000010 */
	dec->operand_n = 9;
	dec->operand_types[0] = PPC_OPER_TYPE_NUM;
	dec->operand_types[1] = PPC_OPER_TYPE_CREG;
	dec->operand_values[1] = (insword & 0x1800000)>>23;
	dec->operand_types[2] = PPC_OPER_TYPE_FLAG;
	dec->operand_values[2] = (insword & 0x600000)>>21;
	dec->operand_types[3] = PPC_OPER_TYPE_NUM;
	dec->operand_types[4] = PPC_OPER_TYPE_CREG;
	dec->operand_values[4] = ((insword & 0x100000)>>19)|((insword & 0x40000)>>18);
	dec->operand_types[5] = PPC_OPER_TYPE_FLAG;
	dec->operand_values[5] = (insword & 0x30000)>>16;
	dec->operand_types[6] = PPC_OPER_TYPE_NUM;
	dec->operand_types[7] = PPC_OPER_TYPE_CREG;
	dec->operand_values[7] = ((insword & 0x8000)>>14)|((insword & 0x2000)>>13);
	dec->operand_types[8] = PPC_OPER_TYPE_FLAG;
	dec->operand_values[8] = (insword & 0x1800)>>11;
	dec->operand_fmtstr = PPC_FMTSTR_NUM_MUL_CREG_POS_FLAG_C_NUM_MUL_CREG_POS_FLAG_C_NUM_MUL_CREG_POS_FLAG;
	return 0;
}

/* crxor NUM*CREG+FLAG,NUM*CREG+FLAG,NUM*CREG+FLAG */
int crxor_NUM_CREGPFLAG_NUM_CREGPFLAG_NUM_CREGPFLAG(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_CRXOR;
	/* 010011xBBCCEExFFxHHII00110000010 */
	dec->operand_n = 9;
	dec->operand_types[0] = PPC_OPER_TYPE_NUM;
	dec->operand_types[1] = PPC_OPER_TYPE_CREG;
	dec->operand_values[1] = (insword & 0x1800000)>>23;
	dec->operand_types[2] = PPC_OPER_TYPE_FLAG;
	dec->operand_values[2] = (insword & 0x600000)>>21;
	dec->operand_types[3] = PPC_OPER_TYPE_NUM;
	dec->operand_types[4] = PPC_OPER_TYPE_CREG;
	dec->operand_values[4] = (insword & 0x180000)>>19;
	dec->operand_types[5] = PPC_OPER_TYPE_FLAG;
	dec->operand_values[5] = (insword & 0x30000)>>16;
	dec->operand_types[6] = PPC_OPER_TYPE_NUM;
	dec->operand_types[7] = PPC_OPER_TYPE_CREG;
	dec->operand_values[7] = (insword & 0x6000)>>13;
	dec->operand_types[8] = PPC_OPER_TYPE_FLAG;
	dec->operand_values[8] = (insword & 0x1800)>>11;
	dec->operand_fmtstr = PPC_FMTSTR_NUM_MUL_CREG_POS_FLAG_C_NUM_MUL_CREG_POS_FLAG_C_NUM_MUL_CREG_POS_FLAG;
	return 0;
}

/* creqv NUM*CREG+FLAG,NUM*CREG+FLAG,NUM*CREG+FLAG */
int creqv_NUM_CREGPFLAG_NUM_CREGPFLAG_NUM_CREGPFLAG(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_CREQV;
	/* 010011BBBCCEEEFFHHHII01001000010 */
	dec->operand_n = 9;
	dec->operand_types[0] = PPC_OPER_TYPE_NUM;
	dec->operand_types[1] = PPC_OPER_TYPE_CREG;
	dec->operand_values[1] = (insword & 0x3800000)>>23;
	dec->operand_types[2] = PPC_OPER_TYPE_FLAG;
	dec->operand_values[2] = (insword & 0x600000)>>21;
	dec->operand_types[3] = PPC_OPER_TYPE_NUM;
	dec->operand_types[4] = PPC_OPER_TYPE_CREG;
	dec->operand_values[4] = (insword & 0x1C0000)>>18;
	dec->operand_types[5] = PPC_OPER_TYPE_FLAG;
	dec->operand_values[5] = (insword & 0x30000)>>16;
	dec->operand_types[6] = PPC_OPER_TYPE_NUM;
	dec->operand_types[7] = PPC_OPER_TYPE_CREG;
	dec->operand_values[7] = (insword & 0xE000)>>13;
	dec->operand_types[8] = PPC_OPER_TYPE_FLAG;
	dec->operand_values[8] = (insword & 0x1800)>>11;
	dec->operand_fmtstr = PPC_FMTSTR_NUM_MUL_CREG_POS_FLAG_C_NUM_MUL_CREG_POS_FLAG_C_NUM_MUL_CREG_POS_FLAG;
	return 0;
}

/* cror NUM*CREG+FLAG,NUM*CREG+FLAG,NUM*CREG+FLAG */
int cror_NUM_CREGPFLAG_NUM_CREGPFLAG_NUM_CREGPFLAG(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_CROR;
	/* 010011BxBCCEEEFFxHHII01110000010 */
	dec->operand_n = 9;
	dec->operand_types[0] = PPC_OPER_TYPE_NUM;
	dec->operand_types[1] = PPC_OPER_TYPE_CREG;
	dec->operand_values[1] = ((insword & 0x2000000)>>24)|((insword & 0x800000)>>23);
	dec->operand_types[2] = PPC_OPER_TYPE_FLAG;
	dec->operand_values[2] = (insword & 0x600000)>>21;
	dec->operand_types[3] = PPC_OPER_TYPE_NUM;
	dec->operand_types[4] = PPC_OPER_TYPE_CREG;
	dec->operand_values[4] = (insword & 0x1C0000)>>18;
	dec->operand_types[5] = PPC_OPER_TYPE_FLAG;
	dec->operand_values[5] = (insword & 0x30000)>>16;
	dec->operand_types[6] = PPC_OPER_TYPE_NUM;
	dec->operand_types[7] = PPC_OPER_TYPE_CREG;
	dec->operand_values[7] = (insword & 0x6000)>>13;
	dec->operand_types[8] = PPC_OPER_TYPE_FLAG;
	dec->operand_values[8] = (insword & 0x1800)>>11;
	dec->operand_fmtstr = PPC_FMTSTR_NUM_MUL_CREG_POS_FLAG_C_NUM_MUL_CREG_POS_FLAG_C_NUM_MUL_CREG_POS_FLAG;
	return 0;
}

/* blelr CREG */
int blelr_CREG(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_BLELR;
	/* 01001100100AAA010000000000100000 */
	dec->operand_n = 1;
	dec->operand_types[0] = PPC_OPER_TYPE_CREG;
	dec->operand_values[0] = (insword & 0x1C0000)>>18;
	dec->operand_fmtstr = PPC_FMTSTR_CREG;
	return 0;
}

/* blelrl CREG */
int blelrl_CREG(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_BLELRL;
	/* 01001100100xAA010000000000100001 */
	dec->operand_n = 1;
	dec->operand_types[0] = PPC_OPER_TYPE_CREG;
	dec->operand_values[0] = (insword & 0xC0000)>>18;
	dec->operand_fmtstr = PPC_FMTSTR_CREG;
	return 0;
}

/* blectr CREG */
int blectr_CREG(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_BLECTR;
	/* 01001100100AAx010000010000100000 */
	dec->operand_n = 1;
	dec->operand_types[0] = PPC_OPER_TYPE_CREG;
	dec->operand_values[0] = (insword & 0x180000)>>19;
	dec->operand_fmtstr = PPC_FMTSTR_CREG;
	return 0;
}

/* blectrl CREG */
int blectrl_CREG(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_BLECTRL;
	/* 01001100100AAA010000010000100001 */
	dec->operand_n = 1;
	dec->operand_types[0] = PPC_OPER_TYPE_CREG;
	dec->operand_values[0] = (insword & 0x1C0000)>>18;
	dec->operand_fmtstr = PPC_FMTSTR_CREG;
	return 0;
}

/* bnelr CREG */
int bnelr_CREG(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_BNELR;
	/* 01001100100AxA100000000000100000 */
	dec->operand_n = 1;
	dec->operand_types[0] = PPC_OPER_TYPE_CREG;
	dec->operand_values[0] = ((insword & 0x100000)>>19)|((insword & 0x40000)>>18);
	dec->operand_fmtstr = PPC_FMTSTR_CREG;
	return 0;
}

/* bnelrl CREG */
int bnelrl_CREG(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_BNELRL;
	/* 01001100100xAA100000000000100001 */
	dec->operand_n = 1;
	dec->operand_types[0] = PPC_OPER_TYPE_CREG;
	dec->operand_values[0] = (insword & 0xC0000)>>18;
	dec->operand_fmtstr = PPC_FMTSTR_CREG;
	return 0;
}

/* bnectr CREG */
int bnectr_CREG(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_BNECTR;
	/* 01001100100AxA100000010000100000 */
	dec->operand_n = 1;
	dec->operand_types[0] = PPC_OPER_TYPE_CREG;
	dec->operand_values[0] = ((insword & 0x100000)>>19)|((insword & 0x40000)>>18);
	dec->operand_fmtstr = PPC_FMTSTR_CREG;
	return 0;
}

/* bnectrl CREG */
int bnectrl_CREG(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_BNECTRL;
	/* 01001100100AAA100000010000100001 */
	dec->operand_n = 1;
	dec->operand_types[0] = PPC_OPER_TYPE_CREG;
	dec->operand_values[0] = (insword & 0x1C0000)>>18;
	dec->operand_fmtstr = PPC_FMTSTR_CREG;
	return 0;
}

/* bnslr CREG */
int bnslr_CREG(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_BNSLR;
	/* 01001100100AAA110000000000100000 */
	dec->operand_n = 1;
	dec->operand_types[0] = PPC_OPER_TYPE_CREG;
	dec->operand_values[0] = (insword & 0x1C0000)>>18;
	dec->operand_fmtstr = PPC_FMTSTR_CREG;
	return 0;
}

/* bnslrl CREG */
int bnslrl_CREG(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_BNSLRL;
	/* 01001100100AAx110000000000100001 */
	dec->operand_n = 1;
	dec->operand_types[0] = PPC_OPER_TYPE_CREG;
	dec->operand_values[0] = (insword & 0x180000)>>19;
	dec->operand_fmtstr = PPC_FMTSTR_CREG;
	return 0;
}

/* bnsctr CREG */
int bnsctr_CREG(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_BNSCTR;
	/* 01001100100AAA110000010000100000 */
	dec->operand_n = 1;
	dec->operand_types[0] = PPC_OPER_TYPE_CREG;
	dec->operand_values[0] = (insword & 0x1C0000)>>18;
	dec->operand_fmtstr = PPC_FMTSTR_CREG;
	return 0;
}

/* bnsctrl CREG */
int bnsctrl_CREG(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_BNSCTRL;
	/* 01001100100AxA110000010000100001 */
	dec->operand_n = 1;
	dec->operand_types[0] = PPC_OPER_TYPE_CREG;
	dec->operand_values[0] = ((insword & 0x100000)>>19)|((insword & 0x40000)>>18);
	dec->operand_fmtstr = PPC_FMTSTR_CREG;
	return 0;
}

/* bclr +NUM,FLAG */
int bclr_PNUM_FLAG(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_BCLR;
	/* 010011xAxA1000xB0000000000100000 */
	dec->operand_n = 2;
	dec->operand_types[0] = PPC_OPER_TYPE_NUM;
	dec->operand_values[0] = ((insword & 0x1000000)>>23)|((insword & 0x400000)>>22);
	dec->operand_types[1] = PPC_OPER_TYPE_FLAG;
	dec->operand_values[1] = (insword & 0x10000)>>16;
	dec->operand_fmtstr = PPC_FMTSTR__POS_NUM_C_FLAG;
	return 0;
}

/* bclrl +NUM,FLAG */
int bclrl_PNUM_FLAG(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_BCLRL;
	/* 010011xAxA1000BB0000000000100001 */
	dec->operand_n = 2;
	dec->operand_types[0] = PPC_OPER_TYPE_NUM;
	dec->operand_values[0] = ((insword & 0x1000000)>>23)|((insword & 0x400000)>>22);
	dec->operand_types[1] = PPC_OPER_TYPE_FLAG;
	dec->operand_values[1] = (insword & 0x30000)>>16;
	dec->operand_fmtstr = PPC_FMTSTR__POS_NUM_C_FLAG;
	return 0;
}

/* bcctr +NUM,FLAG */
int bcctr_PNUM_FLAG(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_BCCTR;
	/* 010011xAxx1000BB0000010000100000 */
	dec->operand_n = 2;
	dec->operand_types[0] = PPC_OPER_TYPE_NUM;
	dec->operand_values[0] = (insword & 0x1000000)>>24;
	dec->operand_types[1] = PPC_OPER_TYPE_FLAG;
	dec->operand_values[1] = (insword & 0x30000)>>16;
	dec->operand_fmtstr = PPC_FMTSTR__POS_NUM_C_FLAG;
	return 0;
}

/* bcctrl +NUM,FLAG */
int bcctrl_PNUM_FLAG(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_BCCTRL;
	/* 010011xAxx1000BB0000010000100001 */
	dec->operand_n = 2;
	dec->operand_types[0] = PPC_OPER_TYPE_NUM;
	dec->operand_values[0] = (insword & 0x1000000)>>24;
	dec->operand_types[1] = PPC_OPER_TYPE_FLAG;
	dec->operand_values[1] = (insword & 0x30000)>>16;
	dec->operand_fmtstr = PPC_FMTSTR__POS_NUM_C_FLAG;
	return 0;
}

/* bctar +NUM,FLAG */
int bctar_PNUM_FLAG(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_BCTAR;
	/* 010011xAxA1000BB0000010001100000 */
	dec->operand_n = 2;
	dec->operand_types[0] = PPC_OPER_TYPE_NUM;
	dec->operand_values[0] = ((insword & 0x1000000)>>23)|((insword & 0x400000)>>22);
	dec->operand_types[1] = PPC_OPER_TYPE_FLAG;
	dec->operand_values[1] = (insword & 0x30000)>>16;
	dec->operand_fmtstr = PPC_FMTSTR__POS_NUM_C_FLAG;
	return 0;
}

/* bctarl +NUM,FLAG */
int bctarl_PNUM_FLAG(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_BCTARL;
	/* 010011xAxA1000BB0000010001100001 */
	dec->operand_n = 2;
	dec->operand_types[0] = PPC_OPER_TYPE_NUM;
	dec->operand_values[0] = ((insword & 0x1000000)>>23)|((insword & 0x400000)>>22);
	dec->operand_types[1] = PPC_OPER_TYPE_FLAG;
	dec->operand_values[1] = (insword & 0x30000)>>16;
	dec->operand_fmtstr = PPC_FMTSTR__POS_NUM_C_FLAG;
	return 0;
}

/* bclr +NUM,NUM*CREG+FLAG */
int bclr_PNUM_NUM_CREGPFLAG(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_BCLR;
	/* 010011xAxA1CCCDD0000000000100000 */
	dec->operand_n = 4;
	dec->operand_types[0] = PPC_OPER_TYPE_NUM;
	dec->operand_values[0] = ((insword & 0x1000000)>>23)|((insword & 0x400000)>>22);
	dec->operand_types[1] = PPC_OPER_TYPE_NUM;
	dec->operand_types[2] = PPC_OPER_TYPE_CREG;
	dec->operand_values[2] = (insword & 0x1C0000)>>18;
	dec->operand_types[3] = PPC_OPER_TYPE_FLAG;
	dec->operand_values[3] = (insword & 0x30000)>>16;
	dec->operand_fmtstr = PPC_FMTSTR__POS_NUM_C_NUM_MUL_CREG_POS_FLAG;
	return 0;
}

/* bclrl +NUM,NUM*CREG+FLAG */
int bclrl_PNUM_NUM_CREGPFLAG(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_BCLRL;
	/* 010011xAxA1CCCDD0000000000100001 */
	dec->operand_n = 4;
	dec->operand_types[0] = PPC_OPER_TYPE_NUM;
	dec->operand_values[0] = ((insword & 0x1000000)>>23)|((insword & 0x400000)>>22);
	dec->operand_types[1] = PPC_OPER_TYPE_NUM;
	dec->operand_types[2] = PPC_OPER_TYPE_CREG;
	dec->operand_values[2] = (insword & 0x1C0000)>>18;
	dec->operand_types[3] = PPC_OPER_TYPE_FLAG;
	dec->operand_values[3] = (insword & 0x30000)>>16;
	dec->operand_fmtstr = PPC_FMTSTR__POS_NUM_C_NUM_MUL_CREG_POS_FLAG;
	return 0;
}

/* bcctr +NUM,NUM*CREG+FLAG */
int bcctr_PNUM_NUM_CREGPFLAG(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_BCCTR;
	/* 010011xAxA1CCCDD0000010000100000 */
	dec->operand_n = 4;
	dec->operand_types[0] = PPC_OPER_TYPE_NUM;
	dec->operand_values[0] = ((insword & 0x1000000)>>23)|((insword & 0x400000)>>22);
	dec->operand_types[1] = PPC_OPER_TYPE_NUM;
	dec->operand_types[2] = PPC_OPER_TYPE_CREG;
	dec->operand_values[2] = (insword & 0x1C0000)>>18;
	dec->operand_types[3] = PPC_OPER_TYPE_FLAG;
	dec->operand_values[3] = (insword & 0x30000)>>16;
	dec->operand_fmtstr = PPC_FMTSTR__POS_NUM_C_NUM_MUL_CREG_POS_FLAG;
	return 0;
}

/* bcctrl +NUM,NUM*CREG+FLAG */
int bcctrl_PNUM_NUM_CREGPFLAG(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_BCCTRL;
	/* 010011xAxA1CCxDD0000010000100001 */
	dec->operand_n = 4;
	dec->operand_types[0] = PPC_OPER_TYPE_NUM;
	dec->operand_values[0] = ((insword & 0x1000000)>>23)|((insword & 0x400000)>>22);
	dec->operand_types[1] = PPC_OPER_TYPE_NUM;
	dec->operand_types[2] = PPC_OPER_TYPE_CREG;
	dec->operand_values[2] = (insword & 0x180000)>>19;
	dec->operand_types[3] = PPC_OPER_TYPE_FLAG;
	dec->operand_values[3] = (insword & 0x30000)>>16;
	dec->operand_fmtstr = PPC_FMTSTR__POS_NUM_C_NUM_MUL_CREG_POS_FLAG;
	return 0;
}

/* bctar +NUM,NUM*CREG+FLAG */
int bctar_PNUM_NUM_CREGPFLAG(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_BCTAR;
	/* 010011xAxA1CCCDD0000010001100000 */
	dec->operand_n = 4;
	dec->operand_types[0] = PPC_OPER_TYPE_NUM;
	dec->operand_values[0] = ((insword & 0x1000000)>>23)|((insword & 0x400000)>>22);
	dec->operand_types[1] = PPC_OPER_TYPE_NUM;
	dec->operand_types[2] = PPC_OPER_TYPE_CREG;
	dec->operand_values[2] = (insword & 0x1C0000)>>18;
	dec->operand_types[3] = PPC_OPER_TYPE_FLAG;
	dec->operand_values[3] = (insword & 0x30000)>>16;
	dec->operand_fmtstr = PPC_FMTSTR__POS_NUM_C_NUM_MUL_CREG_POS_FLAG;
	return 0;
}

/* bctarl +NUM,NUM*CREG+FLAG */
int bctarl_PNUM_NUM_CREGPFLAG(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_BCTARL;
	/* 010011xAxA1CCCDD0000010001100001 */
	dec->operand_n = 4;
	dec->operand_types[0] = PPC_OPER_TYPE_NUM;
	dec->operand_values[0] = ((insword & 0x1000000)>>23)|((insword & 0x400000)>>22);
	dec->operand_types[1] = PPC_OPER_TYPE_NUM;
	dec->operand_types[2] = PPC_OPER_TYPE_CREG;
	dec->operand_values[2] = (insword & 0x1C0000)>>18;
	dec->operand_types[3] = PPC_OPER_TYPE_FLAG;
	dec->operand_values[3] = (insword & 0x30000)>>16;
	dec->operand_fmtstr = PPC_FMTSTR__POS_NUM_C_NUM_MUL_CREG_POS_FLAG;
	return 0;
}

/* bgelr - */
int bgelr_N(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_BGELR;
	return 0;
}

/* bgelrl - */
int bgelrl_N(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_BGELRL;
	return 0;
}

/* bgectr - */
int bgectr_N(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_BGECTR;
	return 0;
}

/* bgectrl - */
int bgectrl_N(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_BGECTRL;
	return 0;
}

/* blelr - */
int blelr_N(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_BLELR;
	return 0;
}

/* blelrl - */
int blelrl_N(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_BLELRL;
	return 0;
}

/* blectr - */
int blectr_N(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_BLECTR;
	return 0;
}

/* blectrl - */
int blectrl_N(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_BLECTRL;
	return 0;
}

/* bnelr - */
int bnelr_N(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_BNELR;
	return 0;
}

/* bnelrl - */
int bnelrl_N(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_BNELRL;
	return 0;
}

/* bnectr - */
int bnectr_N(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_BNECTR;
	return 0;
}

/* bnectrl - */
int bnectrl_N(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_BNECTRL;
	return 0;
}

/* bnslr - */
int bnslr_N(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_BNSLR;
	return 0;
}

/* bnslrl - */
int bnslrl_N(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_BNSLRL;
	return 0;
}

/* bnsctr - */
int bnsctr_N(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_BNSCTR;
	return 0;
}

/* bnsctrl - */
int bnsctrl_N(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_BNSCTRL;
	return 0;
}

/* bgelr -CREG */
int bgelr_NCREG(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_BGELR;
	/* 01001100110AAA000000000000100000 */
	dec->operand_n = 1;
	dec->operand_types[0] = PPC_OPER_TYPE_CREG;
	dec->operand_values[0] = (insword & 0x1C0000)>>18;
	dec->operand_fmtstr = PPC_FMTSTR__NEG_CREG;
	return 0;
}

/* bgelrl -CREG */
int bgelrl_NCREG(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_BGELRL;
	/* 01001100110AAA000000000000100001 */
	dec->operand_n = 1;
	dec->operand_types[0] = PPC_OPER_TYPE_CREG;
	dec->operand_values[0] = (insword & 0x1C0000)>>18;
	dec->operand_fmtstr = PPC_FMTSTR__NEG_CREG;
	return 0;
}

/* bgectr -CREG */
int bgectr_NCREG(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_BGECTR;
	/* 01001100110xAA000000010000100000 */
	dec->operand_n = 1;
	dec->operand_types[0] = PPC_OPER_TYPE_CREG;
	dec->operand_values[0] = (insword & 0xC0000)>>18;
	dec->operand_fmtstr = PPC_FMTSTR__NEG_CREG;
	return 0;
}

/* bgectrl -CREG */
int bgectrl_NCREG(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_BGECTRL;
	/* 01001100110AAA000000010000100001 */
	dec->operand_n = 1;
	dec->operand_types[0] = PPC_OPER_TYPE_CREG;
	dec->operand_values[0] = (insword & 0x1C0000)>>18;
	dec->operand_fmtstr = PPC_FMTSTR__NEG_CREG;
	return 0;
}

/* blelr -CREG */
int blelr_NCREG(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_BLELR;
	/* 01001100110AAA010000000000100000 */
	dec->operand_n = 1;
	dec->operand_types[0] = PPC_OPER_TYPE_CREG;
	dec->operand_values[0] = (insword & 0x1C0000)>>18;
	dec->operand_fmtstr = PPC_FMTSTR__NEG_CREG;
	return 0;
}

/* blelrl -CREG */
int blelrl_NCREG(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_BLELRL;
	/* 01001100110AAA010000000000100001 */
	dec->operand_n = 1;
	dec->operand_types[0] = PPC_OPER_TYPE_CREG;
	dec->operand_values[0] = (insword & 0x1C0000)>>18;
	dec->operand_fmtstr = PPC_FMTSTR__NEG_CREG;
	return 0;
}

/* blectr -CREG */
int blectr_NCREG(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_BLECTR;
	/* 01001100110AAA010000010000100000 */
	dec->operand_n = 1;
	dec->operand_types[0] = PPC_OPER_TYPE_CREG;
	dec->operand_values[0] = (insword & 0x1C0000)>>18;
	dec->operand_fmtstr = PPC_FMTSTR__NEG_CREG;
	return 0;
}

/* blectrl -CREG */
int blectrl_NCREG(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_BLECTRL;
	/* 01001100110xAA010000010000100001 */
	dec->operand_n = 1;
	dec->operand_types[0] = PPC_OPER_TYPE_CREG;
	dec->operand_values[0] = (insword & 0xC0000)>>18;
	dec->operand_fmtstr = PPC_FMTSTR__NEG_CREG;
	return 0;
}

/* bnelr -CREG */
int bnelr_NCREG(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_BNELR;
	/* 01001100110xAA100000000000100000 */
	dec->operand_n = 1;
	dec->operand_types[0] = PPC_OPER_TYPE_CREG;
	dec->operand_values[0] = (insword & 0xC0000)>>18;
	dec->operand_fmtstr = PPC_FMTSTR__NEG_CREG;
	return 0;
}

/* bnelrl -CREG */
int bnelrl_NCREG(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_BNELRL;
	/* 01001100110AAA100000000000100001 */
	dec->operand_n = 1;
	dec->operand_types[0] = PPC_OPER_TYPE_CREG;
	dec->operand_values[0] = (insword & 0x1C0000)>>18;
	dec->operand_fmtstr = PPC_FMTSTR__NEG_CREG;
	return 0;
}

/* bnectr -CREG */
int bnectr_NCREG(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_BNECTR;
	/* 01001100110AAA100000010000100000 */
	dec->operand_n = 1;
	dec->operand_types[0] = PPC_OPER_TYPE_CREG;
	dec->operand_values[0] = (insword & 0x1C0000)>>18;
	dec->operand_fmtstr = PPC_FMTSTR__NEG_CREG;
	return 0;
}

/* bnectrl -CREG */
int bnectrl_NCREG(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_BNECTRL;
	/* 01001100110AAA100000010000100001 */
	dec->operand_n = 1;
	dec->operand_types[0] = PPC_OPER_TYPE_CREG;
	dec->operand_values[0] = (insword & 0x1C0000)>>18;
	dec->operand_fmtstr = PPC_FMTSTR__NEG_CREG;
	return 0;
}

/* bnslr -CREG */
int bnslr_NCREG(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_BNSLR;
	/* 01001100110xAA110000000000100000 */
	dec->operand_n = 1;
	dec->operand_types[0] = PPC_OPER_TYPE_CREG;
	dec->operand_values[0] = (insword & 0xC0000)>>18;
	dec->operand_fmtstr = PPC_FMTSTR__NEG_CREG;
	return 0;
}

/* bnslrl -CREG */
int bnslrl_NCREG(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_BNSLRL;
	/* 01001100110AxA110000000000100001 */
	dec->operand_n = 1;
	dec->operand_types[0] = PPC_OPER_TYPE_CREG;
	dec->operand_values[0] = ((insword & 0x100000)>>19)|((insword & 0x40000)>>18);
	dec->operand_fmtstr = PPC_FMTSTR__NEG_CREG;
	return 0;
}

/* bnsctr -CREG */
int bnsctr_NCREG(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_BNSCTR;
	/* 01001100110AAA110000010000100000 */
	dec->operand_n = 1;
	dec->operand_types[0] = PPC_OPER_TYPE_CREG;
	dec->operand_values[0] = (insword & 0x1C0000)>>18;
	dec->operand_fmtstr = PPC_FMTSTR__NEG_CREG;
	return 0;
}

/* bnsctrl -CREG */
int bnsctrl_NCREG(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_BNSCTRL;
	/* 01001100110AAA110000010000100001 */
	dec->operand_n = 1;
	dec->operand_types[0] = PPC_OPER_TYPE_CREG;
	dec->operand_values[0] = (insword & 0x1C0000)>>18;
	dec->operand_fmtstr = PPC_FMTSTR__NEG_CREG;
	return 0;
}

/* bgelr + */
int bgelr_P(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_BGELR;
	return 0;
}

/* bgelrl + */
int bgelrl_P(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_BGELRL;
	return 0;
}

/* bgectr + */
int bgectr_P(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_BGECTR;
	return 0;
}

/* bgectrl + */
int bgectrl_P(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_BGECTRL;
	return 0;
}

/* blelr + */
int blelr_P(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_BLELR;
	return 0;
}

/* blelrl + */
int blelrl_P(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_BLELRL;
	return 0;
}

/* blectr + */
int blectr_P(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_BLECTR;
	return 0;
}

/* blectrl + */
int blectrl_P(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_BLECTRL;
	return 0;
}

/* bnelr + */
int bnelr_P(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_BNELR;
	return 0;
}

/* bnelrl + */
int bnelrl_P(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_BNELRL;
	return 0;
}

/* bnectr + */
int bnectr_P(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_BNECTR;
	return 0;
}

/* bnectrl + */
int bnectrl_P(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_BNECTRL;
	return 0;
}

/* bnslr + */
int bnslr_P(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_BNSLR;
	return 0;
}

/* bnslrl + */
int bnslrl_P(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_BNSLRL;
	return 0;
}

/* bnsctr + */
int bnsctr_P(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_BNSCTR;
	return 0;
}

/* bnsctrl + */
int bnsctrl_P(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_BNSCTRL;
	return 0;
}

/* bgelr +CREG */
int bgelr_PCREG(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_BGELR;
	/* 01001100111AxA000000000000100000 */
	dec->operand_n = 1;
	dec->operand_types[0] = PPC_OPER_TYPE_CREG;
	dec->operand_values[0] = ((insword & 0x100000)>>19)|((insword & 0x40000)>>18);
	dec->operand_fmtstr = PPC_FMTSTR__POS_CREG;
	return 0;
}

/* bgelrl +CREG */
int bgelrl_PCREG(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_BGELRL;
	/* 01001100111xAA000000000000100001 */
	dec->operand_n = 1;
	dec->operand_types[0] = PPC_OPER_TYPE_CREG;
	dec->operand_values[0] = (insword & 0xC0000)>>18;
	dec->operand_fmtstr = PPC_FMTSTR__POS_CREG;
	return 0;
}

/* bgectr +CREG */
int bgectr_PCREG(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_BGECTR;
	/* 01001100111AAA000000010000100000 */
	dec->operand_n = 1;
	dec->operand_types[0] = PPC_OPER_TYPE_CREG;
	dec->operand_values[0] = (insword & 0x1C0000)>>18;
	dec->operand_fmtstr = PPC_FMTSTR__POS_CREG;
	return 0;
}

/* bgectrl +CREG */
int bgectrl_PCREG(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_BGECTRL;
	/* 01001100111AAA000000010000100001 */
	dec->operand_n = 1;
	dec->operand_types[0] = PPC_OPER_TYPE_CREG;
	dec->operand_values[0] = (insword & 0x1C0000)>>18;
	dec->operand_fmtstr = PPC_FMTSTR__POS_CREG;
	return 0;
}

/* blelr +CREG */
int blelr_PCREG(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_BLELR;
	/* 01001100111AAA010000000000100000 */
	dec->operand_n = 1;
	dec->operand_types[0] = PPC_OPER_TYPE_CREG;
	dec->operand_values[0] = (insword & 0x1C0000)>>18;
	dec->operand_fmtstr = PPC_FMTSTR__POS_CREG;
	return 0;
}

/* blelrl +CREG */
int blelrl_PCREG(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_BLELRL;
	/* 01001100111AAA010000000000100001 */
	dec->operand_n = 1;
	dec->operand_types[0] = PPC_OPER_TYPE_CREG;
	dec->operand_values[0] = (insword & 0x1C0000)>>18;
	dec->operand_fmtstr = PPC_FMTSTR__POS_CREG;
	return 0;
}

/* blectr +CREG */
int blectr_PCREG(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_BLECTR;
	/* 01001100111AAA010000010000100000 */
	dec->operand_n = 1;
	dec->operand_types[0] = PPC_OPER_TYPE_CREG;
	dec->operand_values[0] = (insword & 0x1C0000)>>18;
	dec->operand_fmtstr = PPC_FMTSTR__POS_CREG;
	return 0;
}

/* blectrl +CREG */
int blectrl_PCREG(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_BLECTRL;
	/* 01001100111AAA010000010000100001 */
	dec->operand_n = 1;
	dec->operand_types[0] = PPC_OPER_TYPE_CREG;
	dec->operand_values[0] = (insword & 0x1C0000)>>18;
	dec->operand_fmtstr = PPC_FMTSTR__POS_CREG;
	return 0;
}

/* bnelr +CREG */
int bnelr_PCREG(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_BNELR;
	/* 01001100111AAA100000000000100000 */
	dec->operand_n = 1;
	dec->operand_types[0] = PPC_OPER_TYPE_CREG;
	dec->operand_values[0] = (insword & 0x1C0000)>>18;
	dec->operand_fmtstr = PPC_FMTSTR__POS_CREG;
	return 0;
}

/* bnelrl +CREG */
int bnelrl_PCREG(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_BNELRL;
	/* 01001100111AxA100000000000100001 */
	dec->operand_n = 1;
	dec->operand_types[0] = PPC_OPER_TYPE_CREG;
	dec->operand_values[0] = ((insword & 0x100000)>>19)|((insword & 0x40000)>>18);
	dec->operand_fmtstr = PPC_FMTSTR__POS_CREG;
	return 0;
}

/* bnectr +CREG */
int bnectr_PCREG(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_BNECTR;
	/* 01001100111AAA100000010000100000 */
	dec->operand_n = 1;
	dec->operand_types[0] = PPC_OPER_TYPE_CREG;
	dec->operand_values[0] = (insword & 0x1C0000)>>18;
	dec->operand_fmtstr = PPC_FMTSTR__POS_CREG;
	return 0;
}

/* bnectrl +CREG */
int bnectrl_PCREG(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_BNECTRL;
	/* 01001100111AxA100000010000100001 */
	dec->operand_n = 1;
	dec->operand_types[0] = PPC_OPER_TYPE_CREG;
	dec->operand_values[0] = ((insword & 0x100000)>>19)|((insword & 0x40000)>>18);
	dec->operand_fmtstr = PPC_FMTSTR__POS_CREG;
	return 0;
}

/* bnslr +CREG */
int bnslr_PCREG(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_BNSLR;
	/* 01001100111AAA110000000000100000 */
	dec->operand_n = 1;
	dec->operand_types[0] = PPC_OPER_TYPE_CREG;
	dec->operand_values[0] = (insword & 0x1C0000)>>18;
	dec->operand_fmtstr = PPC_FMTSTR__POS_CREG;
	return 0;
}

/* bnslrl +CREG */
int bnslrl_PCREG(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_BNSLRL;
	/* 01001100111AxA110000000000100001 */
	dec->operand_n = 1;
	dec->operand_types[0] = PPC_OPER_TYPE_CREG;
	dec->operand_values[0] = ((insword & 0x100000)>>19)|((insword & 0x40000)>>18);
	dec->operand_fmtstr = PPC_FMTSTR__POS_CREG;
	return 0;
}

/* bnsctr +CREG */
int bnsctr_PCREG(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_BNSCTR;
	/* 01001100111AAA110000010000100000 */
	dec->operand_n = 1;
	dec->operand_types[0] = PPC_OPER_TYPE_CREG;
	dec->operand_values[0] = (insword & 0x1C0000)>>18;
	dec->operand_fmtstr = PPC_FMTSTR__POS_CREG;
	return 0;
}

/* bnsctrl +CREG */
int bnsctrl_PCREG(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_BNSCTRL;
	/* 01001100111AAA110000010000100001 */
	dec->operand_n = 1;
	dec->operand_types[0] = PPC_OPER_TYPE_CREG;
	dec->operand_values[0] = (insword & 0x1C0000)>>18;
	dec->operand_fmtstr = PPC_FMTSTR__POS_CREG;
	return 0;
}

/* bdnztlr FLAG */
int bdnztlr_FLAG(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_BDNZTLR;
	/* 01001101000000AA0000000000100000 */
	dec->operand_n = 1;
	dec->operand_types[0] = PPC_OPER_TYPE_FLAG;
	dec->operand_values[0] = (insword & 0x30000)>>16;
	dec->operand_fmtstr = PPC_FMTSTR_FLAG;
	return 0;
}

/* bdnztlrl FLAG */
int bdnztlrl_FLAG(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_BDNZTLRL;
	/* 01001101000000AA0000000000100001 */
	dec->operand_n = 1;
	dec->operand_types[0] = PPC_OPER_TYPE_FLAG;
	dec->operand_values[0] = (insword & 0x30000)>>16;
	dec->operand_fmtstr = PPC_FMTSTR_FLAG;
	return 0;
}

/* bdnztlr NUM*CREG+FLAG */
int bdnztlr_NUM_CREGPFLAG(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_BDNZTLR;
	/* 01001101000BBBCC0000000000100000 */
	dec->operand_n = 3;
	dec->operand_types[0] = PPC_OPER_TYPE_NUM;
	dec->operand_types[1] = PPC_OPER_TYPE_CREG;
	dec->operand_values[1] = (insword & 0x1C0000)>>18;
	dec->operand_types[2] = PPC_OPER_TYPE_FLAG;
	dec->operand_values[2] = (insword & 0x30000)>>16;
	dec->operand_fmtstr = PPC_FMTSTR_NUM_MUL_CREG_POS_FLAG;
	return 0;
}

/* bdnztlrl NUM*CREG+FLAG */
int bdnztlrl_NUM_CREGPFLAG(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_BDNZTLRL;
	/* 01001101000BBBCC0000000000100001 */
	dec->operand_n = 3;
	dec->operand_types[0] = PPC_OPER_TYPE_NUM;
	dec->operand_types[1] = PPC_OPER_TYPE_CREG;
	dec->operand_values[1] = (insword & 0x1C0000)>>18;
	dec->operand_types[2] = PPC_OPER_TYPE_FLAG;
	dec->operand_values[2] = (insword & 0x30000)>>16;
	dec->operand_fmtstr = PPC_FMTSTR_NUM_MUL_CREG_POS_FLAG;
	return 0;
}

/* bdnztlr +FLAG */
int bdnztlr_PFLAG(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_BDNZTLR;
	/* 01001101001000AA0000000000100000 */
	dec->operand_n = 1;
	dec->operand_types[0] = PPC_OPER_TYPE_FLAG;
	dec->operand_values[0] = (insword & 0x30000)>>16;
	dec->operand_fmtstr = PPC_FMTSTR__POS_FLAG;
	return 0;
}

/* bdnztlrl +FLAG */
int bdnztlrl_PFLAG(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_BDNZTLRL;
	/* 01001101001000AA0000000000100001 */
	dec->operand_n = 1;
	dec->operand_types[0] = PPC_OPER_TYPE_FLAG;
	dec->operand_values[0] = (insword & 0x30000)>>16;
	dec->operand_fmtstr = PPC_FMTSTR__POS_FLAG;
	return 0;
}

/* bdnztlr +NUM*CREG+FLAG */
int bdnztlr_PNUM_CREGPFLAG(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_BDNZTLR;
	/* 01001101001BBxCC0000000000100000 */
	dec->operand_n = 3;
	dec->operand_types[0] = PPC_OPER_TYPE_NUM;
	dec->operand_types[1] = PPC_OPER_TYPE_CREG;
	dec->operand_values[1] = (insword & 0x180000)>>19;
	dec->operand_types[2] = PPC_OPER_TYPE_FLAG;
	dec->operand_values[2] = (insword & 0x30000)>>16;
	dec->operand_fmtstr = PPC_FMTSTR__POS_NUM_MUL_CREG_POS_FLAG;
	return 0;
}

/* bdnztlrl +NUM*CREG+FLAG */
int bdnztlrl_PNUM_CREGPFLAG(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_BDNZTLRL;
	/* 01001101001BBBCC0000000000100001 */
	dec->operand_n = 3;
	dec->operand_types[0] = PPC_OPER_TYPE_NUM;
	dec->operand_types[1] = PPC_OPER_TYPE_CREG;
	dec->operand_values[1] = (insword & 0x1C0000)>>18;
	dec->operand_types[2] = PPC_OPER_TYPE_FLAG;
	dec->operand_values[2] = (insword & 0x30000)>>16;
	dec->operand_fmtstr = PPC_FMTSTR__POS_NUM_MUL_CREG_POS_FLAG;
	return 0;
}

/* bdztlr FLAG */
int bdztlr_FLAG(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_BDZTLR;
	/* 01001101010000AA0000000000100000 */
	dec->operand_n = 1;
	dec->operand_types[0] = PPC_OPER_TYPE_FLAG;
	dec->operand_values[0] = (insword & 0x30000)>>16;
	dec->operand_fmtstr = PPC_FMTSTR_FLAG;
	return 0;
}

/* bdztlrl FLAG */
int bdztlrl_FLAG(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_BDZTLRL;
	/* 01001101010000AA0000000000100001 */
	dec->operand_n = 1;
	dec->operand_types[0] = PPC_OPER_TYPE_FLAG;
	dec->operand_values[0] = (insword & 0x30000)>>16;
	dec->operand_fmtstr = PPC_FMTSTR_FLAG;
	return 0;
}

/* bdztlr NUM*CREG+FLAG */
int bdztlr_NUM_CREGPFLAG(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_BDZTLR;
	/* 01001101010BxBCC0000000000100000 */
	dec->operand_n = 3;
	dec->operand_types[0] = PPC_OPER_TYPE_NUM;
	dec->operand_types[1] = PPC_OPER_TYPE_CREG;
	dec->operand_values[1] = ((insword & 0x100000)>>19)|((insword & 0x40000)>>18);
	dec->operand_types[2] = PPC_OPER_TYPE_FLAG;
	dec->operand_values[2] = (insword & 0x30000)>>16;
	dec->operand_fmtstr = PPC_FMTSTR_NUM_MUL_CREG_POS_FLAG;
	return 0;
}

/* bdztlrl NUM*CREG+FLAG */
int bdztlrl_NUM_CREGPFLAG(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_BDZTLRL;
	/* 01001101010BBBCC0000000000100001 */
	dec->operand_n = 3;
	dec->operand_types[0] = PPC_OPER_TYPE_NUM;
	dec->operand_types[1] = PPC_OPER_TYPE_CREG;
	dec->operand_values[1] = (insword & 0x1C0000)>>18;
	dec->operand_types[2] = PPC_OPER_TYPE_FLAG;
	dec->operand_values[2] = (insword & 0x30000)>>16;
	dec->operand_fmtstr = PPC_FMTSTR_NUM_MUL_CREG_POS_FLAG;
	return 0;
}

/* bdztlr +FLAG */
int bdztlr_PFLAG(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_BDZTLR;
	/* 01001101011000AA0000000000100000 */
	dec->operand_n = 1;
	dec->operand_types[0] = PPC_OPER_TYPE_FLAG;
	dec->operand_values[0] = (insword & 0x30000)>>16;
	dec->operand_fmtstr = PPC_FMTSTR__POS_FLAG;
	return 0;
}

/* bdztlrl +FLAG */
int bdztlrl_PFLAG(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_BDZTLRL;
	/* 01001101011000AA0000000000100001 */
	dec->operand_n = 1;
	dec->operand_types[0] = PPC_OPER_TYPE_FLAG;
	dec->operand_values[0] = (insword & 0x30000)>>16;
	dec->operand_fmtstr = PPC_FMTSTR__POS_FLAG;
	return 0;
}

/* bdztlr +NUM*CREG+FLAG */
int bdztlr_PNUM_CREGPFLAG(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_BDZTLR;
	/* 01001101011BBBCC0000000000100000 */
	dec->operand_n = 3;
	dec->operand_types[0] = PPC_OPER_TYPE_NUM;
	dec->operand_types[1] = PPC_OPER_TYPE_CREG;
	dec->operand_values[1] = (insword & 0x1C0000)>>18;
	dec->operand_types[2] = PPC_OPER_TYPE_FLAG;
	dec->operand_values[2] = (insword & 0x30000)>>16;
	dec->operand_fmtstr = PPC_FMTSTR__POS_NUM_MUL_CREG_POS_FLAG;
	return 0;
}

/* bdztlrl +NUM*CREG+FLAG */
int bdztlrl_PNUM_CREGPFLAG(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_BDZTLRL;
	/* 01001101011BBBCC0000000000100001 */
	dec->operand_n = 3;
	dec->operand_types[0] = PPC_OPER_TYPE_NUM;
	dec->operand_types[1] = PPC_OPER_TYPE_CREG;
	dec->operand_values[1] = (insword & 0x1C0000)>>18;
	dec->operand_types[2] = PPC_OPER_TYPE_FLAG;
	dec->operand_values[2] = (insword & 0x30000)>>16;
	dec->operand_fmtstr = PPC_FMTSTR__POS_NUM_MUL_CREG_POS_FLAG;
	return 0;
}

/* bltlr */
int bltlr(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_BLTLR;
	return 0;
}

/* bltlrl */
int bltlrl(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_BLTLRL;
	return 0;
}

/* bltctr */
int bltctr(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_BLTCTR;
	return 0;
}

/* bltctrl */
int bltctrl(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_BLTCTRL;
	return 0;
}

/* bgtlr */
int bgtlr(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_BGTLR;
	return 0;
}

/* bgtlrl */
int bgtlrl(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_BGTLRL;
	return 0;
}

/* bgtctr */
int bgtctr(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_BGTCTR;
	return 0;
}

/* bgtctrl */
int bgtctrl(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_BGTCTRL;
	return 0;
}

/* beqlr */
int beqlr(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_BEQLR;
	return 0;
}

/* beqlrl */
int beqlrl(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_BEQLRL;
	return 0;
}

/* beqctr */
int beqctr(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_BEQCTR;
	return 0;
}

/* beqctrl */
int beqctrl(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_BEQCTRL;
	return 0;
}

/* bsolr */
int bsolr(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_BSOLR;
	return 0;
}

/* bsolrl */
int bsolrl(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_BSOLRL;
	return 0;
}

/* bsoctr */
int bsoctr(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_BSOCTR;
	return 0;
}

/* bsoctrl */
int bsoctrl(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_BSOCTRL;
	return 0;
}

/* bltlr CREG */
int bltlr_CREG(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_BLTLR;
	/* 01001101100xAA000000000000100000 */
	dec->operand_n = 1;
	dec->operand_types[0] = PPC_OPER_TYPE_CREG;
	dec->operand_values[0] = (insword & 0xC0000)>>18;
	dec->operand_fmtstr = PPC_FMTSTR_CREG;
	return 0;
}

/* bltlrl CREG */
int bltlrl_CREG(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_BLTLRL;
	/* 01001101100xAA000000000000100001 */
	dec->operand_n = 1;
	dec->operand_types[0] = PPC_OPER_TYPE_CREG;
	dec->operand_values[0] = (insword & 0xC0000)>>18;
	dec->operand_fmtstr = PPC_FMTSTR_CREG;
	return 0;
}

/* bltctr CREG */
int bltctr_CREG(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_BLTCTR;
	/* 01001101100AAx000000010000100000 */
	dec->operand_n = 1;
	dec->operand_types[0] = PPC_OPER_TYPE_CREG;
	dec->operand_values[0] = (insword & 0x180000)>>19;
	dec->operand_fmtstr = PPC_FMTSTR_CREG;
	return 0;
}

/* bltctrl CREG */
int bltctrl_CREG(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_BLTCTRL;
	/* 01001101100AAA000000010000100001 */
	dec->operand_n = 1;
	dec->operand_types[0] = PPC_OPER_TYPE_CREG;
	dec->operand_values[0] = (insword & 0x1C0000)>>18;
	dec->operand_fmtstr = PPC_FMTSTR_CREG;
	return 0;
}

/* bgtlr CREG */
int bgtlr_CREG(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_BGTLR;
	/* 01001101100AAA010000000000100000 */
	dec->operand_n = 1;
	dec->operand_types[0] = PPC_OPER_TYPE_CREG;
	dec->operand_values[0] = (insword & 0x1C0000)>>18;
	dec->operand_fmtstr = PPC_FMTSTR_CREG;
	return 0;
}

/* bgtlrl CREG */
int bgtlrl_CREG(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_BGTLRL;
	/* 01001101100AAA010000000000100001 */
	dec->operand_n = 1;
	dec->operand_types[0] = PPC_OPER_TYPE_CREG;
	dec->operand_values[0] = (insword & 0x1C0000)>>18;
	dec->operand_fmtstr = PPC_FMTSTR_CREG;
	return 0;
}

/* bgtctr CREG */
int bgtctr_CREG(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_BGTCTR;
	/* 01001101100AAA010000010000100000 */
	dec->operand_n = 1;
	dec->operand_types[0] = PPC_OPER_TYPE_CREG;
	dec->operand_values[0] = (insword & 0x1C0000)>>18;
	dec->operand_fmtstr = PPC_FMTSTR_CREG;
	return 0;
}

/* bgtctrl CREG */
int bgtctrl_CREG(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_BGTCTRL;
	/* 01001101100xAA010000010000100001 */
	dec->operand_n = 1;
	dec->operand_types[0] = PPC_OPER_TYPE_CREG;
	dec->operand_values[0] = (insword & 0xC0000)>>18;
	dec->operand_fmtstr = PPC_FMTSTR_CREG;
	return 0;
}

/* beqlr CREG */
int beqlr_CREG(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_BEQLR;
	/* 01001101100AAx100000000000100000 */
	dec->operand_n = 1;
	dec->operand_types[0] = PPC_OPER_TYPE_CREG;
	dec->operand_values[0] = (insword & 0x180000)>>19;
	dec->operand_fmtstr = PPC_FMTSTR_CREG;
	return 0;
}

/* beqlrl CREG */
int beqlrl_CREG(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_BEQLRL;
	/* 01001101100xAA100000000000100001 */
	dec->operand_n = 1;
	dec->operand_types[0] = PPC_OPER_TYPE_CREG;
	dec->operand_values[0] = (insword & 0xC0000)>>18;
	dec->operand_fmtstr = PPC_FMTSTR_CREG;
	return 0;
}

/* beqctr CREG */
int beqctr_CREG(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_BEQCTR;
	/* 01001101100AAA100000010000100000 */
	dec->operand_n = 1;
	dec->operand_types[0] = PPC_OPER_TYPE_CREG;
	dec->operand_values[0] = (insword & 0x1C0000)>>18;
	dec->operand_fmtstr = PPC_FMTSTR_CREG;
	return 0;
}

/* beqctrl CREG */
int beqctrl_CREG(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_BEQCTRL;
	/* 01001101100AAA100000010000100001 */
	dec->operand_n = 1;
	dec->operand_types[0] = PPC_OPER_TYPE_CREG;
	dec->operand_values[0] = (insword & 0x1C0000)>>18;
	dec->operand_fmtstr = PPC_FMTSTR_CREG;
	return 0;
}

/* bsolr CREG */
int bsolr_CREG(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_BSOLR;
	/* 01001101100AAA110000000000100000 */
	dec->operand_n = 1;
	dec->operand_types[0] = PPC_OPER_TYPE_CREG;
	dec->operand_values[0] = (insword & 0x1C0000)>>18;
	dec->operand_fmtstr = PPC_FMTSTR_CREG;
	return 0;
}

/* bsolrl CREG */
int bsolrl_CREG(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_BSOLRL;
	/* 01001101100AAx110000000000100001 */
	dec->operand_n = 1;
	dec->operand_types[0] = PPC_OPER_TYPE_CREG;
	dec->operand_values[0] = (insword & 0x180000)>>19;
	dec->operand_fmtstr = PPC_FMTSTR_CREG;
	return 0;
}

/* bsoctr CREG */
int bsoctr_CREG(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_BSOCTR;
	/* 01001101100AAA110000010000100000 */
	dec->operand_n = 1;
	dec->operand_types[0] = PPC_OPER_TYPE_CREG;
	dec->operand_values[0] = (insword & 0x1C0000)>>18;
	dec->operand_fmtstr = PPC_FMTSTR_CREG;
	return 0;
}

/* bsoctrl CREG */
int bsoctrl_CREG(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_BSOCTRL;
	/* 01001101100AAA110000010000100001 */
	dec->operand_n = 1;
	dec->operand_types[0] = PPC_OPER_TYPE_CREG;
	dec->operand_values[0] = (insword & 0x1C0000)>>18;
	dec->operand_fmtstr = PPC_FMTSTR_CREG;
	return 0;
}

/* bltlr - */
int bltlr_N(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_BLTLR;
	return 0;
}

/* bltlrl - */
int bltlrl_N(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_BLTLRL;
	return 0;
}

/* bltctr - */
int bltctr_N(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_BLTCTR;
	return 0;
}

/* bltctrl - */
int bltctrl_N(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_BLTCTRL;
	return 0;
}

/* bgtlr - */
int bgtlr_N(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_BGTLR;
	return 0;
}

/* bgtlrl - */
int bgtlrl_N(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_BGTLRL;
	return 0;
}

/* bgtctr - */
int bgtctr_N(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_BGTCTR;
	return 0;
}

/* bgtctrl - */
int bgtctrl_N(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_BGTCTRL;
	return 0;
}

/* beqlr - */
int beqlr_N(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_BEQLR;
	return 0;
}

/* beqlrl - */
int beqlrl_N(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_BEQLRL;
	return 0;
}

/* beqctr - */
int beqctr_N(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_BEQCTR;
	return 0;
}

/* beqctrl - */
int beqctrl_N(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_BEQCTRL;
	return 0;
}

/* bsolr - */
int bsolr_N(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_BSOLR;
	return 0;
}

/* bsolrl - */
int bsolrl_N(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_BSOLRL;
	return 0;
}

/* bsoctr - */
int bsoctr_N(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_BSOCTR;
	return 0;
}

/* bsoctrl - */
int bsoctrl_N(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_BSOCTRL;
	return 0;
}

/* bltlr -CREG */
int bltlr_NCREG(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_BLTLR;
	/* 01001101110AAA000000000000100000 */
	dec->operand_n = 1;
	dec->operand_types[0] = PPC_OPER_TYPE_CREG;
	dec->operand_values[0] = (insword & 0x1C0000)>>18;
	dec->operand_fmtstr = PPC_FMTSTR__NEG_CREG;
	return 0;
}

/* bltlrl -CREG */
int bltlrl_NCREG(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_BLTLRL;
	/* 01001101110xAA000000000000100001 */
	dec->operand_n = 1;
	dec->operand_types[0] = PPC_OPER_TYPE_CREG;
	dec->operand_values[0] = (insword & 0xC0000)>>18;
	dec->operand_fmtstr = PPC_FMTSTR__NEG_CREG;
	return 0;
}

/* bltctr -CREG */
int bltctr_NCREG(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_BLTCTR;
	/* 01001101110xAA000000010000100000 */
	dec->operand_n = 1;
	dec->operand_types[0] = PPC_OPER_TYPE_CREG;
	dec->operand_values[0] = (insword & 0xC0000)>>18;
	dec->operand_fmtstr = PPC_FMTSTR__NEG_CREG;
	return 0;
}

/* bltctrl -CREG */
int bltctrl_NCREG(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_BLTCTRL;
	/* 01001101110AxA000000010000100001 */
	dec->operand_n = 1;
	dec->operand_types[0] = PPC_OPER_TYPE_CREG;
	dec->operand_values[0] = ((insword & 0x100000)>>19)|((insword & 0x40000)>>18);
	dec->operand_fmtstr = PPC_FMTSTR__NEG_CREG;
	return 0;
}

/* bgtlr -CREG */
int bgtlr_NCREG(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_BGTLR;
	/* 01001101110AAA010000000000100000 */
	dec->operand_n = 1;
	dec->operand_types[0] = PPC_OPER_TYPE_CREG;
	dec->operand_values[0] = (insword & 0x1C0000)>>18;
	dec->operand_fmtstr = PPC_FMTSTR__NEG_CREG;
	return 0;
}

/* bgtlrl -CREG */
int bgtlrl_NCREG(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_BGTLRL;
	/* 01001101110AAA010000000000100001 */
	dec->operand_n = 1;
	dec->operand_types[0] = PPC_OPER_TYPE_CREG;
	dec->operand_values[0] = (insword & 0x1C0000)>>18;
	dec->operand_fmtstr = PPC_FMTSTR__NEG_CREG;
	return 0;
}

/* bgtctr -CREG */
int bgtctr_NCREG(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_BGTCTR;
	/* 01001101110AxA010000010000100000 */
	dec->operand_n = 1;
	dec->operand_types[0] = PPC_OPER_TYPE_CREG;
	dec->operand_values[0] = ((insword & 0x100000)>>19)|((insword & 0x40000)>>18);
	dec->operand_fmtstr = PPC_FMTSTR__NEG_CREG;
	return 0;
}

/* bgtctrl -CREG */
int bgtctrl_NCREG(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_BGTCTRL;
	/* 01001101110AAA010000010000100001 */
	dec->operand_n = 1;
	dec->operand_types[0] = PPC_OPER_TYPE_CREG;
	dec->operand_values[0] = (insword & 0x1C0000)>>18;
	dec->operand_fmtstr = PPC_FMTSTR__NEG_CREG;
	return 0;
}

/* beqlr -CREG */
int beqlr_NCREG(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_BEQLR;
	/* 01001101110AAA100000000000100000 */
	dec->operand_n = 1;
	dec->operand_types[0] = PPC_OPER_TYPE_CREG;
	dec->operand_values[0] = (insword & 0x1C0000)>>18;
	dec->operand_fmtstr = PPC_FMTSTR__NEG_CREG;
	return 0;
}

/* beqlrl -CREG */
int beqlrl_NCREG(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_BEQLRL;
	/* 01001101110xAA100000000000100001 */
	dec->operand_n = 1;
	dec->operand_types[0] = PPC_OPER_TYPE_CREG;
	dec->operand_values[0] = (insword & 0xC0000)>>18;
	dec->operand_fmtstr = PPC_FMTSTR__NEG_CREG;
	return 0;
}

/* beqctr -CREG */
int beqctr_NCREG(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_BEQCTR;
	/* 01001101110AAA100000010000100000 */
	dec->operand_n = 1;
	dec->operand_types[0] = PPC_OPER_TYPE_CREG;
	dec->operand_values[0] = (insword & 0x1C0000)>>18;
	dec->operand_fmtstr = PPC_FMTSTR__NEG_CREG;
	return 0;
}

/* beqctrl -CREG */
int beqctrl_NCREG(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_BEQCTRL;
	/* 01001101110AAA100000010000100001 */
	dec->operand_n = 1;
	dec->operand_types[0] = PPC_OPER_TYPE_CREG;
	dec->operand_values[0] = (insword & 0x1C0000)>>18;
	dec->operand_fmtstr = PPC_FMTSTR__NEG_CREG;
	return 0;
}

/* bsolr -CREG */
int bsolr_NCREG(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_BSOLR;
	/* 01001101110AAA110000000000100000 */
	dec->operand_n = 1;
	dec->operand_types[0] = PPC_OPER_TYPE_CREG;
	dec->operand_values[0] = (insword & 0x1C0000)>>18;
	dec->operand_fmtstr = PPC_FMTSTR__NEG_CREG;
	return 0;
}

/* bsolrl -CREG */
int bsolrl_NCREG(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_BSOLRL;
	/* 01001101110AAx110000000000100001 */
	dec->operand_n = 1;
	dec->operand_types[0] = PPC_OPER_TYPE_CREG;
	dec->operand_values[0] = (insword & 0x180000)>>19;
	dec->operand_fmtstr = PPC_FMTSTR__NEG_CREG;
	return 0;
}

/* bsoctr -CREG */
int bsoctr_NCREG(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_BSOCTR;
	/* 01001101110AAA110000010000100000 */
	dec->operand_n = 1;
	dec->operand_types[0] = PPC_OPER_TYPE_CREG;
	dec->operand_values[0] = (insword & 0x1C0000)>>18;
	dec->operand_fmtstr = PPC_FMTSTR__NEG_CREG;
	return 0;
}

/* bsoctrl -CREG */
int bsoctrl_NCREG(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_BSOCTRL;
	/* 01001101110AAA110000010000100001 */
	dec->operand_n = 1;
	dec->operand_types[0] = PPC_OPER_TYPE_CREG;
	dec->operand_values[0] = (insword & 0x1C0000)>>18;
	dec->operand_fmtstr = PPC_FMTSTR__NEG_CREG;
	return 0;
}

/* bltlr + */
int bltlr_P(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_BLTLR;
	return 0;
}

/* bltlrl + */
int bltlrl_P(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_BLTLRL;
	return 0;
}

/* bltctr + */
int bltctr_P(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_BLTCTR;
	return 0;
}

/* bltctrl + */
int bltctrl_P(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_BLTCTRL;
	return 0;
}

/* bgtlr + */
int bgtlr_P(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_BGTLR;
	return 0;
}

/* bgtlrl + */
int bgtlrl_P(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_BGTLRL;
	return 0;
}

/* bgtctr + */
int bgtctr_P(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_BGTCTR;
	return 0;
}

/* bgtctrl + */
int bgtctrl_P(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_BGTCTRL;
	return 0;
}

/* beqlr + */
int beqlr_P(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_BEQLR;
	return 0;
}

/* beqlrl + */
int beqlrl_P(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_BEQLRL;
	return 0;
}

/* beqctr + */
int beqctr_P(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_BEQCTR;
	return 0;
}

/* beqctrl + */
int beqctrl_P(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_BEQCTRL;
	return 0;
}

/* bsolr + */
int bsolr_P(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_BSOLR;
	return 0;
}

/* bsolrl + */
int bsolrl_P(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_BSOLRL;
	return 0;
}

/* bsoctr + */
int bsoctr_P(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_BSOCTR;
	return 0;
}

/* bsoctrl + */
int bsoctrl_P(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_BSOCTRL;
	return 0;
}

/* bltlr +CREG */
int bltlr_PCREG(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_BLTLR;
	/* 01001101111AAx000000000000100000 */
	dec->operand_n = 1;
	dec->operand_types[0] = PPC_OPER_TYPE_CREG;
	dec->operand_values[0] = (insword & 0x180000)>>19;
	dec->operand_fmtstr = PPC_FMTSTR__POS_CREG;
	return 0;
}

/* bltlrl +CREG */
int bltlrl_PCREG(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_BLTLRL;
	/* 01001101111AAA000000000000100001 */
	dec->operand_n = 1;
	dec->operand_types[0] = PPC_OPER_TYPE_CREG;
	dec->operand_values[0] = (insword & 0x1C0000)>>18;
	dec->operand_fmtstr = PPC_FMTSTR__POS_CREG;
	return 0;
}

/* bltctr +CREG */
int bltctr_PCREG(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_BLTCTR;
	/* 01001101111AxA000000010000100000 */
	dec->operand_n = 1;
	dec->operand_types[0] = PPC_OPER_TYPE_CREG;
	dec->operand_values[0] = ((insword & 0x100000)>>19)|((insword & 0x40000)>>18);
	dec->operand_fmtstr = PPC_FMTSTR__POS_CREG;
	return 0;
}

/* bltctrl +CREG */
int bltctrl_PCREG(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_BLTCTRL;
	/* 01001101111AAA000000010000100001 */
	dec->operand_n = 1;
	dec->operand_types[0] = PPC_OPER_TYPE_CREG;
	dec->operand_values[0] = (insword & 0x1C0000)>>18;
	dec->operand_fmtstr = PPC_FMTSTR__POS_CREG;
	return 0;
}

/* bgtlr +CREG */
int bgtlr_PCREG(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_BGTLR;
	/* 01001101111AAx010000000000100000 */
	dec->operand_n = 1;
	dec->operand_types[0] = PPC_OPER_TYPE_CREG;
	dec->operand_values[0] = (insword & 0x180000)>>19;
	dec->operand_fmtstr = PPC_FMTSTR__POS_CREG;
	return 0;
}

/* bgtlrl +CREG */
int bgtlrl_PCREG(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_BGTLRL;
	/* 01001101111AAA010000000000100001 */
	dec->operand_n = 1;
	dec->operand_types[0] = PPC_OPER_TYPE_CREG;
	dec->operand_values[0] = (insword & 0x1C0000)>>18;
	dec->operand_fmtstr = PPC_FMTSTR__POS_CREG;
	return 0;
}

/* bgtctr +CREG */
int bgtctr_PCREG(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_BGTCTR;
	/* 01001101111AAA010000010000100000 */
	dec->operand_n = 1;
	dec->operand_types[0] = PPC_OPER_TYPE_CREG;
	dec->operand_values[0] = (insword & 0x1C0000)>>18;
	dec->operand_fmtstr = PPC_FMTSTR__POS_CREG;
	return 0;
}

/* bgtctrl +CREG */
int bgtctrl_PCREG(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_BGTCTRL;
	/* 01001101111AAA010000010000100001 */
	dec->operand_n = 1;
	dec->operand_types[0] = PPC_OPER_TYPE_CREG;
	dec->operand_values[0] = (insword & 0x1C0000)>>18;
	dec->operand_fmtstr = PPC_FMTSTR__POS_CREG;
	return 0;
}

/* beqlr +CREG */
int beqlr_PCREG(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_BEQLR;
	/* 01001101111xAA100000000000100000 */
	dec->operand_n = 1;
	dec->operand_types[0] = PPC_OPER_TYPE_CREG;
	dec->operand_values[0] = (insword & 0xC0000)>>18;
	dec->operand_fmtstr = PPC_FMTSTR__POS_CREG;
	return 0;
}

/* beqlrl +CREG */
int beqlrl_PCREG(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_BEQLRL;
	/* 01001101111AAx100000000000100001 */
	dec->operand_n = 1;
	dec->operand_types[0] = PPC_OPER_TYPE_CREG;
	dec->operand_values[0] = (insword & 0x180000)>>19;
	dec->operand_fmtstr = PPC_FMTSTR__POS_CREG;
	return 0;
}

/* beqctr +CREG */
int beqctr_PCREG(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_BEQCTR;
	/* 01001101111AAA100000010000100000 */
	dec->operand_n = 1;
	dec->operand_types[0] = PPC_OPER_TYPE_CREG;
	dec->operand_values[0] = (insword & 0x1C0000)>>18;
	dec->operand_fmtstr = PPC_FMTSTR__POS_CREG;
	return 0;
}

/* beqctrl +CREG */
int beqctrl_PCREG(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_BEQCTRL;
	/* 01001101111AAA100000010000100001 */
	dec->operand_n = 1;
	dec->operand_types[0] = PPC_OPER_TYPE_CREG;
	dec->operand_values[0] = (insword & 0x1C0000)>>18;
	dec->operand_fmtstr = PPC_FMTSTR__POS_CREG;
	return 0;
}

/* bsolr +CREG */
int bsolr_PCREG(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_BSOLR;
	/* 01001101111xAA110000000000100000 */
	dec->operand_n = 1;
	dec->operand_types[0] = PPC_OPER_TYPE_CREG;
	dec->operand_values[0] = (insword & 0xC0000)>>18;
	dec->operand_fmtstr = PPC_FMTSTR__POS_CREG;
	return 0;
}

/* bsolrl +CREG */
int bsolrl_PCREG(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_BSOLRL;
	/* 01001101111AAA110000000000100001 */
	dec->operand_n = 1;
	dec->operand_types[0] = PPC_OPER_TYPE_CREG;
	dec->operand_values[0] = (insword & 0x1C0000)>>18;
	dec->operand_fmtstr = PPC_FMTSTR__POS_CREG;
	return 0;
}

/* bsoctr +CREG */
int bsoctr_PCREG(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_BSOCTR;
	/* 01001101111AAA110000010000100000 */
	dec->operand_n = 1;
	dec->operand_types[0] = PPC_OPER_TYPE_CREG;
	dec->operand_values[0] = (insword & 0x1C0000)>>18;
	dec->operand_fmtstr = PPC_FMTSTR__POS_CREG;
	return 0;
}

/* bsoctrl +CREG */
int bsoctrl_PCREG(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_BSOCTRL;
	/* 01001101111AAA110000010000100001 */
	dec->operand_n = 1;
	dec->operand_types[0] = PPC_OPER_TYPE_CREG;
	dec->operand_values[0] = (insword & 0x1C0000)>>18;
	dec->operand_fmtstr = PPC_FMTSTR__POS_CREG;
	return 0;
}

/* bdnzlr */
int bdnzlr(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_BDNZLR;
	return 0;
}

/* bdnzlrl */
int bdnzlrl(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_BDNZLRL;
	return 0;
}

/* bclr -NUM,FLAG */
int bclr_NNUM_FLAG(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_BCLR;
	/* 0100111AxA0000BB0000000000100000 */
	dec->operand_n = 2;
	dec->operand_types[0] = PPC_OPER_TYPE_NUM;
	dec->operand_values[0] = ((insword & 0x1000000)>>23)|((insword & 0x400000)>>22);
	dec->operand_types[1] = PPC_OPER_TYPE_FLAG;
	dec->operand_values[1] = (insword & 0x30000)>>16;
	dec->operand_fmtstr = PPC_FMTSTR__NEG_NUM_C_FLAG;
	return 0;
}

/* bclrl -NUM,FLAG */
int bclrl_NNUM_FLAG(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_BCLRL;
	/* 0100111AAA0000xB0000000000100001 */
	dec->operand_n = 2;
	dec->operand_types[0] = PPC_OPER_TYPE_NUM;
	dec->operand_values[0] = (insword & 0x1C00000)>>22;
	dec->operand_types[1] = PPC_OPER_TYPE_FLAG;
	dec->operand_values[1] = (insword & 0x10000)>>16;
	dec->operand_fmtstr = PPC_FMTSTR__NEG_NUM_C_FLAG;
	return 0;
}

/* bclr -NUM,NUM*CREG+FLAG */
int bclr_NNUM_NUM_CREGPFLAG(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_BCLR;
	/* 0100111AxA0CCCDD0000000000100000 */
	dec->operand_n = 4;
	dec->operand_types[0] = PPC_OPER_TYPE_NUM;
	dec->operand_values[0] = ((insword & 0x1000000)>>23)|((insword & 0x400000)>>22);
	dec->operand_types[1] = PPC_OPER_TYPE_NUM;
	dec->operand_types[2] = PPC_OPER_TYPE_CREG;
	dec->operand_values[2] = (insword & 0x1C0000)>>18;
	dec->operand_types[3] = PPC_OPER_TYPE_FLAG;
	dec->operand_values[3] = (insword & 0x30000)>>16;
	dec->operand_fmtstr = PPC_FMTSTR__NEG_NUM_C_NUM_MUL_CREG_POS_FLAG;
	return 0;
}

/* bclrl -NUM,NUM*CREG+FLAG */
int bclrl_NNUM_NUM_CREGPFLAG(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_BCLRL;
	/* 0100111xAx0CCCDD0000000000100001 */
	dec->operand_n = 4;
	dec->operand_types[0] = PPC_OPER_TYPE_NUM;
	dec->operand_values[0] = (insword & 0x800000)>>23;
	dec->operand_types[1] = PPC_OPER_TYPE_NUM;
	dec->operand_types[2] = PPC_OPER_TYPE_CREG;
	dec->operand_values[2] = (insword & 0x1C0000)>>18;
	dec->operand_types[3] = PPC_OPER_TYPE_FLAG;
	dec->operand_values[3] = (insword & 0x30000)>>16;
	dec->operand_fmtstr = PPC_FMTSTR__NEG_NUM_C_NUM_MUL_CREG_POS_FLAG;
	return 0;
}

/* bdzlr */
int bdzlr(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_BDZLR;
	return 0;
}

/* bdzlrl */
int bdzlrl(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_BDZLRL;
	return 0;
}

/* blr */
int blr(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_BLR;
	return 0;
}

/* blrl */
int blrl(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_BLRL;
	return 0;
}

/* bctr */
int bctr(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_BCTR;
	return 0;
}

/* bctrl */
int bctrl(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_BCTRL;
	return 0;
}

/* bdnzlr - */
int bdnzlr_N(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_BDNZLR;
	return 0;
}

/* bdnzlrl - */
int bdnzlrl_N(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_BDNZLRL;
	return 0;
}

/* bdnzlr + */
int bdnzlr_P(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_BDNZLR;
	return 0;
}

/* bdnzlrl + */
int bdnzlrl_P(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_BDNZLRL;
	return 0;
}

/* bdzlr - */
int bdzlr_N(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_BDZLR;
	return 0;
}

/* bdzlrl - */
int bdzlrl_N(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_BDZLRL;
	return 0;
}

/* bdzlr + */
int bdzlr_P(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_BDZLR;
	return 0;
}

/* bdzlrl + */
int bdzlrl_P(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_BDZLRL;
	return 0;
}

