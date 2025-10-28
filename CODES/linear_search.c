#include<stdio.h>
#include<stdbool.h>
int main(){
    int arr[6] = {1,2,544,6,8,9};
    int target = 67;
    bool found = false;
    for(int i = 1 ;i<=6;i++){
        if(arr[i] == target) {
            printf("%d",i);
            found = true;
        }
    }
    if(!found) printf("-1");
}
