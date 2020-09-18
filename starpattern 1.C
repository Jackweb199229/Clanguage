#include <stdio.h>

int main() 
{ int i,rows ,j;
 
 printf ("Enter no. of rows :\n\n");
 scanf("%d" , &rows);
 


for(i=1; i<=rows; i++)
{
    for(j=1; j<=rows; j++)
    {
        printf("*");
        
    }
    printf("\n");
}
    return 0;
}