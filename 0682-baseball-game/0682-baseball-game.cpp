class Solution {
public:
    int calPoints(vector<string>& operations) {
        stack<int> st;
	for (const auto& op : operations) {
		if (op == "C")
			st.pop();
		else if (op == "D")
			st.push(2 * st.top());
		else if (op == "+") {
			int prev = st.top(); st.pop();
			int newVal = st.top() + prev;
			st.push(prev);
			st.push(newVal);
		}
		else
			st.push(stoi(op));
	}
	int res = 0;
	while (st.size()) {
		res += st.top();
		st.pop();
	}
	return res;
    }
};