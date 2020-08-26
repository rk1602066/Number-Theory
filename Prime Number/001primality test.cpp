#include<bits/stdc++.h>
using namespace std;

bool isPrime(int n){
    int limit = sqrt(n)+1;
    if(n==2)return true;
    else if(n%2==0)return false;
    bool prime=true;
    for(int i=2;i<=limit;i++){
        if(n%i==0)
        {
            prime=false;
           break;
        }
    }
    return prime;
}

int main()
{
	int n;
	//this is just for input until eof
	while(scanf("%d",&n)!=EOF){
	if(isPrime(n))cout<<n<<" is prime number"<<endl;
	else cout<<n<<" is not prime number"<<endl;
	}
}

