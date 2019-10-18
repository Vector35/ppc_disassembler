#include "disassembler.h"

/* bdnzf FLAG,NUM */
int bdnzf_FLAG_NUM(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_BDNZF;
	/* 0100000000x000AABBBBBBBBBBBBBB00 */
	dec->operand_n = 2;
	dec->operand_types[0] = PPC_OPER_TYPE_FLAG;
	dec->operand_values[0] = (insword & 0x30000)>>16;
	dec->operand_types[1] = PPC_OPER_TYPE_NUM;
	dec->operand_values[1] = (insword & 0xFFFC)>>2;
	dec->operand_fmtstr = PPC_FMTSTR_FLAG_C_NUM;
	return 0;
}

/* bdnzfl FLAG,NUM */
int bdnzfl_FLAG_NUM(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_BDNZFL;
	/* 0100000000x000AABBBBBBBBBBBBBB01 */
	dec->operand_n = 2;
	dec->operand_types[0] = PPC_OPER_TYPE_FLAG;
	dec->operand_values[0] = (insword & 0x30000)>>16;
	dec->operand_types[1] = PPC_OPER_TYPE_NUM;
	dec->operand_values[1] = (insword & 0xFFFC)>>2;
	dec->operand_fmtstr = PPC_FMTSTR_FLAG_C_NUM;
	return 0;
}

/* bdnzfa FLAG,NUM */
int bdnzfa_FLAG_NUM(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_BDNZFA;
	/* 0100000000x000AABBBBBBBBBBBBBB10 */
	dec->operand_n = 2;
	dec->operand_types[0] = PPC_OPER_TYPE_FLAG;
	dec->operand_values[0] = (insword & 0x30000)>>16;
	dec->operand_types[1] = PPC_OPER_TYPE_NUM;
	dec->operand_values[1] = (insword & 0xFFFC)>>2;
	dec->operand_fmtstr = PPC_FMTSTR_FLAG_C_NUM;
	return 0;
}

/* bdnzfla FLAG,NUM */
int bdnzfla_FLAG_NUM(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_BDNZFLA;
	/* 0100000000x000AABBBBBBBBBBBBBB11 */
	dec->operand_n = 2;
	dec->operand_types[0] = PPC_OPER_TYPE_FLAG;
	dec->operand_values[0] = (insword & 0x30000)>>16;
	dec->operand_types[1] = PPC_OPER_TYPE_NUM;
	dec->operand_values[1] = (insword & 0xFFFC)>>2;
	dec->operand_fmtstr = PPC_FMTSTR_FLAG_C_NUM;
	return 0;
}

/* bdnzf NUM*CREG+FLAG,NUM */
int bdnzf_NUM_CREGPFLAG_NUM(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_BDNZF;
	/* 0100000000xBBBCCDDDDDDDDDDDDDD00 */
	dec->operand_n = 4;
	dec->operand_types[0] = PPC_OPER_TYPE_NUM;
	dec->operand_types[1] = PPC_OPER_TYPE_CREG;
	dec->operand_values[1] = (insword & 0x1C0000)>>18;
	dec->operand_types[2] = PPC_OPER_TYPE_FLAG;
	dec->operand_values[2] = (insword & 0x30000)>>16;
	dec->operand_types[3] = PPC_OPER_TYPE_NUM;
	dec->operand_values[3] = (insword & 0xFFFC)>>2;
	dec->operand_fmtstr = PPC_FMTSTR_NUM_MUL_CREG_POS_FLAG_C_NUM;
	return 0;
}

/* bdnzfl NUM*CREG+FLAG,NUM */
int bdnzfl_NUM_CREGPFLAG_NUM(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_BDNZFL;
	/* 0100000000xBBBCCDDDDDDDDDDDDDD01 */
	dec->operand_n = 4;
	dec->operand_types[0] = PPC_OPER_TYPE_NUM;
	dec->operand_types[1] = PPC_OPER_TYPE_CREG;
	dec->operand_values[1] = (insword & 0x1C0000)>>18;
	dec->operand_types[2] = PPC_OPER_TYPE_FLAG;
	dec->operand_values[2] = (insword & 0x30000)>>16;
	dec->operand_types[3] = PPC_OPER_TYPE_NUM;
	dec->operand_values[3] = (insword & 0xFFFC)>>2;
	dec->operand_fmtstr = PPC_FMTSTR_NUM_MUL_CREG_POS_FLAG_C_NUM;
	return 0;
}

/* bdnzfa NUM*CREG+FLAG,NUM */
int bdnzfa_NUM_CREGPFLAG_NUM(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_BDNZFA;
	/* 0100000000xxBBCCDDDDDDDDDDDDDD10 */
	dec->operand_n = 4;
	dec->operand_types[0] = PPC_OPER_TYPE_NUM;
	dec->operand_types[1] = PPC_OPER_TYPE_CREG;
	dec->operand_values[1] = (insword & 0xC0000)>>18;
	dec->operand_types[2] = PPC_OPER_TYPE_FLAG;
	dec->operand_values[2] = (insword & 0x30000)>>16;
	dec->operand_types[3] = PPC_OPER_TYPE_NUM;
	dec->operand_values[3] = (insword & 0xFFFC)>>2;
	dec->operand_fmtstr = PPC_FMTSTR_NUM_MUL_CREG_POS_FLAG_C_NUM;
	return 0;
}

/* bdnzfla NUM*CREG+FLAG,NUM */
int bdnzfla_NUM_CREGPFLAG_NUM(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_BDNZFLA;
	/* 0100000000xBBBCCDDDDDDDDDDDDDD11 */
	dec->operand_n = 4;
	dec->operand_types[0] = PPC_OPER_TYPE_NUM;
	dec->operand_types[1] = PPC_OPER_TYPE_CREG;
	dec->operand_values[1] = (insword & 0x1C0000)>>18;
	dec->operand_types[2] = PPC_OPER_TYPE_FLAG;
	dec->operand_values[2] = (insword & 0x30000)>>16;
	dec->operand_types[3] = PPC_OPER_TYPE_NUM;
	dec->operand_values[3] = (insword & 0xFFFC)>>2;
	dec->operand_fmtstr = PPC_FMTSTR_NUM_MUL_CREG_POS_FLAG_C_NUM;
	return 0;
}

/* bdzf FLAG,NUM */
int bdzf_FLAG_NUM(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_BDZF;
	/* 0100000001x000AABBBBBBBBBBBBBB00 */
	dec->operand_n = 2;
	dec->operand_types[0] = PPC_OPER_TYPE_FLAG;
	dec->operand_values[0] = (insword & 0x30000)>>16;
	dec->operand_types[1] = PPC_OPER_TYPE_NUM;
	dec->operand_values[1] = (insword & 0xFFFC)>>2;
	dec->operand_fmtstr = PPC_FMTSTR_FLAG_C_NUM;
	return 0;
}

/* bdzfl FLAG,NUM */
int bdzfl_FLAG_NUM(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_BDZFL;
	/* 0100000001x000AABBBBBBBBBBBBBB01 */
	dec->operand_n = 2;
	dec->operand_types[0] = PPC_OPER_TYPE_FLAG;
	dec->operand_values[0] = (insword & 0x30000)>>16;
	dec->operand_types[1] = PPC_OPER_TYPE_NUM;
	dec->operand_values[1] = (insword & 0xFFFC)>>2;
	dec->operand_fmtstr = PPC_FMTSTR_FLAG_C_NUM;
	return 0;
}

/* bdzfa FLAG,NUM */
int bdzfa_FLAG_NUM(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_BDZFA;
	/* 0100000001x000AABBBBBBBBBBBBBB10 */
	dec->operand_n = 2;
	dec->operand_types[0] = PPC_OPER_TYPE_FLAG;
	dec->operand_values[0] = (insword & 0x30000)>>16;
	dec->operand_types[1] = PPC_OPER_TYPE_NUM;
	dec->operand_values[1] = (insword & 0xFFFC)>>2;
	dec->operand_fmtstr = PPC_FMTSTR_FLAG_C_NUM;
	return 0;
}

/* bdzfla FLAG,NUM */
int bdzfla_FLAG_NUM(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_BDZFLA;
	/* 0100000001x000AABBBBBBBBBBBBBB11 */
	dec->operand_n = 2;
	dec->operand_types[0] = PPC_OPER_TYPE_FLAG;
	dec->operand_values[0] = (insword & 0x30000)>>16;
	dec->operand_types[1] = PPC_OPER_TYPE_NUM;
	dec->operand_values[1] = (insword & 0xFFFC)>>2;
	dec->operand_fmtstr = PPC_FMTSTR_FLAG_C_NUM;
	return 0;
}

/* bdzf NUM*CREG+FLAG,NUM */
int bdzf_NUM_CREGPFLAG_NUM(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_BDZF;
	/* 0100000001xBBBCCDDDDDDDDDDDDDD00 */
	dec->operand_n = 4;
	dec->operand_types[0] = PPC_OPER_TYPE_NUM;
	dec->operand_types[1] = PPC_OPER_TYPE_CREG;
	dec->operand_values[1] = (insword & 0x1C0000)>>18;
	dec->operand_types[2] = PPC_OPER_TYPE_FLAG;
	dec->operand_values[2] = (insword & 0x30000)>>16;
	dec->operand_types[3] = PPC_OPER_TYPE_NUM;
	dec->operand_values[3] = (insword & 0xFFFC)>>2;
	dec->operand_fmtstr = PPC_FMTSTR_NUM_MUL_CREG_POS_FLAG_C_NUM;
	return 0;
}

/* bdzfl NUM*CREG+FLAG,NUM */
int bdzfl_NUM_CREGPFLAG_NUM(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_BDZFL;
	/* 0100000001xBBxCCDDDDDDDDDDDDDD01 */
	dec->operand_n = 4;
	dec->operand_types[0] = PPC_OPER_TYPE_NUM;
	dec->operand_types[1] = PPC_OPER_TYPE_CREG;
	dec->operand_values[1] = (insword & 0x180000)>>19;
	dec->operand_types[2] = PPC_OPER_TYPE_FLAG;
	dec->operand_values[2] = (insword & 0x30000)>>16;
	dec->operand_types[3] = PPC_OPER_TYPE_NUM;
	dec->operand_values[3] = (insword & 0xFFFC)>>2;
	dec->operand_fmtstr = PPC_FMTSTR_NUM_MUL_CREG_POS_FLAG_C_NUM;
	return 0;
}

/* bdzfa NUM*CREG+FLAG,NUM */
int bdzfa_NUM_CREGPFLAG_NUM(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_BDZFA;
	/* 0100000001xBxBCCDDDDDDDDDDDDDD10 */
	dec->operand_n = 4;
	dec->operand_types[0] = PPC_OPER_TYPE_NUM;
	dec->operand_types[1] = PPC_OPER_TYPE_CREG;
	dec->operand_values[1] = ((insword & 0x100000)>>19)|((insword & 0x40000)>>18);
	dec->operand_types[2] = PPC_OPER_TYPE_FLAG;
	dec->operand_values[2] = (insword & 0x30000)>>16;
	dec->operand_types[3] = PPC_OPER_TYPE_NUM;
	dec->operand_values[3] = (insword & 0xFFFC)>>2;
	dec->operand_fmtstr = PPC_FMTSTR_NUM_MUL_CREG_POS_FLAG_C_NUM;
	return 0;
}

/* bdzfla NUM*CREG+FLAG,NUM */
int bdzfla_NUM_CREGPFLAG_NUM(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_BDZFLA;
	/* 0100000001xBBxCCDDDDDDDDDDDDDD11 */
	dec->operand_n = 4;
	dec->operand_types[0] = PPC_OPER_TYPE_NUM;
	dec->operand_types[1] = PPC_OPER_TYPE_CREG;
	dec->operand_values[1] = (insword & 0x180000)>>19;
	dec->operand_types[2] = PPC_OPER_TYPE_FLAG;
	dec->operand_values[2] = (insword & 0x30000)>>16;
	dec->operand_types[3] = PPC_OPER_TYPE_NUM;
	dec->operand_values[3] = (insword & 0xFFFC)>>2;
	dec->operand_fmtstr = PPC_FMTSTR_NUM_MUL_CREG_POS_FLAG_C_NUM;
	return 0;
}

/* bge NUM */
int bge_NUM(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_BGE;
	/* 0100000010x00000AAAAAAAAAAAAAA00 */
	dec->operand_n = 1;
	dec->operand_types[0] = PPC_OPER_TYPE_NUM;
	dec->operand_values[0] = (insword & 0xFFFC)>>2;
	dec->operand_fmtstr = PPC_FMTSTR_NUM;
	return 0;
}

/* bgel NUM */
int bgel_NUM(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_BGEL;
	/* 0100000010x00000AAAAAAAAAAAAAA01 */
	dec->operand_n = 1;
	dec->operand_types[0] = PPC_OPER_TYPE_NUM;
	dec->operand_values[0] = (insword & 0xFFFC)>>2;
	dec->operand_fmtstr = PPC_FMTSTR_NUM;
	return 0;
}

/* bgea NUM */
int bgea_NUM(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_BGEA;
	/* 0100000010x00000AAAAAAAAAAAAAA10 */
	dec->operand_n = 1;
	dec->operand_types[0] = PPC_OPER_TYPE_NUM;
	dec->operand_values[0] = (insword & 0xFFFC)>>2;
	dec->operand_fmtstr = PPC_FMTSTR_NUM;
	return 0;
}

/* bgela NUM */
int bgela_NUM(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_BGELA;
	/* 0100000010x00000AAAAAAAAAAAAAA11 */
	dec->operand_n = 1;
	dec->operand_types[0] = PPC_OPER_TYPE_NUM;
	dec->operand_values[0] = (insword & 0xFFFC)>>2;
	dec->operand_fmtstr = PPC_FMTSTR_NUM;
	return 0;
}

/* ble NUM */
int ble_NUM(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_BLE;
	/* 0100000010x00001AAAAAAAAAAAAAA00 */
	dec->operand_n = 1;
	dec->operand_types[0] = PPC_OPER_TYPE_NUM;
	dec->operand_values[0] = (insword & 0xFFFC)>>2;
	dec->operand_fmtstr = PPC_FMTSTR_NUM;
	return 0;
}

/* blel NUM */
int blel_NUM(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_BLEL;
	/* 0100000010x00001AAAAAAAAAAAAAA01 */
	dec->operand_n = 1;
	dec->operand_types[0] = PPC_OPER_TYPE_NUM;
	dec->operand_values[0] = (insword & 0xFFFC)>>2;
	dec->operand_fmtstr = PPC_FMTSTR_NUM;
	return 0;
}

/* blea NUM */
int blea_NUM(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_BLEA;
	/* 0100000010x00001AAAAAAAAAAAAAA10 */
	dec->operand_n = 1;
	dec->operand_types[0] = PPC_OPER_TYPE_NUM;
	dec->operand_values[0] = (insword & 0xFFFC)>>2;
	dec->operand_fmtstr = PPC_FMTSTR_NUM;
	return 0;
}

/* blela NUM */
int blela_NUM(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_BLELA;
	/* 0100000010x00001AAAAAAAAAAAAAA11 */
	dec->operand_n = 1;
	dec->operand_types[0] = PPC_OPER_TYPE_NUM;
	dec->operand_values[0] = (insword & 0xFFFC)>>2;
	dec->operand_fmtstr = PPC_FMTSTR_NUM;
	return 0;
}

/* bne NUM */
int bne_NUM(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_BNE;
	/* 0100000010x00010AAAAAAAAAAAAAA00 */
	dec->operand_n = 1;
	dec->operand_types[0] = PPC_OPER_TYPE_NUM;
	dec->operand_values[0] = (insword & 0xFFFC)>>2;
	dec->operand_fmtstr = PPC_FMTSTR_NUM;
	return 0;
}

/* bnel NUM */
int bnel_NUM(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_BNEL;
	/* 0100000010x00010AAAAAAAAAAAAAA01 */
	dec->operand_n = 1;
	dec->operand_types[0] = PPC_OPER_TYPE_NUM;
	dec->operand_values[0] = (insword & 0xFFFC)>>2;
	dec->operand_fmtstr = PPC_FMTSTR_NUM;
	return 0;
}

/* bnea NUM */
int bnea_NUM(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_BNEA;
	/* 0100000010x00010AAAAAAAAAAAAAA10 */
	dec->operand_n = 1;
	dec->operand_types[0] = PPC_OPER_TYPE_NUM;
	dec->operand_values[0] = (insword & 0xFFFC)>>2;
	dec->operand_fmtstr = PPC_FMTSTR_NUM;
	return 0;
}

/* bnela NUM */
int bnela_NUM(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_BNELA;
	/* 0100000010x00010AAAAAAAAAAAAAA11 */
	dec->operand_n = 1;
	dec->operand_types[0] = PPC_OPER_TYPE_NUM;
	dec->operand_values[0] = (insword & 0xFFFC)>>2;
	dec->operand_fmtstr = PPC_FMTSTR_NUM;
	return 0;
}

/* bns NUM */
int bns_NUM(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_BNS;
	/* 0100000010x00011AAAAAAAAAAAAAA00 */
	dec->operand_n = 1;
	dec->operand_types[0] = PPC_OPER_TYPE_NUM;
	dec->operand_values[0] = (insword & 0xFFFC)>>2;
	dec->operand_fmtstr = PPC_FMTSTR_NUM;
	return 0;
}

/* bnsl NUM */
int bnsl_NUM(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_BNSL;
	/* 0100000010x00011AAAAAAAAAAAAAA01 */
	dec->operand_n = 1;
	dec->operand_types[0] = PPC_OPER_TYPE_NUM;
	dec->operand_values[0] = (insword & 0xFFFC)>>2;
	dec->operand_fmtstr = PPC_FMTSTR_NUM;
	return 0;
}

/* bnsa NUM */
int bnsa_NUM(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_BNSA;
	/* 0100000010x00011AAAAAAAAAAAAAA10 */
	dec->operand_n = 1;
	dec->operand_types[0] = PPC_OPER_TYPE_NUM;
	dec->operand_values[0] = (insword & 0xFFFC)>>2;
	dec->operand_fmtstr = PPC_FMTSTR_NUM;
	return 0;
}

/* bnsla NUM */
int bnsla_NUM(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_BNSLA;
	/* 0100000010x00011AAAAAAAAAAAAAA11 */
	dec->operand_n = 1;
	dec->operand_types[0] = PPC_OPER_TYPE_NUM;
	dec->operand_values[0] = (insword & 0xFFFC)>>2;
	dec->operand_fmtstr = PPC_FMTSTR_NUM;
	return 0;
}

/* bge CREG,NUM */
int bge_CREG_NUM(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_BGE;
	/* 0100000010xAxA00BBBBBBBBBBBBBB00 */
	dec->operand_n = 2;
	dec->operand_types[0] = PPC_OPER_TYPE_CREG;
	dec->operand_values[0] = ((insword & 0x100000)>>19)|((insword & 0x40000)>>18);
	dec->operand_types[1] = PPC_OPER_TYPE_NUM;
	dec->operand_values[1] = (insword & 0xFFFC)>>2;
	dec->operand_fmtstr = PPC_FMTSTR_CREG_C_NUM;
	return 0;
}

