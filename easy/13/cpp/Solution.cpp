#include <iostream>
#include <string>
#include <map>
using namespace std;

class Solution {
public:
    int romanToInt(string s) {
        map<char, int> m;
        int result = 0;

        m.insert({'I', 1});
        m.insert({'V', 5});
        m.insert({'X', 10});
        m.insert({'L', 50});
        m.insert({'C', 100});
        m.insert({'D', 500});
        m.insert({'M', 1000});

        for (int i = 0; i < s.length(); i++) {
            int current = m.at(s[i]);

            if (i < s.length() - 1 && current < m.at(s[i + 1])) {
                result -= current;
            }
            else {
                result += current;
            }
        }
        return result;
    }
};

int main() {
    Solution sol;
    std::cout << sol.romanToInt("MCMXCIV") << std::endl;
    return 0;
}

