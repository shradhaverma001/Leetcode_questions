class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        int n = ransomNote.length();
        int m = magazine.length();
        
        if(n>m){
            return false;
        }
        
        map<char,int>m1;
        
        for(int i=0; i<m; i++){
            m1[magazine[i]]++;
        }
    
        for(int i =0; i<n; i++){
            if(m1[ransomNote[i]]>0){
                m1[ransomNote[i]]--;
            }
            else{
                return false;
            }
        }
        return true;
    }
};