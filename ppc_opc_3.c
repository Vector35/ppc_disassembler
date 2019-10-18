#include "disassembler.h"

/* twi NUM,GPR,NUM */
int twi_NUM_GPR_NUM(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_TWI;
	/* 000011AAAAxBBBBBCCCCCCCCCCCCCCCC */
	dec->operand_n = 3;
	dec->operand_types[0] = PPC_OPER_TYPE_NUM;
	dec->operand_values[0] = (insword & 0x3C00000)>>22;
	dec->operand_types[1] = PPC_OPER_TYPE_GPR;
	dec->operand_values[1] = (insword & 0x1F0000)>>16;
	dec->operand_types[2] = PPC_OPER_TYPE_NUM;
	dec->operand_values[2] = insword & 0xFFFF;
	dec->operand_fmtstr = PPC_FMTSTR_NUM_C_GPR_C_NUM;
	return 0;
}

/* twlgti GPR,NUM */
int twlgti_GPR_NUM(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_TWLGTI;
	/* 00001100001AAAAABBBBBBBBBBBBBBBB */
	dec->operand_n = 2;
	dec->operand_types[0] = PPC_OPER_TYPE_GPR;
	dec->operand_values[0] = (insword & 0x1F0000)>>16;
	dec->operand_types[1] = PPC_OPER_TYPE_NUM;
	dec->operand_values[1] = insword & 0xFFFF;
	dec->operand_fmtstr = PPC_FMTSTR_GPR_C_NUM;
	return 0;
}

/* twllti GPR,NUM */
int twllti_GPR_NUM(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_TWLLTI;
	/* 00001100010AAAAABBBBBBBBBBBBBBBB */
	dec->operand_n = 2;
	dec->operand_types[0] = PPC_OPER_TYPE_GPR;
	dec->operand_values[0] = (insword & 0x1F0000)>>16;
	dec->operand_types[1] = PPC_OPER_TYPE_NUM;
	dec->operand_values[1] = insword & 0xFFFF;
	dec->operand_fmtstr = PPC_FMTSTR_GPR_C_NUM;
	return 0;
}

/* tweqi GPR,NUM */
int tweqi_GPR_NUM(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_TWEQI;
	/* 00001100100AAAAABBBBBBBBBBBBBBBB */
	dec->operand_n = 2;
	dec->operand_types[0] = PPC_OPER_TYPE_GPR;
	dec->operand_values[0] = (insword & 0x1F0000)>>16;
	dec->operand_types[1] = PPC_OPER_TYPE_NUM;
	dec->operand_values[1] = insword & 0xFFFF;
	dec->operand_fmtstr = PPC_FMTSTR_GPR_C_NUM;
	return 0;
}

/* twlgei GPR,NUM */
int twlgei_GPR_NUM(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_TWLGEI;
	/* 00001100101AAAAABBBBBBBBBBBBBBBB */
	dec->operand_n = 2;
	dec->operand_types[0] = PPC_OPER_TYPE_GPR;
	dec->operand_values[0] = (insword & 0x1F0000)>>16;
	dec->operand_types[1] = PPC_OPER_TYPE_NUM;
	dec->operand_values[1] = insword & 0xFFFF;
	dec->operand_fmtstr = PPC_FMTSTR_GPR_C_NUM;
	return 0;
}

/* twllei GPR,NUM */
int twllei_GPR_NUM(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_TWLLEI;
	/* 00001100110AAAAABBBBBBBBBBBBBBBB */
	dec->operand_n = 2;
	dec->operand_types[0] = PPC_OPER_TYPE_GPR;
	dec->operand_values[0] = (insword & 0x1F0000)>>16;
	dec->operand_types[1] = PPC_OPER_TYPE_NUM;
	dec->operand_values[1] = insword & 0xFFFF;
	dec->operand_fmtstr = PPC_FMTSTR_GPR_C_NUM;
	return 0;
}

/* twgti GPR,NUM */
int twgti_GPR_NUM(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_TWGTI;
	/* 00001101000AAAAABBBBBBBBBBBBBBBB */
	dec->operand_n = 2;
	dec->operand_types[0] = PPC_OPER_TYPE_GPR;
	dec->operand_values[0] = (insword & 0x1F0000)>>16;
	dec->operand_types[1] = PPC_OPER_TYPE_NUM;
	dec->operand_values[1] = insword & 0xFFFF;
	dec->operand_fmtstr = PPC_FMTSTR_GPR_C_NUM;
	return 0;
}

/* twgei GPR,NUM */
int twgei_GPR_NUM(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_TWGEI;
	/* 00001101100AAAAABBBBBBBBBBBBBBBB */
	dec->operand_n = 2;
	dec->operand_types[0] = PPC_OPER_TYPE_GPR;
	dec->operand_values[0] = (insword & 0x1F0000)>>16;
	dec->operand_types[1] = PPC_OPER_TYPE_NUM;
	dec->operand_values[1] = insword & 0xFFFF;
	dec->operand_fmtstr = PPC_FMTSTR_GPR_C_NUM;
	return 0;
}

/* twlti GPR,NUM */
int twlti_GPR_NUM(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_TWLTI;
	/* 00001110000AAAAABBBBBBBBBBBBBBBB */
	dec->operand_n = 2;
	dec->operand_types[0] = PPC_OPER_TYPE_GPR;
	dec->operand_values[0] = (insword & 0x1F0000)>>16;
	dec->operand_types[1] = PPC_OPER_TYPE_NUM;
	dec->operand_values[1] = insword & 0xFFFF;
	dec->operand_fmtstr = PPC_FMTSTR_GPR_C_NUM;
	return 0;
}

/* twlei GPR,NUM */
int twlei_GPR_NUM(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_TWLEI;
	/* 00001110100AAAAABBBBBBBBBBBBBBBB */
	dec->operand_n = 2;
	dec->operand_types[0] = PPC_OPER_TYPE_GPR;
	dec->operand_values[0] = (insword & 0x1F0000)>>16;
	dec->operand_types[1] = PPC_OPER_TYPE_NUM;
	dec->operand_values[1] = insword & 0xFFFF;
	dec->operand_fmtstr = PPC_FMTSTR_GPR_C_NUM;
	return 0;
}

/* twnei GPR,NUM */
int twnei_GPR_NUM(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_TWNEI;
	/* 00001111000AAAAABBBBBBBBBBBBBBBB */
	dec->operand_n = 2;
	dec->operand_types[0] = PPC_OPER_TYPE_GPR;
	dec->operand_values[0] = (insword & 0x1F0000)>>16;
	dec->operand_types[1] = PPC_OPER_TYPE_NUM;
	dec->operand_values[1] = insword & 0xFFFF;
	dec->operand_fmtstr = PPC_FMTSTR_GPR_C_NUM;
	return 0;
}

/* twui GPR,NUM */
int twui_GPR_NUM(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_TWUI;
	/* 00001111111AAAAABBBBBBBBBBBBBBBB */
	dec->operand_n = 2;
	dec->operand_types[0] = PPC_OPER_TYPE_GPR;
	dec->operand_values[0] = (insword & 0x1F0000)>>16;
	dec->operand_types[1] = PPC_OPER_TYPE_NUM;
	dec->operand_values[1] = insword & 0xFFFF;
	dec->operand_fmtstr = PPC_FMTSTR_GPR_C_NUM;
	return 0;
}

