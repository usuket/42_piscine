create object file
gcc -c

ar rc libstr.a ft_putchat.o ft_putstr.o
-> libstr.a

gcc main.c -L. -lstr
 ./a.out

ranlib libstr.a



