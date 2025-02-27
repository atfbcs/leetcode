## **1. `Dictionary<char, int> map = new Dictionary<char, int>();`**
### **What Does This Do?**
- **Creates a dictionary** (`Dictionary<char, int>`) to **map Roman numeral characters to integer values**.
- A `Dictionary<TKey, TValue>` in C# is a **hash table-based collection** that provides **O(1) lookup time**.

### **How It Works Internally**
1. **Memory Allocation**  
   - When `new Dictionary<char, int>()` is called, memory is allocated for the dictionary structure.
   - Internally, it **creates an array of buckets** to store key-value pairs.

2. **Adding Entries (`map.Add()`)**
   ```csharp
   map.Add('I', 1);
   map.Add('V', 5);
   ```
   - The **key** `'I'` is hashed into an index.
   - The **value** `1` is stored at that index.

#### **Simplified Hash Table View**
```
Index    Key  ->  Value
-----------------------
  3      I   ->  1
  7      V   ->  5
 10      X   -> 10
```
- **Fast lookups** because hashing allows direct access to stored values.

---

## **2. `int current = map[s[i]];`**
### **What Does This Do?**
- Retrieves the integer value **associated with the Roman numeral** at `s[i]`.
- **How?**  
  - `s[i]` extracts a **character** (e.g., `'X'`).
  - `map[s[i]]` uses the **hash table** to fetch its **value** in **O(1) time**.

### **What Happens Behind the Scenes?**
1. **Suppose `s[i] = 'X'`**
   - `'X'` is hashed to **find its index** in the dictionary.
   - `map['X']` returns **10**.

2. **If the Key Doesn't Exist?**
   ```csharp
   int num = map['Z'];  // ❌ KeyNotFoundException if 'Z' is missing
   ```
   - Unlike arrays (`values[index]`), **dictionaries throw an exception if a key is missing**.

