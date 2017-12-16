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

clean:
	del $(OUT)\*.o"
	del $(OUT)\*.exe"