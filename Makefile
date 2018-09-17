malloc_example: malloc_example.c malloc_example.cpp
	clang malloc_example.c -o /dev/null; clang++ malloc_example.cpp -o /dev/null

structure_init: structure_init.c structure_init.cpp
	clang structure_init.c -o /dev/null; clang++ -pedantic structure_init.cpp -o /dev/null

enumerations: enumerations.c enumerations.cpp
	clang enumerations.c -o /dev/null; clang++ enumerations.cpp -o /dev/null

auto:
	clang -std=c89 auto.c -o auto_c && ./auto_c; clang++ auto.cpp -o auto_cpp && ./auto_cpp

.PHONY: clean
clean:
	rm auto_c auto_cpp
