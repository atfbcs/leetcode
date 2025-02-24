using System;

public class Solution {
    public string MergeAlternately(string word1, string word2) {
        int A = word1.Length, B = word2.Length;
        int a = 0, b = 0;
        List<string> s = new List<string>();
        int word = 1;

        while (a < A && b < B) {
            if (word == 1) {
                s.Add(word1[a].ToString());
                a += 1;
                word = 2;
            } else {
                s.Add(word2[b].ToString());
                b += 1;
                word = 1;
            }
        }
        while (a < A) {
            s.Add(word1[a].ToString());
            a += 1;
        }
        while (b < B) {
            s.Add(word2[b].ToString());
            b += 1;
        }

        return string.Join("", s);
    }
}