#### **1. What is `self`?**
- `self` is a **reference to the instance** of the class.
- It allows access to the class's attributes and methods.
- In `def findClosestNumber(self, nums: List[int])`, `self` ensures the method belongs to the `Solution` class.

#### **2. What does `nums: List[int]` mean?**
- `nums: List[int]` is a **type __hint__**, meaning `nums` should be a list of integers (`List[int]`).
- This does **not** enforce the type at runtime but helps with readability and static analysis tools.

#### **3. What does `-> int` mean?**
- `-> int` is a **return type __hint__**, meaning the function **should return an integer**.
- It helps developers understand what type the function is expected to return.

### **How is a `list` different from an `array` in Python?**
In Python, **lists** and **arrays** both store collections of elements, but they have key differences:

---

### **1. `list` (Python Built-in)**
- A **dynamic** collection that can store **any data type** (integers, strings, objects, etc.).
- **Resizes automatically** when adding/removing elements.
- **Slower** than arrays for numerical operations.

#### **Example:**
```python
nums = [1, 2, "hello", 4.5]  # Mixed data types allowed
nums.append(5)  # Dynamically grows
```

---

### **2. `array` (From `array` Module)**
- A **fixed-type** collection, meaning all elements must be the **same type** (e.g., all integers or all floats).
- **More memory-efficient** than lists for large numeric datasets.
- Requires importing the `array` module.

#### **Example:**
```python
from array import array

nums = array('i', [1, 2, 3, 4])  # 'i' means integers
nums.append(5)  # Works, but all elements must be integers
```
