/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

using namespace std;

int main()
{
int year;
float salary;
cout<<"enter your year of service and salary";
cin>>year>>salary;

if(year>5)
{
    salary=salary+0.05*salary;
    cout<<salary<<endl;
}
else
{
    cout<<salary<<endl;
}
return 0;
}




