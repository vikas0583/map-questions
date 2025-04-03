class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        set<int>a(nums.begin(),nums.end());
        if(a.size()==0) return 0;
        int m = 1;
            int c= 1;
        for(auto i  = a.begin();i!=a.end();i++)
        {
            
            auto it = i;
            it++;
            if(it==a.end())break;
            if(*(i)+1==*(it))
            {
                c++;
                m=max(m,c);
            }
            else c = 1;
        }
    return m;
    }
};
