class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& t) {
        vector<int> sol(t.size()); 
        stack<pair<int,int>> v; 
        for (int i=0 ; i<t.size();i++){
            while (!v.empty() && t[i]>v.top().first){
                sol[v.top().second]=i-v.top().second;
                v.pop();
                
            }
            v.push(pair(t[i],i));
        }
        while (!v.empty()){
            sol[v.top().second]=0;
            v.pop();
        }
        return sol;
    }
};