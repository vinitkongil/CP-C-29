//This program is to show 2D Arrays//

#include <stdio.h>

int main()
{
    int i,j;
    int num1[3][4],num2 [3][4];
    printf("Enter the elements of 3x4 array num1\n");
    for(i=0;i<3;i++)
    for(j=0;j<4;j++)
    scanf("%d", &num1 [i][j]);
    
    printf("Enter the elements of 3x4 array num2\n");
    for(i=0;i<3;i++)
    for(j=0;j<4;j++)
    scanf("%d", &num2 [i][j]);
    
    printf("The 3x4 array num1 is\n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<4;j++)
        printf ("%3d", num1[i][j]);
        printf("\n");
    }
    printf("The 3x4 array num2 is\n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<4;j++)
        printf ("%3d", num2[i][j]);
        printf("\n");
    }
    
    printf("The sum of num1 and num2 is\n");
    for (i=0;i<3;i++)
    {
        for (j=0;j<4;j++)
        printf("%3d",(num1[i][j] + num2[i][j]));
        printf("\n");
    }
    return 0;
}



Output-

Enter the elements of 3x4 array num1
1
2
3
4
5
6
7
8
9
10
11
12
Enter the elements of 3x4 array num2
13
1
4
5
6
8
9
10
22
15
16
17
18
The 3x4 array num1 is
  1  2  3  4
  5  6  7  8
  9 10 11 12
The 3x4 array num2 is
 13  1  5  6
  8  9 10 22
 15 16 17 18
The sum of num1 and num2 is
 14  3  8 10
 13 15 17 30
 24 26 28 30