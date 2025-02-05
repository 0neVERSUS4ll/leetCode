class Solution {
public:
    int maxNumberOfBalloons(string text) {
        map<char, int> mp;
        int res=0;
        int flag=1;
        for(auto it:text){
            if(mp.find(it) == mp.end()){
                mp.insert(make_pair(it,1));
            } else {
                mp[it]++;
            }
        }
        //res = mp['b'];
        /*while(flag){
            if(mp['b'] >= 1 and mp['a'] >= 1 and mp['l'] >= 2 and mp['o'] >= 2 and mp['n'] >=1){
                res++;
                mp['b'] -= 1;
                mp['a'] -= 1;
                mp['l'] -= 2;
                mp['o'] -= 2;
                mp['n'] -= 1;
                continue;
            }
            flag=0;
            
        }*/
        mp['l'] /= 2;
        mp['o'] /= 2;
        res=min({mp['b'], mp['a'], mp['l'], mp['o'], mp['n']});
        return res;
    }
};