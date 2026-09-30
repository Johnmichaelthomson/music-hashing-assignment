# Comparison Table

| Feature | Hashing with Linear Probing | Linear Search |
|---|---|---|
| Data structure | Hash table | Array/List |
| Average search complexity | O(1) | O(n) |
| Worst-case search complexity | O(n) | O(n) |
| Extra space | O(m) | O(1) |
| Search 105 | 1 comparison | 1 comparison |
| Search 420 | 2 comparisons | 4 comparisons |
| Search 840 | 4 comparisons | 8 comparisons |
| Search 999 | 4 comparisons | 8 comparisons |
| Load factor | 0.8 | Not applicable |
| Collision issue | Yes | No |

## Observation

Hashing requires fewer comparisons for most of the tested searches. However, the chosen keys create heavy collisions because many IDs map initially to indices 0 and 5.

A better hash-table size and/or a better hash function would distribute the IDs more evenly.