/* bgel CREG,NUM */
int bgel_CREG_NUM(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_BGEL;
	/* 0100000010xAAA00BBBBBBBBBBBBBB01 */
	dec->operand_n = 2;
	dec->operand_types[0] = PPC_OPER_TYPE_CREG;
	dec->operand_values[0] = (insword & 0x1C0000)>>18;
	dec->operand_types[1] = PPC_OPER_TYPE_NUM;
	dec->operand_values[1] = (insword & 0xFFFC)>>2;
	dec->operand_fmtstr = PPC_FMTSTR_CREG_C_NUM;
	return 0;
}

/* bgea CREG,NUM */
int bgea_CREG_NUM(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_BGEA;
	/* 0100000010xAxA00BBBBBBBBBBBBBB10 */
	dec->operand_n = 2;
	dec->operand_types[0] = PPC_OPER_TYPE_CREG;
	dec->operand_values[0] = ((insword & 0x100000)>>19)|((insword & 0x40000)>>18);
	dec->operand_types[1] = PPC_OPER_TYPE_NUM;
	dec->operand_values[1] = (insword & 0xFFFC)>>2;
	dec->operand_fmtstr = PPC_FMTSTR_CREG_C_NUM;
	return 0;
}

/* bgela CREG,NUM */
int bgela_CREG_NUM(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_BGELA;
	/* 0100000010xAAA00BBBBBBBBBBBBBB11 */
	dec->operand_n = 2;
	dec->operand_types[0] = PPC_OPER_TYPE_CREG;
	dec->operand_values[0] = (insword & 0x1C0000)>>18;
	dec->operand_types[1] = PPC_OPER_TYPE_NUM;
	dec->operand_values[1] = (insword & 0xFFFC)>>2;
	dec->operand_fmtstr = PPC_FMTSTR_CREG_C_NUM;
	return 0;
}

/* ble CREG,NUM */
int ble_CREG_NUM(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_BLE;
	/* 0100000010xAAA01BBBBBBBBBBBBBB00 */
	dec->operand_n = 2;
	dec->operand_types[0] = PPC_OPER_TYPE_CREG;
	dec->operand_values[0] = (insword & 0x1C0000)>>18;
	dec->operand_types[1] = PPC_OPER_TYPE_NUM;
	dec->operand_values[1] = (insword & 0xFFFC)>>2;
	dec->operand_fmtstr = PPC_FMTSTR_CREG_C_NUM;
	return 0;
}

/* blel CREG,NUM */
int blel_CREG_NUM(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_BLEL;
	/* 0100000010xAxA01BBBBBBBBBBBBBB01 */
	dec->operand_n = 2;
	dec->operand_types[0] = PPC_OPER_TYPE_CREG;
	dec->operand_values[0] = ((insword & 0x100000)>>19)|((insword & 0x40000)>>18);
	dec->operand_types[1] = PPC_OPER_TYPE_NUM;
	dec->operand_values[1] = (insword & 0xFFFC)>>2;
	dec->operand_fmtstr = PPC_FMTSTR_CREG_C_NUM;
	return 0;
}

/* blea CREG,NUM */
int blea_CREG_NUM(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_BLEA;
	/* 0100000010xAAA01BBBBBBBBBBBBBB10 */
	dec->operand_n = 2;
	dec->operand_types[0] = PPC_OPER_TYPE_CREG;
	dec->operand_values[0] = (insword & 0x1C0000)>>18;
	dec->operand_types[1] = PPC_OPER_TYPE_NUM;
	dec->operand_values[1] = (insword & 0xFFFC)>>2;
	dec->operand_fmtstr = PPC_FMTSTR_CREG_C_NUM;
	return 0;
}

/* blela CREG,NUM */
int blela_CREG_NUM(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_BLELA;
	/* 0100000010xAAA01BBBBBBBBBBBBBB11 */
	dec->operand_n = 2;
	dec->operand_types[0] = PPC_OPER_TYPE_CREG;
	dec->operand_values[0] = (insword & 0x1C0000)>>18;
	dec->operand_types[1] = PPC_OPER_TYPE_NUM;
	dec->operand_values[1] = (insword & 0xFFFC)>>2;
	dec->operand_fmtstr = PPC_FMTSTR_CREG_C_NUM;
	return 0;
}

/* bne CREG,NUM */
int bne_CREG_NUM(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_BNE;
	/* 0100000010xAAx10BBBBBBBBBBBBBB00 */
	dec->operand_n = 2;
	dec->operand_types[0] = PPC_OPER_TYPE_CREG;
	dec->operand_values[0] = (insword & 0x180000)>>19;
	dec->operand_types[1] = PPC_OPER_TYPE_NUM;
	dec->operand_values[1] = (insword & 0xFFFC)>>2;
	dec->operand_fmtstr = PPC_FMTSTR_CREG_C_NUM;
	return 0;
}

/* bnel CREG,NUM */
int bnel_CREG_NUM(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_BNEL;
	/* 0100000010xAxA10BBBBBBBBBBBBBB01 */
	dec->operand_n = 2;
	dec->operand_types[0] = PPC_OPER_TYPE_CREG;
	dec->operand_values[0] = ((insword & 0x100000)>>19)|((insword & 0x40000)>>18);
	dec->operand_types[1] = PPC_OPER_TYPE_NUM;
	dec->operand_values[1] = (insword & 0xFFFC)>>2;
	dec->operand_fmtstr = PPC_FMTSTR_CREG_C_NUM;
	return 0;
}

/* bnea CREG,NUM */
int bnea_CREG_NUM(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_BNEA;
	/* 0100000010xAAA10BBBBBBBBBBBBBB10 */
	dec->operand_n = 2;
	dec->operand_types[0] = PPC_OPER_TYPE_CREG;
	dec->operand_values[0] = (insword & 0x1C0000)>>18;
	dec->operand_types[1] = PPC_OPER_TYPE_NUM;
	dec->operand_values[1] = (insword & 0xFFFC)>>2;
	dec->operand_fmtstr = PPC_FMTSTR_CREG_C_NUM;
	return 0;
}

/* bnela CREG,NUM */
int bnela_CREG_NUM(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_BNELA;
	/* 0100000010xAxA10BBBBBBBBBBBBBB11 */
	dec->operand_n = 2;
	dec->operand_types[0] = PPC_OPER_TYPE_CREG;
	dec->operand_values[0] = ((insword & 0x100000)>>19)|((insword & 0x40000)>>18);
	dec->operand_types[1] = PPC_OPER_TYPE_NUM;
	dec->operand_values[1] = (insword & 0xFFFC)>>2;
	dec->operand_fmtstr = PPC_FMTSTR_CREG_C_NUM;
	return 0;
}

/* bns CREG,NUM */
int bns_CREG_NUM(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_BNS;
	/* 0100000010xxAA11BBBBBBBBBBBBBB00 */
	dec->operand_n = 2;
	dec->operand_types[0] = PPC_OPER_TYPE_CREG;
	dec->operand_values[0] = (insword & 0xC0000)>>18;
	dec->operand_types[1] = PPC_OPER_TYPE_NUM;
	dec->operand_values[1] = (insword & 0xFFFC)>>2;
	dec->operand_fmtstr = PPC_FMTSTR_CREG_C_NUM;
	return 0;
}

/* bnsl CREG,NUM */
int bnsl_CREG_NUM(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_BNSL;
	/* 0100000010xAAA11BBBBBBBBBBBBBB01 */
	dec->operand_n = 2;
	dec->operand_types[0] = PPC_OPER_TYPE_CREG;
	dec->operand_values[0] = (insword & 0x1C0000)>>18;
	dec->operand_types[1] = PPC_OPER_TYPE_NUM;
	dec->operand_values[1] = (insword & 0xFFFC)>>2;
	dec->operand_fmtstr = PPC_FMTSTR_CREG_C_NUM;
	return 0;
}

/* bnsa CREG,NUM */
int bnsa_CREG_NUM(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_BNSA;
	/* 0100000010xAAx11BBBBBBBBBBBBBB10 */
	dec->operand_n = 2;
	dec->operand_types[0] = PPC_OPER_TYPE_CREG;
	dec->operand_values[0] = (insword & 0x180000)>>19;
	dec->operand_types[1] = PPC_OPER_TYPE_NUM;
	dec->operand_values[1] = (insword & 0xFFFC)>>2;
	dec->operand_fmtstr = PPC_FMTSTR_CREG_C_NUM;
	return 0;
}

/* bnsla CREG,NUM */
int bnsla_CREG_NUM(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_BNSLA;
	/* 0100000010xxAA11BBBBBBBBBBBBBB11 */
	dec->operand_n = 2;
	dec->operand_types[0] = PPC_OPER_TYPE_CREG;
	dec->operand_values[0] = (insword & 0xC0000)>>18;
	dec->operand_types[1] = PPC_OPER_TYPE_NUM;
	dec->operand_values[1] = (insword & 0xFFFC)>>2;
	dec->operand_fmtstr = PPC_FMTSTR_CREG_C_NUM;
	return 0;
}

/* bge -NUM */
int bge_NNUM(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_BGE;
	/* 0100000011000000AAAAAAAAAAAAAA00 */
	dec->operand_n = 1;
	dec->operand_types[0] = PPC_OPER_TYPE_NUM;
	dec->operand_values[0] = (insword & 0xFFFC)>>2;
	dec->operand_fmtstr = PPC_FMTSTR__NEG_NUM;
	return 0;
}

/* bgel -NUM */
int bgel_NNUM(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_BGEL;
	/* 0100000011000000AAAAAAAAAAAAAA01 */
	dec->operand_n = 1;
	dec->operand_types[0] = PPC_OPER_TYPE_NUM;
	dec->operand_values[0] = (insword & 0xFFFC)>>2;
	dec->operand_fmtstr = PPC_FMTSTR__NEG_NUM;
	return 0;
}

/* bgea -NUM */
int bgea_NNUM(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_BGEA;
	/* 0100000011000000AAAAAAAAAAAAAA10 */
	dec->operand_n = 1;
	dec->operand_types[0] = PPC_OPER_TYPE_NUM;
	dec->operand_values[0] = (insword & 0xFFFC)>>2;
	dec->operand_fmtstr = PPC_FMTSTR__NEG_NUM;
	return 0;
}

/* bgela -NUM */
int bgela_NNUM(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_BGELA;
	/* 0100000011000000AAAAAAAAAAAAAA11 */
	dec->operand_n = 1;
	dec->operand_types[0] = PPC_OPER_TYPE_NUM;
	dec->operand_values[0] = (insword & 0xFFFC)>>2;
	dec->operand_fmtstr = PPC_FMTSTR__NEG_NUM;
	return 0;
}

/* ble -NUM */
int ble_NNUM(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_BLE;
	/* 0100000011000001AAAAAAAAAAAAAA00 */
	dec->operand_n = 1;
	dec->operand_types[0] = PPC_OPER_TYPE_NUM;
	dec->operand_values[0] = (insword & 0xFFFC)>>2;
	dec->operand_fmtstr = PPC_FMTSTR__NEG_NUM;
	return 0;
}

/* blel -NUM */
int blel_NNUM(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_BLEL;
	/* 0100000011000001AAAAAAAAAAAAAA01 */
	dec->operand_n = 1;
	dec->operand_types[0] = PPC_OPER_TYPE_NUM;
	dec->operand_values[0] = (insword & 0xFFFC)>>2;
	dec->operand_fmtstr = PPC_FMTSTR__NEG_NUM;
	return 0;
}

/* blea -NUM */
int blea_NNUM(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_BLEA;
	/* 0100000011000001AAAAAAAAAAAAAA10 */
	dec->operand_n = 1;
	dec->operand_types[0] = PPC_OPER_TYPE_NUM;
	dec->operand_values[0] = (insword & 0xFFFC)>>2;
	dec->operand_fmtstr = PPC_FMTSTR__NEG_NUM;
	return 0;
}

/* blela -NUM */
int blela_NNUM(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_BLELA;
	/* 0100000011000001AAAAAAAAAAAAAA11 */
	dec->operand_n = 1;
	dec->operand_types[0] = PPC_OPER_TYPE_NUM;
	dec->operand_values[0] = (insword & 0xFFFC)>>2;
	dec->operand_fmtstr = PPC_FMTSTR__NEG_NUM;
	return 0;
}

/* bne -NUM */
int bne_NNUM(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_BNE;
	/* 0100000011000010AAAAAAAAAAAAAA00 */
	dec->operand_n = 1;
	dec->operand_types[0] = PPC_OPER_TYPE_NUM;
	dec->operand_values[0] = (insword & 0xFFFC)>>2;
	dec->operand_fmtstr = PPC_FMTSTR__NEG_NUM;
	return 0;
}

/* bnel -NUM */
int bnel_NNUM(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_BNEL;
	/* 0100000011000010AAAAAAAAAAAAAA01 */
	dec->operand_n = 1;
	dec->operand_types[0] = PPC_OPER_TYPE_NUM;
	dec->operand_values[0] = (insword & 0xFFFC)>>2;
	dec->operand_fmtstr = PPC_FMTSTR__NEG_NUM;
	return 0;
}

/* bnea -NUM */
int bnea_NNUM(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_BNEA;
	/* 0100000011000010AAAAAAAAAAAAAA10 */
	dec->operand_n = 1;
	dec->operand_types[0] = PPC_OPER_TYPE_NUM;
	dec->operand_values[0] = (insword & 0xFFFC)>>2;
	dec->operand_fmtstr = PPC_FMTSTR__NEG_NUM;
	return 0;
}

/* bnela -NUM */
int bnela_NNUM(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_BNELA;
	/* 0100000011000010AAAAAAAAAAAAAA11 */
	dec->operand_n = 1;
	dec->operand_types[0] = PPC_OPER_TYPE_NUM;
	dec->operand_values[0] = (insword & 0xFFFC)>>2;
	dec->operand_fmtstr = PPC_FMTSTR__NEG_NUM;
	return 0;
}

/* bns -NUM */
int bns_NNUM(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_BNS;
	/* 0100000011000011AAAAAAAAAAAAAA00 */
	dec->operand_n = 1;
	dec->operand_types[0] = PPC_OPER_TYPE_NUM;
	dec->operand_values[0] = (insword & 0xFFFC)>>2;
	dec->operand_fmtstr = PPC_FMTSTR__NEG_NUM;
	return 0;
}

/* bnsl -NUM */
int bnsl_NNUM(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_BNSL;
	/* 0100000011000011AAAAAAAAAAAAAA01 */
	dec->operand_n = 1;
	dec->operand_types[0] = PPC_OPER_TYPE_NUM;
	dec->operand_values[0] = (insword & 0xFFFC)>>2;
	dec->operand_fmtstr = PPC_FMTSTR__NEG_NUM;
	return 0;
}

/* bnsa -NUM */
int bnsa_NNUM(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_BNSA;
	/* 0100000011000011AAAAAAAAAAAAAA10 */
	dec->operand_n = 1;
	dec->operand_types[0] = PPC_OPER_TYPE_NUM;
	dec->operand_values[0] = (insword & 0xFFFC)>>2;
	dec->operand_fmtstr = PPC_FMTSTR__NEG_NUM;
	return 0;
}

/* bnsla -NUM */
int bnsla_NNUM(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_BNSLA;
	/* 0100000011000011AAAAAAAAAAAAAA11 */
	dec->operand_n = 1;
	dec->operand_types[0] = PPC_OPER_TYPE_NUM;
	dec->operand_values[0] = (insword & 0xFFFC)>>2;
	dec->operand_fmtstr = PPC_FMTSTR__NEG_NUM;
	return 0;
}

/* bge -CREG,NUM */
int bge_NCREG_NUM(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_BGE;
	/* 01000000110AAA00BBBBBBBBBBBBBB00 */
	dec->operand_n = 2;
	dec->operand_types[0] = PPC_OPER_TYPE_CREG;
	dec->operand_values[0] = (insword & 0x1C0000)>>18;
	dec->operand_types[1] = PPC_OPER_TYPE_NUM;
	dec->operand_values[1] = (insword & 0xFFFC)>>2;
	dec->operand_fmtstr = PPC_FMTSTR__NEG_CREG_C_NUM;
	return 0;
}

/* bgel -CREG,NUM */
int bgel_NCREG_NUM(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_BGEL;
	/* 01000000110AAA00BBBBBBBBBBBBBB01 */
	dec->operand_n = 2;
	dec->operand_types[0] = PPC_OPER_TYPE_CREG;
	dec->operand_values[0] = (insword & 0x1C0000)>>18;
	dec->operand_types[1] = PPC_OPER_TYPE_NUM;
	dec->operand_values[1] = (insword & 0xFFFC)>>2;
	dec->operand_fmtstr = PPC_FMTSTR__NEG_CREG_C_NUM;
	return 0;
}

/* bgea -CREG,NUM */
int bgea_NCREG_NUM(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_BGEA;
	/* 01000000110AAA00BBBBBBBBBBBBBB10 */
	dec->operand_n = 2;
	dec->operand_types[0] = PPC_OPER_TYPE_CREG;
	dec->operand_values[0] = (insword & 0x1C0000)>>18;
	dec->operand_types[1] = PPC_OPER_TYPE_NUM;
	dec->operand_values[1] = (insword & 0xFFFC)>>2;
	dec->operand_fmtstr = PPC_FMTSTR__NEG_CREG_C_NUM;
	return 0;
}

/* bgela -CREG,NUM */
int bgela_NCREG_NUM(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_BGELA;
	/* 01000000110AAx00BBBBBBBBBBBBBB11 */
	dec->operand_n = 2;
	dec->operand_types[0] = PPC_OPER_TYPE_CREG;
	dec->operand_values[0] = (insword & 0x180000)>>19;
	dec->operand_types[1] = PPC_OPER_TYPE_NUM;
	dec->operand_values[1] = (insword & 0xFFFC)>>2;
	dec->operand_fmtstr = PPC_FMTSTR__NEG_CREG_C_NUM;
	return 0;
}

/* ble -CREG,NUM */
int ble_NCREG_NUM(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_BLE;
	/* 01000000110AAx01BBBBBBBBBBBBBB00 */
	dec->operand_n = 2;
	dec->operand_types[0] = PPC_OPER_TYPE_CREG;
	dec->operand_values[0] = (insword & 0x180000)>>19;
	dec->operand_types[1] = PPC_OPER_TYPE_NUM;
	dec->operand_values[1] = (insword & 0xFFFC)>>2;
	dec->operand_fmtstr = PPC_FMTSTR__NEG_CREG_C_NUM;
	return 0;
}

/* blel -CREG,NUM */
int blel_NCREG_NUM(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_BLEL;
	/* 01000000110AAA01BBBBBBBBBBBBBB01 */
	dec->operand_n = 2;
	dec->operand_types[0] = PPC_OPER_TYPE_CREG;
	dec->operand_values[0] = (insword & 0x1C0000)>>18;
	dec->operand_types[1] = PPC_OPER_TYPE_NUM;
	dec->operand_values[1] = (insword & 0xFFFC)>>2;
	dec->operand_fmtstr = PPC_FMTSTR__NEG_CREG_C_NUM;
	return 0;
}

