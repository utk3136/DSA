class Solution {
  public:
    pair<int, int> countOddEven(vector<int> &arr) {
        // code here
        pair<int,int>p={0,0};
        for(int i=0;i<arr.size();i++){
            if(arr[i]%2==0){
                p.second+=1;
            }
            else{
                p.first+=1;
            }
        }
    return p;
    }
};