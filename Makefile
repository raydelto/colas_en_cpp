FLAGS = -Wall -g

all: Documento.o Cola.o main.o
	g++ main.o Documento.o Cola.o -o main $(FLAGS)

main.o: main.cpp
	g++ -c main.cpp $(FLAGS)

Documento.o: Documento.cpp Documento.h
	g++ -c Documento.cpp $(FLAGS)


Cola.o: Cola.cpp Cola.h
	g++ -c Cola.cpp $(FLAGS)

clean:
	rm main&& rm *.o
