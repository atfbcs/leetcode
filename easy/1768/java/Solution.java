import java.util.ArrayList;
import java.util.List;

class Solution {
    public String mergeAlternately(String word1, String word2) {
        int A = word1.length(), B = word2.length();
        int a = 0, b = 0;
        List<String> s = new ArrayList<>();
        int word = 1;

        while (a < A && b < B) {
            if (word == 1) {
                s.add(String.valueOf(word1.charAt(a)));
                a += 1;
                word = 2;
            } else {
                s.add(String.valueOf(word2.charAt(b)));
                b += 1;
                word = 1;
            }
        }
        while (a < A) {
            s.add(String.valueOf(word1.charAt(a)));
            a += 1;
        }
        while (b < B) {
            s.add(String.valueOf(word2.charAt(b)));
            b += 1;
        }

        return String.join("", s);
    }
}