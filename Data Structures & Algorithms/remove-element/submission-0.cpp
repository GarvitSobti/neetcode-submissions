class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        // reordering nums? or make new result array and append?
        // count occurances of val first? 
        // k = n - occurences (part 1)
        // given array size and result array size
        vector<int> res;

        for(int i = 0; i < nums.size(); i++){
            if(nums[i] != val){
                res.push_back(nums[i]);
            }
        }

        for(int i = 0; i < res.size(); i++){
            nums[i] = res[i];
        }

        return res.size();
    }
};