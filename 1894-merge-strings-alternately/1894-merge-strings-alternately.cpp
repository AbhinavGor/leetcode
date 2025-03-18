class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        string res = "";
        int w1 = word1.size(), w2 = word2.size();
        int k = w1 + w2 - 1;
        int a = 0, b = 0;

        for(int i = 0; i <= k; i++) {
            if(i%2 == 0) {
                if(a < w1) {
                    res += word1[a];
                    a++;
                }
            } else {
                if(b < w2) {
                    res += word2[b];
                    b++;
                }
            }
        }
        
        while(a < w1) {
            res += word1[a];
            a++;
        }

        while(b < w2) {
            res += word2[b];
            b++;
        }

        return res;
    }
};