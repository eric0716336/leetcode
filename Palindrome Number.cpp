class Solution {
public:
    bool isPalindrome(int x) {
        if(x < 0 || (x % 10 == 0 && x != 0)) {
            return false;
        }

        int a=x;
        int b=0;
        while(x>b){
            b=(b*10+x%10);
            x/=10;
        }
        return x == b || x == b/10;
    }
};
