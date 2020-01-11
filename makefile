all:out/main run
out/main:obj/main.o
	g++ -o $@ $<
obj/main.o:src/main.cpp
	g++ -c $< -o $@
run:
	out/main