# ⚡ DSA Time & Space Complexity Reference Sheet

---

## ⏱️ 1. Big-O Complexity Ranking (Best to Worst)

$$O(1) < O(\log N) < O(N) < O(N \log N) < O(N^2) < O(2^N) < O(N!)$$

---

## 📊 2. Common Data Structure Complexities

| Data Structure | Access | Search | Insertion | Deletion | Space Complexity |
| :--- | :---: | :---: | :---: | :---: | :---: |
| **Array** | $O(1)$ | $O(N)$ | $O(N)$ | $O(N)$ | $O(N)$ |
| **Singly Linked List** | $O(N)$ | $O(N)$ | $O(1)^*$ | $O(1)^*$ | $O(N)$ |
| **Hash Table** | $N/A$ | $O(1)$ avg | $O(1)$ avg | $O(1)$ avg | $O(N)$ |
| **Binary Search Tree** | $O(\log N)$ | $O(\log N)$ | $O(\log N)$ | $O(\log N)$ | $O(N)$ |
| **AVL / Red-Black Tree** | $O(\log N)$ | $O(\log N)$ | $O(\log N)$ | $O(\log N)$ | $O(N)$ |
| **Min/Max Heap** | $O(1)$ (peek) | $O(N)$ | $O(\log N)$ | $O(\log N)$ | $O(N)$ |

*\* Insertion/deletion at head/tail or given pointer.*

---

## 🔀 3. Sorting Algorithms Comparison

| Algorithm | Best Time | Average Time | Worst Time | Space | Stable? |
| :--- | :---: | :---: | :---: | :---: | :---: |
| **Bubble Sort** | $O(N)$ | $O(N^2)$ | $O(N^2)$ | $O(1)$ | Yes |
| **Selection Sort** | $O(N^2)$ | $O(N^2)$ | $O(N^2)$ | $O(1)$ | No |
| **Insertion Sort** | $O(N)$ | $O(N^2)$ | $O(N^2)$ | $O(1)$ | Yes |
| **Merge Sort** | $O(N \log N)$ | $O(N \log N)$ | $O(N \log N)$ | $O(N)$ | Yes |
| **Quick Sort** | $O(N \log N)$ | $O(N \log N)$ | $O(N^2)$ | $O(\log N)$ | No |
| **Heap Sort** | $O(N \log N)$ | $O(N \log N)$ | $O(N \log N)$ | $O(1)$ | No |

---

## 💡 4. Input Constraint Tricks for Interviews

- $N \le 10 \implies O(N!)$ or $O(2^N \cdot N)$ (Backtracking/Bitmask)
- $N \le 20 \implies O(2^N)$ (Recursion/Subsets)
- $N \le 100 \implies O(N^4)$ or $O(N^3)$ (Floyd-Warshall / Grid DP)
- $N \le 1,000 \implies O(N^2)$ (Nested Loops / 2D DP)
- $N \le 10^5 \implies O(N \log N)$ or $O(N)$ (Sorting / Binary Search / Segment Tree / Two Pointers)
- $N \le 10^9 \implies O(\log N)$ or $O(1)$ (Binary Search / Math)
