#### **1. What is `List<string>`?**
- `List<string>` is a **dynamic array** from the **System.Collections.Generic** namespace.
- It stores **a sequence of strings**, but unlike an array, it can **grow and shrink** dynamically.
- `List<string>` allows **fast insertions, removals, and modifications**.

##### **Usage:**
```csharp
List<string> words = new List<string>();
words.Add("Hello");
words.Add("World");
Console.WriteLine(string.Join(" ", words));  // Output: "Hello World"
```
- `.Add("Hello")` dynamically appends an element.

---

#### **2. What Happens in `new List<string>()`?**
- `new List<string>()` **creates an empty list** in **heap memory**.
- Internally, it starts with a **small default capacity** (e.g., 4 elements).
- When more elements are added, it **automatically expands**, copying data to a larger array.

##### **Memory Growth Example:**
```
Initial:   ["Hello", "World", _, _]  (Capacity = 4)
Expanded:  ["Hello", "World", "!", "C#", _, _, _, _]  (Capacity = 8)
```
- The list **doubles in size** when it runs out of space.

---

#### **3. Why Use `List<string>` Instead of `string` Directly?**
- Strings in C# are **immutable**, meaning modifying a `string` creates a **new copy**.
- Using `List<string>` allows **efficient modifications** before converting it back to a string.

##### **What Happens in `string.Join("", s);`?**
- `string.Join("", s)` takes all elements in `s` and **concatenates** them into a single string.
- **Faster than repeated `string +=` operations** (which create new strings each time).

