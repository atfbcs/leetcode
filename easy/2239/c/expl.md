`int*` is a pointer to an integer. It stores the memory address of an `int` value instead of the value itself.

```c
int a = 10;
int* ptr = &a;     // Pointer stores the address of 'a'
int value = *ptr;  // 10 (value at that address) => dereferencing
```

### **How does `int arr[]` work?**
 `arr` **stores a pointer to the first element** (`&arr[0]`), but what makes it special is how C handles arrays in memory.

- **Memory Layout** (Example: `int arr[] = {10, 20, 30};`)

  ```
  Address    Value
  1000       10   <- arr (points here, same as &arr[0])
  1004       20   <- &arr[1]
  1008       30   <- &arr[2]
  ```

- Each `int` takes **4 bytes** (on most systems), so:
  - `arr[0]` is at **1000** (`arr` points here)
  - `arr[1]` is at **1004** (`arr + 1` moves 4 bytes ahead)
  - `arr[2]` is at **1008** (`arr + 2` moves 8 bytes ahead)

- **How does C know the second element?**
  - When you access `arr[i]`, C does:
    ```
    arr[i]  →  *(arr + i)
    ```
  - Since `arr` is a pointer to `&arr[0]`, moving `i` steps ahead (`arr + i`) correctly accesses the next elements.

---

### **How does `int*` work?**
`int* ptr` is a **normal pointer**. It stores the **address of an integer**, but it doesn’t inherently know how many elements exist.

```c
int x = 10;
int* ptr = &x;  // ptr stores address of x
```
- Here, `ptr` only points to **one** integer.
- Unlike arrays, it doesn’t automatically know about the "next" integer.

However, if `ptr` is assigned an array:
```c
int arr[] = {10, 20, 30};
int* ptr = arr;  // ptr now holds the address of arr[0]
```
- Now `ptr` behaves like `arr`, meaning `ptr[i]` also works like `*(ptr + i)`, just like `arr[i]`.

