#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;

void Sieve( ll n){
    bool isPrime[n+1];
    vector<ll>primes;
    memset(isPrime,true,sizeof(isPrime));
    isPrime[0]=false;isPrime[1]=false;
    for(ll i=2;i<=n;i+=2)isPrime[i]=false;
    isPrime[2]=true;
    primes.push_back(2);
    for(ll i=3;i<=n;i+=2){
       ll init = i*i;
       if(isPrime[i]){
       for(ll j=init;j<=n;j+=2*i)isPrime[j]=false;
            primes.push_back(i);
       }
    }
    cout<<"All primes between 1 to "<<n<<" are: "<<endl;;
    for(ll x:primes)
        cout<<x<<" ";
}


int main()
{
	ll n;
	//this is just for input until eof
	cin>>n;
    Sieve(n);
}
