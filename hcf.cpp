/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

using namespace std;

int main()
{
   int n1,n2,min,hcf=1;
   cout<<"enter two numbers : ";
   cin>>n1>>n2;
   min=(n1<n2)? n1 :n2;
   for(int i=1;i<=min;i++)
   {
       if(n1%i==0 && n2%i==0)
       {
           hcf=i;
       }
   }
   cout<<"hcf="<<hcf<<endl;
}
       
       
       
       
       
       
       
   