class Solution {
public:
    string shiftingLetters(string s, vector<int>& shifts) {
        char char_array[s.size() + 1];
        
        strcpy(char_array, s.c_str());
        
        string res = "";
        long long sm = accumulate(shifts.begin(), shifts.end(), 0LL);
        
        for(int i = 0; i < shifts.size(); i++){
            int temp = int(char_array[i]) + (sm)%26;
            sm -= shifts[i];
            if(temp > 122)
                temp -= 26;
            char_array[i] = char(temp);
            // cout<<int(char_array[i]);
            // cout<<char_array[i];
            res += char_array[i];
        }
        
        return res;
    }
};