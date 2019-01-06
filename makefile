CC			= clang++
SRC_DIR		= ./source
#SRC_FLAGS	= -g
SRC_FILES	= $(wildcard *.cpp)
SRC_OBJ		= gates.cpp primGates.cpp
LIB_NAME	= libGates.a
CL			= ar rcs
PNAME		= gate


all: objects library gates

objects:
	$(CC) -c $(SRC_DIR)/gates.cpp $(SRC_DIR)/primGates.cpp

library:
	$(CL) $(LIB_NAME) basicGates.o gates.o

gates: 
	$(CC) -o $(PNAME) $(SRC_DIR)/source.cpp $(LIB_NAME)

libs: libGates.a

clean:
	rm -f $(PNAME) *.o *.gch *.a