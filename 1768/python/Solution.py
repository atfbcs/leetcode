class Solution:
    def mergeAlternately(self, word1: str, word2: str) -> str:
        A, B = len(word1), len(word2)
        a, b = 0, 0
        result = []

        while a < A and b < B:
            result.append(word1[a])
            result.append(word2[b])
            a += 1
            b += 1

        # Add remaining characters from either string
        result.extend(word1[a:])
        result.extend(word2[b:])

        return "".join(result)