/* blea -CREG,NUM */
int blea_NCREG_NUM(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_BLEA;
	/* 01000000110xAA01BBBBBBBBBBBBBB10 */
	dec->operand_n = 2;
	dec->operand_types[0] = PPC_OPER_TYPE_CREG;
	dec->operand_values[0] = (insword & 0xC0000)>>18;
	dec->operand_types[1] = PPC_OPER_TYPE_NUM;
	dec->operand_values[1] = (insword & 0xFFFC)>>2;
	dec->operand_fmtstr = PPC_FMTSTR__NEG_CREG_C_NUM;
	return 0;
}

/* blela -CREG,NUM */
int blela_NCREG_NUM(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_BLELA;
	/* 01000000110AAA01BBBBBBBBBBBBBB11 */
	dec->operand_n = 2;
	dec->operand_types[0] = PPC_OPER_TYPE_CREG;
	dec->operand_values[0] = (insword & 0x1C0000)>>18;
	dec->operand_types[1] = PPC_OPER_TYPE_NUM;
	dec->operand_values[1] = (insword & 0xFFFC)>>2;
	dec->operand_fmtstr = PPC_FMTSTR__NEG_CREG_C_NUM;
	return 0;
}

/* bne -CREG,NUM */
int bne_NCREG_NUM(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_BNE;
	/* 01000000110AxA10BBBBBBBBBBBBBB00 */
	dec->operand_n = 2;
	dec->operand_types[0] = PPC_OPER_TYPE_CREG;
	dec->operand_values[0] = ((insword & 0x100000)>>19)|((insword & 0x40000)>>18);
	dec->operand_types[1] = PPC_OPER_TYPE_NUM;
	dec->operand_values[1] = (insword & 0xFFFC)>>2;
	dec->operand_fmtstr = PPC_FMTSTR__NEG_CREG_C_NUM;
	return 0;
}

/* bnel -CREG,NUM */
int bnel_NCREG_NUM(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_BNEL;
	/* 01000000110xAA10BBBBBBBBBBBBBB01 */
	dec->operand_n = 2;
	dec->operand_types[0] = PPC_OPER_TYPE_CREG;
	dec->operand_values[0] = (insword & 0xC0000)>>18;
	dec->operand_types[1] = PPC_OPER_TYPE_NUM;
	dec->operand_values[1] = (insword & 0xFFFC)>>2;
	dec->operand_fmtstr = PPC_FMTSTR__NEG_CREG_C_NUM;
	return 0;
}

/* bnea -CREG,NUM */
int bnea_NCREG_NUM(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_BNEA;
	/* 01000000110AAA10BBBBBBBBBBBBBB10 */
	dec->operand_n = 2;
	dec->operand_types[0] = PPC_OPER_TYPE_CREG;
	dec->operand_values[0] = (insword & 0x1C0000)>>18;
	dec->operand_types[1] = PPC_OPER_TYPE_NUM;
	dec->operand_values[1] = (insword & 0xFFFC)>>2;
	dec->operand_fmtstr = PPC_FMTSTR__NEG_CREG_C_NUM;
	return 0;
}

/* bnela -CREG,NUM */
int bnela_NCREG_NUM(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_BNELA;
	/* 01000000110AxA10BBBBBBBBBBBBBB11 */
	dec->operand_n = 2;
	dec->operand_types[0] = PPC_OPER_TYPE_CREG;
	dec->operand_values[0] = ((insword & 0x100000)>>19)|((insword & 0x40000)>>18);
	dec->operand_types[1] = PPC_OPER_TYPE_NUM;
	dec->operand_values[1] = (insword & 0xFFFC)>>2;
	dec->operand_fmtstr = PPC_FMTSTR__NEG_CREG_C_NUM;
	return 0;
}

/* bns -CREG,NUM */
int bns_NCREG_NUM(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_BNS;
	/* 01000000110AxA11BBBBBBBBBBBBBB00 */
	dec->operand_n = 2;
	dec->operand_types[0] = PPC_OPER_TYPE_CREG;
	dec->operand_values[0] = ((insword & 0x100000)>>19)|((insword & 0x40000)>>18);
	dec->operand_types[1] = PPC_OPER_TYPE_NUM;
	dec->operand_values[1] = (insword & 0xFFFC)>>2;
	dec->operand_fmtstr = PPC_FMTSTR__NEG_CREG_C_NUM;
	return 0;
}

/* bnsl -CREG,NUM */
int bnsl_NCREG_NUM(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_BNSL;
	/* 01000000110AAA11BBBBBBBBBBBBBB01 */
	dec->operand_n = 2;
	dec->operand_types[0] = PPC_OPER_TYPE_CREG;
	dec->operand_values[0] = (insword & 0x1C0000)>>18;
	dec->operand_types[1] = PPC_OPER_TYPE_NUM;
	dec->operand_values[1] = (insword & 0xFFFC)>>2;
	dec->operand_fmtstr = PPC_FMTSTR__NEG_CREG_C_NUM;
	return 0;
}

/* bnsa -CREG,NUM */
int bnsa_NCREG_NUM(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_BNSA;
	/* 01000000110xAA11BBBBBBBBBBBBBB10 */
	dec->operand_n = 2;
	dec->operand_types[0] = PPC_OPER_TYPE_CREG;
	dec->operand_values[0] = (insword & 0xC0000)>>18;
	dec->operand_types[1] = PPC_OPER_TYPE_NUM;
	dec->operand_values[1] = (insword & 0xFFFC)>>2;
	dec->operand_fmtstr = PPC_FMTSTR__NEG_CREG_C_NUM;
	return 0;
}

/* bnsla -CREG,NUM */
int bnsla_NCREG_NUM(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_BNSLA;
	/* 01000000110AAA11BBBBBBBBBBBBBB11 */
	dec->operand_n = 2;
	dec->operand_types[0] = PPC_OPER_TYPE_CREG;
	dec->operand_values[0] = (insword & 0x1C0000)>>18;
	dec->operand_types[1] = PPC_OPER_TYPE_NUM;
	dec->operand_values[1] = (insword & 0xFFFC)>>2;
	dec->operand_fmtstr = PPC_FMTSTR__NEG_CREG_C_NUM;
	return 0;
}

/* bge +NUM */
int bge_PNUM(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_BGE;
	/* 0100000011100000AAAAAAAAAAAAAA00 */
	dec->operand_n = 1;
	dec->operand_types[0] = PPC_OPER_TYPE_NUM;
	dec->operand_values[0] = (insword & 0xFFFC)>>2;
	dec->operand_fmtstr = PPC_FMTSTR__POS_NUM;
	return 0;
}

/* bgel +NUM */
int bgel_PNUM(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_BGEL;
	/* 0100000011100000AAAAAAAAAAAAAA01 */
	dec->operand_n = 1;
	dec->operand_types[0] = PPC_OPER_TYPE_NUM;
	dec->operand_values[0] = (insword & 0xFFFC)>>2;
	dec->operand_fmtstr = PPC_FMTSTR__POS_NUM;
	return 0;
}

/* bgea +NUM */
int bgea_PNUM(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_BGEA;
	/* 0100000011100000AAAAAAAAAAAAAA10 */
	dec->operand_n = 1;
	dec->operand_types[0] = PPC_OPER_TYPE_NUM;
	dec->operand_values[0] = (insword & 0xFFFC)>>2;
	dec->operand_fmtstr = PPC_FMTSTR__POS_NUM;
	return 0;
}

/* bgela +NUM */
int bgela_PNUM(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_BGELA;
	/* 0100000011100000AAAAAAAAAAAAAA11 */
	dec->operand_n = 1;
	dec->operand_types[0] = PPC_OPER_TYPE_NUM;
	dec->operand_values[0] = (insword & 0xFFFC)>>2;
	dec->operand_fmtstr = PPC_FMTSTR__POS_NUM;
	return 0;
}

/* ble +NUM */
int ble_PNUM(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_BLE;
	/* 0100000011100001AAAAAAAAAAAAAA00 */
	dec->operand_n = 1;
	dec->operand_types[0] = PPC_OPER_TYPE_NUM;
	dec->operand_values[0] = (insword & 0xFFFC)>>2;
	dec->operand_fmtstr = PPC_FMTSTR__POS_NUM;
	return 0;
}

/* blel +NUM */
int blel_PNUM(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_BLEL;
	/* 0100000011100001AAAAAAAAAAAAAA01 */
	dec->operand_n = 1;
	dec->operand_types[0] = PPC_OPER_TYPE_NUM;
	dec->operand_values[0] = (insword & 0xFFFC)>>2;
	dec->operand_fmtstr = PPC_FMTSTR__POS_NUM;
	return 0;
}

/* blea +NUM */
int blea_PNUM(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_BLEA;
	/* 0100000011100001AAAAAAAAAAAAAA10 */
	dec->operand_n = 1;
	dec->operand_types[0] = PPC_OPER_TYPE_NUM;
	dec->operand_values[0] = (insword & 0xFFFC)>>2;
	dec->operand_fmtstr = PPC_FMTSTR__POS_NUM;
	return 0;
}

/* blela +NUM */
int blela_PNUM(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_BLELA;
	/* 0100000011100001AAAAAAAAAAAAAA11 */
	dec->operand_n = 1;
	dec->operand_types[0] = PPC_OPER_TYPE_NUM;
	dec->operand_values[0] = (insword & 0xFFFC)>>2;
	dec->operand_fmtstr = PPC_FMTSTR__POS_NUM;
	return 0;
}

/* bne +NUM */
int bne_PNUM(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_BNE;
	/* 0100000011100010AAAAAAAAAAAAAA00 */
	dec->operand_n = 1;
	dec->operand_types[0] = PPC_OPER_TYPE_NUM;
	dec->operand_values[0] = (insword & 0xFFFC)>>2;
	dec->operand_fmtstr = PPC_FMTSTR__POS_NUM;
	return 0;
}

/* bnel +NUM */
int bnel_PNUM(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_BNEL;
	/* 0100000011100010AAAAAAAAAAAAAA01 */
	dec->operand_n = 1;
	dec->operand_types[0] = PPC_OPER_TYPE_NUM;
	dec->operand_values[0] = (insword & 0xFFFC)>>2;
	dec->operand_fmtstr = PPC_FMTSTR__POS_NUM;
	return 0;
}

/* bnea +NUM */
int bnea_PNUM(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_BNEA;
	/* 0100000011100010AAAAAAAAAAAAAA10 */
	dec->operand_n = 1;
	dec->operand_types[0] = PPC_OPER_TYPE_NUM;
	dec->operand_values[0] = (insword & 0xFFFC)>>2;
	dec->operand_fmtstr = PPC_FMTSTR__POS_NUM;
	return 0;
}

/* bnela +NUM */
int bnela_PNUM(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_BNELA;
	/* 0100000011100010AAAAAAAAAAAAAA11 */
	dec->operand_n = 1;
	dec->operand_types[0] = PPC_OPER_TYPE_NUM;
	dec->operand_values[0] = (insword & 0xFFFC)>>2;
	dec->operand_fmtstr = PPC_FMTSTR__POS_NUM;
	return 0;
}

/* bns +NUM */
int bns_PNUM(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_BNS;
	/* 0100000011100011AAAAAAAAAAAAAA00 */
	dec->operand_n = 1;
	dec->operand_types[0] = PPC_OPER_TYPE_NUM;
	dec->operand_values[0] = (insword & 0xFFFC)>>2;
	dec->operand_fmtstr = PPC_FMTSTR__POS_NUM;
	return 0;
}

/* bnsl +NUM */
int bnsl_PNUM(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_BNSL;
	/* 0100000011100011AAAAAAAAAAAAAA01 */
	dec->operand_n = 1;
	dec->operand_types[0] = PPC_OPER_TYPE_NUM;
	dec->operand_values[0] = (insword & 0xFFFC)>>2;
	dec->operand_fmtstr = PPC_FMTSTR__POS_NUM;
	return 0;
}

/* bnsa +NUM */
int bnsa_PNUM(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_BNSA;
	/* 0100000011100011AAAAAAAAAAAAAA10 */
	dec->operand_n = 1;
	dec->operand_types[0] = PPC_OPER_TYPE_NUM;
	dec->operand_values[0] = (insword & 0xFFFC)>>2;
	dec->operand_fmtstr = PPC_FMTSTR__POS_NUM;
	return 0;
}

/* bnsla +NUM */
int bnsla_PNUM(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_BNSLA;
	/* 0100000011100011AAAAAAAAAAAAAA11 */
	dec->operand_n = 1;
	dec->operand_types[0] = PPC_OPER_TYPE_NUM;
	dec->operand_values[0] = (insword & 0xFFFC)>>2;
	dec->operand_fmtstr = PPC_FMTSTR__POS_NUM;
	return 0;
}

/* bge +CREG,NUM */
int bge_PCREG_NUM(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_BGE;
	/* 01000000111AAA00BBBBBBBBBBBBBB00 */
	dec->operand_n = 2;
	dec->operand_types[0] = PPC_OPER_TYPE_CREG;
	dec->operand_values[0] = (insword & 0x1C0000)>>18;
	dec->operand_types[1] = PPC_OPER_TYPE_NUM;
	dec->operand_values[1] = (insword & 0xFFFC)>>2;
	dec->operand_fmtstr = PPC_FMTSTR__POS_CREG_C_NUM;
	return 0;
}

/* bgel +CREG,NUM */
int bgel_PCREG_NUM(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_BGEL;
	/* 01000000111AAA00BBBBBBBBBBBBBB01 */
	dec->operand_n = 2;
	dec->operand_types[0] = PPC_OPER_TYPE_CREG;
	dec->operand_values[0] = (insword & 0x1C0000)>>18;
	dec->operand_types[1] = PPC_OPER_TYPE_NUM;
	dec->operand_values[1] = (insword & 0xFFFC)>>2;
	dec->operand_fmtstr = PPC_FMTSTR__POS_CREG_C_NUM;
	return 0;
}

/* bgea +CREG,NUM */
int bgea_PCREG_NUM(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_BGEA;
	/* 01000000111AAA00BBBBBBBBBBBBBB10 */
	dec->operand_n = 2;
	dec->operand_types[0] = PPC_OPER_TYPE_CREG;
	dec->operand_values[0] = (insword & 0x1C0000)>>18;
	dec->operand_types[1] = PPC_OPER_TYPE_NUM;
	dec->operand_values[1] = (insword & 0xFFFC)>>2;
	dec->operand_fmtstr = PPC_FMTSTR__POS_CREG_C_NUM;
	return 0;
}

/* bgela +CREG,NUM */
int bgela_PCREG_NUM(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_BGELA;
	/* 01000000111AAx00BBBBBBBBBBBBBB11 */
	dec->operand_n = 2;
	dec->operand_types[0] = PPC_OPER_TYPE_CREG;
	dec->operand_values[0] = (insword & 0x180000)>>19;
	dec->operand_types[1] = PPC_OPER_TYPE_NUM;
	dec->operand_values[1] = (insword & 0xFFFC)>>2;
	dec->operand_fmtstr = PPC_FMTSTR__POS_CREG_C_NUM;
	return 0;
}

/* ble +CREG,NUM */
int ble_PCREG_NUM(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_BLE;
	/* 01000000111AAA01BBBBBBBBBBBBBB00 */
	dec->operand_n = 2;
	dec->operand_types[0] = PPC_OPER_TYPE_CREG;
	dec->operand_values[0] = (insword & 0x1C0000)>>18;
	dec->operand_types[1] = PPC_OPER_TYPE_NUM;
	dec->operand_values[1] = (insword & 0xFFFC)>>2;
	dec->operand_fmtstr = PPC_FMTSTR__POS_CREG_C_NUM;
	return 0;
}

/* blel +CREG,NUM */
int blel_PCREG_NUM(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_BLEL;
	/* 01000000111AAA01BBBBBBBBBBBBBB01 */
	dec->operand_n = 2;
	dec->operand_types[0] = PPC_OPER_TYPE_CREG;
	dec->operand_values[0] = (insword & 0x1C0000)>>18;
	dec->operand_types[1] = PPC_OPER_TYPE_NUM;
	dec->operand_values[1] = (insword & 0xFFFC)>>2;
	dec->operand_fmtstr = PPC_FMTSTR__POS_CREG_C_NUM;
	return 0;
}

/* blea +CREG,NUM */
int blea_PCREG_NUM(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_BLEA;
	/* 01000000111AAA01BBBBBBBBBBBBBB10 */
	dec->operand_n = 2;
	dec->operand_types[0] = PPC_OPER_TYPE_CREG;
	dec->operand_values[0] = (insword & 0x1C0000)>>18;
	dec->operand_types[1] = PPC_OPER_TYPE_NUM;
	dec->operand_values[1] = (insword & 0xFFFC)>>2;
	dec->operand_fmtstr = PPC_FMTSTR__POS_CREG_C_NUM;
	return 0;
}

/* blela +CREG,NUM */
int blela_PCREG_NUM(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_BLELA;
	/* 01000000111AAA01BBBBBBBBBBBBBB11 */
	dec->operand_n = 2;
	dec->operand_types[0] = PPC_OPER_TYPE_CREG;
	dec->operand_values[0] = (insword & 0x1C0000)>>18;
	dec->operand_types[1] = PPC_OPER_TYPE_NUM;
	dec->operand_values[1] = (insword & 0xFFFC)>>2;
	dec->operand_fmtstr = PPC_FMTSTR__POS_CREG_C_NUM;
	return 0;
}

/* bne +CREG,NUM */
int bne_PCREG_NUM(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_BNE;
	/* 01000000111AAA10BBBBBBBBBBBBBB00 */
	dec->operand_n = 2;
	dec->operand_types[0] = PPC_OPER_TYPE_CREG;
	dec->operand_values[0] = (insword & 0x1C0000)>>18;
	dec->operand_types[1] = PPC_OPER_TYPE_NUM;
	dec->operand_values[1] = (insword & 0xFFFC)>>2;
	dec->operand_fmtstr = PPC_FMTSTR__POS_CREG_C_NUM;
	return 0;
}

/* bnel +CREG,NUM */
int bnel_PCREG_NUM(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_BNEL;
	/* 01000000111xAA10BBBBBBBBBBBBBB01 */
	dec->operand_n = 2;
	dec->operand_types[0] = PPC_OPER_TYPE_CREG;
	dec->operand_values[0] = (insword & 0xC0000)>>18;
	dec->operand_types[1] = PPC_OPER_TYPE_NUM;
	dec->operand_values[1] = (insword & 0xFFFC)>>2;
	dec->operand_fmtstr = PPC_FMTSTR__POS_CREG_C_NUM;
	return 0;
}

/* bnea +CREG,NUM */
int bnea_PCREG_NUM(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_BNEA;
	/* 01000000111AAA10BBBBBBBBBBBBBB10 */
	dec->operand_n = 2;
	dec->operand_types[0] = PPC_OPER_TYPE_CREG;
	dec->operand_values[0] = (insword & 0x1C0000)>>18;
	dec->operand_types[1] = PPC_OPER_TYPE_NUM;
	dec->operand_values[1] = (insword & 0xFFFC)>>2;
	dec->operand_fmtstr = PPC_FMTSTR__POS_CREG_C_NUM;
	return 0;
}

