## **1. `let mut result = String::with_capacity(word1.len() + word2.len());`**  
### **What Does This Do?**
- **Creates a new empty `String`** with pre-allocated capacity.
- `word1.len() + word2.len()` ensures enough memory is allocated **before** adding characters.
- **Pre-allocating memory improves performance** by avoiding multiple reallocations.

### **Behind the Scenes: Memory Allocation**
- Normally, when you push to a `String`, Rust may **reallocate memory** if the capacity is exceeded.
- `String::with_capacity(n)` **prevents this** by reserving space for `n` characters in advance.

```rust
let mut s = String::with_capacity(10);
println!("{}", s.capacity());  // Output: 10 (pre-allocated space)
```

#### **Why Use `with_capacity()` Instead of Just `String::new()`?**
| Method              | Memory Allocation | Performance |
|---------------------|------------------|-------------|
| `String::new()`    | Starts with small memory, grows dynamically | **Slower** (may reallocate multiple times) |
| `String::with_capacity(n)` | Allocates `n` bytes immediately | **Faster** (avoids unnecessary reallocations) |

✅ **Best for performance when the final string size is known in advance.**  

---

## **2. `let chars1: Vec<char> = word1.chars().collect();`**
### **What Does This Do?**
- Converts `word1` (a `String`) into a **vector (`Vec<char>`) of characters**.
- `.chars()` **creates an iterator** over each character.
- `.collect()` **collects** the iterator into a `Vec<char>`.

```rust
let word = String::from("Rust");
let chars: Vec<char> = word.chars().collect();
println!("{:?}", chars);  // Output: ['R', 'u', 's', 't']
```

#### **Why Convert a `String` to `Vec<char>`?**
- **Direct Indexing:** `word1[a]` **does not work** in Rust because `String` is stored as UTF-8 bytes.
- **`Vec<char>` allows direct indexing** (`chars1[a]` works).
- **Safer Character Access**: UTF-8 characters may take multiple bytes, but `Vec<char>` ensures each element is a complete character.

