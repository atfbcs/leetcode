#include <list>
#include <string>

class Solution {
public:
    std::string mergeAlternately(std::string word1, std::string word2) {
        int A = word1.length(), B = word2.length();
        int a = 0, b = 0;
        std::list<char> s;
        int word = 1;

        while (a < A && b < B) {
            if (word == 1) {
                s.push_back(word1[a]);
                a += 1;
                word = 2;
            } else {
                s.push_back(word2[b]);
                b += 1;
                word = 1;
            }
        }
        while (a < A) {
            s.push_back(word1[a]);
            a += 1;
        }
        while (b < B) {
            s.push_back(word2[b]);
            b += 1;
        }

        return std::string(s.begin(), s.end());
    }
};