#include <unordered_map>
#include <string>
#include <algorithm>
using namespace std;

class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_map<char, int> mp;
        int start = 0, maxLength = 0;

        for (int end = 0; end < s.length(); end++) {
            if (mp.find(s[end]) != mp.end()) {
                // Move the start pointer right after the last occurrence of the current character
                start = max(start, mp[s[end]] + 1);
            }
            // Update the last occurrence of the current character
            mp[s[end]] = end;
            // Calculate the maximum length
            maxLength = max(maxLength, end - start + 1);
        }

        return maxLength;
    }
};
