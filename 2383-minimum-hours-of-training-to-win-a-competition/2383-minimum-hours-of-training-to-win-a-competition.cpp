class Solution {
public:
    int minNumberOfHours(int initialEnergy, int initialExperience, vector<int>& energy, vector<int>& exp) {
        int res = 0, e = 0;
        
        for(int i: energy){
            e += i;
        }
        
        if(e  >= initialEnergy)
            res = e - initialEnergy + 1;
        
        cout<<res<<"en"<<endl;
        
        for(int i = 0; i < exp.size(); i++){
            if(exp[i] < initialExperience){
                initialExperience += exp[i];
                cout<<initialExperience<<endl;
            }else{
                res += (exp[i] - initialExperience + 1);
                initialExperience += (exp[i] - initialExperience + 1);
                initialExperience += exp[i];
                cout<<i<<" "<<res<<" "<<initialExperience<<endl;
            }
        }
        
        return res;
    }
};