g++ -c src/Server.cpp -o obj/Server.o
g++ -c src/main.cpp -o obj/main.o

g++ obj/Server.o obj/main.o -o bin/cachedb