/* bnela +CREG,NUM */
int bnela_PCREG_NUM(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_BNELA;
	/* 01000000111AxA10BBBBBBBBBBBBBB11 */
	dec->operand_n = 2;
	dec->operand_types[0] = PPC_OPER_TYPE_CREG;
	dec->operand_values[0] = ((insword & 0x100000)>>19)|((insword & 0x40000)>>18);
	dec->operand_types[1] = PPC_OPER_TYPE_NUM;
	dec->operand_values[1] = (insword & 0xFFFC)>>2;
	dec->operand_fmtstr = PPC_FMTSTR__POS_CREG_C_NUM;
	return 0;
}

/* bns +CREG,NUM */
int bns_PCREG_NUM(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_BNS;
	/* 01000000111AAA11BBBBBBBBBBBBBB00 */
	dec->operand_n = 2;
	dec->operand_types[0] = PPC_OPER_TYPE_CREG;
	dec->operand_values[0] = (insword & 0x1C0000)>>18;
	dec->operand_types[1] = PPC_OPER_TYPE_NUM;
	dec->operand_values[1] = (insword & 0xFFFC)>>2;
	dec->operand_fmtstr = PPC_FMTSTR__POS_CREG_C_NUM;
	return 0;
}

/* bnsl +CREG,NUM */
int bnsl_PCREG_NUM(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_BNSL;
	/* 01000000111AAA11BBBBBBBBBBBBBB01 */
	dec->operand_n = 2;
	dec->operand_types[0] = PPC_OPER_TYPE_CREG;
	dec->operand_values[0] = (insword & 0x1C0000)>>18;
	dec->operand_types[1] = PPC_OPER_TYPE_NUM;
	dec->operand_values[1] = (insword & 0xFFFC)>>2;
	dec->operand_fmtstr = PPC_FMTSTR__POS_CREG_C_NUM;
	return 0;
}

/* bnsa +CREG,NUM */
int bnsa_PCREG_NUM(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_BNSA;
	/* 01000000111xAA11BBBBBBBBBBBBBB10 */
	dec->operand_n = 2;
	dec->operand_types[0] = PPC_OPER_TYPE_CREG;
	dec->operand_values[0] = (insword & 0xC0000)>>18;
	dec->operand_types[1] = PPC_OPER_TYPE_NUM;
	dec->operand_values[1] = (insword & 0xFFFC)>>2;
	dec->operand_fmtstr = PPC_FMTSTR__POS_CREG_C_NUM;
	return 0;
}

/* bnsla +CREG,NUM */
int bnsla_PCREG_NUM(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_BNSLA;
	/* 01000000111AAA11BBBBBBBBBBBBBB11 */
	dec->operand_n = 2;
	dec->operand_types[0] = PPC_OPER_TYPE_CREG;
	dec->operand_values[0] = (insword & 0x1C0000)>>18;
	dec->operand_types[1] = PPC_OPER_TYPE_NUM;
	dec->operand_values[1] = (insword & 0xFFFC)>>2;
	dec->operand_fmtstr = PPC_FMTSTR__POS_CREG_C_NUM;
	return 0;
}

/* bdnzt FLAG,NUM */
int bdnzt_FLAG_NUM(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_BDNZT;
	/* 0100000100x000AABBBBBBBBBBBBBB00 */
	dec->operand_n = 2;
	dec->operand_types[0] = PPC_OPER_TYPE_FLAG;
	dec->operand_values[0] = (insword & 0x30000)>>16;
	dec->operand_types[1] = PPC_OPER_TYPE_NUM;
	dec->operand_values[1] = (insword & 0xFFFC)>>2;
	dec->operand_fmtstr = PPC_FMTSTR_FLAG_C_NUM;
	return 0;
}

/* bdnztl FLAG,NUM */
int bdnztl_FLAG_NUM(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_BDNZTL;
	/* 0100000100x000AABBBBBBBBBBBBBB01 */
	dec->operand_n = 2;
	dec->operand_types[0] = PPC_OPER_TYPE_FLAG;
	dec->operand_values[0] = (insword & 0x30000)>>16;
	dec->operand_types[1] = PPC_OPER_TYPE_NUM;
	dec->operand_values[1] = (insword & 0xFFFC)>>2;
	dec->operand_fmtstr = PPC_FMTSTR_FLAG_C_NUM;
	return 0;
}

/* bdnzta FLAG,NUM */
int bdnzta_FLAG_NUM(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_BDNZTA;
	/* 0100000100x000AABBBBBBBBBBBBBB10 */
	dec->operand_n = 2;
	dec->operand_types[0] = PPC_OPER_TYPE_FLAG;
	dec->operand_values[0] = (insword & 0x30000)>>16;
	dec->operand_types[1] = PPC_OPER_TYPE_NUM;
	dec->operand_values[1] = (insword & 0xFFFC)>>2;
	dec->operand_fmtstr = PPC_FMTSTR_FLAG_C_NUM;
	return 0;
}

/* bdnztla FLAG,NUM */
int bdnztla_FLAG_NUM(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_BDNZTLA;
	/* 0100000100x000AABBBBBBBBBBBBBB11 */
	dec->operand_n = 2;
	dec->operand_types[0] = PPC_OPER_TYPE_FLAG;
	dec->operand_values[0] = (insword & 0x30000)>>16;
	dec->operand_types[1] = PPC_OPER_TYPE_NUM;
	dec->operand_values[1] = (insword & 0xFFFC)>>2;
	dec->operand_fmtstr = PPC_FMTSTR_FLAG_C_NUM;
	return 0;
}

/* bdnzt NUM*CREG+FLAG,NUM */
int bdnzt_NUM_CREGPFLAG_NUM(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_BDNZT;
	/* 0100000100xBBBCCDDDDDDDDDDDDDD00 */
	dec->operand_n = 4;
	dec->operand_types[0] = PPC_OPER_TYPE_NUM;
	dec->operand_types[1] = PPC_OPER_TYPE_CREG;
	dec->operand_values[1] = (insword & 0x1C0000)>>18;
	dec->operand_types[2] = PPC_OPER_TYPE_FLAG;
	dec->operand_values[2] = (insword & 0x30000)>>16;
	dec->operand_types[3] = PPC_OPER_TYPE_NUM;
	dec->operand_values[3] = (insword & 0xFFFC)>>2;
	dec->operand_fmtstr = PPC_FMTSTR_NUM_MUL_CREG_POS_FLAG_C_NUM;
	return 0;
}

/* bdnztl NUM*CREG+FLAG,NUM */
int bdnztl_NUM_CREGPFLAG_NUM(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_BDNZTL;
	/* 0100000100xBBxCCDDDDDDDDDDDDDD01 */
	dec->operand_n = 4;
	dec->operand_types[0] = PPC_OPER_TYPE_NUM;
	dec->operand_types[1] = PPC_OPER_TYPE_CREG;
	dec->operand_values[1] = (insword & 0x180000)>>19;
	dec->operand_types[2] = PPC_OPER_TYPE_FLAG;
	dec->operand_values[2] = (insword & 0x30000)>>16;
	dec->operand_types[3] = PPC_OPER_TYPE_NUM;
	dec->operand_values[3] = (insword & 0xFFFC)>>2;
	dec->operand_fmtstr = PPC_FMTSTR_NUM_MUL_CREG_POS_FLAG_C_NUM;
	return 0;
}

/* bdnzta NUM*CREG+FLAG,NUM */
int bdnzta_NUM_CREGPFLAG_NUM(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_BDNZTA;
	/* 0100000100xBBBCCDDDDDDDDDDDDDD10 */
	dec->operand_n = 4;
	dec->operand_types[0] = PPC_OPER_TYPE_NUM;
	dec->operand_types[1] = PPC_OPER_TYPE_CREG;
	dec->operand_values[1] = (insword & 0x1C0000)>>18;
	dec->operand_types[2] = PPC_OPER_TYPE_FLAG;
	dec->operand_values[2] = (insword & 0x30000)>>16;
	dec->operand_types[3] = PPC_OPER_TYPE_NUM;
	dec->operand_values[3] = (insword & 0xFFFC)>>2;
	dec->operand_fmtstr = PPC_FMTSTR_NUM_MUL_CREG_POS_FLAG_C_NUM;
	return 0;
}

/* bdnztla NUM*CREG+FLAG,NUM */
int bdnztla_NUM_CREGPFLAG_NUM(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_BDNZTLA;
	/* 0100000100xBBBCCDDDDDDDDDDDDDD11 */
	dec->operand_n = 4;
	dec->operand_types[0] = PPC_OPER_TYPE_NUM;
	dec->operand_types[1] = PPC_OPER_TYPE_CREG;
	dec->operand_values[1] = (insword & 0x1C0000)>>18;
	dec->operand_types[2] = PPC_OPER_TYPE_FLAG;
	dec->operand_values[2] = (insword & 0x30000)>>16;
	dec->operand_types[3] = PPC_OPER_TYPE_NUM;
	dec->operand_values[3] = (insword & 0xFFFC)>>2;
	dec->operand_fmtstr = PPC_FMTSTR_NUM_MUL_CREG_POS_FLAG_C_NUM;
	return 0;
}

/* bdzt FLAG,NUM */
int bdzt_FLAG_NUM(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_BDZT;
	/* 0100000101x000AABBBBBBBBBBBBBB00 */
	dec->operand_n = 2;
	dec->operand_types[0] = PPC_OPER_TYPE_FLAG;
	dec->operand_values[0] = (insword & 0x30000)>>16;
	dec->operand_types[1] = PPC_OPER_TYPE_NUM;
	dec->operand_values[1] = (insword & 0xFFFC)>>2;
	dec->operand_fmtstr = PPC_FMTSTR_FLAG_C_NUM;
	return 0;
}

/* bdztl FLAG,NUM */
int bdztl_FLAG_NUM(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_BDZTL;
	/* 0100000101x000AABBBBBBBBBBBBBB01 */
	dec->operand_n = 2;
	dec->operand_types[0] = PPC_OPER_TYPE_FLAG;
	dec->operand_values[0] = (insword & 0x30000)>>16;
	dec->operand_types[1] = PPC_OPER_TYPE_NUM;
	dec->operand_values[1] = (insword & 0xFFFC)>>2;
	dec->operand_fmtstr = PPC_FMTSTR_FLAG_C_NUM;
	return 0;
}

/* bdzta FLAG,NUM */
int bdzta_FLAG_NUM(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_BDZTA;
	/* 0100000101x000AABBBBBBBBBBBBBB10 */
	dec->operand_n = 2;
	dec->operand_types[0] = PPC_OPER_TYPE_FLAG;
	dec->operand_values[0] = (insword & 0x30000)>>16;
	dec->operand_types[1] = PPC_OPER_TYPE_NUM;
	dec->operand_values[1] = (insword & 0xFFFC)>>2;
	dec->operand_fmtstr = PPC_FMTSTR_FLAG_C_NUM;
	return 0;
}

/* bdztla FLAG,NUM */
int bdztla_FLAG_NUM(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_BDZTLA;
	/* 0100000101x000AABBBBBBBBBBBBBB11 */
	dec->operand_n = 2;
	dec->operand_types[0] = PPC_OPER_TYPE_FLAG;
	dec->operand_values[0] = (insword & 0x30000)>>16;
	dec->operand_types[1] = PPC_OPER_TYPE_NUM;
	dec->operand_values[1] = (insword & 0xFFFC)>>2;
	dec->operand_fmtstr = PPC_FMTSTR_FLAG_C_NUM;
	return 0;
}

/* bdzt NUM*CREG+FLAG,NUM */
int bdzt_NUM_CREGPFLAG_NUM(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_BDZT;
	/* 0100000101xxBBCCDDDDDDDDDDDDDD00 */
	dec->operand_n = 4;
	dec->operand_types[0] = PPC_OPER_TYPE_NUM;
	dec->operand_types[1] = PPC_OPER_TYPE_CREG;
	dec->operand_values[1] = (insword & 0xC0000)>>18;
	dec->operand_types[2] = PPC_OPER_TYPE_FLAG;
	dec->operand_values[2] = (insword & 0x30000)>>16;
	dec->operand_types[3] = PPC_OPER_TYPE_NUM;
	dec->operand_values[3] = (insword & 0xFFFC)>>2;
	dec->operand_fmtstr = PPC_FMTSTR_NUM_MUL_CREG_POS_FLAG_C_NUM;
	return 0;
}

/* bdztl NUM*CREG+FLAG,NUM */
int bdztl_NUM_CREGPFLAG_NUM(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_BDZTL;
	/* 0100000101xBBBCCDDDDDDDDDDDDDD01 */
	dec->operand_n = 4;
	dec->operand_types[0] = PPC_OPER_TYPE_NUM;
	dec->operand_types[1] = PPC_OPER_TYPE_CREG;
	dec->operand_values[1] = (insword & 0x1C0000)>>18;
	dec->operand_types[2] = PPC_OPER_TYPE_FLAG;
	dec->operand_values[2] = (insword & 0x30000)>>16;
	dec->operand_types[3] = PPC_OPER_TYPE_NUM;
	dec->operand_values[3] = (insword & 0xFFFC)>>2;
	dec->operand_fmtstr = PPC_FMTSTR_NUM_MUL_CREG_POS_FLAG_C_NUM;
	return 0;
}

/* bdzta NUM*CREG+FLAG,NUM */
int bdzta_NUM_CREGPFLAG_NUM(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_BDZTA;
	/* 0100000101xBxBCCDDDDDDDDDDDDDD10 */
	dec->operand_n = 4;
	dec->operand_types[0] = PPC_OPER_TYPE_NUM;
	dec->operand_types[1] = PPC_OPER_TYPE_CREG;
	dec->operand_values[1] = ((insword & 0x100000)>>19)|((insword & 0x40000)>>18);
	dec->operand_types[2] = PPC_OPER_TYPE_FLAG;
	dec->operand_values[2] = (insword & 0x30000)>>16;
	dec->operand_types[3] = PPC_OPER_TYPE_NUM;
	dec->operand_values[3] = (insword & 0xFFFC)>>2;
	dec->operand_fmtstr = PPC_FMTSTR_NUM_MUL_CREG_POS_FLAG_C_NUM;
	return 0;
}

/* bdztla NUM*CREG+FLAG,NUM */
int bdztla_NUM_CREGPFLAG_NUM(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_BDZTLA;
	/* 0100000101xBBBCCDDDDDDDDDDDDDD11 */
	dec->operand_n = 4;
	dec->operand_types[0] = PPC_OPER_TYPE_NUM;
	dec->operand_types[1] = PPC_OPER_TYPE_CREG;
	dec->operand_values[1] = (insword & 0x1C0000)>>18;
	dec->operand_types[2] = PPC_OPER_TYPE_FLAG;
	dec->operand_values[2] = (insword & 0x30000)>>16;
	dec->operand_types[3] = PPC_OPER_TYPE_NUM;
	dec->operand_values[3] = (insword & 0xFFFC)>>2;
	dec->operand_fmtstr = PPC_FMTSTR_NUM_MUL_CREG_POS_FLAG_C_NUM;
	return 0;
}

/* blt NUM */
int blt_NUM(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_BLT;
	/* 0100000110x00000AAAAAAAAAAAAAA00 */
	dec->operand_n = 1;
	dec->operand_types[0] = PPC_OPER_TYPE_NUM;
	dec->operand_values[0] = (insword & 0xFFFC)>>2;
	dec->operand_fmtstr = PPC_FMTSTR_NUM;
	return 0;
}

/* bltl NUM */
int bltl_NUM(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_BLTL;
	/* 0100000110x00000AAAAAAAAAAAAAA01 */
	dec->operand_n = 1;
	dec->operand_types[0] = PPC_OPER_TYPE_NUM;
	dec->operand_values[0] = (insword & 0xFFFC)>>2;
	dec->operand_fmtstr = PPC_FMTSTR_NUM;
	return 0;
}

/* blta NUM */
int blta_NUM(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_BLTA;
	/* 0100000110x00000AAAAAAAAAAAAAA10 */
	dec->operand_n = 1;
	dec->operand_types[0] = PPC_OPER_TYPE_NUM;
	dec->operand_values[0] = (insword & 0xFFFC)>>2;
	dec->operand_fmtstr = PPC_FMTSTR_NUM;
	return 0;
}

/* bltla NUM */
int bltla_NUM(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_BLTLA;
	/* 0100000110x00000AAAAAAAAAAAAAA11 */
	dec->operand_n = 1;
	dec->operand_types[0] = PPC_OPER_TYPE_NUM;
	dec->operand_values[0] = (insword & 0xFFFC)>>2;
	dec->operand_fmtstr = PPC_FMTSTR_NUM;
	return 0;
}

/* bgt NUM */
int bgt_NUM(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_BGT;
	/* 0100000110x00001AAAAAAAAAAAAAA00 */
	dec->operand_n = 1;
	dec->operand_types[0] = PPC_OPER_TYPE_NUM;
	dec->operand_values[0] = (insword & 0xFFFC)>>2;
	dec->operand_fmtstr = PPC_FMTSTR_NUM;
	return 0;
}

/* bgtl NUM */
int bgtl_NUM(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_BGTL;
	/* 0100000110x00001AAAAAAAAAAAAAA01 */
	dec->operand_n = 1;
	dec->operand_types[0] = PPC_OPER_TYPE_NUM;
	dec->operand_values[0] = (insword & 0xFFFC)>>2;
	dec->operand_fmtstr = PPC_FMTSTR_NUM;
	return 0;
}

/* bgta NUM */
int bgta_NUM(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_BGTA;
	/* 0100000110x00001AAAAAAAAAAAAAA10 */
	dec->operand_n = 1;
	dec->operand_types[0] = PPC_OPER_TYPE_NUM;
	dec->operand_values[0] = (insword & 0xFFFC)>>2;
	dec->operand_fmtstr = PPC_FMTSTR_NUM;
	return 0;
}

/* bgtla NUM */
int bgtla_NUM(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_BGTLA;
	/* 0100000110x00001AAAAAAAAAAAAAA11 */
	dec->operand_n = 1;
	dec->operand_types[0] = PPC_OPER_TYPE_NUM;
	dec->operand_values[0] = (insword & 0xFFFC)>>2;
	dec->operand_fmtstr = PPC_FMTSTR_NUM;
	return 0;
}

/* beq NUM */
int beq_NUM(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_BEQ;
	/* 0100000110x00010AAAAAAAAAAAAAA00 */
	dec->operand_n = 1;
	dec->operand_types[0] = PPC_OPER_TYPE_NUM;
	dec->operand_values[0] = (insword & 0xFFFC)>>2;
	dec->operand_fmtstr = PPC_FMTSTR_NUM;
	return 0;
}

/* beql NUM */
int beql_NUM(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_BEQL;
	/* 0100000110x00010AAAAAAAAAAAAAA01 */
	dec->operand_n = 1;
	dec->operand_types[0] = PPC_OPER_TYPE_NUM;
	dec->operand_values[0] = (insword & 0xFFFC)>>2;
	dec->operand_fmtstr = PPC_FMTSTR_NUM;
	return 0;
}

