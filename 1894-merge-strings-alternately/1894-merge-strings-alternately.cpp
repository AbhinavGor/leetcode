class Solution {
public:
    string mergeAlternately(string w1, string w2) {
        int n1 = w1.size()-1, n2 = w2.size()-1;
        int a = 0, b = 0;
        string res = "";

        while(a <= n1 && b <= n2) {
            res += w1[a];
            res += w2[b];
            a+=1;
            b+=1;
        }

        if(a <= n1) {
            while(a <= n1) {
                res += w1[a];
                a+=1;
            }
        } 
        cout<<b<<" "<<n2<<endl;
        if(b <= n2) {
            while(b <= n2) {
                res += w2[b];
                b+=1;
            }
        }

        return res;
    }
};