CPPFLAGS = 
CPPFLAGS += -I/usr/local/include -std=c++11 -O0 -g
BFDFLAGS = -lbfd -liberty -lopcodes -lz 
all: gofer.so

gofer.so: gofer.cpp
	g++ $(CPPFLAGS)	$(BFDFLAGS) -shared -o gofer.so gofer.cpp -Wl,-headerpad_max_install_names

clean:
	rm -f gofer.so
	rm -rf gofer.so.dSYM
	rm -rf __pycache__
