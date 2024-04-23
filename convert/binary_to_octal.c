#include <stdio.h>

long long convert210(long long n){
    long long a=0;
    long long b=1;

    while (n != 0){
        long long c = n%10;
        a += c * b;
        n /=10;
        b *= 2;
    }
    return a;
}

void convert108(long long n){
    int binary[256];
    int i=0;

    while(n>0){
        binary[i]=n%8;
        n /=8;
        i++;
    }

    for(int j=i-1; j>=0; j--){
        printf("%d", binary[j]);
    }
}

int main(){
    long long n;

    scanf("%lld",&n);

    long long tmp;
    tmp = convert210(n);

    convert108(tmp);

    return 0; 

}
