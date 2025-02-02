class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        vector<int> res;
        int n=matrix.size();
        int m=matrix[0].size();
        int l=0,r=m-1,b=n-1,t=0;
        int flag=1;
        while(l<=r && t<=b){
            if(flag == 1){
                for(int i=l;i<=r;i++){
                    res.push_back(matrix[t][i]);
                }
                flag = 2;
                t++;
            } else if(flag == 2){
                for(int i=t;i<=b;i++){
                    res.push_back(matrix[i][r]);
                }
                flag = 3;
                r--;
            } else if(flag == 3){
                for(int i=r;i>=l;i--){
                    res.push_back(matrix[b][i]);
                }
                flag = 4;
                b--;
            } else if(flag == 4){
                for(int i=b;i>=t;i--){
                    res.push_back(matrix[i][l]);
                }
                flag = 1;
                l++;
            }
        }
        return res;
    }
};