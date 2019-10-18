#include "disassembler.h"

/* rotldi GPR,GPR,NUM */
int rotldi_GPR_GPR_NUM(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_ROTLDI;
	/* 011110BBBBBAAAAACCCCC000000000C0 */
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

/* rotldi. GPR,GPR,NUM */
int rotldiD_GPR_GPR_NUM(uint32_t insword, struct ppc_decoded *dec)
{
	dec->properties |= PPC_PROPERTY_DOTTED;
	dec->mnemonic = PPC_MNEM_ROTLDI;
	/* 011110BBBBBAAAAACCCCC000000000C1 */
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

/* rldicr GPR,GPR,NUM,NUM */
int rldicr_GPR_GPR_NUM_NUM(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_RLDICR;
	/* 011110BBBBBAAAAACCCCCDDDDDD001C0 */
	dec->operand_n = 4;
	dec->operand_types[0] = PPC_OPER_TYPE_GPR;
	dec->operand_values[0] = (insword & 0x1F0000)>>16;
	dec->operand_types[1] = PPC_OPER_TYPE_GPR;
	dec->operand_values[1] = (insword & 0x3E00000)>>21;
	dec->operand_types[2] = PPC_OPER_TYPE_NUM;
	dec->operand_values[2] = ((insword & 0xF800)>>10)|((insword & 0x2)>>1);
	dec->operand_types[3] = PPC_OPER_TYPE_NUM;
	dec->operand_values[3] = (insword & 0x7E0)>>5;
	dec->operand_fmtstr = PPC_FMTSTR_GPR_C_GPR_C_NUM_C_NUM;
	return 0;
}

/* rldicr. GPR,GPR,NUM,NUM */
int rldicrD_GPR_GPR_NUM_NUM(uint32_t insword, struct ppc_decoded *dec)
{
	dec->properties |= PPC_PROPERTY_DOTTED;
	dec->mnemonic = PPC_MNEM_RLDICR;
	/* 011110BBBBBAAAAACCCCCDDDDDD001C1 */
	dec->operand_n = 4;
	dec->operand_types[0] = PPC_OPER_TYPE_GPR;
	dec->operand_values[0] = (insword & 0x1F0000)>>16;
	dec->operand_types[1] = PPC_OPER_TYPE_GPR;
	dec->operand_values[1] = (insword & 0x3E00000)>>21;
	dec->operand_types[2] = PPC_OPER_TYPE_NUM;
	dec->operand_values[2] = ((insword & 0xF800)>>10)|((insword & 0x2)>>1);
	dec->operand_types[3] = PPC_OPER_TYPE_NUM;
	dec->operand_values[3] = (insword & 0x7E0)>>5;
	dec->operand_fmtstr = PPC_FMTSTR_GPR_C_GPR_C_NUM_C_NUM;
	return 0;
}

/* rldic GPR,GPR,NUM,NUM */
int rldic_GPR_GPR_NUM_NUM(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_RLDIC;
	/* 011110BBBBBAAAAACCCCCDDDDDD010C0 */
	dec->operand_n = 4;
	dec->operand_types[0] = PPC_OPER_TYPE_GPR;
	dec->operand_values[0] = (insword & 0x1F0000)>>16;
	dec->operand_types[1] = PPC_OPER_TYPE_GPR;
	dec->operand_values[1] = (insword & 0x3E00000)>>21;
	dec->operand_types[2] = PPC_OPER_TYPE_NUM;
	dec->operand_values[2] = ((insword & 0xF800)>>10)|((insword & 0x2)>>1);
	dec->operand_types[3] = PPC_OPER_TYPE_NUM;
	dec->operand_values[3] = (insword & 0x7E0)>>5;
	dec->operand_fmtstr = PPC_FMTSTR_GPR_C_GPR_C_NUM_C_NUM;
	return 0;
}

/* rldic. GPR,GPR,NUM,NUM */
int rldicD_GPR_GPR_NUM_NUM(uint32_t insword, struct ppc_decoded *dec)
{
	dec->properties |= PPC_PROPERTY_DOTTED;
	dec->mnemonic = PPC_MNEM_RLDIC;
	/* 011110BBBBBAAAAACCCCCDDDDDD010C1 */
	dec->operand_n = 4;
	dec->operand_types[0] = PPC_OPER_TYPE_GPR;
	dec->operand_values[0] = (insword & 0x1F0000)>>16;
	dec->operand_types[1] = PPC_OPER_TYPE_GPR;
	dec->operand_values[1] = (insword & 0x3E00000)>>21;
	dec->operand_types[2] = PPC_OPER_TYPE_NUM;
	dec->operand_values[2] = ((insword & 0xF800)>>10)|((insword & 0x2)>>1);
	dec->operand_types[3] = PPC_OPER_TYPE_NUM;
	dec->operand_values[3] = (insword & 0x7E0)>>5;
	dec->operand_fmtstr = PPC_FMTSTR_GPR_C_GPR_C_NUM_C_NUM;
	return 0;
}

/* rldimi GPR,GPR,NUM,NUM */
int rldimi_GPR_GPR_NUM_NUM(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_RLDIMI;
	/* 011110BBBBBAAAAACCCCCDDDDDD011C0 */
	dec->operand_n = 4;
	dec->operand_types[0] = PPC_OPER_TYPE_GPR;
	dec->operand_values[0] = (insword & 0x1F0000)>>16;
	dec->operand_types[1] = PPC_OPER_TYPE_GPR;
	dec->operand_values[1] = (insword & 0x3E00000)>>21;
	dec->operand_types[2] = PPC_OPER_TYPE_NUM;
	dec->operand_values[2] = ((insword & 0xF800)>>10)|((insword & 0x2)>>1);
	dec->operand_types[3] = PPC_OPER_TYPE_NUM;
	dec->operand_values[3] = (insword & 0x7E0)>>5;
	dec->operand_fmtstr = PPC_FMTSTR_GPR_C_GPR_C_NUM_C_NUM;
	return 0;
}

/* rldimi. GPR,GPR,NUM,NUM */
int rldimiD_GPR_GPR_NUM_NUM(uint32_t insword, struct ppc_decoded *dec)
{
	dec->properties |= PPC_PROPERTY_DOTTED;
	dec->mnemonic = PPC_MNEM_RLDIMI;
	/* 011110BBBBBAAAAACCCCCDDDDDD011C1 */
	dec->operand_n = 4;
	dec->operand_types[0] = PPC_OPER_TYPE_GPR;
	dec->operand_values[0] = (insword & 0x1F0000)>>16;
	dec->operand_types[1] = PPC_OPER_TYPE_GPR;
	dec->operand_values[1] = (insword & 0x3E00000)>>21;
	dec->operand_types[2] = PPC_OPER_TYPE_NUM;
	dec->operand_values[2] = ((insword & 0xF800)>>10)|((insword & 0x2)>>1);
	dec->operand_types[3] = PPC_OPER_TYPE_NUM;
	dec->operand_values[3] = (insword & 0x7E0)>>5;
	dec->operand_fmtstr = PPC_FMTSTR_GPR_C_GPR_C_NUM_C_NUM;
	return 0;
}

/* rotld GPR,GPR,GPR */
int rotld_GPR_GPR_GPR(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_ROTLD;
	/* 011110BBBBBAAAAACCCCC00000010000 */
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

/* rotld. GPR,GPR,GPR */
int rotldD_GPR_GPR_GPR(uint32_t insword, struct ppc_decoded *dec)
{
	dec->properties |= PPC_PROPERTY_DOTTED;
	dec->mnemonic = PPC_MNEM_ROTLD;
	/* 011110BBBBBAAAAACCCCC00000010001 */
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

/* rldcr GPR,GPR,GPR,NUM */
int rldcr_GPR_GPR_GPR_NUM(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_RLDCR;
	/* 011110BBBBBAAAAACCCCCDDDDDD10010 */
	dec->operand_n = 4;
	dec->operand_types[0] = PPC_OPER_TYPE_GPR;
	dec->operand_values[0] = (insword & 0x1F0000)>>16;
	dec->operand_types[1] = PPC_OPER_TYPE_GPR;
	dec->operand_values[1] = (insword & 0x3E00000)>>21;
	dec->operand_types[2] = PPC_OPER_TYPE_GPR;
	dec->operand_values[2] = (insword & 0xF800)>>11;
	dec->operand_types[3] = PPC_OPER_TYPE_NUM;
	dec->operand_values[3] = (insword & 0x7E0)>>5;
	dec->operand_fmtstr = PPC_FMTSTR_GPR_C_GPR_C_GPR_C_NUM;
	return 0;
}

/* rldcr. GPR,GPR,GPR,NUM */
int rldcrD_GPR_GPR_GPR_NUM(uint32_t insword, struct ppc_decoded *dec)
{
	dec->properties |= PPC_PROPERTY_DOTTED;
	dec->mnemonic = PPC_MNEM_RLDCR;
	/* 011110BBBBBAAAAACCCCCDDDDDD10011 */
	dec->operand_n = 4;
	dec->operand_types[0] = PPC_OPER_TYPE_GPR;
	dec->operand_values[0] = (insword & 0x1F0000)>>16;
	dec->operand_types[1] = PPC_OPER_TYPE_GPR;
	dec->operand_values[1] = (insword & 0x3E00000)>>21;
	dec->operand_types[2] = PPC_OPER_TYPE_GPR;
	dec->operand_values[2] = (insword & 0xF800)>>11;
	dec->operand_types[3] = PPC_OPER_TYPE_NUM;
	dec->operand_values[3] = (insword & 0x7E0)>>5;
	dec->operand_fmtstr = PPC_FMTSTR_GPR_C_GPR_C_GPR_C_NUM;
	return 0;
}

/* clrldi GPR,GPR,NUM */
int clrldi_GPR_GPR_NUM(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_CLRLDI;
	/* 011110BBBBBAAAAA00000CCCCCC00000 */
	dec->operand_n = 3;
	dec->operand_types[0] = PPC_OPER_TYPE_GPR;
	dec->operand_values[0] = (insword & 0x1F0000)>>16;
	dec->operand_types[1] = PPC_OPER_TYPE_GPR;
	dec->operand_values[1] = (insword & 0x3E00000)>>21;
	dec->operand_types[2] = PPC_OPER_TYPE_NUM;
	dec->operand_values[2] = (insword & 0x7E0)>>5;
	dec->operand_fmtstr = PPC_FMTSTR_GPR_C_GPR_C_NUM;
	return 0;
}

/* clrldi. GPR,GPR,NUM */
int clrldiD_GPR_GPR_NUM(uint32_t insword, struct ppc_decoded *dec)
{
	dec->properties |= PPC_PROPERTY_DOTTED;
	dec->mnemonic = PPC_MNEM_CLRLDI;
	/* 011110BBBBBAAAAA00000CCCCCC00001 */
	dec->operand_n = 3;
	dec->operand_types[0] = PPC_OPER_TYPE_GPR;
	dec->operand_values[0] = (insword & 0x1F0000)>>16;
	dec->operand_types[1] = PPC_OPER_TYPE_GPR;
	dec->operand_values[1] = (insword & 0x3E00000)>>21;
	dec->operand_types[2] = PPC_OPER_TYPE_NUM;
	dec->operand_values[2] = (insword & 0x7E0)>>5;
	dec->operand_fmtstr = PPC_FMTSTR_GPR_C_GPR_C_NUM;
	return 0;
}

/* rldicl GPR,GPR,NUM,NUM */
int rldicl_GPR_GPR_NUM_NUM(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_RLDICL;
	/* 011110BBBBBAAAAAxCCCCDDDDDD000C0 */
	dec->operand_n = 4;
	dec->operand_types[0] = PPC_OPER_TYPE_GPR;
	dec->operand_values[0] = (insword & 0x1F0000)>>16;
	dec->operand_types[1] = PPC_OPER_TYPE_GPR;
	dec->operand_values[1] = (insword & 0x3E00000)>>21;
	dec->operand_types[2] = PPC_OPER_TYPE_NUM;
	dec->operand_values[2] = ((insword & 0x7800)>>10)|((insword & 0x2)>>1);
	dec->operand_types[3] = PPC_OPER_TYPE_NUM;
	dec->operand_values[3] = (insword & 0x7E0)>>5;
	dec->operand_fmtstr = PPC_FMTSTR_GPR_C_GPR_C_NUM_C_NUM;
	return 0;
}

/* rldicl. GPR,GPR,NUM,NUM */
int rldiclD_GPR_GPR_NUM_NUM(uint32_t insword, struct ppc_decoded *dec)
{
	dec->properties |= PPC_PROPERTY_DOTTED;
	dec->mnemonic = PPC_MNEM_RLDICL;
	/* 011110BBBBBAAAAACCCCCDDDDDD000C1 */
	dec->operand_n = 4;
	dec->operand_types[0] = PPC_OPER_TYPE_GPR;
	dec->operand_values[0] = (insword & 0x1F0000)>>16;
	dec->operand_types[1] = PPC_OPER_TYPE_GPR;
	dec->operand_values[1] = (insword & 0x3E00000)>>21;
	dec->operand_types[2] = PPC_OPER_TYPE_NUM;
	dec->operand_values[2] = ((insword & 0xF800)>>10)|((insword & 0x2)>>1);
	dec->operand_types[3] = PPC_OPER_TYPE_NUM;
	dec->operand_values[3] = (insword & 0x7E0)>>5;
	dec->operand_fmtstr = PPC_FMTSTR_GPR_C_GPR_C_NUM_C_NUM;
	return 0;
}

/* rldcl GPR,GPR,GPR,NUM */
int rldcl_GPR_GPR_GPR_NUM(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_RLDCL;
	/* 011110BBBBBAAAAACCCCCDDDDDD10000 */
	dec->operand_n = 4;
	dec->operand_types[0] = PPC_OPER_TYPE_GPR;
	dec->operand_values[0] = (insword & 0x1F0000)>>16;
	dec->operand_types[1] = PPC_OPER_TYPE_GPR;
	dec->operand_values[1] = (insword & 0x3E00000)>>21;
	dec->operand_types[2] = PPC_OPER_TYPE_GPR;
	dec->operand_values[2] = (insword & 0xF800)>>11;
	dec->operand_types[3] = PPC_OPER_TYPE_NUM;
	dec->operand_values[3] = (insword & 0x7E0)>>5;
	dec->operand_fmtstr = PPC_FMTSTR_GPR_C_GPR_C_GPR_C_NUM;
	return 0;
}

/* rldcl. GPR,GPR,GPR,NUM */
int rldclD_GPR_GPR_GPR_NUM(uint32_t insword, struct ppc_decoded *dec)
{
	dec->properties |= PPC_PROPERTY_DOTTED;
	dec->mnemonic = PPC_MNEM_RLDCL;
	/* 011110BBBBBAAAAACCCCCDDDDDD10001 */
	dec->operand_n = 4;
	dec->operand_types[0] = PPC_OPER_TYPE_GPR;
	dec->operand_values[0] = (insword & 0x1F0000)>>16;
	dec->operand_types[1] = PPC_OPER_TYPE_GPR;
	dec->operand_values[1] = (insword & 0x3E00000)>>21;
	dec->operand_types[2] = PPC_OPER_TYPE_GPR;
	dec->operand_values[2] = (insword & 0xF800)>>11;
	dec->operand_types[3] = PPC_OPER_TYPE_NUM;
	dec->operand_values[3] = (insword & 0x7E0)>>5;
	dec->operand_fmtstr = PPC_FMTSTR_GPR_C_GPR_C_GPR_C_NUM;
	return 0;
}

