CC=gcc
CFLAGS=-Wall -g3
LDFLAGS=
PROG=lj_potential
DEPS=main utils particles lj_potential
BIN=bin/
SRC=src/
INC=inc/
B_DEPS=$(foreach file,$(DEPS), $(BIN)$(file).o )

all: $(PROG)
	@echo $(B_DEPS)

$(PROG): $(B_DEPS)
	$(CC) -I./inc -o $(PROG) $^ $(LDFLAGS)

$(BIN)%.o: $(SRC)%.c
	$(CC) $(CFLAGS) -c -o $@ -I./inc -c $<

clean:
	rm -f $(BIN)*.o

mrproper: clean
	rm -f $(PROG)
