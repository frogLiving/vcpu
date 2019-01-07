CC			= clang++
SRC_DIR		= ./source
SRC_FLAGS	= -g
SRC_FILES	= $(wildcard *.cpp)
SRC_OBJ		= gates.cpp primGates.cpp
LIB_NAME	= libGates.a
CL			= ar rcs
PNAME		= gate


all: objects library gates

objects:
	$(CC) -c $(SRC_DIR)/primGates.cpp $(SRC_DIR)/gates.cpp $(SRC_DIR)/intermediateGates.cpp

library:
	$(CL) $(LIB_NAME) primGates.o gates.o intermediateGates.o

gates: 
	$(CC) -o $(PNAME) $(SRC_DIR)/source.cpp $(LIB_NAME) $(SRC_FLAGS)

libs: libGates.a

clean:
	rm -f $(PNAME) *.o *.gch *.a