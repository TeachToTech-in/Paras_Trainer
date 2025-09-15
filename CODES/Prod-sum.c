
    int sum = 0;
    int rem = 0;
    int prod = 1;
    while(n>0){
        rem = n%10;// num =428
        sum += rem;
        prod *= rem; 
        n /= 10;
    }
    // printf("%d",prod);
    return prod-sum;

// num = 428, rem = 8 , sum = 8, 
// num = 42, rem = 2, sum = 10
// num = 4, rem = 4, sum = 14 