/* beqa NUM */
int beqa_NUM(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_BEQA;
	/* 0100000110x00010AAAAAAAAAAAAAA10 */
	dec->operand_n = 1;
	dec->operand_types[0] = PPC_OPER_TYPE_NUM;
	dec->operand_values[0] = (insword & 0xFFFC)>>2;
	dec->operand_fmtstr = PPC_FMTSTR_NUM;
	return 0;
}

/* beqla NUM */
int beqla_NUM(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_BEQLA;
	/* 0100000110x00010AAAAAAAAAAAAAA11 */
	dec->operand_n = 1;
	dec->operand_types[0] = PPC_OPER_TYPE_NUM;
	dec->operand_values[0] = (insword & 0xFFFC)>>2;
	dec->operand_fmtstr = PPC_FMTSTR_NUM;
	return 0;
}

/* bso NUM */
int bso_NUM(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_BSO;
	/* 0100000110x00011AAAAAAAAAAAAAA00 */
	dec->operand_n = 1;
	dec->operand_types[0] = PPC_OPER_TYPE_NUM;
	dec->operand_values[0] = (insword & 0xFFFC)>>2;
	dec->operand_fmtstr = PPC_FMTSTR_NUM;
	return 0;
}

/* bsol NUM */
int bsol_NUM(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_BSOL;
	/* 0100000110x00011AAAAAAAAAAAAAA01 */
	dec->operand_n = 1;
	dec->operand_types[0] = PPC_OPER_TYPE_NUM;
	dec->operand_values[0] = (insword & 0xFFFC)>>2;
	dec->operand_fmtstr = PPC_FMTSTR_NUM;
	return 0;
}

/* bsoa NUM */
int bsoa_NUM(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_BSOA;
	/* 0100000110x00011AAAAAAAAAAAAAA10 */
	dec->operand_n = 1;
	dec->operand_types[0] = PPC_OPER_TYPE_NUM;
	dec->operand_values[0] = (insword & 0xFFFC)>>2;
	dec->operand_fmtstr = PPC_FMTSTR_NUM;
	return 0;
}

/* bsola NUM */
int bsola_NUM(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_BSOLA;
	/* 0100000110x00011AAAAAAAAAAAAAA11 */
	dec->operand_n = 1;
	dec->operand_types[0] = PPC_OPER_TYPE_NUM;
	dec->operand_values[0] = (insword & 0xFFFC)>>2;
	dec->operand_fmtstr = PPC_FMTSTR_NUM;
	return 0;
}

/* blt CREG,NUM */
int blt_CREG_NUM(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_BLT;
	/* 0100000110xxAA00BBBBBBBBBBBBBB00 */
	dec->operand_n = 2;
	dec->operand_types[0] = PPC_OPER_TYPE_CREG;
	dec->operand_values[0] = (insword & 0xC0000)>>18;
	dec->operand_types[1] = PPC_OPER_TYPE_NUM;
	dec->operand_values[1] = (insword & 0xFFFC)>>2;
	dec->operand_fmtstr = PPC_FMTSTR_CREG_C_NUM;
	return 0;
}

/* bltl CREG,NUM */
int bltl_CREG_NUM(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_BLTL;
	/* 0100000110xAxA00BBBBBBBBBBBBBB01 */
	dec->operand_n = 2;
	dec->operand_types[0] = PPC_OPER_TYPE_CREG;
	dec->operand_values[0] = ((insword & 0x100000)>>19)|((insword & 0x40000)>>18);
	dec->operand_types[1] = PPC_OPER_TYPE_NUM;
	dec->operand_values[1] = (insword & 0xFFFC)>>2;
	dec->operand_fmtstr = PPC_FMTSTR_CREG_C_NUM;
	return 0;
}

/* blta CREG,NUM */
int blta_CREG_NUM(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_BLTA;
	/* 0100000110xAxA00BBBBBBBBBBBBBB10 */
	dec->operand_n = 2;
	dec->operand_types[0] = PPC_OPER_TYPE_CREG;
	dec->operand_values[0] = ((insword & 0x100000)>>19)|((insword & 0x40000)>>18);
	dec->operand_types[1] = PPC_OPER_TYPE_NUM;
	dec->operand_values[1] = (insword & 0xFFFC)>>2;
	dec->operand_fmtstr = PPC_FMTSTR_CREG_C_NUM;
	return 0;
}

/* bltla CREG,NUM */
int bltla_CREG_NUM(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_BLTLA;
	/* 0100000110xAAA00BBBBBBBBBBBBBB11 */
	dec->operand_n = 2;
	dec->operand_types[0] = PPC_OPER_TYPE_CREG;
	dec->operand_values[0] = (insword & 0x1C0000)>>18;
	dec->operand_types[1] = PPC_OPER_TYPE_NUM;
	dec->operand_values[1] = (insword & 0xFFFC)>>2;
	dec->operand_fmtstr = PPC_FMTSTR_CREG_C_NUM;
	return 0;
}

/* bgt CREG,NUM */
int bgt_CREG_NUM(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_BGT;
	/* 0100000110xxAA01BBBBBBBBBBBBBB00 */
	dec->operand_n = 2;
	dec->operand_types[0] = PPC_OPER_TYPE_CREG;
	dec->operand_values[0] = (insword & 0xC0000)>>18;
	dec->operand_types[1] = PPC_OPER_TYPE_NUM;
	dec->operand_values[1] = (insword & 0xFFFC)>>2;
	dec->operand_fmtstr = PPC_FMTSTR_CREG_C_NUM;
	return 0;
}

/* bgtl CREG,NUM */
int bgtl_CREG_NUM(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_BGTL;
	/* 0100000110xxAA01BBBBBBBBBBBBBB01 */
	dec->operand_n = 2;
	dec->operand_types[0] = PPC_OPER_TYPE_CREG;
	dec->operand_values[0] = (insword & 0xC0000)>>18;
	dec->operand_types[1] = PPC_OPER_TYPE_NUM;
	dec->operand_values[1] = (insword & 0xFFFC)>>2;
	dec->operand_fmtstr = PPC_FMTSTR_CREG_C_NUM;
	return 0;
}

/* bgta CREG,NUM */
int bgta_CREG_NUM(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_BGTA;
	/* 0100000110xAAA01BBBBBBBBBBBBBB10 */
	dec->operand_n = 2;
	dec->operand_types[0] = PPC_OPER_TYPE_CREG;
	dec->operand_values[0] = (insword & 0x1C0000)>>18;
	dec->operand_types[1] = PPC_OPER_TYPE_NUM;
	dec->operand_values[1] = (insword & 0xFFFC)>>2;
	dec->operand_fmtstr = PPC_FMTSTR_CREG_C_NUM;
	return 0;
}

/* bgtla CREG,NUM */
int bgtla_CREG_NUM(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_BGTLA;
	/* 0100000110xxAA01BBBBBBBBBBBBBB11 */
	dec->operand_n = 2;
	dec->operand_types[0] = PPC_OPER_TYPE_CREG;
	dec->operand_values[0] = (insword & 0xC0000)>>18;
	dec->operand_types[1] = PPC_OPER_TYPE_NUM;
	dec->operand_values[1] = (insword & 0xFFFC)>>2;
	dec->operand_fmtstr = PPC_FMTSTR_CREG_C_NUM;
	return 0;
}

/* beq CREG,NUM */
int beq_CREG_NUM(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_BEQ;
	/* 0100000110xAAx10BBBBBBBBBBBBBB00 */
	dec->operand_n = 2;
	dec->operand_types[0] = PPC_OPER_TYPE_CREG;
	dec->operand_values[0] = (insword & 0x180000)>>19;
	dec->operand_types[1] = PPC_OPER_TYPE_NUM;
	dec->operand_values[1] = (insword & 0xFFFC)>>2;
	dec->operand_fmtstr = PPC_FMTSTR_CREG_C_NUM;
	return 0;
}

/* beql CREG,NUM */
int beql_CREG_NUM(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_BEQL;
	/* 0100000110xAAA10BBBBBBBBBBBBBB01 */
	dec->operand_n = 2;
	dec->operand_types[0] = PPC_OPER_TYPE_CREG;
	dec->operand_values[0] = (insword & 0x1C0000)>>18;
	dec->operand_types[1] = PPC_OPER_TYPE_NUM;
	dec->operand_values[1] = (insword & 0xFFFC)>>2;
	dec->operand_fmtstr = PPC_FMTSTR_CREG_C_NUM;
	return 0;
}

/* beqa CREG,NUM */
int beqa_CREG_NUM(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_BEQA;
	/* 0100000110xAAA10BBBBBBBBBBBBBB10 */
	dec->operand_n = 2;
	dec->operand_types[0] = PPC_OPER_TYPE_CREG;
	dec->operand_values[0] = (insword & 0x1C0000)>>18;
	dec->operand_types[1] = PPC_OPER_TYPE_NUM;
	dec->operand_values[1] = (insword & 0xFFFC)>>2;
	dec->operand_fmtstr = PPC_FMTSTR_CREG_C_NUM;
	return 0;
}

/* beqla CREG,NUM */
int beqla_CREG_NUM(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_BEQLA;
	/* 0100000110xAAx10BBBBBBBBBBBBBB11 */
	dec->operand_n = 2;
	dec->operand_types[0] = PPC_OPER_TYPE_CREG;
	dec->operand_values[0] = (insword & 0x180000)>>19;
	dec->operand_types[1] = PPC_OPER_TYPE_NUM;
	dec->operand_values[1] = (insword & 0xFFFC)>>2;
	dec->operand_fmtstr = PPC_FMTSTR_CREG_C_NUM;
	return 0;
}

/* bso CREG,NUM */
int bso_CREG_NUM(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_BSO;
	/* 0100000110xAAA11BBBBBBBBBBBBBB00 */
	dec->operand_n = 2;
	dec->operand_types[0] = PPC_OPER_TYPE_CREG;
	dec->operand_values[0] = (insword & 0x1C0000)>>18;
	dec->operand_types[1] = PPC_OPER_TYPE_NUM;
	dec->operand_values[1] = (insword & 0xFFFC)>>2;
	dec->operand_fmtstr = PPC_FMTSTR_CREG_C_NUM;
	return 0;
}

/* bsol CREG,NUM */
int bsol_CREG_NUM(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_BSOL;
	/* 0100000110xAAA11BBBBBBBBBBBBBB01 */
	dec->operand_n = 2;
	dec->operand_types[0] = PPC_OPER_TYPE_CREG;
	dec->operand_values[0] = (insword & 0x1C0000)>>18;
	dec->operand_types[1] = PPC_OPER_TYPE_NUM;
	dec->operand_values[1] = (insword & 0xFFFC)>>2;
	dec->operand_fmtstr = PPC_FMTSTR_CREG_C_NUM;
	return 0;
}

/* bsoa CREG,NUM */
int bsoa_CREG_NUM(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_BSOA;
	/* 0100000110xAAA11BBBBBBBBBBBBBB10 */
	dec->operand_n = 2;
	dec->operand_types[0] = PPC_OPER_TYPE_CREG;
	dec->operand_values[0] = (insword & 0x1C0000)>>18;
	dec->operand_types[1] = PPC_OPER_TYPE_NUM;
	dec->operand_values[1] = (insword & 0xFFFC)>>2;
	dec->operand_fmtstr = PPC_FMTSTR_CREG_C_NUM;
	return 0;
}

/* bsola CREG,NUM */
int bsola_CREG_NUM(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_BSOLA;
	/* 0100000110xAxA11BBBBBBBBBBBBBB11 */
	dec->operand_n = 2;
	dec->operand_types[0] = PPC_OPER_TYPE_CREG;
	dec->operand_values[0] = ((insword & 0x100000)>>19)|((insword & 0x40000)>>18);
	dec->operand_types[1] = PPC_OPER_TYPE_NUM;
	dec->operand_values[1] = (insword & 0xFFFC)>>2;
	dec->operand_fmtstr = PPC_FMTSTR_CREG_C_NUM;
	return 0;
}

/* blt -NUM */
int blt_NNUM(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_BLT;
	/* 0100000111000000AAAAAAAAAAAAAA00 */
	dec->operand_n = 1;
	dec->operand_types[0] = PPC_OPER_TYPE_NUM;
	dec->operand_values[0] = (insword & 0xFFFC)>>2;
	dec->operand_fmtstr = PPC_FMTSTR__NEG_NUM;
	return 0;
}

/* bltl -NUM */
int bltl_NNUM(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_BLTL;
	/* 0100000111000000AAAAAAAAAAAAAA01 */
	dec->operand_n = 1;
	dec->operand_types[0] = PPC_OPER_TYPE_NUM;
	dec->operand_values[0] = (insword & 0xFFFC)>>2;
	dec->operand_fmtstr = PPC_FMTSTR__NEG_NUM;
	return 0;
}

/* blta -NUM */
int blta_NNUM(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_BLTA;
	/* 0100000111000000AAAAAAAAAAAAAA10 */
	dec->operand_n = 1;
	dec->operand_types[0] = PPC_OPER_TYPE_NUM;
	dec->operand_values[0] = (insword & 0xFFFC)>>2;
	dec->operand_fmtstr = PPC_FMTSTR__NEG_NUM;
	return 0;
}

/* bltla -NUM */
int bltla_NNUM(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_BLTLA;
	/* 0100000111000000AAAAAAAAAAAAAA11 */
	dec->operand_n = 1;
	dec->operand_types[0] = PPC_OPER_TYPE_NUM;
	dec->operand_values[0] = (insword & 0xFFFC)>>2;
	dec->operand_fmtstr = PPC_FMTSTR__NEG_NUM;
	return 0;
}

/* bgt -NUM */
int bgt_NNUM(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_BGT;
	/* 0100000111000001AAAAAAAAAAAAAA00 */
	dec->operand_n = 1;
	dec->operand_types[0] = PPC_OPER_TYPE_NUM;
	dec->operand_values[0] = (insword & 0xFFFC)>>2;
	dec->operand_fmtstr = PPC_FMTSTR__NEG_NUM;
	return 0;
}

/* bgtl -NUM */
int bgtl_NNUM(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_BGTL;
	/* 0100000111000001AAAAAAAAAAAAAA01 */
	dec->operand_n = 1;
	dec->operand_types[0] = PPC_OPER_TYPE_NUM;
	dec->operand_values[0] = (insword & 0xFFFC)>>2;
	dec->operand_fmtstr = PPC_FMTSTR__NEG_NUM;
	return 0;
}

/* bgta -NUM */
int bgta_NNUM(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_BGTA;
	/* 0100000111000001AAAAAAAAAAAAAA10 */
	dec->operand_n = 1;
	dec->operand_types[0] = PPC_OPER_TYPE_NUM;
	dec->operand_values[0] = (insword & 0xFFFC)>>2;
	dec->operand_fmtstr = PPC_FMTSTR__NEG_NUM;
	return 0;
}

/* bgtla -NUM */
int bgtla_NNUM(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_BGTLA;
	/* 0100000111000001AAAAAAAAAAAAAA11 */
	dec->operand_n = 1;
	dec->operand_types[0] = PPC_OPER_TYPE_NUM;
	dec->operand_values[0] = (insword & 0xFFFC)>>2;
	dec->operand_fmtstr = PPC_FMTSTR__NEG_NUM;
	return 0;
}

/* beq -NUM */
int beq_NNUM(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_BEQ;
	/* 0100000111000010AAAAAAAAAAAAAA00 */
	dec->operand_n = 1;
	dec->operand_types[0] = PPC_OPER_TYPE_NUM;
	dec->operand_values[0] = (insword & 0xFFFC)>>2;
	dec->operand_fmtstr = PPC_FMTSTR__NEG_NUM;
	return 0;
}

/* beql -NUM */
int beql_NNUM(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_BEQL;
	/* 0100000111000010AAAAAAAAAAAAAA01 */
	dec->operand_n = 1;
	dec->operand_types[0] = PPC_OPER_TYPE_NUM;
	dec->operand_values[0] = (insword & 0xFFFC)>>2;
	dec->operand_fmtstr = PPC_FMTSTR__NEG_NUM;
	return 0;
}

/* beqa -NUM */
int beqa_NNUM(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_BEQA;
	/* 0100000111000010AAAAAAAAAAAAAA10 */
	dec->operand_n = 1;
	dec->operand_types[0] = PPC_OPER_TYPE_NUM;
	dec->operand_values[0] = (insword & 0xFFFC)>>2;
	dec->operand_fmtstr = PPC_FMTSTR__NEG_NUM;
	return 0;
}

/* beqla -NUM */
int beqla_NNUM(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_BEQLA;
	/* 0100000111000010AAAAAAAAAAAAAA11 */
	dec->operand_n = 1;
	dec->operand_types[0] = PPC_OPER_TYPE_NUM;
	dec->operand_values[0] = (insword & 0xFFFC)>>2;
	dec->operand_fmtstr = PPC_FMTSTR__NEG_NUM;
	return 0;
}

/* bso -NUM */
int bso_NNUM(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_BSO;
	/* 0100000111000011AAAAAAAAAAAAAA00 */
	dec->operand_n = 1;
	dec->operand_types[0] = PPC_OPER_TYPE_NUM;
	dec->operand_values[0] = (insword & 0xFFFC)>>2;
	dec->operand_fmtstr = PPC_FMTSTR__NEG_NUM;
	return 0;
}

/* bsol -NUM */
int bsol_NNUM(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_BSOL;
	/* 0100000111000011AAAAAAAAAAAAAA01 */
	dec->operand_n = 1;
	dec->operand_types[0] = PPC_OPER_TYPE_NUM;
	dec->operand_values[0] = (insword & 0xFFFC)>>2;
	dec->operand_fmtstr = PPC_FMTSTR__NEG_NUM;
	return 0;
}

/* bsoa -NUM */
int bsoa_NNUM(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_BSOA;
	/* 0100000111000011AAAAAAAAAAAAAA10 */
	dec->operand_n = 1;
	dec->operand_types[0] = PPC_OPER_TYPE_NUM;
	dec->operand_values[0] = (insword & 0xFFFC)>>2;
	dec->operand_fmtstr = PPC_FMTSTR__NEG_NUM;
	return 0;
}

/* bsola -NUM */
int bsola_NNUM(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_BSOLA;
	/* 0100000111000011AAAAAAAAAAAAAA11 */
	dec->operand_n = 1;
	dec->operand_types[0] = PPC_OPER_TYPE_NUM;
	dec->operand_values[0] = (insword & 0xFFFC)>>2;
	dec->operand_fmtstr = PPC_FMTSTR__NEG_NUM;
	return 0;
}

/* blt -CREG,NUM */
int blt_NCREG_NUM(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_BLT;
	/* 01000001110AAA00BBBBBBBBBBBBBB00 */
	dec->operand_n = 2;
	dec->operand_types[0] = PPC_OPER_TYPE_CREG;
	dec->operand_values[0] = (insword & 0x1C0000)>>18;
	dec->operand_types[1] = PPC_OPER_TYPE_NUM;
	dec->operand_values[1] = (insword & 0xFFFC)>>2;
	dec->operand_fmtstr = PPC_FMTSTR__NEG_CREG_C_NUM;
	return 0;
}

