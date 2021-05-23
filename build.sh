g++ -c src/Server.cpp -o obj/Server.o
g++ -c src/StorageObject.cpp -o obj/StorageObject.o
g++ -c src/Cache.cpp -o obj/Cache.o
g++ -c src/main.cpp -o obj/main.o

g++ obj/Server.o obj/StorageObject.o obj/Cache.o obj/main.o -o bin/cachedb