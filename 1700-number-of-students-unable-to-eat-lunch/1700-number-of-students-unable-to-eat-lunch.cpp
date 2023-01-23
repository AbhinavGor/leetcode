class Solution {
public:
    int countStudents(vector<int>& students, vector<int>& sandwiches) {
        int sTop = 0, noLunch = 0;
        stack<int> swStack;
        queue<int> studentsQ;
        
        for(int i = 0; i < students.size(); i++){
            studentsQ.push(students[i]);
        }
        
        for(int i = sandwiches.size() - 1; i >= 0; i--){
            swStack.push(sandwiches[i]);
        }
        
        int cnt = 0;
        while(!swStack.empty()){
            if(studentsQ.front() == swStack.top()){
                swStack.pop();
                studentsQ.pop();
            }else{
                cnt++;
                studentsQ.push(studentsQ.front());
                studentsQ.pop();
                if(cnt >= students.size()*students.size()){
                    return swStack.size();
                }
            }
        }
        
        return swStack.size();
    }
};