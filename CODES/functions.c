// Online C compiler to run C program online
#include <stdio.h>
int sum(int a,int b);//declaration
int sub(int a,int b);
int mul(int a,int b);
int div(int a,int b);
int sum(int a, int b) {
    return a + b;
}
int sub(int a, int b) {
    return a - b;
}
int mul(int a, int b) {
    return a * b;
}
int div(int a, int b) {
    return a / b;
}
int main() {
    // Write C code here
    // printf("Try programiz.pro");
    int a = 9,b =9;
    printf("%d\n",sum(a,b));
    printf("%d\n",sub(a,b));
    printf("%d\n",mul(a,b));
    printf("%d",div(a,b));

    return 0;
}
