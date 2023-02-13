class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        
        int pos = digits.size() - 1, carry = 1;
        
        while(carry != 0 && pos >= 0){
            digits[pos] += carry;
            carry = digits[pos]/10;
            digits[pos] = digits[pos]%10;
            pos--;
        }
        
        vector<int> res;
        
        if (pos < 0 && carry > 0){
            res.push_back(carry);
            for(auto i:  digits){
                res.push_back(i);
            }
            
            return res;
        }
        
        return digits;
    }
};