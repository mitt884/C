#include <stdio.h>

int convert810(int n){
    int a=0;
    int b=1;

    while (n != 0){
        int c = n%10;
        a += c * b;
        n /=10;
        b *= 8;
    }
    return a;
}

void convert102(int n){
    int binary[32];
    int i=0;

    while(n>0){
        binary[i]=n%2;
        n /=2;
        i++;
    }

    for(int j=i-1; j>=0; j--){
        printf("%d", binary[j]);
    }
}

int main(){
    int n;

    scanf("%d",&n);

    int tmp;
    tmp = convert810(n);

    convert102(tmp);

    return 0; 

}
