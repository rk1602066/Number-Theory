#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define btsize 1000001

void memoryEfficientSimpleSieve( ll n,vector<ll>&primesdivisor){
    bitset<btsize>isprime;
    isprime.set();
    isprime[0]=isprime[1]=0;
    primesdivisor.push_back(2);
    for(ll i=3;i<=n;i+=2){
            ll init=i*i;
        if(isprime[i]){
        for(ll j=init;j<=n;j+=2*i)isprime[j]=0;
            primesdivisor.push_back(i);
        }
    }
}

void segmentedSieve(ll left,ll right){
    ll uprange=sqrt(right)+1;
    vector<ll>primesdivisor;
    vector<ll>primesinRange;
    memoryEfficientSimpleSieve(uprange,primesdivisor);
    for(ll i=left;i<=right;i++){
            bool isitprime = true;
        if(i%2==0&&i>2)continue;
        for(ll x:primesdivisor){
            if(i%x==0&&i!=x){
                    isitprime=false;
                    break;
        }
    }
    if(isitprime)primesinRange.push_back(i);
    }
    for(ll x:primesinRange)cout<<x<<" ";
}


int main()
{
    ll left,right;
    cin>>left>>right;
    if(left<2)left++;
    cout<<"all the primes are: "<<endl;
    segmentedSieve(left,right);
}
