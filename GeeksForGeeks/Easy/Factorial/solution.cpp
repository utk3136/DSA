class Solution {
  public:
    int factorial(int n) {
        // code here
        int fact=1;
        if(n==0){
            return fact;
        }
        else{
            while(n>1){
                fact=fact*n;
                n--;
            }
        }
    return fact;
    }
};