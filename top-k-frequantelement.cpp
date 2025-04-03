class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        map<int,int>freq;
        for(int i=0;i<nums.size();i++){
            freq[nums[i]]++;
        }
        multimap<int,int,greater<int>>map2;
        for(auto i:freq){
            map2.insert({i.second,i.first});
        }
        vector<int>v;
        int c=0;
        for(auto i:map2){
            if(c==k){
                break;
            }
            v.push_back(i.second);
            c++;
        }
        return v;
    }
};
