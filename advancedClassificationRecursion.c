 #include <stdio.h>

int order(int n) {
    int order = 0;
    while (n != 0) {
        order++;
        n /= 10;
    }
    return order;
}

int power(int number, int power){
    int ans=1;
    if (power<0){
        ans = 1/number;
        power = -power;
    }
    for (int i=0;i<power;i++){
        ans*=number;
    }
    return ans;
}



int checkIsArmstrong(int n, int order1) {
    if (n == 0) {
        return 0;
    }
    return (power(n % 10, order1) + checkIsArmstrong(n / 10, order1));
}

int isArmstrong(int num){
    int order1 = order(num);
    if (num ==checkIsArmstrong(num,order1))
        return 1;
return 0;
}



int isPalindrome(int num) {
    static int reversed_num = 0;
    static int original_num = 0;

    if (original_num == 0) {
        original_num = num;
    }

    if (num == 0) {
        int ret=original_num == reversed_num;
        original_num = reversed_num=0;
        return ret;
    }

    reversed_num = reversed_num * 10 + num % 10;
    num /= 10;

    return isPalindrome(num);
}




