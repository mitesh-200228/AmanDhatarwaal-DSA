//It's is done on leetcode, that's the reason it is in this format


class Solution {
public:
    bool isValid(string s) {
	int i{};
	stack<char> stk{};
	while (i < s.length()) {
		if (s[i] == '(' || s[i] == '[' || s[i] == '{') {
			stk.push(s[i]);
		}
		else if (stk.size() >= 1 && ((s[i] == ')' && stk.top() == '(') || 
			(s[i] == '}' && stk.top() == '{') || 
			(s[i] == ']'&& stk.top() == '['))) {
			stk.pop();
		}
		else {
			return false;
		}
		i++;
	}
	return stk.size() == 0 ? true : false;
    }
};