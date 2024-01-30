class Solution {
public:
    int countKeyChanges(string s) {
        for (char& c : s)
            c = tolower(c);
        int cnt = 0;
        for (int i = 1; i < s.size(); i++)
            cnt += (s[i] != s[i-1]);
        return cnt;
    }
};
