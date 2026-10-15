class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        // Gotta make a map, gonna just get the most frequent
        vector<int> res; 
        unordered_map<int, int> freq;
        for(int num : nums){
            if(freq[num] > 0){
                freq[num]++;
            } else {
                freq[num] = 1;
            }
        }

        // Trying to sort the map
        vector<pair<int,int>> entries(freq.begin(), freq.end());
        sort(entries.begin(), entries.end(), [](const pair<int,int>& a, const pair<int,int>& b){
            return a.second > b.second;
        });
        for(int i = 0; i < k; i++){
            res.push_back(entries[i].first);
        }

        return res;
    }
};
