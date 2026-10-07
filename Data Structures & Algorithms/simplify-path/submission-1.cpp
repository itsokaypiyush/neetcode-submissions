class Solution {
public:
    string simplifyPath(string path) {
        vector<string> stack;
        string current = "";

        for (int i = 0; i <= path.size(); i++) {
            if (i == path.size() || path[i] == '/') {
                
                if (current == "..") {
                    if (!stack.empty()) {
                        stack.pop_back();
                    }
                }
                else if (current != "" && current != ".") {
                    stack.push_back(current);
                }

                current = "";
            }
            else {
                current += path[i];
            }
        }

        string answer = "";

        for (string directory : stack) {
            answer += "/" + directory;
        }

        if (answer == "") {
            return "/";
        }

        return answer;
    }
};