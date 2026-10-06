.SUFFIXES: .cpp .h .o

.cpp.o: 
	g++ -c $*.cpp

all: robot

RoboticArm.o: RoboticArm.cpp RoboticArm.h

main.o: main.cpp RoboticArm.h

robot: main.o RoboticArm.o
	g++ -o robot main.o RoboticArm.o

clean:
	rm -f *.o robot

test: all
	./robot
