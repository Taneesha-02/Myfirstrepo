/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*****************************************************************************/

#include <iostream>

using namespace std;

int main()
{

   for(int i=1;i<=5;i++)
   { int num=(2*i)-1;
       for ( int j=i; j<=5;j++)
       {
           if(num%2==1){
           
           cout<<num;
           num+=2;
           }
           else
           {
               cout<<" ";
           }
           
       }
       cout<<"\n";
   }
   return 0;
}
