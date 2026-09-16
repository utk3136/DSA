
class Solution {
  public:
    vector<int> findSum(int n) {
        // Code here
         int odd=0,even=0;
         for(int i=1;i<=n;i++){
             if(i%2==0){
                 even+=i;
             }
             else{
                 odd+=i;
             }
         }
    vector<int> result={odd,even};
    return result;
    }
};