COMPILE = g++ -std=c++11
FLAGS = -W -Wall -Werror -pedantic

week2:
	mkdir bin 
	$(COMPILE) $(FLAGS) week2.cpp
week3:
	mkdir bin
	$(COMPILE) $(FLAGS) week3.cpp
week4:
	mkdir bin
	$(COMPILE) $(FLAGS) week4.cpp
week5:
	mkdir bin
	$(COMPILE) $(FLAGS) week5.cpp
clean:
	rm -fv week2
	rm -fv week3
	rm -fv week4
	rm -fv week5