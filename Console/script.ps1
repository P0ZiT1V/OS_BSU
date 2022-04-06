g++ -c -o Number/Number.o Number/Number.cpp -fPIC
ar rvs build/libNumber.lib Number/Number.o 

g++ -c -o Vector/Vector.o -INumber/ Vector/Vector.cpp -fPIC
g++ -shared -o build/libVector.dll Vector/Vector.o build/libNumber.lib -fPIC

g++ -o build/exe -INumber -IVector ConsoleApplication1.cpp ./build/libNumber.lib ./build/libVector.dll

./build/exe