# source files
SRC = ./src/main.cpp \
      ./src/direction.cpp \
      ./src/state.cpp \
      ./src/position_A.cpp \
      ./src/position_B.cpp \
      ./src/position_C.cpp \ 
      ./src/position_D.cpp \
      ./src/position_E.cpp \
# include folders
IFLAGS = -I./src \
# compiler
CC = g++
# executable
EXECUTABLE = fsm.out 
# compiler options
CFLAGS = -Wall -std=c++14 -pedantic -g -O0
# remove 
RM = rm
# list of objects
OBJS = $(src:.c=.o)
# garbage
GABARGE = $(OBJS) ./$(EXECUTABLE)

Build: $(EXECUTABLE)

$(EXECUTABLE): $(OBJS)
	$(CC) $(CFLAGS) $(IFLAGS) $(OBJS) -o$@
# build individual objects
%.o: %.cpp
	$(CC) $(CFLAGS) $(IFLAGS) -c $< -o$@

# run application
Run:
	./$(EXECUTABLE)

# clean
.PHONY: clean

clean:
	-$(RM) $(GARBAGE)
