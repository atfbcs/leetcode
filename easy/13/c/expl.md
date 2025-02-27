## **1. `int values[256] = {0};`**
### **What Does This Do?**
- Declares an **array of size `256`**, initialized with **zeroes**.
- Used as a **lookup table** to store integer values for Roman numeral characters.
- **Why size 256?**  
  - The **ASCII character set** has **256 possible characters** (0–255).
  - This ensures **all characters are covered**, even if they are not used.

### **How It Works Internally**
1. **Array Memory Allocation**
   ```c
   int values[256] = {0};
   ```
   - The compiler **allocates contiguous memory** for `256 * sizeof(int)` bytes.
   - Example for `int` (assuming 4 bytes each):  
     ```
     Address    Value
     -----------------
     values[0]   0
     values[1]   0
     values[2]   0
     ...
     values[73]  0
     ```
   - **All elements are initialized to `0`**.

2. **Assigning Values**
   ```c
   values['I'] = 1;
   values['V'] = 5;
   ```
   - `values['I']` is stored at **ASCII index of `'I'` (73)**.
   - This allows **fast lookup** in O(1) time.

---

## **2. `int current = values[(int) s[i]];`**
### **What Does This Do?**
- Retrieves the **integer value** for `s[i]` from `values` using **ASCII indexing**.
- `(int) s[i]` **converts the character into its ASCII integer value**.

### **How It Works Internally**
1. **Suppose `s[i] = 'X'`**
   - `'X'` has an ASCII value of **88**.
   - `values[88]` was assigned `10` earlier.
   - `current = values[88]` retrieves `10`.

2. **Memory Representation**
   ```
   Address    Key   Value
   ----------------------
   values[73]  'I'   1
   values[86]  'V'   5
   values[88]  'X'  10
   ```
   - **Retrieving a value is just an array lookup (`O(1)` time complexity)**.

