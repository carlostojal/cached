echo "Building cached..."

echo "Compiling StorageObject class..."
g++ -c src/StorageObject.cpp -o obj/StorageObject.o

echo "Compiling Cache class..."
g++ -c src/Cache.cpp -o obj/Cache.o

echo "Compiling Persistent class..."
g++ -c src/Persistent.cpp -o obj/Persistent.o

echo "Compiling StorageWrapper class..."
g++ -c src/StorageWrapper.cpp -o obj/StorageWrapper.o

echo "Compiling Server class..."
g++ -c src/Server.cpp -o obj/Server.o

echo "Compiling main class..."
g++ -c src/main.cpp -o obj/main.o

echo "Building binary..."
g++ obj/StorageObject.o obj/Cache.o obj/Persistent.o obj/StorageWrapper.o obj/Server.o obj/main.o -o bin/cached

echo "Done."