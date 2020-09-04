#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define btsize 1000001

void memoryEfficientSieve( ll n){
    bitset<btsize>isprime;
    vector<ll>primes;
    isprime.set();
    isprime[0]=isprime[1]=0;
    primes.push_back(2);
    for(ll i=3;i<=n;i+=2){
            ll init=i*i;
        if(isprime[i]){
        for(ll j=init;j<=n;j+=2*i)isprime[j]=0;
            primes.push_back(i);
        }
    }
    for(ll x:primes)cout<<x<<" ";
    cout<<endl;
}


int main()
{
    ll n;
    cin>>n;
    cout<<"all the primes are: "<<endl;
    memoryEfficientSieve(n);
}

