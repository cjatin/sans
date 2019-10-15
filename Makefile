all:
	clang++ src/main.cpp -o main -I./include

clean:
	rm -f main

ana:
	clang++ --analyze src/main.cpp -I./include --analyzer-output=text

