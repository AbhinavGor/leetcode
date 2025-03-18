class Solution {
public:
    int detSymbol(char last, char curr) {
        unordered_map<char, int> m;
        m['I'] = 1;
        m['V'] = 5;
        m['X'] = 10;
        m['L'] = 50;
        m['C'] = 100;
        m['D'] = 500;
        m['M'] = 1000;

        if(last == ' ') return 1;

        if(m[last] > m[curr]) return -1;
        return 1;
    }

    int romanToInt(string s) {
        int res = 0;
        stack<char> st;

        for(char c: s) st.push(c);

        char last = ' ';

        while(!st.empty()) {
            char curr_rom = st.top();
            st.pop();
            int mul = detSymbol(last, curr_rom);

            if(curr_rom == 'M') {
                res += mul*1000;
            } else if(curr_rom == 'D') {
                res += 500;
            } else if (curr_rom == 'C') {
                res += mul*100;
            } else if (curr_rom == 'L') {
                res += mul*50;
            } else if (curr_rom == 'X') {
                res += mul*10;
            } else if(curr_rom == 'V') {
                res += mul*5;
            } else if (curr_rom == 'I') {
                res += mul*1;
            }
            last = curr_rom;
        }

        return res;
    }
};