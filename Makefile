# source files
SRC = ./src/direction.cpp \
      ./src/positionA.cpp \
      ./src/positionB.cpp \
      ./src/main.cpp
#      ./src/position_B.cpp\
#      ./src/position_C.cpp\
#      ./src/position_D.cpp\
#      ./src/position_E.cpp
# include folders
IFLAGS = -I./src
# compiler
CC = g++
# executable
EXECUTABLE = fsm.out
# compiler options
CFLAGS = -Wall -g -std=c++14
# remove
RM = rm
# list of objects
OBJS = $(SRC:.cpp=.o)

Build: $(EXECUTABLE)
# build application
$(EXECUTABLE): $(OBJS)
	$(CC) $(CFLAGS) $(IFLAGS) $(OBJS) -o$@
# compile individual objects
%.o: %.cpp
	$(CC) $(CFLAGS) $(IFLAGS) -c $< -o$@

# run application
Run:
	./$(EXECUTABLE)

# clean
.PHONY: clean

clean:
	$(RM) -f $(OBJS) ./$(EXECUTABLE)