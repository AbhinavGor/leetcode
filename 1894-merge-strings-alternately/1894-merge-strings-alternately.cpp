class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        int n1 = word1.size(), n2 = word2.size();
        string res = "";
        int i;
        for(i = 0; i < n1+n2; i++) {
            if(!(i/2 < word1.size() && i/2 < word2.size())) {
                break;
            }
            if(i%2) {
                if(i/2 < word2.size()){
                    res += word2[i/2];
                }
            } else {
                res += word1[i/2];
            }
        }

        if(i/2 >= word1.size()) {
            for(int j = i/2; j < word2.size(); j++) res+=word2[j];
        } else if(i/2 >= word2.size()) {
            for(int j = i/2; j < word1.size(); j++) res+=word1[j];
        }

        return res;
    }
};