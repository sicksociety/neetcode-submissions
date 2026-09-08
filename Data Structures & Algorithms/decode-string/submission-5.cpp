std::string operator*(std::string str, int times) {
    std::string result;
    result.reserve(str.length() * times);
    while (times-- > 0) result += str;
    return result;
}

class Solution {
public:
    string decodeString(string s) {
        stack<string> sol; 
        for (char i : s) {
            string str(1, i);
            if (str == "]") {
                bool t = true; 
                string sum = "";
                while (t) {
                    string temp = sol.top();
                    if (temp == "[") {
                        sol.pop();
                        t = false;
                    }
                    else {
                        sum = temp + sum;
                        sol.pop();
                    }
                }

                string c = "";
                while (!sol.empty() && sol.top() <= "9" && sol.top() >= "0") {
                    c = sol.top() + c;
                    sol.pop();
                }
                if (!c.empty()) {
                    sum = std::string(sum) * stoi(c);
                }

                sol.push(sum);
            }
            else {
                sol.push(str);
            }
        }
        string sum;
        while (!sol.empty()) {
            string temp = sol.top();
            sum = temp + sum;
            sol.pop();
        }
        return sum;
    }
};