/* bltl -CREG,NUM */
int bltl_NCREG_NUM(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_BLTL;
	/* 01000001110AxA00BBBBBBBBBBBBBB01 */
	dec->operand_n = 2;
	dec->operand_types[0] = PPC_OPER_TYPE_CREG;
	dec->operand_values[0] = ((insword & 0x100000)>>19)|((insword & 0x40000)>>18);
	dec->operand_types[1] = PPC_OPER_TYPE_NUM;
	dec->operand_values[1] = (insword & 0xFFFC)>>2;
	dec->operand_fmtstr = PPC_FMTSTR__NEG_CREG_C_NUM;
	return 0;
}

/* blta -CREG,NUM */
int blta_NCREG_NUM(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_BLTA;
	/* 01000001110AxA00BBBBBBBBBBBBBB10 */
	dec->operand_n = 2;
	dec->operand_types[0] = PPC_OPER_TYPE_CREG;
	dec->operand_values[0] = ((insword & 0x100000)>>19)|((insword & 0x40000)>>18);
	dec->operand_types[1] = PPC_OPER_TYPE_NUM;
	dec->operand_values[1] = (insword & 0xFFFC)>>2;
	dec->operand_fmtstr = PPC_FMTSTR__NEG_CREG_C_NUM;
	return 0;
}

/* bltla -CREG,NUM */
int bltla_NCREG_NUM(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_BLTLA;
	/* 01000001110AAA00BBBBBBBBBBBBBB11 */
	dec->operand_n = 2;
	dec->operand_types[0] = PPC_OPER_TYPE_CREG;
	dec->operand_values[0] = (insword & 0x1C0000)>>18;
	dec->operand_types[1] = PPC_OPER_TYPE_NUM;
	dec->operand_values[1] = (insword & 0xFFFC)>>2;
	dec->operand_fmtstr = PPC_FMTSTR__NEG_CREG_C_NUM;
	return 0;
}

/* bgt -CREG,NUM */
int bgt_NCREG_NUM(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_BGT;
	/* 01000001110AAA01BBBBBBBBBBBBBB00 */
	dec->operand_n = 2;
	dec->operand_types[0] = PPC_OPER_TYPE_CREG;
	dec->operand_values[0] = (insword & 0x1C0000)>>18;
	dec->operand_types[1] = PPC_OPER_TYPE_NUM;
	dec->operand_values[1] = (insword & 0xFFFC)>>2;
	dec->operand_fmtstr = PPC_FMTSTR__NEG_CREG_C_NUM;
	return 0;
}

/* bgtl -CREG,NUM */
int bgtl_NCREG_NUM(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_BGTL;
	/* 01000001110AAA01BBBBBBBBBBBBBB01 */
	dec->operand_n = 2;
	dec->operand_types[0] = PPC_OPER_TYPE_CREG;
	dec->operand_values[0] = (insword & 0x1C0000)>>18;
	dec->operand_types[1] = PPC_OPER_TYPE_NUM;
	dec->operand_values[1] = (insword & 0xFFFC)>>2;
	dec->operand_fmtstr = PPC_FMTSTR__NEG_CREG_C_NUM;
	return 0;
}

/* bgta -CREG,NUM */
int bgta_NCREG_NUM(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_BGTA;
	/* 01000001110AAA01BBBBBBBBBBBBBB10 */
	dec->operand_n = 2;
	dec->operand_types[0] = PPC_OPER_TYPE_CREG;
	dec->operand_values[0] = (insword & 0x1C0000)>>18;
	dec->operand_types[1] = PPC_OPER_TYPE_NUM;
	dec->operand_values[1] = (insword & 0xFFFC)>>2;
	dec->operand_fmtstr = PPC_FMTSTR__NEG_CREG_C_NUM;
	return 0;
}

/* bgtla -CREG,NUM */
int bgtla_NCREG_NUM(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_BGTLA;
	/* 01000001110AAA01BBBBBBBBBBBBBB11 */
	dec->operand_n = 2;
	dec->operand_types[0] = PPC_OPER_TYPE_CREG;
	dec->operand_values[0] = (insword & 0x1C0000)>>18;
	dec->operand_types[1] = PPC_OPER_TYPE_NUM;
	dec->operand_values[1] = (insword & 0xFFFC)>>2;
	dec->operand_fmtstr = PPC_FMTSTR__NEG_CREG_C_NUM;
	return 0;
}

/* beq -CREG,NUM */
int beq_NCREG_NUM(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_BEQ;
	/* 01000001110AAA10BBBBBBBBBBBBBB00 */
	dec->operand_n = 2;
	dec->operand_types[0] = PPC_OPER_TYPE_CREG;
	dec->operand_values[0] = (insword & 0x1C0000)>>18;
	dec->operand_types[1] = PPC_OPER_TYPE_NUM;
	dec->operand_values[1] = (insword & 0xFFFC)>>2;
	dec->operand_fmtstr = PPC_FMTSTR__NEG_CREG_C_NUM;
	return 0;
}

/* beql -CREG,NUM */
int beql_NCREG_NUM(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_BEQL;
	/* 01000001110AAA10BBBBBBBBBBBBBB01 */
	dec->operand_n = 2;
	dec->operand_types[0] = PPC_OPER_TYPE_CREG;
	dec->operand_values[0] = (insword & 0x1C0000)>>18;
	dec->operand_types[1] = PPC_OPER_TYPE_NUM;
	dec->operand_values[1] = (insword & 0xFFFC)>>2;
	dec->operand_fmtstr = PPC_FMTSTR__NEG_CREG_C_NUM;
	return 0;
}

/* beqa -CREG,NUM */
int beqa_NCREG_NUM(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_BEQA;
	/* 01000001110AAA10BBBBBBBBBBBBBB10 */
	dec->operand_n = 2;
	dec->operand_types[0] = PPC_OPER_TYPE_CREG;
	dec->operand_values[0] = (insword & 0x1C0000)>>18;
	dec->operand_types[1] = PPC_OPER_TYPE_NUM;
	dec->operand_values[1] = (insword & 0xFFFC)>>2;
	dec->operand_fmtstr = PPC_FMTSTR__NEG_CREG_C_NUM;
	return 0;
}

/* beqla -CREG,NUM */
int beqla_NCREG_NUM(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_BEQLA;
	/* 01000001110AAA10BBBBBBBBBBBBBB11 */
	dec->operand_n = 2;
	dec->operand_types[0] = PPC_OPER_TYPE_CREG;
	dec->operand_values[0] = (insword & 0x1C0000)>>18;
	dec->operand_types[1] = PPC_OPER_TYPE_NUM;
	dec->operand_values[1] = (insword & 0xFFFC)>>2;
	dec->operand_fmtstr = PPC_FMTSTR__NEG_CREG_C_NUM;
	return 0;
}

/* bso -CREG,NUM */
int bso_NCREG_NUM(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_BSO;
	/* 01000001110AAA11BBBBBBBBBBBBBB00 */
	dec->operand_n = 2;
	dec->operand_types[0] = PPC_OPER_TYPE_CREG;
	dec->operand_values[0] = (insword & 0x1C0000)>>18;
	dec->operand_types[1] = PPC_OPER_TYPE_NUM;
	dec->operand_values[1] = (insword & 0xFFFC)>>2;
	dec->operand_fmtstr = PPC_FMTSTR__NEG_CREG_C_NUM;
	return 0;
}

/* bsol -CREG,NUM */
int bsol_NCREG_NUM(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_BSOL;
	/* 01000001110xAA11BBBBBBBBBBBBBB01 */
	dec->operand_n = 2;
	dec->operand_types[0] = PPC_OPER_TYPE_CREG;
	dec->operand_values[0] = (insword & 0xC0000)>>18;
	dec->operand_types[1] = PPC_OPER_TYPE_NUM;
	dec->operand_values[1] = (insword & 0xFFFC)>>2;
	dec->operand_fmtstr = PPC_FMTSTR__NEG_CREG_C_NUM;
	return 0;
}

/* bsoa -CREG,NUM */
int bsoa_NCREG_NUM(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_BSOA;
	/* 01000001110xAA11BBBBBBBBBBBBBB10 */
	dec->operand_n = 2;
	dec->operand_types[0] = PPC_OPER_TYPE_CREG;
	dec->operand_values[0] = (insword & 0xC0000)>>18;
	dec->operand_types[1] = PPC_OPER_TYPE_NUM;
	dec->operand_values[1] = (insword & 0xFFFC)>>2;
	dec->operand_fmtstr = PPC_FMTSTR__NEG_CREG_C_NUM;
	return 0;
}

/* bsola -CREG,NUM */
int bsola_NCREG_NUM(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_BSOLA;
	/* 01000001110AxA11BBBBBBBBBBBBBB11 */
	dec->operand_n = 2;
	dec->operand_types[0] = PPC_OPER_TYPE_CREG;
	dec->operand_values[0] = ((insword & 0x100000)>>19)|((insword & 0x40000)>>18);
	dec->operand_types[1] = PPC_OPER_TYPE_NUM;
	dec->operand_values[1] = (insword & 0xFFFC)>>2;
	dec->operand_fmtstr = PPC_FMTSTR__NEG_CREG_C_NUM;
	return 0;
}

/* blt +NUM */
int blt_PNUM(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_BLT;
	/* 0100000111100000AAAAAAAAAAAAAA00 */
	dec->operand_n = 1;
	dec->operand_types[0] = PPC_OPER_TYPE_NUM;
	dec->operand_values[0] = (insword & 0xFFFC)>>2;
	dec->operand_fmtstr = PPC_FMTSTR__POS_NUM;
	return 0;
}

/* bltl +NUM */
int bltl_PNUM(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_BLTL;
	/* 0100000111100000AAAAAAAAAAAAAA01 */
	dec->operand_n = 1;
	dec->operand_types[0] = PPC_OPER_TYPE_NUM;
	dec->operand_values[0] = (insword & 0xFFFC)>>2;
	dec->operand_fmtstr = PPC_FMTSTR__POS_NUM;
	return 0;
}

/* blta +NUM */
int blta_PNUM(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_BLTA;
	/* 0100000111100000AAAAAAAAAAAAAA10 */
	dec->operand_n = 1;
	dec->operand_types[0] = PPC_OPER_TYPE_NUM;
	dec->operand_values[0] = (insword & 0xFFFC)>>2;
	dec->operand_fmtstr = PPC_FMTSTR__POS_NUM;
	return 0;
}

/* bltla +NUM */
int bltla_PNUM(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_BLTLA;
	/* 0100000111100000AAAAAAAAAAAAAA11 */
	dec->operand_n = 1;
	dec->operand_types[0] = PPC_OPER_TYPE_NUM;
	dec->operand_values[0] = (insword & 0xFFFC)>>2;
	dec->operand_fmtstr = PPC_FMTSTR__POS_NUM;
	return 0;
}

/* bgt +NUM */
int bgt_PNUM(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_BGT;
	/* 0100000111100001AAAAAAAAAAAAAA00 */
	dec->operand_n = 1;
	dec->operand_types[0] = PPC_OPER_TYPE_NUM;
	dec->operand_values[0] = (insword & 0xFFFC)>>2;
	dec->operand_fmtstr = PPC_FMTSTR__POS_NUM;
	return 0;
}

/* bgtl +NUM */
int bgtl_PNUM(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_BGTL;
	/* 0100000111100001AAAAAAAAAAAAAA01 */
	dec->operand_n = 1;
	dec->operand_types[0] = PPC_OPER_TYPE_NUM;
	dec->operand_values[0] = (insword & 0xFFFC)>>2;
	dec->operand_fmtstr = PPC_FMTSTR__POS_NUM;
	return 0;
}

/* bgta +NUM */
int bgta_PNUM(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_BGTA;
	/* 0100000111100001AAAAAAAAAAAAAA10 */
	dec->operand_n = 1;
	dec->operand_types[0] = PPC_OPER_TYPE_NUM;
	dec->operand_values[0] = (insword & 0xFFFC)>>2;
	dec->operand_fmtstr = PPC_FMTSTR__POS_NUM;
	return 0;
}

/* bgtla +NUM */
int bgtla_PNUM(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_BGTLA;
	/* 0100000111100001AAAAAAAAAAAAAA11 */
	dec->operand_n = 1;
	dec->operand_types[0] = PPC_OPER_TYPE_NUM;
	dec->operand_values[0] = (insword & 0xFFFC)>>2;
	dec->operand_fmtstr = PPC_FMTSTR__POS_NUM;
	return 0;
}

/* beq +NUM */
int beq_PNUM(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_BEQ;
	/* 0100000111100010AAAAAAAAAAAAAA00 */
	dec->operand_n = 1;
	dec->operand_types[0] = PPC_OPER_TYPE_NUM;
	dec->operand_values[0] = (insword & 0xFFFC)>>2;
	dec->operand_fmtstr = PPC_FMTSTR__POS_NUM;
	return 0;
}

/* beql +NUM */
int beql_PNUM(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_BEQL;
	/* 0100000111100010AAAAAAAAAAAAAA01 */
	dec->operand_n = 1;
	dec->operand_types[0] = PPC_OPER_TYPE_NUM;
	dec->operand_values[0] = (insword & 0xFFFC)>>2;
	dec->operand_fmtstr = PPC_FMTSTR__POS_NUM;
	return 0;
}

/* beqa +NUM */
int beqa_PNUM(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_BEQA;
	/* 0100000111100010AAAAAAAAAAAAAA10 */
	dec->operand_n = 1;
	dec->operand_types[0] = PPC_OPER_TYPE_NUM;
	dec->operand_values[0] = (insword & 0xFFFC)>>2;
	dec->operand_fmtstr = PPC_FMTSTR__POS_NUM;
	return 0;
}

/* beqla +NUM */
int beqla_PNUM(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_BEQLA;
	/* 0100000111100010AAAAAAAAAAAAAA11 */
	dec->operand_n = 1;
	dec->operand_types[0] = PPC_OPER_TYPE_NUM;
	dec->operand_values[0] = (insword & 0xFFFC)>>2;
	dec->operand_fmtstr = PPC_FMTSTR__POS_NUM;
	return 0;
}

/* bso +NUM */
int bso_PNUM(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_BSO;
	/* 0100000111100011AAAAAAAAAAAAAA00 */
	dec->operand_n = 1;
	dec->operand_types[0] = PPC_OPER_TYPE_NUM;
	dec->operand_values[0] = (insword & 0xFFFC)>>2;
	dec->operand_fmtstr = PPC_FMTSTR__POS_NUM;
	return 0;
}

/* bsol +NUM */
int bsol_PNUM(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_BSOL;
	/* 0100000111100011AAAAAAAAAAAAAA01 */
	dec->operand_n = 1;
	dec->operand_types[0] = PPC_OPER_TYPE_NUM;
	dec->operand_values[0] = (insword & 0xFFFC)>>2;
	dec->operand_fmtstr = PPC_FMTSTR__POS_NUM;
	return 0;
}

/* bsoa +NUM */
int bsoa_PNUM(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_BSOA;
	/* 0100000111100011AAAAAAAAAAAAAA10 */
	dec->operand_n = 1;
	dec->operand_types[0] = PPC_OPER_TYPE_NUM;
	dec->operand_values[0] = (insword & 0xFFFC)>>2;
	dec->operand_fmtstr = PPC_FMTSTR__POS_NUM;
	return 0;
}

/* bsola +NUM */
int bsola_PNUM(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_BSOLA;
	/* 0100000111100011AAAAAAAAAAAAAA11 */
	dec->operand_n = 1;
	dec->operand_types[0] = PPC_OPER_TYPE_NUM;
	dec->operand_values[0] = (insword & 0xFFFC)>>2;
	dec->operand_fmtstr = PPC_FMTSTR__POS_NUM;
	return 0;
}

/* blt +CREG,NUM */
int blt_PCREG_NUM(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_BLT;
	/* 01000001111AxA00BBBBBBBBBBBBBB00 */
	dec->operand_n = 2;
	dec->operand_types[0] = PPC_OPER_TYPE_CREG;
	dec->operand_values[0] = ((insword & 0x100000)>>19)|((insword & 0x40000)>>18);
	dec->operand_types[1] = PPC_OPER_TYPE_NUM;
	dec->operand_values[1] = (insword & 0xFFFC)>>2;
	dec->operand_fmtstr = PPC_FMTSTR__POS_CREG_C_NUM;
	return 0;
}

/* bltl +CREG,NUM */
int bltl_PCREG_NUM(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_BLTL;
	/* 01000001111AAA00BBBBBBBBBBBBBB01 */
	dec->operand_n = 2;
	dec->operand_types[0] = PPC_OPER_TYPE_CREG;
	dec->operand_values[0] = (insword & 0x1C0000)>>18;
	dec->operand_types[1] = PPC_OPER_TYPE_NUM;
	dec->operand_values[1] = (insword & 0xFFFC)>>2;
	dec->operand_fmtstr = PPC_FMTSTR__POS_CREG_C_NUM;
	return 0;
}

/* blta +CREG,NUM */
int blta_PCREG_NUM(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_BLTA;
	/* 01000001111AAA00BBBBBBBBBBBBBB10 */
	dec->operand_n = 2;
	dec->operand_types[0] = PPC_OPER_TYPE_CREG;
	dec->operand_values[0] = (insword & 0x1C0000)>>18;
	dec->operand_types[1] = PPC_OPER_TYPE_NUM;
	dec->operand_values[1] = (insword & 0xFFFC)>>2;
	dec->operand_fmtstr = PPC_FMTSTR__POS_CREG_C_NUM;
	return 0;
}

/* bltla +CREG,NUM */
int bltla_PCREG_NUM(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_BLTLA;
	/* 01000001111AAA00BBBBBBBBBBBBBB11 */
	dec->operand_n = 2;
	dec->operand_types[0] = PPC_OPER_TYPE_CREG;
	dec->operand_values[0] = (insword & 0x1C0000)>>18;
	dec->operand_types[1] = PPC_OPER_TYPE_NUM;
	dec->operand_values[1] = (insword & 0xFFFC)>>2;
	dec->operand_fmtstr = PPC_FMTSTR__POS_CREG_C_NUM;
	return 0;
}

/* bgt +CREG,NUM */
int bgt_PCREG_NUM(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_BGT;
	/* 01000001111AAA01BBBBBBBBBBBBBB00 */
	dec->operand_n = 2;
	dec->operand_types[0] = PPC_OPER_TYPE_CREG;
	dec->operand_values[0] = (insword & 0x1C0000)>>18;
	dec->operand_types[1] = PPC_OPER_TYPE_NUM;
	dec->operand_values[1] = (insword & 0xFFFC)>>2;
	dec->operand_fmtstr = PPC_FMTSTR__POS_CREG_C_NUM;
	return 0;
}

/* bgtl +CREG,NUM */
int bgtl_PCREG_NUM(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_BGTL;
	/* 01000001111AAA01BBBBBBBBBBBBBB01 */
	dec->operand_n = 2;
	dec->operand_types[0] = PPC_OPER_TYPE_CREG;
	dec->operand_values[0] = (insword & 0x1C0000)>>18;
	dec->operand_types[1] = PPC_OPER_TYPE_NUM;
	dec->operand_values[1] = (insword & 0xFFFC)>>2;
	dec->operand_fmtstr = PPC_FMTSTR__POS_CREG_C_NUM;
	return 0;
}

