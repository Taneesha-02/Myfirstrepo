/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

using namespace std;

int main()
{
float amount;
cin>>amount;
if(amount>1000)
{
    amount=amount-0.1*amount;
    cout<<amount<<endl;
}
else
{
    cout<<amount<<endl;
}

    return 0;
}





