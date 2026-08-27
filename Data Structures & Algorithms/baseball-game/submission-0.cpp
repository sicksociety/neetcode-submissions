class Solution {
public:
    int calPoints(vector<string>& v) {
        stack<int> s; 
        for (int i=0; i<v.size();i++){
            if(v[i]=="C"){
                s.pop();
            }
            else if (v[i]=="D"){
                s.push(s.top()*2);
            }
            else if (v[i]=="+"){
                int temp1=s.top();
                s.pop();
                int temp2=s.top();
                int temp3= temp1+temp2;
                s.push(temp1);
                s.push(temp3);
                
            }
            else{
                s.push(stoi(v[i]));
            }
        }
        int sum=0;
        while (!s.empty()){
            sum=sum+s.top();
            s.pop();
        }
        return sum;

        
    }
};