## **1. `int current = m.at(s[i]);`**
### **What Does This Do?**
- `m.at(s[i])` retrieves the **integer value** corresponding to the Roman numeral `s[i]` from the `map<char, int> m`.
- Unlike `m[s[i]]`, `m.at(s[i])` **throws an exception** if the key does not exist, ensuring safer lookups.

---

### **How `m.at(s[i])` Works Internally**
1. `s[i]` extracts a **character** from the string (e.g., `'X'`).
2. The `map.at()` function **searches for the key** in the internal tree structure of `std::map`.
3. If found, it **returns the corresponding value**.
4. If not found, it **throws `std::out_of_range` exception**.

##### **Example:**
```cpp
std::map<char, int> m;
m.insert({'I', 1});
m.insert({'V', 5});

std::cout << m.at('I');  // Output: 1
std::cout << m.at('X');  // Throws std::out_of_range (Key 'X' not found)
```
🚫 **If you used `m[s[i]]` instead, it would insert a new key with a default value (`0`).**

---

## **2. `Solution sol;` and `sol.romanToInt("MCMXCIV");`**
### **What Does This Do?**
- `Solution sol;` **creates an instance** of the `Solution` class.
- `sol.romanToInt("MCMXCIV");` **calls the method** inside the class, converting the Roman numeral `"MCMXCIV"` into an integer.

---

### **How Does `Solution sol;` Work?**
1. `Solution sol;` **allocates memory** for an object of type `Solution`.
2. The class does **not** have a constructor, so it uses a **default constructor** (automatically provided by C++).
3. `sol.romanToInt("MCMXCIV")` **calls the method**, passing the string `"MCMXCIV"`.
4. Inside `romanToInt()`, it:
   - Looks up Roman numeral values using the `map`.
   - Converts `"MCMXCIV"` into `1994`.

##### **Example of What Happens in Memory**
```cpp
Solution sol;  // Creates an object of Solution
sol.romanToInt("MCMXCIV");  // Calls method, processes the string
```
