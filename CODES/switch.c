#include<stdio.h>
int main(){
    int day_num;
    scanf("%d",&day_num);
    switch(day_num){
       case 0 : printf("Sunday"); break;
        case 1 : printf("Monday"); break;
        case 2 : printf("Tuesday"); break;
        case 3 : printf("Wenzday"); break;
        case 4 : printf("Thursday"); break;
        case 5 : printf("friday"); break;
        case 6 : printf("Saturday"); break;
        default: printf("Wrong number entered");
    }
}
