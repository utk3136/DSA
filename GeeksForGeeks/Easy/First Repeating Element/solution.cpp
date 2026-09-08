class Solution {
  public:
    int firstRepeated(vector<int> &arr) {
        // code here
        int maximum=*max_element(arr.begin(),arr.end());
        vector <int> hash(maximum+1,0);
        for (int i=0;i<arr.size();i++){
            hash[arr[i]]++;
        }
        for(int j=0;j<arr.size();j++){
            if(hash[arr[j]]>1){
                return j+1;
            }
        }
        return -1;
        
        
    }
};