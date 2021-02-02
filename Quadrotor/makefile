CC:=gcc
exe:=out
obj:=calculator.c
setting:= -lm

all:$(obj)
	$(CC) -o $(exe) $(obj) $(setting)
	
.PHONY:clean
clean:
	rm -rf $(exe)