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
            cout<<"here "<<curr<<endl;
            digits.insert(digits.begin(), curr);
            // digits[1] %= 10;
        } else {
            cout<<"heree";
        }

        return digits;
    }
};