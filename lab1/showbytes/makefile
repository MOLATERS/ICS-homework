cc = gcc -g
main : example.c show.o
    $(cc) -c -o example.o example.cc
    $(cc) -o example.o show.o
show.o:show.c 
    $(cc) -c -o show.o show.cc
clean:
    rm *.o main
    