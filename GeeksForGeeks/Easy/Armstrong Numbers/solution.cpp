class Solution {
  public:
    bool armstrongNumber(int n) {
        // code here
        int digits=floor(log10(n))+1;
        int original=n;
        int num=0;
        while(n>0){
            num=num+ pow((n%10),digits);
            n=n/10;
        }
    return (original==num);
    }
};