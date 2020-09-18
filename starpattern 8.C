#include <stdio.h>

int main() 
{
    int i,rows,j;
 
 printf ("Enter no. of rows :\n");
 
 scanf("%d" , &rows);


for(i=1; i<=rows; i++)

{
    for(j=1; j<=rows*2-1; j++)
    
    { 
     
     if(j<=(rows+1)-i || j>=(rows-1)+i)
           
        printf("*");
        
        
       else
        
        printf(" ");
        
    }
    printf("\n");
}
    return 0;
}