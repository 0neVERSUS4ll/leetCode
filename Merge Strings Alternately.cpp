class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        char a[1004];
        string res;
        int j=0;
        //printf("%c", word1[1]);
        for(int i=0;i<word1.length();i++){
            a[j] = word1[i];
            //printf("%s", a);
            //printf("%c",a[i]);
            j+=2;
        }
        j=1;
        for(int i=0;i<word2.length();i++){
            a[j] = word2[i];
            j+=2;
        }
        for(int i=0;i<500;i++){
            if(a[i] < 'a' || a[i] > 'z'){
                continue;
            }
            //printf("%c",a[i]);
            res+=a[i];
        }
        return res;
    }
};