CXX = g++
CXXFLAGS = -std=c++0x
CXXFLAGS += -Wall
CXXFLAGS += -pedantic-errors
CXXFLAGS += -g

LDFLAGS = -lboost_date_time

SRCS = *.cpp
EXEC = CoconutIsland

build:
	${CXX} ${CXXFLAGS} ${SRCS} -o ${EXEC}

zip:
	zip $(EXEC).zip *.cpp *.hpp *.* makefile

clean:
	rm -rf *o *.dSYM ${EXEC}