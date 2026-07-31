class Solution {
public:

    // Encode list of strings into one string
    string encode(vector<string>& strs) {
        string result = "";

        for (string s : strs) {
            int len = s.length();

            result += to_string(len) + "#" + s;
        }

        return result;
    }


    // Decode one string back into list of strings
    vector<string> decode(string s) {

        vector<string> ans;

        int i = 0;

        while (i < s.length()) {

            // Find the '#'
            int j = i;

            while (s[j] != '#') {
                j++;
            }

            // Get the number before #
            string num = s.substr(i, j - i);

            // Convert string number to integer
            int len = stoi(num);

            // Get the actual word
            string word = s.substr(j + 1, len);

            ans.push_back(word);

            // Move i to the next encoded string
            i = j + 1 + len;
        }

        return ans;
    }
};