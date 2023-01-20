class Solution {
public:
    unordered_map <string, string> tiny;
    
    // Encodes a URL to a shortened URL.
    string encode(string longUrl){
        string map = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789";
        
        string res = "";
        
         for (int i = 0; i<10;i++)
            res +=map[rand() %62];
        res = to_string(rand()) + "";
        tiny[res] = longUrl;
        
        return res;
    }

    // Decodes a shortened URL to its original URL.
    string decode(string shortUrl) {
        return tiny[shortUrl];
    }
};

// Your Solution object will be instantiated and called as such:
// Solution solution;
// solution.decode(solution.encode(url));