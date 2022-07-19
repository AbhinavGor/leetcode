class Solution {
public:
    vector<int> sortArrayByParity(vector<int>& arr) {
        int i = 0, j  = arr.size() - 1;
        while(i < j){
            if(arr[i]%2 > arr[j]%2){
                arr[i] = arr[i] + arr[j];
                arr[j] = arr[i] - arr[j];
                arr[i] = arr[i] - arr[j];
            }
            if(arr[i]%2 == 0){
                i+=1;
            }
            if(arr[j]%2 == 1){
                j-=1;
            }
        }
        
        return arr;
    }
};