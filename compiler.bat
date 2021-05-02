@echo off

g++ -c ./src/*.cpp -I ./include
g++ -o ./bin/electrocalc *.o

del *.o