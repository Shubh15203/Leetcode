class Solution {
public:
    int repeatedStringMatch(string a, string b) {
        string temp = a;
        int c = 1;

        // Append a enough times to exceed b's length
        while(a.length() < b.length()) {
            a += temp;
            c++;
        }

        // Check if b is now a substring
        if(a.find(b) != string::npos) return c;

        // Add one more temp and check again
        a += temp;
        c++;
        if(a.find(b) != string::npos) return c;

        // If not found
        return -1;
    }
};
