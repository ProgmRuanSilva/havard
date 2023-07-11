mario:
	gcc src/blocks.c include/mylib.h -o bin/mario

calculator:
	gcc src/calculator.c include/mylib.h -o bin/calculator

section:
	gcc src/section1.c include/mylib.h -o bin/section1

llamas:
	gcc src/llamas.c include/mylib.h -o bin/llamas

truncation:
	gcc src/truncation.c include/mylib.h -o bin/truncation

score: 
	gcc src/score.c include/mylib.h -o bin/score

status: 
	gcc src/status.c -o bin/score

memory: 
	gcc src/memory.c include/mylib.h -o bin/memory

pointers:
	gcc src/pointers.c include/mylib.h -o bin/pointers

alocation:
	gcc src/alocation.c include/mylib.h -o bin/alocation

#gcc src/ .c include/mylib.h -o bin/
