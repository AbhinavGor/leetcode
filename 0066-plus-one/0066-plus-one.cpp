class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        int curr = 1;
        for(int i = digits.size() - 1; i >= 0; i--) {
            digits[i]+=curr;
            // if(digits[i]%10 == 0) return digits;
            curr = digits[i]/10;
            digits[i] %= 10;
        }
        
        if(curr!=0) {
            digits.insert(digits.begin(), curr);
        }

        return digits;
    }
};