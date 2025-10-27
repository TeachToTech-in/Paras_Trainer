#include <stdio.h>
int revv(int n,int rev){
    if(n == 0) return rev;
    return revv(n/10, rev*10 + n%10);
}
int main(){
    printf("%d",revv(123,0));
}
