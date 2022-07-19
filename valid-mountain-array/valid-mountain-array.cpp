class Solution {
public:
    bool validMountainArray(vector<int>& arr) {
        bool isDecreasing = false, isIncreasing = false;
        
        for(int i = 0; i < arr.size() - 1; i++){
            if((arr[i] < arr[i + 1])){
                isIncreasing = true;
                if(isDecreasing){
                    return false;
                }
            }else if(arr[i] > arr[i + 1]){
                
                isDecreasing = true;
            }else{
                return false;
            }
        }
        
        return (true && isIncreasing && isDecreasing);
    }
};