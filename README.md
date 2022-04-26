# ARM ASSEMBLY

ARM assembly language & C implementations of the below problems. Prints the results to ensure that both the C implementation and the ARM implementation compute the correct answer.

### get_bitseq
Given a 32-bit unsigned integer, extract a sequence of bits and return as an unsigned integer. Bits are numbered from 0 at the least-significant place to 31 at the most-significant place.

```bash
$ ./get_bitseq 94117 12 15 
C: 6
Asm: 6
$./get_bitseq 94117 4 7
C: 10
Asm: 10
```

### get_bitseq_signed 
Given a 32-bit unsigned integer, extract a sequence of bits and return as a signed integer.

```bash
$ ./get_bitseq_signed 94117 12 15 
C: 6
Asm: 6
$./get_bitseq_signed 94117 4 7
C: -6
Asm: -6
```

### merge
Given the array length followed by an array containing two sub-arrays in sorted order, merge combines the sub-arrays.

```bash
$./merge 6 1 3 5 2 4 6
C: 1 2 3 4 5 6
Asm: 1 2 3 4 5 6
```

### merge_sort 
Given the array length followed by array values, merge_sort recursively sorts the array in ascending order.

```bash
$ ./merge_sort 6 6 4 1 2 5 3
C: 1 2 3 4 5 6
Asm: 1 2 3 4 5 6
```
