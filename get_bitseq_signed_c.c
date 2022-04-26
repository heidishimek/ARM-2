#include <stdio.h>
#include <stdint.h>

int get_bitseq_signed_c(uint32_t num, int start, int end)
{
    int shift_amt = end - start;                // sub r4, r2, r1
    shift_amt = shift_amt + 1;                  // add r4, r4, #1
    int amt = 32;                               // mov r12, #32
    shift_amt = amt - shift_amt;                // sub r4, r12, r4

    amt = get_bitseq_c(num, start, end);        // bl get_bitseq_s
    amt = amt << shift_amt;                     // lsl r0, r0, r4
    amt = amt >> shift_amt;                     // asr r0, r0, r4
    return amt;
}