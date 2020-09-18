#include <stdio.h>

int main() 
{ int i,rows , n ,j;
 
 printf ("Enter no. of rows :\n\n");
 scanf("%d" , &rows);

  n = rows + 1;

for(i=1; i<=rows; i++)

{
    for(j=1; j<=rows; j++)
    
    {  
       if(j<=n-i)
       
        printf("*");
        
       else
        
        printf(" ");
        
    }
    printf("\n");
}
    return 0;
}