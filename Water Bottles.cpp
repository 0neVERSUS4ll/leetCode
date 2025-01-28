class Solution {
public:
    int numWaterBottles(int numBottles, int numExchange) {
        int res=0,keep=0;
        while(numBottles){
            res+=numBottles;
            if(numBottles%numExchange){
                keep+=(numBottles%numExchange);
            }
            numBottles/=numExchange;
            numBottles += (keep/numExchange);
            keep = (keep%numExchange);
        }
        return res;
    }
};