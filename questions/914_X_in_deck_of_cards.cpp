class Solution {
public:
    bool hasGroupsSizeX(vector<int>& deck) {
        int n = deck.size();

        map <int,int> m;
        for (int i = 0; i<n; i++){
            m[deck[i]]++;
        }
        map <int,int>::iterator it;
        
        int flag = -1;
        for(it = m.begin(); it!=m.end(); ++it){
            if(flag == -1){
                flag = it->second;
            }
            else{
                flag = gcd(flag, it->second);
            }
        }
                    return flag >=2;

    }
    public:
    int gcd(int x, int y){
        return x==0 ? y: gcd(y%x, x);
    }
};