/* bgta +CREG,NUM */
int bgta_PCREG_NUM(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_BGTA;
	/* 01000001111AAA01BBBBBBBBBBBBBB10 */
	dec->operand_n = 2;
	dec->operand_types[0] = PPC_OPER_TYPE_CREG;
	dec->operand_values[0] = (insword & 0x1C0000)>>18;
	dec->operand_types[1] = PPC_OPER_TYPE_NUM;
	dec->operand_values[1] = (insword & 0xFFFC)>>2;
	dec->operand_fmtstr = PPC_FMTSTR__POS_CREG_C_NUM;
	return 0;
}

/* bgtla +CREG,NUM */
int bgtla_PCREG_NUM(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_BGTLA;
	/* 01000001111AAA01BBBBBBBBBBBBBB11 */
	dec->operand_n = 2;
	dec->operand_types[0] = PPC_OPER_TYPE_CREG;
	dec->operand_values[0] = (insword & 0x1C0000)>>18;
	dec->operand_types[1] = PPC_OPER_TYPE_NUM;
	dec->operand_values[1] = (insword & 0xFFFC)>>2;
	dec->operand_fmtstr = PPC_FMTSTR__POS_CREG_C_NUM;
	return 0;
}

/* beq +CREG,NUM */
int beq_PCREG_NUM(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_BEQ;
	/* 01000001111AAx10BBBBBBBBBBBBBB00 */
	dec->operand_n = 2;
	dec->operand_types[0] = PPC_OPER_TYPE_CREG;
	dec->operand_values[0] = (insword & 0x180000)>>19;
	dec->operand_types[1] = PPC_OPER_TYPE_NUM;
	dec->operand_values[1] = (insword & 0xFFFC)>>2;
	dec->operand_fmtstr = PPC_FMTSTR__POS_CREG_C_NUM;
	return 0;
}

/* beql +CREG,NUM */
int beql_PCREG_NUM(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_BEQL;
	/* 01000001111AAA10BBBBBBBBBBBBBB01 */
	dec->operand_n = 2;
	dec->operand_types[0] = PPC_OPER_TYPE_CREG;
	dec->operand_values[0] = (insword & 0x1C0000)>>18;
	dec->operand_types[1] = PPC_OPER_TYPE_NUM;
	dec->operand_values[1] = (insword & 0xFFFC)>>2;
	dec->operand_fmtstr = PPC_FMTSTR__POS_CREG_C_NUM;
	return 0;
}

/* beqa +CREG,NUM */
int beqa_PCREG_NUM(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_BEQA;
	/* 01000001111AAA10BBBBBBBBBBBBBB10 */
	dec->operand_n = 2;
	dec->operand_types[0] = PPC_OPER_TYPE_CREG;
	dec->operand_values[0] = (insword & 0x1C0000)>>18;
	dec->operand_types[1] = PPC_OPER_TYPE_NUM;
	dec->operand_values[1] = (insword & 0xFFFC)>>2;
	dec->operand_fmtstr = PPC_FMTSTR__POS_CREG_C_NUM;
	return 0;
}

/* beqla +CREG,NUM */
int beqla_PCREG_NUM(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_BEQLA;
	/* 01000001111AAA10BBBBBBBBBBBBBB11 */
	dec->operand_n = 2;
	dec->operand_types[0] = PPC_OPER_TYPE_CREG;
	dec->operand_values[0] = (insword & 0x1C0000)>>18;
	dec->operand_types[1] = PPC_OPER_TYPE_NUM;
	dec->operand_values[1] = (insword & 0xFFFC)>>2;
	dec->operand_fmtstr = PPC_FMTSTR__POS_CREG_C_NUM;
	return 0;
}

/* bso +CREG,NUM */
int bso_PCREG_NUM(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_BSO;
	/* 01000001111AAx11BBBBBBBBBBBBBB00 */
	dec->operand_n = 2;
	dec->operand_types[0] = PPC_OPER_TYPE_CREG;
	dec->operand_values[0] = (insword & 0x180000)>>19;
	dec->operand_types[1] = PPC_OPER_TYPE_NUM;
	dec->operand_values[1] = (insword & 0xFFFC)>>2;
	dec->operand_fmtstr = PPC_FMTSTR__POS_CREG_C_NUM;
	return 0;
}

/* bsol +CREG,NUM */
int bsol_PCREG_NUM(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_BSOL;
	/* 01000001111AxA11BBBBBBBBBBBBBB01 */
	dec->operand_n = 2;
	dec->operand_types[0] = PPC_OPER_TYPE_CREG;
	dec->operand_values[0] = ((insword & 0x100000)>>19)|((insword & 0x40000)>>18);
	dec->operand_types[1] = PPC_OPER_TYPE_NUM;
	dec->operand_values[1] = (insword & 0xFFFC)>>2;
	dec->operand_fmtstr = PPC_FMTSTR__POS_CREG_C_NUM;
	return 0;
}

/* bsoa +CREG,NUM */
int bsoa_PCREG_NUM(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_BSOA;
	/* 01000001111AAA11BBBBBBBBBBBBBB10 */
	dec->operand_n = 2;
	dec->operand_types[0] = PPC_OPER_TYPE_CREG;
	dec->operand_values[0] = (insword & 0x1C0000)>>18;
	dec->operand_types[1] = PPC_OPER_TYPE_NUM;
	dec->operand_values[1] = (insword & 0xFFFC)>>2;
	dec->operand_fmtstr = PPC_FMTSTR__POS_CREG_C_NUM;
	return 0;
}

/* bsola +CREG,NUM */
int bsola_PCREG_NUM(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_BSOLA;
	/* 01000001111AAA11BBBBBBBBBBBBBB11 */
	dec->operand_n = 2;
	dec->operand_types[0] = PPC_OPER_TYPE_CREG;
	dec->operand_values[0] = (insword & 0x1C0000)>>18;
	dec->operand_types[1] = PPC_OPER_TYPE_NUM;
	dec->operand_values[1] = (insword & 0xFFFC)>>2;
	dec->operand_fmtstr = PPC_FMTSTR__POS_CREG_C_NUM;
	return 0;
}

/* bdnz NUM */
int bdnz_NUM(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_BDNZ;
	/* 0100001000x00000AAAAAAAAAAAAAA00 */
	dec->operand_n = 1;
	dec->operand_types[0] = PPC_OPER_TYPE_NUM;
	dec->operand_values[0] = (insword & 0xFFFC)>>2;
	dec->operand_fmtstr = PPC_FMTSTR_NUM;
	return 0;
}

/* bdnzl NUM */
int bdnzl_NUM(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_BDNZL;
	/* 0100001000x00000AAAAAAAAAAAAAA01 */
	dec->operand_n = 1;
	dec->operand_types[0] = PPC_OPER_TYPE_NUM;
	dec->operand_values[0] = (insword & 0xFFFC)>>2;
	dec->operand_fmtstr = PPC_FMTSTR_NUM;
	return 0;
}

/* bdnza NUM */
int bdnza_NUM(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_BDNZA;
	/* 0100001000x00000AAAAAAAAAAAAAA10 */
	dec->operand_n = 1;
	dec->operand_types[0] = PPC_OPER_TYPE_NUM;
	dec->operand_values[0] = (insword & 0xFFFC)>>2;
	dec->operand_fmtstr = PPC_FMTSTR_NUM;
	return 0;
}

/* bdnzla NUM */
int bdnzla_NUM(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_BDNZLA;
	/* 0100001000x00000AAAAAAAAAAAAAA11 */
	dec->operand_n = 1;
	dec->operand_types[0] = PPC_OPER_TYPE_NUM;
	dec->operand_values[0] = (insword & 0xFFFC)>>2;
	dec->operand_fmtstr = PPC_FMTSTR_NUM;
	return 0;
}

/* bc NUM,FLAG,NUM */
int bc_NUM_FLAG_NUM(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_BC;
	/* 01000010xAA000BBCCCCCCCCCCCCCC00 */
	dec->operand_n = 3;
	dec->operand_types[0] = PPC_OPER_TYPE_NUM;
	dec->operand_values[0] = (insword & 0x600000)>>21;
	dec->operand_types[1] = PPC_OPER_TYPE_FLAG;
	dec->operand_values[1] = (insword & 0x30000)>>16;
	dec->operand_types[2] = PPC_OPER_TYPE_NUM;
	dec->operand_values[2] = (insword & 0xFFFC)>>2;
	dec->operand_fmtstr = PPC_FMTSTR_NUM_C_FLAG_C_NUM;
	return 0;
}

/* bcl NUM,FLAG,NUM */
int bcl_NUM_FLAG_NUM(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_BCL;
	/* 01000010xAA000BBCCCCCCCCCCCCCC01 */
	dec->operand_n = 3;
	dec->operand_types[0] = PPC_OPER_TYPE_NUM;
	dec->operand_values[0] = (insword & 0x600000)>>21;
	dec->operand_types[1] = PPC_OPER_TYPE_FLAG;
	dec->operand_values[1] = (insword & 0x30000)>>16;
	dec->operand_types[2] = PPC_OPER_TYPE_NUM;
	dec->operand_values[2] = (insword & 0xFFFC)>>2;
	dec->operand_fmtstr = PPC_FMTSTR_NUM_C_FLAG_C_NUM;
	return 0;
}

/* bca NUM,FLAG,NUM */
int bca_NUM_FLAG_NUM(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_BCA;
	/* 01000010Axx000BBCCCCCCCCCCCCCC10 */
	dec->operand_n = 3;
	dec->operand_types[0] = PPC_OPER_TYPE_NUM;
	dec->operand_values[0] = (insword & 0x800000)>>23;
	dec->operand_types[1] = PPC_OPER_TYPE_FLAG;
	dec->operand_values[1] = (insword & 0x30000)>>16;
	dec->operand_types[2] = PPC_OPER_TYPE_NUM;
	dec->operand_values[2] = (insword & 0xFFFC)>>2;
	dec->operand_fmtstr = PPC_FMTSTR_NUM_C_FLAG_C_NUM;
	return 0;
}

/* bcla NUM,FLAG,NUM */
int bcla_NUM_FLAG_NUM(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_BCLA;
	/* 01000010xAA000BBCCCCCCCCCCCCCC11 */
	dec->operand_n = 3;
	dec->operand_types[0] = PPC_OPER_TYPE_NUM;
	dec->operand_values[0] = (insword & 0x600000)>>21;
	dec->operand_types[1] = PPC_OPER_TYPE_FLAG;
	dec->operand_values[1] = (insword & 0x30000)>>16;
	dec->operand_types[2] = PPC_OPER_TYPE_NUM;
	dec->operand_values[2] = (insword & 0xFFFC)>>2;
	dec->operand_fmtstr = PPC_FMTSTR_NUM_C_FLAG_C_NUM;
	return 0;
}

/* bc NUM,NUM*CREG+FLAG,NUM */
int bc_NUM_NUM_CREGPFLAG_NUM(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_BC;
	/* 01000010AAACCCDDEEEEEEEEEEEEEE00 */
	dec->operand_n = 5;
	dec->operand_types[0] = PPC_OPER_TYPE_NUM;
	dec->operand_values[0] = (insword & 0xE00000)>>21;
	dec->operand_types[1] = PPC_OPER_TYPE_NUM;
	dec->operand_types[2] = PPC_OPER_TYPE_CREG;
	dec->operand_values[2] = (insword & 0x1C0000)>>18;
	dec->operand_types[3] = PPC_OPER_TYPE_FLAG;
	dec->operand_values[3] = (insword & 0x30000)>>16;
	dec->operand_types[4] = PPC_OPER_TYPE_NUM;
	dec->operand_values[4] = (insword & 0xFFFC)>>2;
	dec->operand_fmtstr = PPC_FMTSTR_NUM_C_NUM_MUL_CREG_POS_FLAG_C_NUM;
	return 0;
}

/* bcl NUM,NUM*CREG+FLAG,NUM */
int bcl_NUM_NUM_CREGPFLAG_NUM(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_BCL;
	/* 01000010AxxCxCDDEEEEEEEEEEEEEE01 */
	dec->operand_n = 5;
	dec->operand_types[0] = PPC_OPER_TYPE_NUM;
	dec->operand_values[0] = (insword & 0x800000)>>23;
	dec->operand_types[1] = PPC_OPER_TYPE_NUM;
	dec->operand_types[2] = PPC_OPER_TYPE_CREG;
	dec->operand_values[2] = ((insword & 0x100000)>>19)|((insword & 0x40000)>>18);
	dec->operand_types[3] = PPC_OPER_TYPE_FLAG;
	dec->operand_values[3] = (insword & 0x30000)>>16;
	dec->operand_types[4] = PPC_OPER_TYPE_NUM;
	dec->operand_values[4] = (insword & 0xFFFC)>>2;
	dec->operand_fmtstr = PPC_FMTSTR_NUM_C_NUM_MUL_CREG_POS_FLAG_C_NUM;
	return 0;
}

/* bca NUM,NUM*CREG+FLAG,NUM */
int bca_NUM_NUM_CREGPFLAG_NUM(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_BCA;
	/* 01000010xAACCCDDEEEEEEEEEEEEEE10 */
	dec->operand_n = 5;
	dec->operand_types[0] = PPC_OPER_TYPE_NUM;
	dec->operand_values[0] = (insword & 0x600000)>>21;
	dec->operand_types[1] = PPC_OPER_TYPE_NUM;
	dec->operand_types[2] = PPC_OPER_TYPE_CREG;
	dec->operand_values[2] = (insword & 0x1C0000)>>18;
	dec->operand_types[3] = PPC_OPER_TYPE_FLAG;
	dec->operand_values[3] = (insword & 0x30000)>>16;
	dec->operand_types[4] = PPC_OPER_TYPE_NUM;
	dec->operand_values[4] = (insword & 0xFFFC)>>2;
	dec->operand_fmtstr = PPC_FMTSTR_NUM_C_NUM_MUL_CREG_POS_FLAG_C_NUM;
	return 0;
}

/* bcla NUM,NUM*CREG+FLAG,NUM */
int bcla_NUM_NUM_CREGPFLAG_NUM(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_BCLA;
	/* 01000010AxxCCxDDEEEEEEEEEEEEEE11 */
	dec->operand_n = 5;
	dec->operand_types[0] = PPC_OPER_TYPE_NUM;
	dec->operand_values[0] = (insword & 0x800000)>>23;
	dec->operand_types[1] = PPC_OPER_TYPE_NUM;
	dec->operand_types[2] = PPC_OPER_TYPE_CREG;
	dec->operand_values[2] = (insword & 0x180000)>>19;
	dec->operand_types[3] = PPC_OPER_TYPE_FLAG;
	dec->operand_values[3] = (insword & 0x30000)>>16;
	dec->operand_types[4] = PPC_OPER_TYPE_NUM;
	dec->operand_values[4] = (insword & 0xFFFC)>>2;
	dec->operand_fmtstr = PPC_FMTSTR_NUM_C_NUM_MUL_CREG_POS_FLAG_C_NUM;
	return 0;
}

/* bdz NUM */
int bdz_NUM(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_BDZ;
	/* 0100001001x00000AAAAAAAAAAAAAA00 */
	dec->operand_n = 1;
	dec->operand_types[0] = PPC_OPER_TYPE_NUM;
	dec->operand_values[0] = (insword & 0xFFFC)>>2;
	dec->operand_fmtstr = PPC_FMTSTR_NUM;
	return 0;
}

/* bdzl NUM */
int bdzl_NUM(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_BDZL;
	/* 0100001001x00000AAAAAAAAAAAAAA01 */
	dec->operand_n = 1;
	dec->operand_types[0] = PPC_OPER_TYPE_NUM;
	dec->operand_values[0] = (insword & 0xFFFC)>>2;
	dec->operand_fmtstr = PPC_FMTSTR_NUM;
	return 0;
}

/* bdza NUM */
int bdza_NUM(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_BDZA;
	/* 0100001001x00000AAAAAAAAAAAAAA10 */
	dec->operand_n = 1;
	dec->operand_types[0] = PPC_OPER_TYPE_NUM;
	dec->operand_values[0] = (insword & 0xFFFC)>>2;
	dec->operand_fmtstr = PPC_FMTSTR_NUM;
	return 0;
}

/* bdzla NUM */
int bdzla_NUM(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_BDZLA;
	/* 0100001001x00000AAAAAAAAAAAAAA11 */
	dec->operand_n = 1;
	dec->operand_types[0] = PPC_OPER_TYPE_NUM;
	dec->operand_values[0] = (insword & 0xFFFC)>>2;
	dec->operand_fmtstr = PPC_FMTSTR_NUM;
	return 0;
}

/* bdnz -NUM */
int bdnz_NNUM(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_BDNZ;
	/* 0100001100000000AAAAAAAAAAAAAA00 */
	dec->operand_n = 1;
	dec->operand_types[0] = PPC_OPER_TYPE_NUM;
	dec->operand_values[0] = (insword & 0xFFFC)>>2;
	dec->operand_fmtstr = PPC_FMTSTR__NEG_NUM;
	return 0;
}

/* bdnzl -NUM */
int bdnzl_NNUM(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_BDNZL;
	/* 0100001100000000AAAAAAAAAAAAAA01 */
	dec->operand_n = 1;
	dec->operand_types[0] = PPC_OPER_TYPE_NUM;
	dec->operand_values[0] = (insword & 0xFFFC)>>2;
	dec->operand_fmtstr = PPC_FMTSTR__NEG_NUM;
	return 0;
}

/* bdnza -NUM */
int bdnza_NNUM(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_BDNZA;
	/* 0100001100000000AAAAAAAAAAAAAA10 */
	dec->operand_n = 1;
	dec->operand_types[0] = PPC_OPER_TYPE_NUM;
	dec->operand_values[0] = (insword & 0xFFFC)>>2;
	dec->operand_fmtstr = PPC_FMTSTR__NEG_NUM;
	return 0;
}

/* bdnzla -NUM */
int bdnzla_NNUM(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_BDNZLA;
	/* 0100001100000000AAAAAAAAAAAAAA11 */
	dec->operand_n = 1;
	dec->operand_types[0] = PPC_OPER_TYPE_NUM;
	dec->operand_values[0] = (insword & 0xFFFC)>>2;
	dec->operand_fmtstr = PPC_FMTSTR__NEG_NUM;
	return 0;
}

/* bc -NUM,FLAG,NUM */
int bc_NNUM_FLAG_NUM(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_BC;
	/* 010000110A0000BBCCCCCCCCCCCCCC00 */
	dec->operand_n = 3;
	dec->operand_types[0] = PPC_OPER_TYPE_NUM;
	dec->operand_values[0] = (insword & 0x400000)>>22;
	dec->operand_types[1] = PPC_OPER_TYPE_FLAG;
	dec->operand_values[1] = (insword & 0x30000)>>16;
	dec->operand_types[2] = PPC_OPER_TYPE_NUM;
	dec->operand_values[2] = (insword & 0xFFFC)>>2;
	dec->operand_fmtstr = PPC_FMTSTR__NEG_NUM_C_FLAG_C_NUM;
	return 0;
}

