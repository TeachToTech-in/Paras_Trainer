
// void bubbleSort(int arr[], int n) {
//     int temp;
//     for(int i=0;i<n;i++){
// for(int j=0;j<n-1;j++){
// if(arr[j]>arr[j+1]){
// temp=arr[j];
// arr[j]=arr[j+1];
// arr[j+1]=temp;
// }}}}
int cmp(const void* a, const void* b) {
    const int *x = a;
    const int *y = b;
    return (*x - *y);
}
    bool containsDuplicate(int* nums, int n) {
    // bubbleSort(nums,n);
    qsort(nums,n,sizeof(int),cmp);
    for (int i = 1; i < n; i++)
        if (nums[i] == nums[i-1]) return true;
    return false;
}
