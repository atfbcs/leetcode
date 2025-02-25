### `vector<int>& nums` 

A `vector` in C++ is a **dynamic array** that can grow and shrink in size automatically. It is part of the **Standard Template Library (STL)** and provides **easy memory management**.

### **Key Features:**
- **Resizable**: Unlike arrays, `vector` can grow/shrink dynamically.
- **Contiguous Memory**: Elements are stored **next to each other** in memory.
- **Built-in Functions**: Provides methods like `.push_back()`, `.size()`, `.erase()`, etc.

### **Example:**
```cpp
#include <vector>
#include <iostream>

int main() {
    std::vector<int> nums = {1, 2, 3};  
    nums.push_back(4);  // Add element

    std::cout << nums[0];  // Access first element
}
```

#### **What is `vector<int>& nums`?**
`vector<int>& nums` is a **reference** to a `vector<int>`. It allows the function to modify the original vector without making a copy.

---

### **How does `vector<int>` work?**
A `vector<int>` is a **dynamic array** that can change size at runtime. It manages its own memory and provides useful functions like `.size()` and `.push_back()`.

#### **Memory Layout (`vector<int> nums = {10, 20, 30};`)**
```
Address    Value
1000       10   <- nums[0]
1004       20   <- nums[1]
1008       30   <- nums[2]
```
- Each `int` takes **4 bytes** (on most systems).
- `nums[i]` works like `*(nums.data() + i)`, accessing the next elements in memory.

---

### **Why use `vector<int>&` instead of `vector<int>`?**
| Syntax                | What it Does                                  |
|----------------------|--------------------------------|
| `vector<int> nums`   | Passes a **copy** of the vector (slow for large data). |
| `vector<int>& nums`  | Passes a **reference** (no copying, more efficient). |
| `const vector<int>& nums` | Passes a **read-only reference** (prevents modification). |

---

### **How does C++ handle `vector<int>& nums`?**
1. **Reference Means No Copying**
   ```cpp
   void func(vector<int>& nums) {
       nums[0] = 99;  // Changes original vector!
   }
   ```
   - The function modifies the original `vector<int>`, not a copy.

2. **Accessing Elements**
   ```cpp
   int first = nums[0];   // Direct access, same as *(nums.data())
   int last = nums.back(); // Access last element efficiently
   ```

