class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        map<int,int>m;
        int n = nums.size();
        for(int i = 0; i<n; i++){
            m[nums[i]]++;
        }
        map<int,int>::iterator it;
        for(it = m.begin(); it!=m.end(); it++){
            if(it->second>=2){
                return true;
            }
        }
        return false;
    }
};