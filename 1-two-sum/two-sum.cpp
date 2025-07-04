class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        //hashmap to store number:index
        unordered_map<int,int> hashmap;
        for (int i = 0; i<nums.size(); i++){
            int complement = target - nums[i];
            if(hashmap.count(complement)){
                return {hashmap[complement],i};
            }
            //enter the number and its index into the hashmap if count() couldn't find its complement yet
            hashmap[nums[i]] = i;
        }
        return {};
    }
};