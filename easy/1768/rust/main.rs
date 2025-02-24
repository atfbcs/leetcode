struct Solution;

impl Solution {
    pub fn merge_alternately(word1: String, word2: String) -> String {
        let mut result = String::with_capacity(word1.len() + word2.len());
        let (mut a, mut b) = (0, 0);
        let chars1: Vec<char> = word1.chars().collect();
        let chars2: Vec<char> = word2.chars().collect();

        while a < word1.len() || b < word2.len() {
            if a < word1.len() {
                result.push(chars1[a]);
                a += 1;
            }
            if b < word2.len() {
                result.push(chars2[b]);
                b += 1;
            }
        }

        result
    }
}

fn main() {
}