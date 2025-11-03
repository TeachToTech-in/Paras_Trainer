#include<stdio.h>
int main() {
    // auto is optional here, as it's the default storage class
    auto int x = 10;  
    printf("%d", x);
    return 0;
}
// static
void counter() {
    static int count = 0;  
    count++;
    printf("Count = %d\n", count);
}
int main() {
    counter();  
    // Prints: Count = 2
    counter(); 
    return 0;
}
// register
int main() {
    // Suggest to store in a register
    register int i;  
    for (i = 0; i < 5; i++) {
        printf("%d ", i);
    }
    return 0;
}
//extern
// Global variable definition
int x = 10;
void display() {
    // Declaring the existing variable using extern
    extern int x;
    printf("x = %d\n", x);
}
int main() {
    display();
    return 0;
}
