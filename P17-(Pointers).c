/*This program is to show Pointers in C */

#include <string.h>
void main()
{
long int num = 6;
long int *ptr;
printf ("num's address : %p\n",&num);
ptr = &num;

printf ("pointer's address : %p\n",&ptr);
printf ("pointer's size : %ld bytes\n",sizeof(ptr));
printf ("pointer's value : %p\n", ptr);
printf ("Value pointed to : %ld\n", *ptr);

}

OUTPUT:-

num's address : 0x7fff375bc288
pointer's address : 0x7fff375bc290
pointer's size : 8 bytes
pointer's value : 0x7fff375bc288
Value pointed to : 6

