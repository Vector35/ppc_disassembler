#include "disassembler.h"

/* tdi NUM,GPR,NUM */
int tdi_NUM_GPR_NUM(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_TDI;
	/* 000010AAAAABBBBBCCCCCCCCCCCCCCCC */
	dec->operand_n = 3;
	dec->operand_types[0] = PPC_OPER_TYPE_NUM;
	dec->operand_values[0] = (insword & 0x03E00000)>>21;
	dec->operand_types[1] = PPC_OPER_TYPE_GPR;
	dec->operand_values[1] = (insword & 0x1F0000)>>16;
	dec->operand_types[2] = PPC_OPER_TYPE_INT16;
	dec->operand_values[2] = insword & 0xFFFF;
	dec->operand_fmtstr = PPC_FMTSTR_DEC_C_GPR_C_INT16;
	return 0;
}

/* tdlgti GPR,NUM */
int tdlgti_GPR_NUM(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_TDLGTI;
	/* 00001000001AAAAABBBBBBBBBBBBBBBB */
	dec->operand_n = 2;
	dec->operand_types[0] = PPC_OPER_TYPE_GPR;
	dec->operand_values[0] = (insword & 0x1F0000)>>16;
	dec->operand_types[1] = PPC_OPER_TYPE_INT16;
	dec->operand_values[1] = insword & 0xFFFF;
	dec->operand_fmtstr = PPC_FMTSTR_GPR_C_INT16;
	return 0;
}

/* tdllti GPR,NUM */
int tdllti_GPR_NUM(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_TDLLTI;
	/* 00001000010AAAAABBBBBBBBBBBBBBBB */
	dec->operand_n = 2;
	dec->operand_types[0] = PPC_OPER_TYPE_GPR;
	dec->operand_values[0] = (insword & 0x1F0000)>>16;
	dec->operand_types[1] = PPC_OPER_TYPE_INT16;
	dec->operand_values[1] = insword & 0xFFFF;
	dec->operand_fmtstr = PPC_FMTSTR_GPR_C_INT16;
	return 0;
}

/* tdeqi GPR,NUM */
int tdeqi_GPR_NUM(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_TDEQI;
	/* 00001000100AAAAABBBBBBBBBBBBBBBB */
	dec->operand_n = 2;
	dec->operand_types[0] = PPC_OPER_TYPE_GPR;
	dec->operand_values[0] = (insword & 0x1F0000)>>16;
	dec->operand_types[1] = PPC_OPER_TYPE_INT16;
	dec->operand_values[1] = insword & 0xFFFF;
	dec->operand_fmtstr = PPC_FMTSTR_GPR_C_INT16;
	return 0;
}

/* tdlgei GPR,NUM */
int tdlgei_GPR_NUM(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_TDLGEI;
	/* 00001000101AAAAABBBBBBBBBBBBBBBB */
	dec->operand_n = 2;
	dec->operand_types[0] = PPC_OPER_TYPE_GPR;
	dec->operand_values[0] = (insword & 0x1F0000)>>16;
	dec->operand_types[1] = PPC_OPER_TYPE_INT16;
	dec->operand_values[1] = insword & 0xFFFF;
	dec->operand_fmtstr = PPC_FMTSTR_GPR_C_INT16;
	return 0;
}

/* tdllei GPR,NUM */
int tdllei_GPR_NUM(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_TDLLEI;
	/* 00001000110AAAAABBBBBBBBBBBBBBBB */
	dec->operand_n = 2;
	dec->operand_types[0] = PPC_OPER_TYPE_GPR;
	dec->operand_values[0] = (insword & 0x1F0000)>>16;
	dec->operand_types[1] = PPC_OPER_TYPE_INT16;
	dec->operand_values[1] = insword & 0xFFFF;
	dec->operand_fmtstr = PPC_FMTSTR_GPR_C_INT16;
	return 0;
}

/* tdgti GPR,NUM */
int tdgti_GPR_NUM(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_TDGTI;
	/* 00001001000AAAAABBBBBBBBBBBBBBBB */
	dec->operand_n = 2;
	dec->operand_types[0] = PPC_OPER_TYPE_GPR;
	dec->operand_values[0] = (insword & 0x1F0000)>>16;
	dec->operand_types[1] = PPC_OPER_TYPE_INT16;
	dec->operand_values[1] = insword & 0xFFFF;
	dec->operand_fmtstr = PPC_FMTSTR_GPR_C_INT16;
	return 0;
}

/* tdgei GPR,NUM */
int tdgei_GPR_NUM(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_TDGEI;
	/* 00001001100AAAAABBBBBBBBBBBBBBBB */
	dec->operand_n = 2;
	dec->operand_types[0] = PPC_OPER_TYPE_GPR;
	dec->operand_values[0] = (insword & 0x1F0000)>>16;
	dec->operand_types[1] = PPC_OPER_TYPE_INT16;
	dec->operand_values[1] = insword & 0xFFFF;
	dec->operand_fmtstr = PPC_FMTSTR_GPR_C_INT16;
	return 0;
}

/* tdlti GPR,NUM */
int tdlti_GPR_NUM(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_TDLTI;
	/* 00001010000AAAAABBBBBBBBBBBBBBBB */
	dec->operand_n = 2;
	dec->operand_types[0] = PPC_OPER_TYPE_GPR;
	dec->operand_values[0] = (insword & 0x1F0000)>>16;
	dec->operand_types[1] = PPC_OPER_TYPE_INT16;
	dec->operand_values[1] = insword & 0xFFFF;
	dec->operand_fmtstr = PPC_FMTSTR_GPR_C_INT16;
	return 0;
}

/* tdlei GPR,NUM */
int tdlei_GPR_NUM(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_TDLEI;
	/* 00001010100AAAAABBBBBBBBBBBBBBBB */
	dec->operand_n = 2;
	dec->operand_types[0] = PPC_OPER_TYPE_GPR;
	dec->operand_values[0] = (insword & 0x1F0000)>>16;
	dec->operand_types[1] = PPC_OPER_TYPE_INT16;
	dec->operand_values[1] = insword & 0xFFFF;
	dec->operand_fmtstr = PPC_FMTSTR_GPR_C_INT16;
	return 0;
}

/* tdnei GPR,NUM */
int tdnei_GPR_NUM(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_TDNEI;
	/* 00001011000AAAAABBBBBBBBBBBBBBBB */
	dec->operand_n = 2;
	dec->operand_types[0] = PPC_OPER_TYPE_GPR;
	dec->operand_values[0] = (insword & 0x1F0000)>>16;
	dec->operand_types[1] = PPC_OPER_TYPE_INT16;
	dec->operand_values[1] = insword & 0xFFFF;
	dec->operand_fmtstr = PPC_FMTSTR_GPR_C_INT16;
	return 0;
}

/* tdui GPR,NUM */
int tdui_GPR_NUM(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_TDUI;
	/* 00001011111AAAAABBBBBBBBBBBBBBBB */
	dec->operand_n = 2;
	dec->operand_types[0] = PPC_OPER_TYPE_GPR;
	dec->operand_values[0] = (insword & 0x1F0000)>>16;
	dec->operand_types[1] = PPC_OPER_TYPE_INT16;
	dec->operand_values[1] = insword & 0xFFFF;
	dec->operand_fmtstr = PPC_FMTSTR_GPR_C_INT16;
	return 0;
}

