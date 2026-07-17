# Day 08 — Sorting Algorithms

##  What I Learned Today

Today, I learned about **Sorting Algorithms**. There are many different sorting algorithms, but today I focused on the following three:

- Selection Sort
- Bubble Sort
- Insertion Sort

---

# 1. Selection Sort

In **Selection Sort**, we repeatedly find the smallest element from the unsorted part of the array and swap it with the first unsorted element. After each round, one element is placed in its correct sorted position.

### Example

Initial Array:

```text
9, 7, 3, 1, 6
```

Round 1

```text
1, 7, 3, 9, 6
```

Round 2

```text
1, 3, 7, 9, 6
```

Round 3

```text
1, 3, 6, 9, 7
```

Round 4

```text
1, 3, 6, 7, 9
```

---

# 2. Bubble Sort

In **Bubble Sort**, we compare every pair of adjacent elements and swap them if they are in the wrong order. After each pass, the largest element "bubbles" to the end of the array.

### Example

Initial Array:

```text
7, 4, 8, 5, 3
```

Round 1

```text
4, 7, 5, 3, 8
```

Round 2

```text
4, 5, 3, 7, 8
```

Round 3

```text
4, 3, 5, 7, 8
```

Round 4

```text
3, 4, 5, 7, 8
```

---

# 3. Insertion Sort

In **Insertion Sort**, we start from the second element (index `1`) and compare it with the elements before it. We keep moving the element to the left until it reaches its correct position. If the left element is already smaller, we stop.

### Example

Initial Array:

```text
7, 4, 8, 5, 3
```

Round 1

```text
4, 7, 8, 5, 3
```

Round 2

```text
4, 7, 8, 5, 3
```

Round 3

```text
4, 7, 5, 8, 3
4, 5, 7, 8, 3
```

Round 4

```text
4, 5, 7, 3, 8
4, 5, 3, 7, 8
4, 3, 5, 7, 8
3, 4, 5, 7, 8
```

---

#  Key Takeaways

- **Selection Sort** repeatedly selects the smallest element and places it in its correct position.
- **Bubble Sort** swaps adjacent elements until the largest elements move to the end.
- **Insertion Sort** builds the sorted array one element at a time by inserting each element into its correct position.
- These algorithms are simple to understand and are excellent for learning the fundamentals of sorting, although they are not efficient for large datasets because their average time complexity is **O(n²)**.

---

