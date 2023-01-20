class Solution {
public:
    int count(string s, char c){
        // Count variable
        int res = 0;

        for (int i=0;i<s.length();i++)

            // checking character in string
            if (s[i] == c)
                res++;

        return res;
    }

    int garbageCollection(vector<string>& garbage, vector<int>& travel) {
        int time = 0;
        string gtype = "MPG";
        vector<int> ttime;
        ttime.push_back(0);
        
        for(int i = 0; i < travel.size(); i++){
            ttime.push_back(travel[i]);
        }
        
        for(int i = 0; i < gtype.size(); i++){
            int present = 0;
            int rtime = 0;
            int buftime = 0;
            for(int j = 0; j < garbage.size(); j++){
                if(garbage[j].find(gtype[i]) != std::string::npos){
                    present = 1;
                    rtime += ttime[j];
                    rtime += 1*count(garbage[j], gtype[i]);
                    rtime += buftime;
                    buftime = 0;
                }else{
                    buftime += ttime[j];
                }
            }
            time += rtime;
            cout<<rtime<<gtype[i]<<endl;
        }
        
        return time;
    }
};