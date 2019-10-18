ALL: ppc_disassembler.a cli

PPC_SRC_LIST = ppc_root.c ppc_disassemble.c ppc_opc_0.c ppc_opc_2.c ppc_opc_3.c ppc_opc_4.c ppc_opc_7.c ppc_opc_8.c ppc_opc_9.c ppc_opc_10.c ppc_opc_11.c ppc_opc_12.c ppc_opc_13.c ppc_opc_14.c ppc_opc_15.c ppc_opc_16.c ppc_opc_17.c ppc_opc_18.c ppc_opc_19.c ppc_opc_20.c ppc_opc_21.c ppc_opc_22.c ppc_opc_23.c ppc_opc_24.c ppc_opc_25.c ppc_opc_26.c ppc_opc_27.c ppc_opc_28.c ppc_opc_29.c ppc_opc_30.c ppc_opc_31.c ppc_opc_32.c ppc_opc_33.c ppc_opc_34.c ppc_opc_35.c ppc_opc_36.c ppc_opc_37.c ppc_opc_38.c ppc_opc_39.c ppc_opc_40.c ppc_opc_41.c ppc_opc_42.c ppc_opc_43.c ppc_opc_44.c ppc_opc_45.c ppc_opc_46.c ppc_opc_47.c ppc_opc_48.c ppc_opc_49.c ppc_opc_50.c ppc_opc_51.c ppc_opc_52.c ppc_opc_53.c ppc_opc_54.c ppc_opc_55.c ppc_opc_56.c ppc_opc_57.c ppc_opc_58.c ppc_opc_59.c ppc_opc_60.c ppc_opc_61.c ppc_opc_62.c ppc_opc_63.c

ppc_disassembler.a: $(PPC_SRC_LIST)
	gcc $(PPC_SRC_LIST) -c
	ar cr ppc_disassembler.a *.o

cli: cli.c ppc_disassembler.a
	gcc cli.c ppc_disassembler.a -o cli

clean:
	rm -rf *.o *.a
