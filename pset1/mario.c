#include<stdio.h>
#include<cs50.h>

int main(void )
{
    int height;
     
      
        do
        {
    printf("enter the height of pyramid between1 and 23 \n");
         height = GetInt();
        }
   while((height<=0)||(height>23));

    
     int line,i,j;
    for (line=1;line<=height;line++)
    {
       for(i=1;i<=(height-line);i++)
       {
        printf(" ");
       } 
         for (j=1;j<=line+1;j++)
         printf("#");
         printf("\n");
         
    }    

    return 0;
    
}