/* bcl -NUM,FLAG,NUM */
int bcl_NNUM_FLAG_NUM(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_BCL;
	/* 010000110A0000xBCCCCCCCCCCCCCC01 */
	dec->operand_n = 3;
	dec->operand_types[0] = PPC_OPER_TYPE_NUM;
	dec->operand_values[0] = (insword & 0x400000)>>22;
	dec->operand_types[1] = PPC_OPER_TYPE_FLAG;
	dec->operand_values[1] = (insword & 0x10000)>>16;
	dec->operand_types[2] = PPC_OPER_TYPE_NUM;
	dec->operand_values[2] = (insword & 0xFFFC)>>2;
	dec->operand_fmtstr = PPC_FMTSTR__NEG_NUM_C_FLAG_C_NUM;
	return 0;
}

/* bca -NUM,FLAG,NUM */
int bca_NNUM_FLAG_NUM(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_BCA;
	/* 010000110A0000xBCCCCCCCCCCCCCC10 */
	dec->operand_n = 3;
	dec->operand_types[0] = PPC_OPER_TYPE_NUM;
	dec->operand_values[0] = (insword & 0x400000)>>22;
	dec->operand_types[1] = PPC_OPER_TYPE_FLAG;
	dec->operand_values[1] = (insword & 0x10000)>>16;
	dec->operand_types[2] = PPC_OPER_TYPE_NUM;
	dec->operand_values[2] = (insword & 0xFFFC)>>2;
	dec->operand_fmtstr = PPC_FMTSTR__NEG_NUM_C_FLAG_C_NUM;
	return 0;
}

/* bcla -NUM,FLAG,NUM */
int bcla_NNUM_FLAG_NUM(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_BCLA;
	/* 010000110A0000BBCCCCCCCCCCCCCC11 */
	dec->operand_n = 3;
	dec->operand_types[0] = PPC_OPER_TYPE_NUM;
	dec->operand_values[0] = (insword & 0x400000)>>22;
	dec->operand_types[1] = PPC_OPER_TYPE_FLAG;
	dec->operand_values[1] = (insword & 0x30000)>>16;
	dec->operand_types[2] = PPC_OPER_TYPE_NUM;
	dec->operand_values[2] = (insword & 0xFFFC)>>2;
	dec->operand_fmtstr = PPC_FMTSTR__NEG_NUM_C_FLAG_C_NUM;
	return 0;
}

/* bc -NUM,NUM*CREG+FLAG,NUM */
int bc_NNUM_NUM_CREGPFLAG_NUM(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_BC;
	/* 010000110A0xCCDDEEEEEEEEEEEEEE00 */
	dec->operand_n = 5;
	dec->operand_types[0] = PPC_OPER_TYPE_NUM;
	dec->operand_values[0] = (insword & 0x400000)>>22;
	dec->operand_types[1] = PPC_OPER_TYPE_NUM;
	dec->operand_types[2] = PPC_OPER_TYPE_CREG;
	dec->operand_values[2] = (insword & 0xC0000)>>18;
	dec->operand_types[3] = PPC_OPER_TYPE_FLAG;
	dec->operand_values[3] = (insword & 0x30000)>>16;
	dec->operand_types[4] = PPC_OPER_TYPE_NUM;
	dec->operand_values[4] = (insword & 0xFFFC)>>2;
	dec->operand_fmtstr = PPC_FMTSTR__NEG_NUM_C_NUM_MUL_CREG_POS_FLAG_C_NUM;
	return 0;
}

/* bcl -NUM,NUM*CREG+FLAG,NUM */
int bcl_NNUM_NUM_CREGPFLAG_NUM(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_BCL;
	/* 010000110A0CxCDDEEEEEEEEEEEEEE01 */
	dec->operand_n = 5;
	dec->operand_types[0] = PPC_OPER_TYPE_NUM;
	dec->operand_values[0] = (insword & 0x400000)>>22;
	dec->operand_types[1] = PPC_OPER_TYPE_NUM;
	dec->operand_types[2] = PPC_OPER_TYPE_CREG;
	dec->operand_values[2] = ((insword & 0x100000)>>19)|((insword & 0x40000)>>18);
	dec->operand_types[3] = PPC_OPER_TYPE_FLAG;
	dec->operand_values[3] = (insword & 0x30000)>>16;
	dec->operand_types[4] = PPC_OPER_TYPE_NUM;
	dec->operand_values[4] = (insword & 0xFFFC)>>2;
	dec->operand_fmtstr = PPC_FMTSTR__NEG_NUM_C_NUM_MUL_CREG_POS_FLAG_C_NUM;
	return 0;
}

/* bca -NUM,NUM*CREG+FLAG,NUM */
int bca_NNUM_NUM_CREGPFLAG_NUM(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_BCA;
	/* 010000110A0CCCDDEEEEEEEEEEEEEE10 */
	dec->operand_n = 5;
	dec->operand_types[0] = PPC_OPER_TYPE_NUM;
	dec->operand_values[0] = (insword & 0x400000)>>22;
	dec->operand_types[1] = PPC_OPER_TYPE_NUM;
	dec->operand_types[2] = PPC_OPER_TYPE_CREG;
	dec->operand_values[2] = (insword & 0x1C0000)>>18;
	dec->operand_types[3] = PPC_OPER_TYPE_FLAG;
	dec->operand_values[3] = (insword & 0x30000)>>16;
	dec->operand_types[4] = PPC_OPER_TYPE_NUM;
	dec->operand_values[4] = (insword & 0xFFFC)>>2;
	dec->operand_fmtstr = PPC_FMTSTR__NEG_NUM_C_NUM_MUL_CREG_POS_FLAG_C_NUM;
	return 0;
}

/* bcla -NUM,NUM*CREG+FLAG,NUM */
int bcla_NNUM_NUM_CREGPFLAG_NUM(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_BCLA;
	/* 010000110A0CCCDDEEEEEEEEEEEEEE11 */
	dec->operand_n = 5;
	dec->operand_types[0] = PPC_OPER_TYPE_NUM;
	dec->operand_values[0] = (insword & 0x400000)>>22;
	dec->operand_types[1] = PPC_OPER_TYPE_NUM;
	dec->operand_types[2] = PPC_OPER_TYPE_CREG;
	dec->operand_values[2] = (insword & 0x1C0000)>>18;
	dec->operand_types[3] = PPC_OPER_TYPE_FLAG;
	dec->operand_values[3] = (insword & 0x30000)>>16;
	dec->operand_types[4] = PPC_OPER_TYPE_NUM;
	dec->operand_values[4] = (insword & 0xFFFC)>>2;
	dec->operand_fmtstr = PPC_FMTSTR__NEG_NUM_C_NUM_MUL_CREG_POS_FLAG_C_NUM;
	return 0;
}

/* bdnz +NUM */
int bdnz_PNUM(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_BDNZ;
	/* 0100001100100000AAAAAAAAAAAAAA00 */
	dec->operand_n = 1;
	dec->operand_types[0] = PPC_OPER_TYPE_NUM;
	dec->operand_values[0] = (insword & 0xFFFC)>>2;
	dec->operand_fmtstr = PPC_FMTSTR__POS_NUM;
	return 0;
}

/* bdnzl +NUM */
int bdnzl_PNUM(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_BDNZL;
	/* 0100001100100000AAAAAAAAAAAAAA01 */
	dec->operand_n = 1;
	dec->operand_types[0] = PPC_OPER_TYPE_NUM;
	dec->operand_values[0] = (insword & 0xFFFC)>>2;
	dec->operand_fmtstr = PPC_FMTSTR__POS_NUM;
	return 0;
}

/* bdnza +NUM */
int bdnza_PNUM(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_BDNZA;
	/* 0100001100100000AAAAAAAAAAAAAA10 */
	dec->operand_n = 1;
	dec->operand_types[0] = PPC_OPER_TYPE_NUM;
	dec->operand_values[0] = (insword & 0xFFFC)>>2;
	dec->operand_fmtstr = PPC_FMTSTR__POS_NUM;
	return 0;
}

/* bdnzla +NUM */
int bdnzla_PNUM(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_BDNZLA;
	/* 0100001100100000AAAAAAAAAAAAAA11 */
	dec->operand_n = 1;
	dec->operand_types[0] = PPC_OPER_TYPE_NUM;
	dec->operand_values[0] = (insword & 0xFFFC)>>2;
	dec->operand_fmtstr = PPC_FMTSTR__POS_NUM;
	return 0;
}

/* bc +NUM,FLAG,NUM */
int bc_PNUM_FLAG_NUM(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_BC;
	/* 010000110A1000xBCCCCCCCCCCCCCC00 */
	dec->operand_n = 3;
	dec->operand_types[0] = PPC_OPER_TYPE_NUM;
	dec->operand_values[0] = (insword & 0x400000)>>22;
	dec->operand_types[1] = PPC_OPER_TYPE_FLAG;
	dec->operand_values[1] = (insword & 0x10000)>>16;
	dec->operand_types[2] = PPC_OPER_TYPE_NUM;
	dec->operand_values[2] = (insword & 0xFFFC)>>2;
	dec->operand_fmtstr = PPC_FMTSTR__POS_NUM_C_FLAG_C_NUM;
	return 0;
}

/* bcl +NUM,FLAG,NUM */
int bcl_PNUM_FLAG_NUM(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_BCL;
	/* 010000110A1000BxCCCCCCCCCCCCCC01 */
	dec->operand_n = 3;
	dec->operand_types[0] = PPC_OPER_TYPE_NUM;
	dec->operand_values[0] = (insword & 0x400000)>>22;
	dec->operand_types[1] = PPC_OPER_TYPE_FLAG;
	dec->operand_values[1] = (insword & 0x20000)>>17;
	dec->operand_types[2] = PPC_OPER_TYPE_NUM;
	dec->operand_values[2] = (insword & 0xFFFC)>>2;
	dec->operand_fmtstr = PPC_FMTSTR__POS_NUM_C_FLAG_C_NUM;
	return 0;
}

/* bca +NUM,FLAG,NUM */
int bca_PNUM_FLAG_NUM(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_BCA;
	/* 010000110A1000BBCCCCCCCCCCCCCC10 */
	dec->operand_n = 3;
	dec->operand_types[0] = PPC_OPER_TYPE_NUM;
	dec->operand_values[0] = (insword & 0x400000)>>22;
	dec->operand_types[1] = PPC_OPER_TYPE_FLAG;
	dec->operand_values[1] = (insword & 0x30000)>>16;
	dec->operand_types[2] = PPC_OPER_TYPE_NUM;
	dec->operand_values[2] = (insword & 0xFFFC)>>2;
	dec->operand_fmtstr = PPC_FMTSTR__POS_NUM_C_FLAG_C_NUM;
	return 0;
}

/* bcla +NUM,FLAG,NUM */
int bcla_PNUM_FLAG_NUM(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_BCLA;
	/* 010000110A1000BBCCCCCCCCCCCCCC11 */
	dec->operand_n = 3;
	dec->operand_types[0] = PPC_OPER_TYPE_NUM;
	dec->operand_values[0] = (insword & 0x400000)>>22;
	dec->operand_types[1] = PPC_OPER_TYPE_FLAG;
	dec->operand_values[1] = (insword & 0x30000)>>16;
	dec->operand_types[2] = PPC_OPER_TYPE_NUM;
	dec->operand_values[2] = (insword & 0xFFFC)>>2;
	dec->operand_fmtstr = PPC_FMTSTR__POS_NUM_C_FLAG_C_NUM;
	return 0;
}

/* bc +NUM,NUM*CREG+FLAG,NUM */
int bc_PNUM_NUM_CREGPFLAG_NUM(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_BC;
	/* 010000110A1CCCDDEEEEEEEEEEEEEE00 */
	dec->operand_n = 5;
	dec->operand_types[0] = PPC_OPER_TYPE_NUM;
	dec->operand_values[0] = (insword & 0x400000)>>22;
	dec->operand_types[1] = PPC_OPER_TYPE_NUM;
	dec->operand_types[2] = PPC_OPER_TYPE_CREG;
	dec->operand_values[2] = (insword & 0x1C0000)>>18;
	dec->operand_types[3] = PPC_OPER_TYPE_FLAG;
	dec->operand_values[3] = (insword & 0x30000)>>16;
	dec->operand_types[4] = PPC_OPER_TYPE_NUM;
	dec->operand_values[4] = (insword & 0xFFFC)>>2;
	dec->operand_fmtstr = PPC_FMTSTR__POS_NUM_C_NUM_MUL_CREG_POS_FLAG_C_NUM;
	return 0;
}

/* bcl +NUM,NUM*CREG+FLAG,NUM */
int bcl_PNUM_NUM_CREGPFLAG_NUM(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_BCL;
	/* 010000110A1CCCDDEEEEEEEEEEEEEE01 */
	dec->operand_n = 5;
	dec->operand_types[0] = PPC_OPER_TYPE_NUM;
	dec->operand_values[0] = (insword & 0x400000)>>22;
	dec->operand_types[1] = PPC_OPER_TYPE_NUM;
	dec->operand_types[2] = PPC_OPER_TYPE_CREG;
	dec->operand_values[2] = (insword & 0x1C0000)>>18;
	dec->operand_types[3] = PPC_OPER_TYPE_FLAG;
	dec->operand_values[3] = (insword & 0x30000)>>16;
	dec->operand_types[4] = PPC_OPER_TYPE_NUM;
	dec->operand_values[4] = (insword & 0xFFFC)>>2;
	dec->operand_fmtstr = PPC_FMTSTR__POS_NUM_C_NUM_MUL_CREG_POS_FLAG_C_NUM;
	return 0;
}

/* bca +NUM,NUM*CREG+FLAG,NUM */
int bca_PNUM_NUM_CREGPFLAG_NUM(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_BCA;
	/* 010000110A1xCCDDEEEEEEEEEEEEEE10 */
	dec->operand_n = 5;
	dec->operand_types[0] = PPC_OPER_TYPE_NUM;
	dec->operand_values[0] = (insword & 0x400000)>>22;
	dec->operand_types[1] = PPC_OPER_TYPE_NUM;
	dec->operand_types[2] = PPC_OPER_TYPE_CREG;
	dec->operand_values[2] = (insword & 0xC0000)>>18;
	dec->operand_types[3] = PPC_OPER_TYPE_FLAG;
	dec->operand_values[3] = (insword & 0x30000)>>16;
	dec->operand_types[4] = PPC_OPER_TYPE_NUM;
	dec->operand_values[4] = (insword & 0xFFFC)>>2;
	dec->operand_fmtstr = PPC_FMTSTR__POS_NUM_C_NUM_MUL_CREG_POS_FLAG_C_NUM;
	return 0;
}

/* bcla +NUM,NUM*CREG+FLAG,NUM */
int bcla_PNUM_NUM_CREGPFLAG_NUM(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_BCLA;
	/* 010000110A1CxCDDEEEEEEEEEEEEEE11 */
	dec->operand_n = 5;
	dec->operand_types[0] = PPC_OPER_TYPE_NUM;
	dec->operand_values[0] = (insword & 0x400000)>>22;
	dec->operand_types[1] = PPC_OPER_TYPE_NUM;
	dec->operand_types[2] = PPC_OPER_TYPE_CREG;
	dec->operand_values[2] = ((insword & 0x100000)>>19)|((insword & 0x40000)>>18);
	dec->operand_types[3] = PPC_OPER_TYPE_FLAG;
	dec->operand_values[3] = (insword & 0x30000)>>16;
	dec->operand_types[4] = PPC_OPER_TYPE_NUM;
	dec->operand_values[4] = (insword & 0xFFFC)>>2;
	dec->operand_fmtstr = PPC_FMTSTR__POS_NUM_C_NUM_MUL_CREG_POS_FLAG_C_NUM;
	return 0;
}

/* bdz -NUM */
int bdz_NNUM(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_BDZ;
	/* 0100001101000000AAAAAAAAAAAAAA00 */
	dec->operand_n = 1;
	dec->operand_types[0] = PPC_OPER_TYPE_NUM;
	dec->operand_values[0] = (insword & 0xFFFC)>>2;
	dec->operand_fmtstr = PPC_FMTSTR__NEG_NUM;
	return 0;
}

/* bdzl -NUM */
int bdzl_NNUM(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_BDZL;
	/* 0100001101000000AAAAAAAAAAAAAA01 */
	dec->operand_n = 1;
	dec->operand_types[0] = PPC_OPER_TYPE_NUM;
	dec->operand_values[0] = (insword & 0xFFFC)>>2;
	dec->operand_fmtstr = PPC_FMTSTR__NEG_NUM;
	return 0;
}

/* bdza -NUM */
int bdza_NNUM(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_BDZA;
	/* 0100001101000000AAAAAAAAAAAAAA10 */
	dec->operand_n = 1;
	dec->operand_types[0] = PPC_OPER_TYPE_NUM;
	dec->operand_values[0] = (insword & 0xFFFC)>>2;
	dec->operand_fmtstr = PPC_FMTSTR__NEG_NUM;
	return 0;
}

/* bdzla -NUM */
int bdzla_NNUM(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_BDZLA;
	/* 0100001101000000AAAAAAAAAAAAAA11 */
	dec->operand_n = 1;
	dec->operand_types[0] = PPC_OPER_TYPE_NUM;
	dec->operand_values[0] = (insword & 0xFFFC)>>2;
	dec->operand_fmtstr = PPC_FMTSTR__NEG_NUM;
	return 0;
}

/* bdz +NUM */
int bdz_PNUM(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_BDZ;
	/* 0100001101100000AAAAAAAAAAAAAA00 */
	dec->operand_n = 1;
	dec->operand_types[0] = PPC_OPER_TYPE_NUM;
	dec->operand_values[0] = (insword & 0xFFFC)>>2;
	dec->operand_fmtstr = PPC_FMTSTR__POS_NUM;
	return 0;
}

/* bdzl +NUM */
int bdzl_PNUM(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_BDZL;
	/* 0100001101100000AAAAAAAAAAAAAA01 */
	dec->operand_n = 1;
	dec->operand_types[0] = PPC_OPER_TYPE_NUM;
	dec->operand_values[0] = (insword & 0xFFFC)>>2;
	dec->operand_fmtstr = PPC_FMTSTR__POS_NUM;
	return 0;
}

/* bdza +NUM */
int bdza_PNUM(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_BDZA;
	/* 0100001101100000AAAAAAAAAAAAAA10 */
	dec->operand_n = 1;
	dec->operand_types[0] = PPC_OPER_TYPE_NUM;
	dec->operand_values[0] = (insword & 0xFFFC)>>2;
	dec->operand_fmtstr = PPC_FMTSTR__POS_NUM;
	return 0;
}

/* bdzla +NUM */
int bdzla_PNUM(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_BDZLA;
	/* 0100001101100000AAAAAAAAAAAAAA11 */
	dec->operand_n = 1;
	dec->operand_types[0] = PPC_OPER_TYPE_NUM;
	dec->operand_values[0] = (insword & 0xFFFC)>>2;
	dec->operand_fmtstr = PPC_FMTSTR__POS_NUM;
	return 0;
}

