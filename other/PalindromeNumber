class Solution {
public:
    bool isPalindrome(int x) {
        if(x<0){
            return false;
        }
        long int target=x,r;
        unsigned int sum =0;
        while(x>0){
            r = x%10;
            sum = (sum*10)+r;
            x = x/10;
        }
        if(sum == target){
            return true;
        }
        return false;
    }
};
