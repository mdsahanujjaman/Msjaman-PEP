# ⚡ C++ Standard Template Library (STL) Quick Cheat Sheet

---

## 📦 1. Containers & Operations

```cpp
#include <iostream>
#include <vector>
#include <string>
#include <stack>
#include <queue>
#include <set>
#include <map>
#include <unordered_map>
#include <algorithm>

// 1. Vector (Dynamic Array)
std::vector<int> vec = {5, 2, 8, 1, 9};
vec.push_back(10);          // O(1) amortized
vec.pop_back();             // O(1)
vec.size();                 // Size
vec.clear();                // Empty vector

// 2. String
std::string str = "Hello";
str.substr(0, 4);           // "Hell"
str.find("ll");             // Index 2 or std::string::npos

// 3. Stack (LIFO)
std::stack<int> st;
st.push(10); st.pop(); int t = st.top(); bool e = st.empty();

// 4. Queue (FIFO)
std::queue<int> q;
q.push(10); q.pop(); int f = q.front();

// 5. Priority Queue (Max Heap by default)
std::priority_queue<int> maxHeap;
std::priority_queue<int, std::vector<int>, std::greater<int>> minHeap; // Min Heap

// 6. Set (Ordered, Unique Elements - Red-Black Tree) O(log N)
std::set<int> s;
s.insert(5); s.erase(5); bool found = (s.find(5) != s.end());

// 7. Map (Key-Value Pair, Ordered) O(log N)
std::map<std::string, int> m;
m["apple"] = 10;

// 8. Unordered Map (Hash Table) O(1) average
std::unordered_map<int, int> freq;
freq[1]++;
```

---

## ⚡ 2. Key STL Algorithms

```cpp
std::vector<int> v = {4, 1, 7, 3, 9, 2};

// Sorting
std::sort(v.begin(), v.end());                     // Ascending O(N log N)
std::sort(v.begin(), v.end(), std::greater<int>());// Descending

// Binary Search (Vector MUST be sorted)
bool exists = std::binary_search(v.begin(), v.end(), 7); // O(log N)

// Lower & Upper Bound
auto it1 = std::lower_bound(v.begin(), v.end(), 3); // First element >= 3
auto it2 = std::upper_bound(v.begin(), v.end(), 3); // First element > 3

// Max/Min Element
int maxVal = *std::max_element(v.begin(), v.end());
int minVal = *std::min_element(v.begin(), v.end());

// Reverse & Rotate
std::reverse(v.begin(), v.end());
```
