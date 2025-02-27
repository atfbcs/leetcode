class Solution:
    def romanToInt(self, s: str) -> int:
        roman_map = {
            'I': 1, 'V': 5, 'X': 10, 'L': 50,
            'C': 100, 'D': 500, 'M': 1000
        }

        result = 0
        length = len(s)

        for i in range(length):
            current = roman_map[s[i]]

            if i < length - 1 and current < roman_map[s[i + 1]]:
                result -= current
            else:
                result += current

        return result

sol = Solution()
print(sol.romanToInt("MCMXCIV")) 
