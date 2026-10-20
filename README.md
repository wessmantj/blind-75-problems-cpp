# blind-75-problems-cpp

This repo is to record my leetcode solutions (Brute, Better, Optimal) and just general solving process of the LeetCode collection 'Blind 75' using C++.

I will be doing a problem per day, if possible, using no outside resources. If my solution cannot be improved any further, I will check other solutions to see if I solved optimally, how I can improve, and then from the code explain how their version is an improvement on mine. 

If I fail to solve a problem, I will ackownledge so in the specific file, and I will also be organizing the individual problems into each their own file, with notes and different methods of solving. They will also be sectioned into how they were solved (e.g. sliding window, heapsort, set).

## Repo Structure

Problems are grouped into folders by how they were solved. Each problem is one file named by its number and title:

```
<pattern>/<NNNN>-<problem-name>.cpp
e.g. two-pointers/0015-3sum.cpp
```

Each file has notes in a comment block at the top (thought process, complexity, comparison with other solutions), then the Brute / Better / Optimal solutions and a small `main()` that runs one example.

```bash
./run.sh two-pointers/0015-3sum.cpp
# or: g++ -std=c++17 -Wall two-pointers/0015-3sum.cpp -o sol && ./sol
```

## Progress: 9 / 75

✅ = solved · ❌ = attempted, failed · ⬜ = not started · 🔒 = LeetCode Premium

### Array
| # | Problem | Difficulty | Pattern | Status |
|---|---------|------------|---------|--------|
| 1 | [Two Sum](hash-map/0001-two-sum.cpp) | Easy | Hash Map | ✅ |
| 121 | Best Time to Buy and Sell Stock | Easy | | ⬜ |
| 217 | Contains Duplicate | Easy | | ⬜ |
| 238 | Product of Array Except Self | Medium | | ⬜ |
| 53 | Maximum Subarray | Medium | | ⬜ |
| 152 | Maximum Product Subarray | Medium | | ⬜ |
| 153 | Find Minimum in Rotated Sorted Array | Medium | | ⬜ |
| 33 | Search in Rotated Sorted Array | Medium | | ⬜ |
| 15 | [3Sum](two-pointers/0015-3sum.cpp) | Medium | Two Pointers | ✅ |
| 11 | [Container With Most Water](two-pointers/0011-container-with-most-water.cpp) | Medium | Two Pointers | ✅ |

### Binary
| # | Problem | Difficulty | Pattern | Status |
|---|---------|------------|---------|--------|
| 371 | Sum of Two Integers | Medium | | ⬜ |
| 191 | Number of 1 Bits | Easy | | ⬜ |
| 338 | Counting Bits | Easy | | ⬜ |
| 268 | Missing Number | Easy | | ⬜ |
| 190 | Reverse Bits | Easy | | ⬜ |

### Dynamic Programming
| # | Problem | Difficulty | Pattern | Status |
|---|---------|------------|---------|--------|
| 70 | Climbing Stairs | Easy | | ⬜ |
| 322 | Coin Change | Medium | | ⬜ |
| 300 | Longest Increasing Subsequence | Medium | | ⬜ |
| 1143 | Longest Common Subsequence | Medium | | ⬜ |
| 139 | Word Break | Medium | | ⬜ |
| 377 | Combination Sum IV | Medium | | ⬜ |
| 198 | House Robber | Medium | | ⬜ |
| 213 | House Robber II | Medium | | ⬜ |
| 91 | Decode Ways | Medium | | ⬜ |
| 62 | Unique Paths | Medium | | ⬜ |
| 55 | Jump Game | Medium | | ⬜ |

### Graph
| # | Problem | Difficulty | Pattern | Status |
|---|---------|------------|---------|--------|
| 133 | Clone Graph | Medium | | ⬜ |
| 207 | Course Schedule | Medium | | ⬜ |
| 417 | Pacific Atlantic Water Flow | Medium | | ⬜ |
| 200 | Number of Islands | Medium | | ⬜ |
| 128 | Longest Consecutive Sequence | Medium | | ⬜ |
| 269 | Alien Dictionary 🔒 | Hard | | ⬜ |
| 261 | Graph Valid Tree 🔒 | Medium | | ⬜ |
| 323 | Number of Connected Components in an Undirected Graph 🔒 | Medium | | ⬜ |

