

#include <iostream>

using namespace std;

int main()
{
    int num,rem,org,rev=0;
    cout<<"enter number\n";
    cin>>num;
    org=num;
    while(num!=0)
    {
    rem=num%10;
    rev=rev*10 + rem;
    num=num/10;
    }
    if (org==rev)
    {
    cout<<"number is pallindrome";
    }
    else
    {
        cout<<"number is not a pallindrome";
    }
    
    return 0;
}
