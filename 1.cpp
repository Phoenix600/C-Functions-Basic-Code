#include<iostream>
using namespace std;

int SumOfNatNo(int n);

int main()
{
    int n;
    cin>>n; 
    cout<<SumOfNatNo(n)<<endl;
    return 0;
}

int SumOfNatNo(int n){
    int ans = 0;
    int i;

    for(i=0; i<=n; i++)
    {
        ans+=i;
    }
    return ans;
}