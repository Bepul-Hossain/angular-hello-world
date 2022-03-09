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
    long long int a,it,x,b,m,previous,z,j;
    if(prime ==1 || prime%2==0) return false;
    if(prime == 2 || prime == 3) return true;

    it = 100;
    b=0;
    m = prime-1;
    while(m%2==0){
        m = m/2;
        b++;
    }
    a = 1 + (rand()%(prime-1));
    j = 0;
    z = Bigmod(a,m,prime);
    while(j<b && z !=1){
        previous = z;
        z = Bigmod(z,2,prime);
        if(z==1 && (previous!=1 && previous != prime -1)) return false;
        j++;
    }
    if (z == 1)
        return true;
    else
        return false;
}
int main(){
    long long int prime;
    cin>>prime;
    if(IsPrime(prime))
        printf("prime\n");
     else cout<<"not prime\n";

    return 0;
}
