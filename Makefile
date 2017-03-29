lab2: Class_A.o Class_B.o main.o
	g++ -o lab2 Class_A.o Class_B.o main.o  
Class_A.o: Class_A.cpp Class_A.h
	g++ -c Class_A.cpp 
Class_B.o: Class_B.cpp Class_B.h
	g++ -c Class_B.cpp 
main.o: main.cpp
	g++ -c main.cpp 
clean:
	rm -rf Class_A.o Class_B.o main.o
	
	
	
