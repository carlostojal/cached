gcc -c -Wall -Werror -fpic cached.c -o build/cached.o
gcc -c -Wall -Werror -fpic src/memory.c -o build/memory.o
gcc -c -Wall -Werror -fpic src/storage.c -o build/storage.o

gcc -shared -o build/libcached.so build/memory.o build/storage.o build/cached.o