# Sorting Algorithms

1. **Insertion Sort**
2. **Quick Sort** (with Lomuto Partitioning Scheme)

## 1. Insertion Sort

### Description

The **Insertion Sort** algorithm sorts an array of integers in ascending order by repeatedly 
taking an element from the unsorted part and inserting it into the correct position in 
the sorted part.

### Compilation

To compile the program, run the following command:

```bash
gcc -Wall -Wextra -Werror -pedantic -std=gnu89 2-main.c 2-insertion_sort.c print_array.c -o insertion
```

### Execution

Once compiled, you can run the program using the following command:

```bash
./insertion
```

### Example Output

For an input array `{19, 48, 99, 71, 13, 52, 96, 73, 86, 7}`, the expected output is as follows:

```
Initial array:
19, 48, 99, 71, 13, 52, 96, 73, 86, 7

Step-by-step output showing the array after each swap:
19, 48, 99, 71, 13, 52, 96, 73, 86, 7
19, 48, 71, 99, 13, 52, 96, 73, 86, 7
...
7, 13, 19, 48, 52, 71, 73, 86, 96, 99

Sorted array:
7, 13, 19, 48, 52, 71, 73, 86, 96, 99
```

### Time Complexity

- **Best Case**: O(n)
- **Average Case**: O(n²)
- **Worst Case**: O(n²)

---

## 2. Quick Sort (Lomuto Partitioning Scheme)

### Description

The **Quick Sort** algorithm is a divide-and-conquer algorithm that sorts an array by selecting a pivot and partitioning the array such that elements smaller than the pivot go to its left and elements greater go to its right. The Lomuto partitioning scheme is used in this implementation, where the pivot is always the last element of the partition.

### Compilation

To compile the program, run the following command:

```bash
gcc -Wall -Wextra -Werror -pedantic -std=gnu89 3-main.c 3-quick_sort.c print_array.c -o quick
```

### Execution

Once compiled, you can run the program using the following command:

```bash
./quick
```

### Example Output

For an input array `{19, 48, 99, 71, 13, 52, 96, 73, 86, 7}`, the expected output is:

```
Initial array:
19, 48, 99, 71, 13, 52, 96, 73, 86, 7

Step-by-step output showing the array after each swap:
7, 48, 99, 71, 13, 52, 96, 73, 86, 19
7, 13, 99, 71, 48, 52, 96, 73, 86, 19
...
7, 13, 19, 48, 52, 71, 73, 86, 96, 99

Sorted array:
7, 13, 19, 48, 52, 71, 73, 86, 96, 99
```

### Time Complexity

- **Best Case**: O(n log n)
- **Average Case**: O(n log n)
- **Worst Case**: O(n²)

---
