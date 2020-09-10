#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;

ll noOfDivisor(ll n){
ll cnt=0;
for(ll i=1;i<=sqrt(n);i++){
    if(n%i==0){
        if(n/i==i)cnt++;
        else cnt+=2;
    }
}
return cnt;
}
int main()
{
    ll n;
    cin>>n;
    cout<<noOfDivisor(n)<<endl;
}
