class Solution {
  public:
    bool isSorted(vector<int>& arr) {
        // code here
        vector<int> check= arr;
        sort(check.begin(),check.end());
    return check==arr;
    }
};