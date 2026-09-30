# Music Hashing Assignment

## Problem Statement

A music application stores the following song IDs:

`105, 210, 315, 420, 525, 630, 735, 840`

### Tasks

1. Implement a hash table using the Division Method and insert the given song IDs.
2. Display the table after each insertion and identify collisions.
3. Search for IDs using Hashing and Linear Search.
4. Record the number of operations/comparisons for each search.
5. Analyse the effect of collisions on search performance.
6. Calculate the load factor.
7. Compare observed performance with theoretical complexity.
8. Determine whether hashing is suitable for the application.

## Algorithm Used

Hash function:

`h(k) = k % 10`

Hash table size:

`10`

Collision resolution:

`Linear Probing`

## Hash Indices

| Song ID | Hash Index |
|---:|---:|
| 105 | 5 |
| 210 | 0 |
| 315 | 5 |
| 420 | 0 |
| 525 | 5 |
| 630 | 0 |
| 735 | 5 |
| 840 | 0 |

The repeated indices cause collisions.

## Final Hash Table

| Index | Value |
|---:|---:|
| 0 | 210 |
| 1 | 420 |
| 2 | 630 |
| 3 | 840 |
| 4 | EMPTY |
| 5 | 105 |
| 6 | 315 |
| 7 | 525 |
| 8 | 735 |
| 9 | EMPTY |

## Load Factor

`α = n / m`

`α = 8 / 10 = 0.8`

Therefore, the load factor is **80%**.

## Search Results

| Search ID | Hashing Comparisons | Linear Search Comparisons |
|---:|---:|---:|
| 105 | 1 | 1 |
| 420 | 2 | 4 |
| 840 | 4 | 8 |
| 999 | 4 | 8 |

## Complexity

### Hashing

- Average search: **O(1)**
- Worst-case search: **O(n)**
- Average insertion: **O(1)**
- Worst-case insertion: **O(n)**
- Space: **O(m)**

### Linear Search

- Best case: **O(1)**
- Average case: **O(n)**
- Worst case: **O(n)**
- Additional space: **O(1)**

## Effect of Collisions

The supplied IDs are highly clustered under the Division Method. Six of the eight insertions encounter collisions. Linear probing creates clusters, which increases the number of comparisons required during searches.

Despite these collisions, hashing required fewer comparisons than linear search for the tested searches except for the first element, where both required one comparison.

## Final Conclusion

Hashing is suitable for a music application when fast song-ID lookup is required, because its average search complexity is O(1), compared with O(n) for linear search.

However, this experiment shows that a poor key distribution can create many collisions and reduce practical performance. A larger table size and/or a better hash function would distribute song IDs more evenly and improve performance.

## Files

- `hash_search.c` - C source code
- `input.txt` - Input data
- `output.txt` - Program output
- `trace_table.md` - Insertion and search trace tables
- `complexity_analysis.md` - Complexity and load-factor analysis
- `comparison_table.md` - Hashing vs linear search comparison
- `README.md` - Complete assignment summary

## Execution

Compile:

```bash
gcc hash_search.c -o hash_search
```

Run:

```bash
./hash_search
```

On Windows:

```bash
gcc hash_search.c -o hash_search.exe
hash_search.exe
```
