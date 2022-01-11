/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

using namespace std;

int main()
{
    int n,i,a=0;
    cout<<"enter any number : \n";
    cin>>n;
    for(i=1;i<=n;i++)
    {
        if(n%i==0)
        {
            a++;
            
        }
    }
    if(a==2)
    {
        cout<<"n is a prime number";
    }
    else
    {
        cout<<"n is not a prime";
    }
    
    
}