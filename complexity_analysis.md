# Complexity Analysis

## Hashing

For a hash table using the Division Method with linear probing:

- Average insertion: **O(1)**
- Average successful search: **O(1)**
- Average unsuccessful search: **O(1)** when the load factor is controlled
- Worst-case insertion: **O(n)**
- Worst-case search: **O(n)**
- Space complexity: **O(m)**, where `m` is the table size

The theoretical O(1) average performance depends on a good hash distribution and a suitable load factor.

## Linear Search

- Best-case search: **O(1)**
- Average-case search: **O(n)**
- Worst-case search: **O(n)**
- Space complexity: **O(1)** additional space

## Load Factor

Number of stored elements:

`n = 8`

Hash table size:

`m = 10`

Therefore:

`α = n / m = 8 / 10 = 0.8`

The load factor is **0.8 or 80%**.

## Effect of Collisions

The given song IDs produce only two initial hash indices:

- IDs ending in 0 -> index 0
- IDs ending in 5 -> index 5

Therefore, 6 of the 8 insertions experience collisions.

Linear probing resolves these collisions by checking the next available table position. As the clusters grow, the number of comparisons required for search also increases.

For example, searching for 840 requires 4 hash-table comparisons, whereas linear search requires 8 comparisons.

Thus, collisions reduce the practical advantage of hashing, although hashing still performs fewer comparisons than linear search for the tested searches.
