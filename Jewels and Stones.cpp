class Solution {
public:
    int numJewelsInStones(string jewels, string stones) {
        map<char, int> jewel;
        int res=0;
        for(auto it : jewels){
            if(jewel.find(it) == jewel.end()){
                jewel.insert(make_pair(it, 1));
            } else {
                jewel[it]++;
            }
        }
        //printf("%d",jewel['A']);
        for(auto it : stones){
            if(jewel.find(it) == jewel.end()){
                continue;
            } else {
                res++;
            }
        }
        return res;
    }
};