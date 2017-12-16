CFLAGS = -O
CC = g++
INCLUDE = -I"include"
OUT = "out

Factorial: factorial_test.o recursive_lib.o 
	$(CC) $(CFLAGS) -o $(OUT)\Factorial" $(OUT)\factorial_test.o" $(OUT)\recursive_lib.o"

factorial_test.o: factorial_test.cpp
	$(CC) $(CFLAGS) -o $(OUT)\factorial_test.o" $(INCLUDE) -c factorial_test.cpp

recursive_lib.o: recursive_lib.cpp
	$(CC) $(CFLAGS) -o $(OUT)\recursive_lib.o" $(INCLUDE) -c recursive_lib.cpp

tower_of_hanoi: tower_of_hanoi_test.o tower_of_hanoi_lib.o
	$(CC) $(CFLAGS) -o $(OUT)\tower_of_hanoi" $(OUT)\tower_of_hanoi_lib.o" $(OUT)\tower_of_hanoi_test.o"

tower_of_hanoi_test.o: factorial_test.cpp
	$(CC) $(CFLAGS) -o $(OUT)\tower_of_hanoi_test.o" $(INCLUDE) -c tower_of_hanoi_test.cpp

tower_of_hanoi_lib.o: recursive_lib.cpp
	$(CC) $(CFLAGS) -o $(OUT)\tower_of_hanoi_lib.o" $(INCLUDE) -c tower_of_hanoi_lib.cpp

clean:
	del $(OUT)\*.o"
	del $(OUT)\*.exe"