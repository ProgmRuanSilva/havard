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
