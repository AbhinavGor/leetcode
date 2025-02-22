class Solution {
public:
    int numRescueBoats(vector<int>& people, int limit) {
        sort(people.begin(), people.end());
        int n = people.size() - 1;
        int res=0;

        int l = 0, r = n;
        while(l < r) {
            if(people[l] == 0) {
                l++;
                continue;
            }
            
            if(people[r] == 0) {
                r--;
                continue;
            }

            if(people[l] + people[r] <= limit) {
                people[l] = 0;
                people[r] = 0;
                res+=1;
                l++;
                r--;
            } else if(people[l]+people[r] > limit) {
                r--;
            } else {
                l++;
            }
        }

        for(int i: people) {
            if(i != 0) res+=1;
        }
        return res;
    }
};