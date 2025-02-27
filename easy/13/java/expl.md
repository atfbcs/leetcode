## **1. What is `Map<Character, Integer>`?**
- `Map<Character, Integer>` is an **interface** from `java.util.Map`, representing a **key-value pair collection**.
- In this case:
  - The **key** (`Character`) represents a **Roman numeral** (e.g., `'I'`, `'V'`).
  - The **value** (`Integer`) represents its **corresponding integer value** (e.g., `1`, `5`).

```java
'I' -> 1
'V' -> 5
'X' -> 10
```

---

## **2. What Happens in `new HashMap<>();`?**
- `new HashMap<>()` **creates a HashMap**, which is a **dynamic data structure**.
- A **HashMap** stores key-value pairs using a **hashing function** for fast lookups (`O(1)` average time complexity).

### **How `HashMap` Works Internally**
- When `map.put('I', 1);` is called:
  - The key `'I'` is **hashed** into an **index** in an **array**.
  - The value `1` is **stored** at that index.

##### **Simplified HashMap Structure:**
```
Index   Key  ->  Value
-----------------------
  3      I   ->  1
  7      V   ->  5
 10      X   -> 10
```
- When `map.get('I')` is called:
  - `'I'` is **hashed** to find its **index**.
  - The **value `1` is retrieved instantly**.

