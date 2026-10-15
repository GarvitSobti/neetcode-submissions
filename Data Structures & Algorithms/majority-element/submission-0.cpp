class Solution {
public:
    int majorityElement(vector<int>& nums) {
        // Straight approach that comes to mind is a hashmap
        unordered_map<int,int> freq;
        for(int num : nums){
            if(freq.contains(num)){
                freq[num]++;
            } else {
                freq[num] = 1;
            }
        }
        int ans = 0;
        int r = 0;
        for(auto entry : freq){
            if(ans < entry.second) {
                ans = max(ans, entry.second);
                r = entry.first;
            }
        }

        return r;
    }
};