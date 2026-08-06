class Solution {
public:
    int digit(int nums){
        int product=1;
        while(nums>0){
            product*=nums%10;
            nums=nums/10;
        }
        return product;
    }
    int smallestNumber(int n, int t) {
        while(true){
            if(digit(n)%t==0){
                return n;
            }
            n++;
        }
    }
};