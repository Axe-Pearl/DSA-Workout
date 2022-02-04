class Solution {
public:
    
    int squareSum(int n){
        int temp = 0;
        while(n>0){
            int r = n%10;
            temp+= pow(r,2);
            n = n/10;
        }
        return temp;
    }
    
    bool isHappy(int n) {
        int slow,fast;
        slow = fast = n;
        int count = 0;
        if(n == 1) return true;
        while(n!=1){
            slow = squareSum(n);
            n = slow;
            fast = squareSum(fast);
            fast = squareSum(fast);
            if(slow == 1) return true;
            if(slow == fast && count!=0){
                return false;
            }
             count++;
        }
        return true;
    }
};
