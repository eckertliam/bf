#include <stdio.h>
int main() {
char tape[10000];
char *ptr = tape;
ptr++;
++*ptr;
++*ptr;
++*ptr;
++*ptr;
++*ptr;
++*ptr;
++*ptr;
++*ptr;
while(*ptr) {
ptr--;
++*ptr;
++*ptr;
++*ptr;
++*ptr;
++*ptr;
++*ptr;
++*ptr;
++*ptr;
++*ptr;
ptr++;
--*ptr;
}
ptr--;
putchar(*ptr);
ptr++;
++*ptr;
++*ptr;
++*ptr;
++*ptr;
while(*ptr) {
ptr--;
++*ptr;
++*ptr;
++*ptr;
++*ptr;
++*ptr;
++*ptr;
++*ptr;
ptr++;
--*ptr;
}
ptr--;
++*ptr;
putchar(*ptr);
++*ptr;
++*ptr;
++*ptr;
++*ptr;
++*ptr;
++*ptr;
++*ptr;
putchar(*ptr);
putchar(*ptr);
++*ptr;
++*ptr;
++*ptr;
putchar(*ptr);
ptr++;
ptr++;
++*ptr;
++*ptr;
++*ptr;
++*ptr;
++*ptr;
++*ptr;
while(*ptr) {
ptr--;
++*ptr;
++*ptr;
++*ptr;
++*ptr;
++*ptr;
++*ptr;
++*ptr;
ptr++;
--*ptr;
}
ptr--;
++*ptr;
++*ptr;
putchar(*ptr);
--*ptr;
--*ptr;
--*ptr;
--*ptr;
--*ptr;
--*ptr;
--*ptr;
--*ptr;
--*ptr;
--*ptr;
--*ptr;
--*ptr;
putchar(*ptr);
ptr++;
++*ptr;
++*ptr;
++*ptr;
++*ptr;
++*ptr;
++*ptr;
while(*ptr) {
ptr--;
++*ptr;
++*ptr;
++*ptr;
++*ptr;
++*ptr;
++*ptr;
++*ptr;
++*ptr;
++*ptr;
ptr++;
--*ptr;
}
ptr--;
++*ptr;
putchar(*ptr);
ptr--;
putchar(*ptr);
++*ptr;
++*ptr;
++*ptr;
putchar(*ptr);
--*ptr;
--*ptr;
--*ptr;
--*ptr;
--*ptr;
--*ptr;
putchar(*ptr);
--*ptr;
--*ptr;
--*ptr;
--*ptr;
--*ptr;
--*ptr;
--*ptr;
--*ptr;
putchar(*ptr);
ptr++;
ptr++;
ptr++;
++*ptr;
++*ptr;
++*ptr;
++*ptr;
while(*ptr) {
ptr--;
++*ptr;
++*ptr;
++*ptr;
++*ptr;
++*ptr;
++*ptr;
++*ptr;
++*ptr;
ptr++;
--*ptr;
}
ptr--;
++*ptr;
putchar(*ptr);
}