use std::collections::HashMap;

struct Solution;

impl Solution {
    pub fn roman_to_int(s: String) -> i32 {
        let mut map = HashMap::new();
        map.insert('I', 1);
        map.insert('V', 5);
        map.insert('X', 10);
        map.insert('L', 50);
        map.insert('C', 100);
        map.insert('D', 500);
        map.insert('M', 1000);

        let chars: Vec<char> = s.chars().collect();
        let mut result = 0;
        let length = chars.len();

        for i in 0..length {
            let current = *map.get(&chars[i]).unwrap();

            if i < length - 1 && current < *map.get(&chars[i + 1]).unwrap() {
                result -= current;
            } else {
                result += current;
            }
        }

        result
    }
}

fn main() {
    println!("{}", Solution::roman_to_int("MCMXCIV".to_string()));
}
