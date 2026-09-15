class Solution {
  public:
    int reverseDigits(int n) {
        // Code here
        int new_num=0;
        while(n>0){
            int rem=n%10;
            n/=10;
            new_num=new_num*10+(rem);
        }
    return new_num;
    }
};