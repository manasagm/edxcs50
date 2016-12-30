#include<stdio.h>
#include<math.h>
#include<cs50.h>

int main(void)
{
    float change;
    float cent;
    int count;
    printf("O hai!");
    do
    {
        printf("how much change is owed?\n");
        change= GetFloat();
    }
    while(change<0);
    cent = change*100;
    cent = roundf(cent);
    // coding the greedy concept
    count = 0;
    while(cent>0)
    {
        if(cent>=25)
        {
        cent=cent-25;
        count=count+1;
        }
        else if(cent>=10)
        {
        cent=cent-10;
        count=count+1;
        }
       else if(cent>=5)
        {
        cent=cent-5;
        count=count+1;
        }
    
        else if(cent>=1)
        { 
        cent=cent-1;
        count=count+1;
        }
    }
   
    printf("%d\n",count);
}