CPPFLAGS = 
CPPFLAGS += -I/usr/local/include -std=c++11 -O0 -g
BFDFLAGS = -lbfd -liberty -lopcodes -lz 
all: gofer.so

.PHONY: croot copcode

gofer.so: gofer.cpp
	g++ $(CPPFLAGS)	$(BFDFLAGS) -shared -o gofer.so gofer.cpp -Wl,-headerpad_max_install_names

croot:
	./gen_root_c.py > ../ppc_root.c

copcodes:
	./gen_opcode_c.py 0 > ../ppc_opc_0.c
	./gen_opcode_c.py 2 > ../ppc_opc_2.c
	./gen_opcode_c.py 3 > ../ppc_opc_3.c
	./gen_opcode_c.py 4 > ../ppc_opc_4.c
	./gen_opcode_c.py 7 > ../ppc_opc_7.c
	./gen_opcode_c.py 8 > ../ppc_opc_8.c
	./gen_opcode_c.py 9 > ../ppc_opc_9.c
	./gen_opcode_c.py 10 > ../ppc_opc_10.c
	./gen_opcode_c.py 11 > ../ppc_opc_11.c
	./gen_opcode_c.py 12 > ../ppc_opc_12.c
	./gen_opcode_c.py 13 > ../ppc_opc_13.c
	./gen_opcode_c.py 14 > ../ppc_opc_14.c
	./gen_opcode_c.py 15 > ../ppc_opc_15.c
	./gen_opcode_c.py 16 > ../ppc_opc_16.c
	./gen_opcode_c.py 17 > ../ppc_opc_17.c
	./gen_opcode_c.py 18 > ../ppc_opc_18.c
	./gen_opcode_c.py 19 > ../ppc_opc_19.c
	./gen_opcode_c.py 20 > ../ppc_opc_20.c
	./gen_opcode_c.py 21 > ../ppc_opc_21.c
	./gen_opcode_c.py 22 > ../ppc_opc_22.c
	./gen_opcode_c.py 23 > ../ppc_opc_23.c
	./gen_opcode_c.py 24 > ../ppc_opc_24.c
	./gen_opcode_c.py 25 > ../ppc_opc_25.c
	./gen_opcode_c.py 26 > ../ppc_opc_26.c
	./gen_opcode_c.py 27 > ../ppc_opc_27.c
	./gen_opcode_c.py 28 > ../ppc_opc_28.c
	./gen_opcode_c.py 29 > ../ppc_opc_29.c
	./gen_opcode_c.py 30 > ../ppc_opc_30.c
	./gen_opcode_c.py 31 > ../ppc_opc_31.c
	./gen_opcode_c.py 32 > ../ppc_opc_32.c
	./gen_opcode_c.py 33 > ../ppc_opc_33.c
	./gen_opcode_c.py 34 > ../ppc_opc_34.c
	./gen_opcode_c.py 35 > ../ppc_opc_35.c
	./gen_opcode_c.py 36 > ../ppc_opc_36.c
	./gen_opcode_c.py 37 > ../ppc_opc_37.c
	./gen_opcode_c.py 38 > ../ppc_opc_38.c
	./gen_opcode_c.py 39 > ../ppc_opc_39.c
	./gen_opcode_c.py 40 > ../ppc_opc_40.c
	./gen_opcode_c.py 41 > ../ppc_opc_41.c
	./gen_opcode_c.py 42 > ../ppc_opc_42.c
	./gen_opcode_c.py 43 > ../ppc_opc_43.c
	./gen_opcode_c.py 44 > ../ppc_opc_44.c
	./gen_opcode_c.py 45 > ../ppc_opc_45.c
	./gen_opcode_c.py 46 > ../ppc_opc_46.c
	./gen_opcode_c.py 47 > ../ppc_opc_47.c
	./gen_opcode_c.py 48 > ../ppc_opc_48.c
	./gen_opcode_c.py 49 > ../ppc_opc_49.c
	./gen_opcode_c.py 50 > ../ppc_opc_50.c
	./gen_opcode_c.py 51 > ../ppc_opc_51.c
	./gen_opcode_c.py 52 > ../ppc_opc_52.c
	./gen_opcode_c.py 53 > ../ppc_opc_53.c
	./gen_opcode_c.py 54 > ../ppc_opc_54.c
	./gen_opcode_c.py 55 > ../ppc_opc_55.c
	./gen_opcode_c.py 56 > ../ppc_opc_56.c
	./gen_opcode_c.py 57 > ../ppc_opc_57.c
	./gen_opcode_c.py 58 > ../ppc_opc_58.c
	./gen_opcode_c.py 59 > ../ppc_opc_59.c
	./gen_opcode_c.py 60 > ../ppc_opc_60.c
	./gen_opcode_c.py 61 > ../ppc_opc_61.c
	./gen_opcode_c.py 62 > ../ppc_opc_62.c
	./gen_opcode_c.py 63 > ../ppc_opc_63.c

clean:
	rm -f gofer.so
	rm -rf gofer.so.dSYM
	rm -rf __pycache__
