CFLAGS = -O
CC = g++
INCLUDE = -I"include"
OUT = "out

Factorial: factorial_test.o recursive_lib.o 
	$(CC) $(CFLAGS) -o $(OUT)\Factorial" $(OUT)\factorial_test.o" $(OUT)\recursive_lib.o"

factorial_test.o: factorial_test.cpp
	$(CC) $(CFLAGS) -o $(OUT)\factorial_test.o" $(INCLUDE) -c factorial_test.cpp

tower_of_hanoi: tower_of_hanoi_test.o recursive_lib.o
	$(CC) $(CFLAGS) -o $(OUT)\tower_of_hanoi" $(OUT)\tower_of_hanoi_test.o" $(OUT)\recursive_lib.o"

tower_of_hanoi_test.o: tower_of_hanoi_test.cpp
	$(CC) $(CFLAGS) -o $(OUT)\tower_of_hanoi_test.o" $(INCLUDE) -c tower_of_hanoi_test.cpp

permutations_num: permutations_num_test.o recursive_lib.o
	$(CC) $(CFLAGS) -o $(OUT)\permutations_num" $(OUT)\permutations_num_test.o" $(OUT)\recursive_lib.o"

permutations_num_test.o: permutations_num_test.cpp
	$(CC) $(CFLAGS) -o $(OUT)\permutations_num_test.o" $(INCLUDE) -c permutations_num_test.cpp

recursive_lib.o: recursive_lib.cpp
	$(CC) $(CFLAGS) -o $(OUT)\recursive_lib.o" $(INCLUDE) -c recursive_lib.cpp

clean:
	del $(OUT)\*.o"
	del $(OUT)\*.exe"