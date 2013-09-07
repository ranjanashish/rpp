all: rpp

clean:
	rm bin/rpp

rpp: 
	g++ -o bin/rpp src/main.cpp -lncurses -lboost_system -lboost_filesystem