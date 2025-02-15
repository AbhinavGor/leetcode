class Solution {
public:
    string to_binary(int num) {
        if (num == 0) return "0";

        string result;
        while (num > 0) {
            result.push_back((num % 2) + '0');
            num /= 2;
        }
        
        reverse(result.begin(), result.end());

        return result;
    }

    int decimal(string s){
        int res =0;
        for(int i=0; i < s.length(); i++) {
            res = res*2 + (s[i]-'0');
        }
        return res;
    }

    int maxGoodNumber(vector<int>& nums) {
        vector<string> s;

        for(int i = 0; i < nums.size(); i++) {
            s.push_back(to_binary(nums[i]));
        }

        string a = s[0], b = s[1], c = s[2];

        return max({
            decimal(a+b+c),
            decimal(a+c+b),
            decimal(b+a+c),
            decimal(b+c+a),
            decimal(c+a+b),
            decimal(c+b+a)
        });

        return 0;
    }
};