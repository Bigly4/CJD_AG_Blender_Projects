hello:
	echo "Hello, World" 
%.o: %.c
	cc $< -o $@
clean:
	rm -f *.o all
all:
	echo "All"