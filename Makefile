COMPILE = g++
FLAGS = -W -Wall -Werror -pedantic

week2:
	mkdir bin 
	$(COMPILE) $(FLAGS) src/week2/week2.cpp -o bin/week2
week3:
	mkdir bin
	$(COMPILE) $(FLAGS) src/week2/week3.cpp -o bin/week3
week4:
	mkdir bin
	$(COMPILE) $(FLAGS) src/week4/week4.cpp -o bin/week4
clean:
	rm -fv bin/week2
	rm -fv bin/week3
	rm -fv bin/week4