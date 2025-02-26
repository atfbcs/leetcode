#### **1. What is `List<String>`?**
- `List<String>` is an **interface** from `java.util.List`, representing a **resizable collection** of strings.
- Since `List` is an **interface**, we use `ArrayList<>` (a concrete implementation).
- It allows **fast additions, deletions, and modifications** compared to arrays.

##### **Usage:**
```java
List<String> words = new ArrayList<>();
words.add("Hello");
words.add("World");
System.out.println(String.join(" ", words));  // Output: "Hello World"
```
- `.add("Hello")` dynamically appends an element.

---

#### **2. What Happens in `new ArrayList<>()`?**
- `new ArrayList<>()` **creates an empty list** in **heap memory**.
- Internally, it starts with a **default capacity** (typically **10** elements).
- When the list grows beyond its capacity, it **creates a new, larger array**, copying old elements.

##### **Memory Growth Example:**
```
Initial:   ["Hello", "World", null, null, ..., null]  (Capacity = 10)
Expanded:  ["Hello", "World", "!", "Java", ..., null]  (Capacity = 15)
```
- The **internal array doubles in size** when needed, making it efficient.

---

#### **3. Why Use `List<String>` Instead of `String` Directly?**
- Strings in Java are **immutable**, meaning modifying a `String` creates a **new copy**.
- Using `List<String>` allows **efficient modifications** before converting it into a final string.

##### **What Happens in `String.join("", s);`?**
- `String.join("", s)` **concatenates** all elements in `s` into a single string.
- **Faster than repeated `+` operations**, which create new strings each time.

