/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

void main()
{
    int num[5],i;
    int evensum=0,oddsum=0;
    printf("enter 5 values");
    
    for( i=0;i<5;i++)
    {
        scanf("%d",&num[i]);
    }
      for(i=0;i<5;i++)
      {
        if(num[i]%2==0)
         {
          evensum = evensum+num[i];
         }
        else
         {
            oddsum=oddsum+num[i];
         }
      }
      printf("the sum of even numbers is %d \n",evensum);
        printf("the sum of odd numbers is %d",oddsum);
}
    
    

