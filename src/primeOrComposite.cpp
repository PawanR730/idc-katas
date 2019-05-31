#include<bits/stdc++.h>
using namespace std;
#define ll long long 
int main()
{
    cout<<"Enter the Number you want to check for (Prime or Composite ) "<<endl;
    ll n;
    cin>>n;
    if(n==1)
    {
        cout<<"Neither a Prime nor a Composite"<<endl;
    }
    ll flag=0;
    for(int i=2;i<=sqrt(n);i+=2)
    {
        if(n%i==0)
        {
            flag=1;
            break;
            
        }
    }
    if(flag==0)
    cout<<"Given Number is a Prime Number"<<endl;
    else
    cout<<"Given Number is a Composite number"<<endl;
    return 0;
}