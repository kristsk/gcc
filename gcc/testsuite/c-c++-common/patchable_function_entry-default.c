/* { dg-do compile { target { ! nvptx*-*-* } } } */
/* { dg-options "-O2 -fpatchable-function-entry=3,1" } */
/* { dg-final { scan-assembler-times "nop" 3 } } */

extern int a;

/* Nothing declared must not mean anything.  */
int f3 (void);

/* F3 should get a default-sized NOP area.  */
int
__attribute__((noinline))
f3 (void)
{
  return 5*a;
}
