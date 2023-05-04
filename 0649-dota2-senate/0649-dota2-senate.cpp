class Solution {
public:
    string predictPartyVictory(string senate) {
        int s = senate.size();
        
        queue<int> r, d;
        
        for(int i = 0; i < s; i++){
            if(senate[i] == 'R'){
                r.push(i);
            }else{
                d.push(i);
            }
        }
        
        while(!r.empty() && !d.empty()){
            if(r.front() < d.front()){
                r.push(++s);
            }else{
                d.push(++s);
            }
            
            r.pop();
            d.pop();
        }
        
        if(r.empty()){
            return "Dire";
        }
        
        return "Radiant";
    }
};