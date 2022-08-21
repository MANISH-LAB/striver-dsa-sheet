https://leetcode.com/problems/max-consecutive-ones/

class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int max=INT_MIN,count=0;
        for(int i=0;i<nums.size();i++){
        if(nums[i]==1){
            count++;
        }else{
            count=0;
        }
            if(count>max){
                max=count;
            }
        }
        return max;
    }
};