CXX = g++
CXXFLAGS = -std=c++20

SRC = main.cpp
OBJ = $(SRC:.cpp=.o)
EXE = shakespeare

all: $(EXE)

$(EXE): $(OBJ)
	$(CXX) $(CXXFLAGS) -o $(EXE) $(OBJ)

%.o: %.cpp
	$(CXX) $(CXXFLAGS) -c -o $@ $<

clean:
	rm -f $(EXE) $(OBJ)

.PHONY: all clean
