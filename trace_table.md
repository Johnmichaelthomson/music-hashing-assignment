# Trace Table

## Hash Table Insertion

Hash table size = 10  
Hash function = `h(k) = k % 10`  
Collision resolution = Linear Probing

| Step | Song ID | Hash Index | Collision | Probe Sequence | Final Index |
|---:|---:|---:|:---:|---|---:|
| 1 | 105 | 5 | No | 5 | 5 |
| 2 | 210 | 0 | No | 0 | 0 |
| 3 | 315 | 5 | Yes | 5 -> 6 | 6 |
| 4 | 420 | 0 | Yes | 0 -> 1 | 1 |
| 5 | 525 | 5 | Yes | 5 -> 6 -> 7 | 7 |
| 6 | 630 | 0 | Yes | 0 -> 1 -> 2 | 2 |
| 7 | 735 | 5 | Yes | 5 -> 6 -> 7 -> 8 | 8 |
| 8 | 840 | 0 | Yes | 0 -> 1 -> 2 -> 3 | 3 |

## Final Table

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

## Search Trace

| Search ID | Hash Index | Hashing Comparisons | Hash Result | Linear Comparisons | Linear Result |
|---:|---:|---:|---:|---:|---|
| 105 | 5 | 1 | Found | 1 | Found |
| 420 | 0 | 2 | Found | 4 | Found |
| 840 | 0 | 4 | Found | 8 | Found |
| 999 | 9 | 4 | Not Found | 8 | Not Found |
