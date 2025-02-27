CC = gcc
SRC_DIR = ./src
INC_DIR = ./inc

# Rule to compile .c files into .o files
%.o: $(SRC_DIR)/%.c
	$(CC) -c $< -o $@ -I$(INC_DIR)

# Rule to build the final executable
final.exe: a.o  b.o  c.o d.o main.o
	$(CC) $^ -o $@

# Clean rule
clean:
	rm -f *.o final.exe