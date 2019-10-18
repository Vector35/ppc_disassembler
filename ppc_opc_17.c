#include "disassembler.h"

/* svc NUM,NUM,NUM */
int svc_NUM_NUM_NUM(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_SVC;
	/* 0100010000000000BBBBAAAAAAACCC00 */
	dec->operand_n = 3;
	dec->operand_types[0] = PPC_OPER_TYPE_NUM;
	dec->operand_values[0] = (insword & 0xFE0)>>5;
	dec->operand_types[1] = PPC_OPER_TYPE_NUM;
	dec->operand_values[1] = (insword & 0xF000)>>12;
	dec->operand_types[2] = PPC_OPER_TYPE_NUM;
	dec->operand_values[2] = (insword & 0x1C)>>2;
	dec->operand_fmtstr = PPC_FMTSTR_NUM_C_NUM_C_NUM;
	return 0;
}

/* scv NUM */
int scv_NUM(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_SCV;
	/* 0100010000000000xxxxAAAAAAAxxx01 */
	dec->operand_n = 1;
	dec->operand_types[0] = PPC_OPER_TYPE_NUM;
	dec->operand_values[0] = (insword & 0xFE0)>>5;
	dec->operand_fmtstr = PPC_FMTSTR_NUM;
	return 0;
}

/* sc */
int sc(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_SC;
	return 0;
}

/* svcla NUM */
int svcla_NUM(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_SVCLA;
	/* 0100010000000000AAAAAAAAAAAAAA11 */
	dec->operand_n = 1;
	dec->operand_types[0] = PPC_OPER_TYPE_NUM;
	dec->operand_values[0] = (insword & 0xFFFC)>>2;
	dec->operand_fmtstr = PPC_FMTSTR_NUM;
	return 0;
}

/* sc NUM */
int sc_NUM(uint32_t insword, struct ppc_decoded *dec)
{
	dec->mnemonic = PPC_MNEM_SC;
	/* 0100010000000000xxxxAAAAAAAxxx10 */
	dec->operand_n = 1;
	dec->operand_types[0] = PPC_OPER_TYPE_NUM;
	dec->operand_values[0] = (insword & 0xFE0)>>5;
	dec->operand_fmtstr = PPC_FMTSTR_NUM;
	return 0;
}

