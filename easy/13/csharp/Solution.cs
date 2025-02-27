public class Solution {
    public int RomanToInt(string s)
    {
        Dictionary<char, int> map = new Dictionary<char, int>();
        int result = 0;
        
        map.Add('I', 1);
        map.Add('V', 5);
        map.Add('X', 10);
        map.Add('L', 50);
        map.Add('C', 100);
        map.Add('D', 500);
        map.Add('M', 1000);

        for (int i = 0; i < s.Length; i++)
        {
            int current = map[s[i]];
            
            if (i < s.Length - 1 && current < map[s[i + 1]]) {
                result -= current;
            } else {
                result += current;
            }
        }

        return result;
    }
    
    public static void Main(string[] args) {
        Solution sol = new Solution();
        Console.WriteLine(sol.RomanToInt("MCMXCIV"));  // Output: 58
    }
}