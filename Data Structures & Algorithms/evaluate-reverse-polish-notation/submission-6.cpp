class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        stack<int> sol; 
        for ( string i: tokens ){
            if (i != "+" && i != "-" && i != "*" && i != "/" ){
                sol.push(stoi(i));
            }
            else if (i=="+"){
                int temp1=sol.top();
                sol.pop();
                int sum=temp1+sol.top();
                sol.pop();
                sol.push(sum);
            }
            else if (i=="-"){
                int temp1=sol.top();
                sol.pop();
                int sum=sol.top()-temp1;
                sol.pop();
                sol.push(sum);
            }
            else if (i=="*"){
                int temp1=sol.top();
                sol.pop();
                int sum=temp1*sol.top();
                sol.pop();
                sol.push(sum);
            }
            else if (i=="/"){
                int temp1=sol.top();
                sol.pop();
                int sum=sol.top()/temp1;
                sol.pop();
                sol.push(sum);
            }
        }
        return (sol.top());
        
    }
};
