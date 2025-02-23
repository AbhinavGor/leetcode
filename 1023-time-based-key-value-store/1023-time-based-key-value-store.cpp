class TimeMap {
private:
    unordered_map<string, vector<pair<string, int>>> m;

    // string search(vector<pair<string, int>> &vec, const int &times) {
    //     int l = 0, r = vec.size() - 1;

    //     while(l < r) {
    //         int mid = l + (r-l)/2;

    //         if(vec[mid].second > times) {
    //             r = mid - 1;
    //         } else if(vec[mid].second<times) {
    //             l = mid + 1;
    //         } else {
    //             return vec[mid].first;
    //         }
    //     }

    //     return r >= 0 ? vec[r].first : "";
    // }
    
    string search(vector<pair<string, int>> &temp, const int &timestamp) {
        int low = 0;
        int high = temp.size() - 1;
        
        while (low <= high) {
            int mid = low + (high - low) / 2;
            
            if (temp[mid].second > timestamp) {
                high = mid - 1;
            } else if (temp[mid].second < timestamp) {
                low = mid + 1;
            } else {
                return temp[mid].first;
            }
        }
        
        return high >= 0 ? temp[high].first : "";
    }
public:
    TimeMap() {
        
    }
    
    void set(string key, string value, int timestamp) {
        m[key].push_back({value, timestamp});
    }
    
    string get(string key, int timestamp) {
        if(m.find(key) == m.end()) {
            return "";
        }

        return search(m[key], timestamp);
    }
};

/**
 * Your TimeMap object will be instantiated and called as such:
 * TimeMap* obj = new TimeMap();
 * obj->set(key,value,timestamp);
 * string param_2 = obj->get(key,timestamp);
 */