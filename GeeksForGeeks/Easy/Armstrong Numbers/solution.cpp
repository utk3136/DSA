class Solution {
  public:
    bool armstrongNumber(int n) {
        int val=0;
        int original=n;
        while (original>0){
            int last_num=original%10;
            val=val+pow(last_num,3);
            original/=10;
        }
        return n==val;
        
    }
};