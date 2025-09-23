int minBitFlips(int start, int goal) {
    int count = 0;
    int diff = start^goal;
    while(diff!=0){
        int rem = diff%2;
        if(rem && 1) count++;
        diff /= 2;
    }
    return count;
    
}
