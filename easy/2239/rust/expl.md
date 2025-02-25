## **1. `struct Solution;`**
- This defines a **struct** named `Solution`.
- Since it has **no fields**, it acts as a namespace for the function.
- In Rust, methods are typically attached to structs.
- A struct (short for structure) is a custom data type that groups related values together. In Rust, structs are used to create user-defined types similar to objects in other languages.
- ### Types of Structs in Rust
  1. Tuple Structs (Like tuples but with a name)
  2. Named Field Structs (Like objects in other languages)
  3. Unit Structs (No fields, used as a namespace or marker)
    - A namespace is a way to organize code and prevent naming conflicts. In Rust, struct Solution; is often used as a namespace to group related functions. 

---

## **2. `impl Solution`**
- `impl` means **"implementation"**, used to define methods for a struct.
- Here, we implement the function `find_closest_number` inside `Solution`.
- Solution is a struct (which is empty here).
- `impl` Solution attaches methods to Solution
- it does not store data (unless the struct has fields) or support inheritence like a class 

---

## **3. `nums: Vec<i32>) -> i32`**
- `nums: Vec<i32>` means `nums` is a **vector** (`Vec`) of 32-bit integers (`i32`).
- `-> i32` indicates that the function **returns** a 32-bit integer.

---

## **4. `let mut closest = nums[0];`**
- `let` declares a **variable** in Rust.
- `mut` means **mutable**, allowing `closest` to be updated later.
- `nums[0]` gets the **first element** of the vector.
### Variable types in rust
### **Variable Declarations in Rust (`let`, `const`, `static`, `mut`)**  

Rust provides different ways to **declare variables** with specific behaviors:

| Keyword    | Mutable? | Scope  | Stored in | Example Usage |
|------------|---------|--------|-----------|---------------|
| `let`      | ❌ No (Immutable by default) | Block/local | Stack (if small) | `let x = 10;` |
| `let mut`  | ✅ Yes | Block/local | Stack (if small) | `let mut x = 10;` |
| `const`    | ❌ No | Global/local | **Embedded in binary** | `const PI: f64 = 3.14;` |
| `static`   | ✅ Yes (if `mut`) | Global | **Static memory** | `static GREETING: &str = "Hello";` |

---

## **5. `for &num in nums.iter().skip(1)`**
- `nums.iter()` creates an **iterator** over `nums` (does not consume the vector).
- `.skip(1)` skips the **first element** (since we already set `closest = nums[0]`).
- `&num` means we are **borrowing** each number (avoiding ownership issues).

---

## **6. `closest` (Why no `return`?)**
- Rust has an **implicit return**: The **last expression** in a function **is returned automatically**.
- Since `closest` is the last line, it is **returned without using `return closest;`**.
