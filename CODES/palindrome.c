bool isPalindrome(int x) {
   int rem = 0;
   long reverse = 0;
   long long temp = x;
   while(x > 0){
    rem = x%10;
    reverse =  reverse*10 + rem;
    x/=10;
   }
   if(reverse == temp) return true;
   return false;
}
