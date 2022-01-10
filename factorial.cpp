/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

using namespace std;

int main()
{
   int num,fact=1;
   cout<<"enter any number : ";
   cin>>num;
   for(int i=1;i<=num;i++)
   {
       fact=fact*i;
   }
   cout<<fact;
}   