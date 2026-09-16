class Solution {
public:
    string largestOddNumber(string num) {
        string str="";
        for(int i=num.size()-1;i>=0;i--){
                if(int(num[i])%2!=0){
                    for(int j=0;j<=i;j++){
                        str.push_back(num[j]);
                    }
                    break;
                }
                
        }
        return str;
    }
};