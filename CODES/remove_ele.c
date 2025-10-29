int removeElement(int* arr, int n, int val) {
    int j = 0;
    for(int i = 0;i < n;i++){
        if(arr[i]!=val) arr[j++] = arr[i];
    }
    return j;
}
