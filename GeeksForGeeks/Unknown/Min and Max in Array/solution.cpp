class Solution {
  public:
    vector<int> getMinMax(vector<int> &arr) {
       int min,max =arr[0];
       for(int i=0;i<arr.size();i++){
           if(min>arr[i]){
               min=arr[i];
           }
           else if(max<arr[i]){
               max=arr[i];
           }
       }
       vector <int> result={min , max};
       return result;
    }
};