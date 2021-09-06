class Solution {
public:
    char slowestKey(vector<int>& releaseTimes, string keysPressed) {
         int n = keysPressed.length();
 
        char char_array[n + 1];

        strcpy(char_array, keysPressed.c_str());
        
        int max = releaseTimes[0], ind = 0;
        for(int i = 1; i < releaseTimes.size(); i++){
            if(max < (releaseTimes[i] - releaseTimes[i - 1])){
                max = releaseTimes[i] - releaseTimes[i - 1];
                ind = i;
            }if((max == (releaseTimes[i] - releaseTimes[i - 1])) and (char_array[i] > char_array[ind])){
                max = releaseTimes[i] - releaseTimes[i - 1];
                ind = i;
            }
        }
        
//         char ss = 'a';
//         cout<<typeid(keysPressed.substr(ind, ind)).name();
        
        // cout<<ind<<endl;
        
        return char_array[ind];
    }
};