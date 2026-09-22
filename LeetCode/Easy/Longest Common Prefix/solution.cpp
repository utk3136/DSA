class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string common=strs[0];
        int count=0;
        for(int i=1;i<strs.size();i++){
            for(int j=0;j<min(common.size(),strs[i].size());j++){
                if((strs[i])[j]==common[j]){
                    count++;
                }
                else{
                    break;
                }
            }
            common=common.substr(0,count);
            count=0;
        }
        return common;
    }
};