#include <stdio.h>

char my_program[] =
        "int fib(int n)\n"
        "{\n"
        "    if (n <= 2)\n"
        "        return 1;\n"
        "    else\n"
        "        return fib(n-1) + fib(n-2);\n"
        "}\n"
        "\n"
        "int foo(int n)\n"
        "{\n"
        "    printf(\"Bye!  World!\\n\");\n"
        "    printf(\"fib(%d) = %d\\n\", n, fib(n));\n"
        "    printf(\"add(%d, %d) = %d\\n\", n, 2 * n, add(n, 2 * n));\n"
        "    return 0;\n"
        "}\n";

int main() {
   // printf() displays the string inside quotation
   printf("Hello!! World!");
   return 0;
}
