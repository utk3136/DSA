class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int maximum=0;
        int count=0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]==0){
                count=0;
            }
            else{
                count++;
                maximum=max(maximum,count);
            }
        }
    return maximum;
    }
};