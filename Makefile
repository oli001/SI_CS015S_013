COMPILE = g++ -std=c++11
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
week5:
	mkdir bin
	$(COMPILE) $(FLAGS) src/week5/week4.cpp -o bin/week5
clean:
	rm -fv week2
	rm -fv week3
	rm -fv week4
	rm -fv week5