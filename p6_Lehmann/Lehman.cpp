#include<bits/stdc++.h>
using namespace std;
long long int Bigmod(long long int a,long long int power,long long int mod){
    long long int x,i;
    x = 1;
    for(i =1 ;i<=power;i++){
        x = x*a;
        x = x%mod;
    }
    return x;
}

bool IsPrime(long long int prime){
    long long int a,it,x;
    if(prime ==1 || prime%2==0) return false;
    if(prime == 2 || prime == 3) return true;

    it = 100;
    for(int i = 1;i<=it;i++){
        a = 2 +(rand()%(prime-3));
        x = Bigmod(a,(prime-1)/2,prime);
        if(x!=1 && x!=-1 && x!=(prime-1)) return false;
    }
    return true;
}
int main(){
    long long int prime;
    cin>>prime;
    if(IsPrime(prime))
        printf("prime\n");
     else cout<<"not prime\n";

    return 0;
}
