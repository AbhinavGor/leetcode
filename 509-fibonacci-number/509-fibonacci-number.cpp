class Solution {
public:
    int fib(int n) {
        if(n >=2 ){
            return (fib(n - 1) + fib(n - 2));
        }else if( n == 0){
            return 0;
        }else if(n == 1){
            return 1;
        }
        return 0;
    }
};