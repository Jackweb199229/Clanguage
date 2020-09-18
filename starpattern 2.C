#include <stdio.h>

int main() 
{ int i,rows ,j;
 
 printf ("Enter even no. of rows :\n\n");
 scanf("%d" , &rows);



for(i=1; i<=rows; i++)

{
    for(j=1; j<=rows; j++)
    
    {  
       if(j<=i)
       
        printf("*");
        
       else
        
        printf(" ");
        
    }
    printf("\n");
}
    return 0;
}