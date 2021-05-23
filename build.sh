g++ -c src/StorageObject.cpp -o obj/StorageObject.o
g++ -c src/Cache.cpp -o obj/Cache.o
g++ -c src/Storage.cpp -o obj/Storage.o
g++ -c src/Server.cpp -o obj/Server.o
g++ -c src/main.cpp -o obj/main.o

g++ obj/StorageObject.o obj/Cache.o obj/Storage.o obj/Server.o obj/main.o -o bin/cachedb