class Solution {
  public:
    bool isPalindrome(string& s) {
        // code here
        int left=0;
        int right=s.size()-1;
        bool ans=true;
        while(left<right){
            if(s[left]!=s[right]){
                ans=false;
            }
            left++;
            right--;
        }
        return ans;
    }
};