class Solution {
public:
    int firstUniqChar(string s) {
        map<char,int>m;
        int n = s.length();
        // cout << n;
        for(int i =0; i<n; i++){
            m[s[i]]++;
        }
        int val;
        for(int i=0; i<n; i++){
            val = m[s[i]];
            if(val == 1){
                return i;
            }
        }
        return -1;
    }
};