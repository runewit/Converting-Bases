all: main.o functions.o
	$(CC) -o main main.o functions.o
	
run:
	./main

clean:
	rm -f main
	rm -f 
	
test: test.o functions.o
	$(CC) -o t test.o functions.o
	./t
	rm -f t