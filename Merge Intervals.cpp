class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        sort(intervals.begin(), intervals.end());
        int n = intervals.size();
        vector<vector<int>> res;
        //res.push_back({intervals[0][0],intervals[0][1]});
        int left = intervals[0][0];
        int right = intervals[0][1];
        for(int i=1;i<n;i++){
            if(right < intervals[i][0]){
                res.push_back({left,right});
                left = intervals[i][0];
                right = intervals[i][1];
            } else {
                if(right < intervals[i][1]){
                    right = intervals[i][1];
                }
                /*if(left > intervals[i][0]){
                    left = intervals[i][0];
                }*/
            }
        }
        res.push_back({left,right});
        /*for(vector<int> interval : intervals){
            if(res.empty() || res.back()[1] < interval[0]){
                res.push_back(interval);
                printf("%d",interval[1]);
            } else {
                res.back()[1] = max(res.back()[1], interval[1]);
            }
        }*/
        //printf("%d",intervals[0][1]);
        return res;
    }
};