### Interval
| # | Problem | Difficulty | Pattern | Status |
|---|---------|------------|---------|--------|
| 57 | Insert Interval | Medium | | ⬜ |
| 56 | Merge Intervals | Medium | | ⬜ |
| 435 | Non-overlapping Intervals | Medium | | ⬜ |
| 252 | Meeting Rooms 🔒 | Easy | | ⬜ |
| 253 | Meeting Rooms II 🔒 | Medium | | ⬜ |

### Linked List
| # | Problem | Difficulty | Pattern | Status |
|---|---------|------------|---------|--------|
| 206 | Reverse Linked List | Easy | | ⬜ |
| 141 | Linked List Cycle | Easy | | ⬜ |
| 21 | [Merge Two Sorted Lists](linked-list/0021-merge-two-sorted-lists.cpp) | Easy | Linked List | ✅ |
| 23 | [Merge k Sorted Lists](heap/0023-merge-k-sorted-lists.cpp) | Hard | Heap | ✅ |
| 19 | [Remove Nth Node From End of List](linked-list/0019-remove-nth-node-from-end-of-list.cpp) | Medium | Linked List | ✅ |
| 143 | Reorder List | Medium | | ⬜ |

### Matrix
| # | Problem | Difficulty | Pattern | Status |
|---|---------|------------|---------|--------|
| 73 | Set Matrix Zeroes | Medium | | ⬜ |
| 54 | Spiral Matrix | Medium | | ⬜ |
| 48 | Rotate Image | Medium | | ⬜ |
| 79 | Word Search | Medium | | ⬜ |

### String
| # | Problem | Difficulty | Pattern | Status |
|---|---------|------------|---------|--------|
| 3 | [Longest Substring Without Repeating Characters](sliding-window/0003-longest-substring-without-repeating-characters.cpp) | Medium | Sliding Window | ✅ |
| 424 | Longest Repeating Character Replacement | Medium | | ⬜ |
| 76 | Minimum Window Substring | Hard | | ⬜ |
| 242 | Valid Anagram | Easy | | ⬜ |
| 49 | Group Anagrams | Medium | | ⬜ |
| 20 | [Valid Parentheses](stack/0020-valid-parentheses.cpp) | Easy | Stack | ✅ |
| 125 | Valid Palindrome | Easy | | ⬜ |
| 5 | [Longest Palindromic Substring](two-pointers/0005-longest-palindromic-substring.cpp) | Medium | Two Pointers | ✅ |
| 647 | Palindromic Substrings | Medium | | ⬜ |
| 271 | Encode and Decode Strings 🔒 | Medium | | ⬜ |

### Tree
| # | Problem | Difficulty | Pattern | Status |
|---|---------|------------|---------|--------|
| 104 | Maximum Depth of Binary Tree | Easy | | ⬜ |
| 100 | Same Tree | Easy | | ⬜ |
| 226 | Invert Binary Tree | Easy | | ⬜ |
| 124 | Binary Tree Maximum Path Sum | Hard | | ⬜ |
| 102 | Binary Tree Level Order Traversal | Medium | | ⬜ |
| 297 | Serialize and Deserialize Binary Tree | Hard | | ⬜ |
| 572 | Subtree of Another Tree | Easy | | ⬜ |
| 105 | Construct Binary Tree from Preorder and Inorder Traversal | Medium | | ⬜ |
| 98 | Validate Binary Search Tree | Medium | | ⬜ |
| 230 | Kth Smallest Element in a BST | Medium | | ⬜ |
| 235 | Lowest Common Ancestor of a Binary Search Tree | Medium | | ⬜ |
| 208 | Implement Trie (Prefix Tree) | Medium | | ⬜ |
| 211 | Design Add and Search Words Data Structure | Medium | | ⬜ |
| 212 | Word Search II | Hard | | ⬜ |

### Heap
| # | Problem | Difficulty | Pattern | Status |
|---|---------|------------|---------|--------|
| 347 | Top K Frequent Elements | Medium | | ⬜ |
| 295 | Find Median from Data Stream | Hard | | ⬜ |

<sub>Merge k Sorted Lists (#23) is listed under Linked List and also counts toward Heap in the original Blind 75.</sub>
