# Your task is to complete this function
# Function should return True/False or 1/0
def PalinArray(arr ,n):
    flag = 1
    for i in range(n):
        string = list(str(arr[i]))
        string = string[::-1]
        if str(arr[i]) == "".join(string):
            continue;
        else:
            flag = 0
    return flag


#{ 
#  Driver Code Starts
# Driver Program
if __name__=='__main__':
    t=int(input())
    for i in range(t):
        n = int(input())
        arr = list(map(int, input().strip().split()))
        if PalinArray(arr, n):
            print(1)
        else:
            print(0)
# Contributed By: Harshit Sidhwa

# } Driver Code Ends