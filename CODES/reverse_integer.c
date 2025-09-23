int reverse(int x){
    int res = 0;
    while(x!=0) {
        int rem = x%10;
        if((res > INT_MAX/10) || (res<INT_MIN/10
        )) return 0;
        res = res*10 + rem;
        x/=10;
    }
    return res;
}
