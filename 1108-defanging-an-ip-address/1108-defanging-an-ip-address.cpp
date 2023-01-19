class Solution {
public:
    string defangIPaddr(string address) {
        vector<int> indices;
        
        for(int i = 0; i < address.size(); i++){
            if(address[i] == '.'){
                indices.push_back(i);
            }
        }
        
        int addLen = 0;
        
        for(int i = 0; i < indices.size(); i++){
            address.replace(indices[i] + addLen, 1, "[.]");
            addLen += 2;
        }
        
        return address;
    }
};