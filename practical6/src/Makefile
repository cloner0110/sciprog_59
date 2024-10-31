# Variables
CC = gcc
CFLAGS =  -g
OBJ = main.o mmult.o
EXEC = matrix_multiplication

all: $(EXEC)

$(EXEC): $(OBJ)
	$(CC) $(CFLAGS) -o $(EXEC) $(OBJ)

# Compile main.c
main.o: main.c
	$(CC) $(CFLAGS) -c main.c

# Compile matmult.c
matmult.o: mmult.c
	$(CC) $(CFLAGS) -c mmult.c

# Clean up object files and executable
clean:
	rm -f *.o
