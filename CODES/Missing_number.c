int missingNumber(int* nums, int n) {
    // int res = numsSize;
    // for (int i = 0; i < numsSize; i++) res += i - nums[i];
    // return res;   
    int sum =  n*(n+1)/2;
    int sum_of_array = 0;
    for(int i = 0;i < n;i++) sum_of_array = sum_of_array + nums[i];
    return sum - sum_of_array;
}
