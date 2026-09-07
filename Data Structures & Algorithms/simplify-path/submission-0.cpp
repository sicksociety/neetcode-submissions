#include <iostream>
#include <sstream>
#include <string>
#include <vector>
class Solution {
public:
    string simplifyPath(string path) {
        stringstream ss(path);
        stack<string> sol;
        string token;
        while (std::getline(ss,token,'/')){
            if ( token==".."){
                if (sol.empty()){
                    continue;
                }
                else{
                    sol.pop();

                }
            }
            else if (token.empty() || token=="." ){
                continue;
            }
            else{
                sol.push(token);
            }
       }
       if (sol.empty()){
        return "/";
       }
       string solution="";
       while (!sol.empty()){
        solution="/"+sol.top()+solution;
        sol.pop();
        
       }
       return solution;


        
    }
};