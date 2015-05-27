COMPILE = g++ -std=c++11
FLAGS = -W -Wall -Werror -pedantic

week2:
	$(COMPILE) $(FLAGS) week2.cpp
week3:
	$(COMPILE) $(FLAGS) week3.cpp
week4:
	$(COMPILE) $(FLAGS) week4.cpp
week5:
	$(COMPILE) $(FLAGS) week5.cpp
week9:
	$(COMPILE) $(FLAGS) week9.cpp
clean:
	rm -fv week2
	rm -fv week3
	rm -fv week4
	rm -fv week5