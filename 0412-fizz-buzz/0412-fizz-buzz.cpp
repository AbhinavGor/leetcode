class Solution {
public:
    vector<string> fizzBuzz(int n) {
        vector<string> res;
        for(int i = 1; i < n+1; i++) {
            if(i%15==0){
                res.push_back("FizzBuzz");
            } else if(i%5==0) {
                res.push_back("Buzz");
            } else if(i%3==0) {
                res.push_back("Fizz");
            } else {
                res.push_back(to_string(i));
            }
        }

        return res;
    }
};