# Day 12 — Mastering the C++ Standard Template Library (STL)


---

# What I Learned Today

Today, I focused on one of the most powerful parts of C++—the **Standard Template Library (STL)**.

Instead of writing data structures and algorithms from scratch, STL provides optimized, reusable components that make coding faster and cleaner. Since STL is widely used in coding interviews and competitive programming, understanding it is essential.

---

# Topics Covered

## 1. Containers

Containers are used to store data efficiently.

* `vector`
* `pair`
* `array`
* `deque`
* `list`
* `stack`
* `queue`
* `priority_queue`
* `set`
* `multiset`
* `unordered_set`
* `map`
* `multimap`
* `unordered_map`

I learned when to use each container and their time complexities.

---

## 2. Iterators

Iterators are used to traverse containers.

* `begin()`
* `end()`
* `rbegin()`
* `rend()`
* Iterator syntax
* Range-based for loop

Example:

```cpp
for (auto it = v.begin(); it != v.end(); it++)
    cout << *it << " ";

for (auto x : v)
    cout << x << " ";
```

---

## 3. STL Algorithms

The `<algorithm>` library provides many useful functions.

Some commonly used algorithms:

* `sort()`
* `reverse()`
* `max_element()`
* `min_element()`
* `binary_search()`
* `lower_bound()`
* `upper_bound()`
* `count()`
* `find()`
* `accumulate()`
* `next_permutation()`

These algorithms help solve problems with minimal code.

---

## 4. Utility Functions

I also explored useful STL utilities like:

* `swap()`
* `make_pair()`
* `distance()`
* `size()`
* `empty()`

---

# Mini Practice

Practiced several problems using STL:

* Sorting arrays and vectors
* Frequency counting using `map`
* Removing duplicates using `set`
* Finding maximum and minimum elements
* Binary Search using STL
* Using `priority_queue` for max/min heap

---

# Key Takeaways

* STL significantly reduces coding time.
* Choosing the right container improves performance.
* STL algorithms are optimized and reliable.
* Mastering STL is crucial for DSA, competitive programming, and coding interviews.

---

# What's Next?

Next, I'll start solving more DSA problems by combining **STL with Binary Search and Arrays** to improve my problem-solving skills.

---

## Resources

* C++ STL Documentation
* cppreference.com
* Striver's DSA Sheet
* LeetCode & InterviewBit Practice

---

**Day 12 Complete ✅**

Every day of learning makes coding a little faster, cleaner, and smarter. 🚀
