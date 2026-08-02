class Solution {
public:
    string simplifyPath(string path) {
        vector<string> stack;
        stringstream ss(path);
        string component;

        while (getline(ss, component, '/')) {

            if (component == "" || component == ".") {
                continue;
            }
            else if (component == "..") {
                if (!stack.empty()) {
                    stack.pop_back();
                }
            }
            else {
                stack.push_back(component);
            }
        }

        string result = "";

        for (const string &dir : stack) {
            result += "/" + dir;
        }

        return result.empty() ? "/" : result;
    }
};