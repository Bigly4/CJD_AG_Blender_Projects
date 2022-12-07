OBJ = factors primefactors factorial_factors armstrong
CC = gcc

all: $(OBJ)
$(OBJ): %: %.c
	$(CC) $< -o $@
clean:
	rm -f $(OBJ)