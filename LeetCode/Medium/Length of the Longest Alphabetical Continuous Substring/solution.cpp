class Solution {
public:
    int longestContinuousSubstring(string s) {
        int count=1;
        int current=1;
        for(int i=1;i<s.length();i++){
            if(s[i]-s[i-1]==1){
                current++;
                count=max(count,current);
            }
            else{
                current=1;
            }
        }
        return count;
    }
};