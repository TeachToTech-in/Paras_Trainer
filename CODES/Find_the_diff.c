char findTheDifference(char* s, char* t) {
    int sum_of_s = 0,sum_of_t=0;
    for(int i = 0;i<strlen(s);i++) sum_of_s += s[i];
    for(int i = 0;i<strlen(t);i++) sum_of_t += t[i];
    return sum_of_t-sum_of_s;
}
