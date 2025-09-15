
#include <stdio.h>
#include<math.h>
int main() {
    int num, original, remainder, result = 0;//num = 153
    printf("Enter a number: ");
    scanf("%d", &num);
    original = num;
    int dig;
    scanf("%d",&dig);


    while (num != 0) {
        remainder = num % 10;
        result += pow(remainder,dig);
        num /= 10;
    }
    if (result == original)
        printf("%d is an Armstrong number.\n", original);
    else
        printf("%d is not an Armstrong number.\n", original);

    return 0;
}
