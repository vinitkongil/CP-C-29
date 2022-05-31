#include<stdio.h>
#include<string.h>
int main()
{
    char str1[]="Ice";
    char str2[]="Cream";
    int i,j;
    i = strcmp(str1,"Hello");
    j = strcmp(str2,"Cream");
    printf("%d,%d\n",i,j);
    
    return 0;
}


Output-
1,0