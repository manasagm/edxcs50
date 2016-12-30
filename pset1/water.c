#include <stdio.h>
#include <cs50.h>

int main(void)
{
 
// user input
      
       printf("enter the length of his/her shower in minutes\n");
       int minute = GetInt();    

 // caluclating number of bottles nedded
       
        int bottles;
        bottles = minute*12;
        printf("total water used by him/her in the count of bottles %d\n", bottles);

    return 0;
}