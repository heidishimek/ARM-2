#include <stdio.h>
#include <stdint.h>

uint32_t get_bitseq_c(uint32_t num, int start, int end)
{
    uint32_t val;
    uint32_t len = end - start;     // sub r12, r2, r1
    len += 1;                       // add r12, r12, #1
    val = num >> start;             // lsr r3, r0, r1

    if (len != 32)                  // comp r12, #32
    {                               // bne
        end = 1;                    // mov r2, #1
        end = end << len;           // lsl r2, r2, r12
        end = end - 1;              // sub r2, r2, #1
    }

    val = val & end;                // and r3, r3, r2
    num = val;                      // mov r0, r3
}