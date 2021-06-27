/*Install valgrind and execute few sample program and evaluate the memory leak*/

#include<stdio.h>
#include<stdlib.h>
void func(void)
{
        int *x=malloc(10*sizeof(int));
        x[10]=0;
        /*Not free the assigned memory by malloc*/

}
int main(void)
{
        func();
        return 0;
}

/**************************OUTPUT********************
kandarp@build0:~/RAMA/ASSIGNMENT_23$ valgrind --tool=memcheck --leak-check=yes ./a.out
==9942== Memcheck, a memory error detector
==9942== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==9942== Using Valgrind-3.13.0 and LibVEX; rerun with -h for copyright info
==9942== Command: ./a.out
==9942==
==9942== Invalid write of size 4
==9942==    at 0x108668: func (in /home/kandarp/RAMA/ASSIGNMENT_23/a.out)
==9942==    by 0x108679: main (in /home/kandarp/RAMA/ASSIGNMENT_23/a.out)
==9942==  Address 0x522f068 is 0 bytes after a block of size 40 alloc'd
==9942==    at 0x4C31B0F: malloc (in /usr/lib/valgrind/vgpreload_memcheck-amd64-linux.so)
==9942==    by 0x10865B: func (in /home/kandarp/RAMA/ASSIGNMENT_23/a.out)
==9942==    by 0x108679: main (in /home/kandarp/RAMA/ASSIGNMENT_23/a.out)
==9942==
==9942==
==9942== HEAP SUMMARY:
==9942==     in use at exit: 40 bytes in 1 blocks
==9942==   total heap usage: 1 allocs, 0 frees, 40 bytes allocated
==9942==
==9942== 40 bytes in 1 blocks are definitely lost in loss record 1 of 1
==9942==    at 0x4C31B0F: malloc (in /usr/lib/valgrind/vgpreload_memcheck-amd64-linux.so)
==9942==    by 0x10865B: func (in /home/kandarp/RAMA/ASSIGNMENT_23/a.out)
==9942==    by 0x108679: main (in /home/kandarp/RAMA/ASSIGNMENT_23/a.out)
==9942==
==9942== LEAK SUMMARY:
==9942==    definitely lost: 40 bytes in 1 blocks
==9942==    indirectly lost: 0 bytes in 0 blocks
==9942==      possibly lost: 0 bytes in 0 blocks
==9942==    still reachable: 0 bytes in 0 blocks
==9942==         suppressed: 0 bytes in 0 blocks
==9942==
==9942== For counts of detected and suppressed errors, rerun with: -v
==9942== ERROR SUMMARY: 2 errors from 2 contexts (suppressed: 0 from 0)
***********************************************************************************************/

