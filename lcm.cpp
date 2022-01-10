/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

using namespace std;

int main()
{
   int n1,n2,max,i,lcm=1;
   cout<<"enter two numbers : ";
   cin>>n1>>n2;
   max=(n1>n2)? n1 :n2;
   i=max;
   while(1)
   {
       if(i%n1==0 && i%n2==0)
       {
           lcm=i;
       }
       i=i+max;
       break;
   }
   cout<<"lcm="<<lcm<<endl;
   
   return 0;
}   
   
   
   
       
       
       
       
       
       
       
   