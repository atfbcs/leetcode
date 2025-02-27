var romanToInt = function(s) {
    const map = {
        'I': 1, 'V': 5, 'X': 10, 'L': 50,
        'C': 100, 'D': 500, 'M': 1000
    };

    let result = 0;
    let length = s.length;

    for (let i = 0; i < length; i++) {
        let current = map[s[i]];

        if (i < length - 1 && current < map[s[i + 1]]) {
            result -= current;
        } else {
            result += current;
        }
    }

    return result;
};

console.log(romanToInt("MCMXCIV")); 
