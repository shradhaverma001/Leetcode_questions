class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        map<int,int>m;
        int n = nums.size();
        // O(N) solution
        for(int i=0; i<n; i++){
            m[nums[i]] = i;
        }
        int complement;
        vector<int>v;
        for(int i =0; i<n; i++){
            auto t = m.find(target-nums[i]);
            // cout << t;
            if(t!=m.end() && t->second!=i){
                v.push_back(i);
                v.push_back(t->second);
                break;
            }
        }
       
            
            // complexity O(N^2) solution
        // vector<int>v;
        // for(int i=0; i<n-1; i++){
        //     for(int j=i+1; j<n ;j++){
        //         if(nums[i]+nums[j] == target){
        //             v.push_back(i);
        //             v.push_back(j);
        //             break;
        //         }
        //     }
        // }
        return v;
    }
};