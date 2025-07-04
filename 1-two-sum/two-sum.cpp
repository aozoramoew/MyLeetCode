#include <algorithm>
using namespace std;
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        //vector to save the result
        vector<int> result;
        for (int i =0;i<nums.size();i++){
                auto it = find(nums.begin(),nums.end(),target-nums[i]);
                //if we can find the left over of target - nums[i] in the given vector
                //return that indices
                if (it!=nums.end()&&it!=nums.begin()+i){
                    result.push_back(i);
                    result.push_back(distance(nums.begin(),it));
                    break;
                }
                //else continue
        }
        return result;
    }
};