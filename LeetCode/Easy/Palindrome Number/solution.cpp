class Solution {
public:
    bool isPalindrome(int x) {
        long rev=0;
        int last_digit=0, ori=x;
        bool r= false;
        while(ori>0){
            last_digit=ori%10;
            ori/=10;
            rev=rev*10+ last_digit;
        }
        if(x==rev){
            r= true;
        }
        else{
            r= false;
        }
        return r;
    }
};