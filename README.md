# Unexpected Integer Division Result in C
This example demonstrates a common error in C programming related to integer division.  When dividing two integers, C performs integer division, discarding any fractional part of the result.  This can lead to unexpected behavior if you're not aware of it. The bug.c file demonstrates this issue, while bugSolution.c shows the correct way to handle such cases.

**To Reproduce:**
1. Compile and run `bug.c`
2. Observe the output. It will be 2, not 2.0.

**Solution:**
To get a floating-point result, cast at least one of the operands to a floating-point type (e.g., `float` or `double`).