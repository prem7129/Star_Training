#include <stdio.h>

// 1. Basic Function Pointer
int add(int a, int b) {
    return a + b;
}
void demo_basic_pointer() {
    int (*funcPtr)(int, int) = add;
    printf("\n[1] Basic Function Pointer:\n");
    printf("Result: %d\n", funcPtr(3, 4));
    printf("Function Address: %p\n", (void*)funcPtr);
}

// 2. Typedef for Function Pointer
typedef int (*Operation)(int, int);
int multiply(int a, int b) {
    return a * b;
}
void demo_typedef_pointer() {
    Operation op = multiply;
    printf("\n[2] Typedef Function Pointer:\n");
    printf("Result: %d\n", op(5, 6));
    printf("Function Address: %p\n", (void*)op);
}

// 3. Array of Function Pointers
int sub(int a, int b) { return a - b; }
char mul(int a, int b) { return a * b; }
void demo_array_of_pointers() {
    int (*operations[3])(int, int) = {add, sub, mul};
    printf("\n[3] Array of Function Pointers:\n");
    for (int i = 0; i < 3; i++) {
       
        printf("Function %d Address: %p\n", i, (void*)operations[i]);
    }
}

// 4. Callback with Function Pointer
void greet(int id) {
    printf("Hello from callback! ID: %d\n", id);
}
void process(int x, void (*callback)(int)) {
    printf("Processing value: %d\n", x);
    callback(x);
}
void demo_callback() {
    printf("\n[4] Callback with Function Pointer:\n");
    process(42, greet);
    printf("Callback Address: %p\n", (void*)greet);
}

// 5. Returning a Function Pointer
int (*getOperation())(int, int) {
    return add;
}
void demo_returning_pointer() {
    int (*op)(int, int) = getOperation();
    printf("\n[5] Returning Function Pointer:\n");
    printf("Result: %d\n", op(7, 3));
    printf("Returned Function Address: %p\n", (void*)op);
}

int main() {
    demo_basic_pointer();
    demo_typedef_pointer();
    demo_array_of_pointers();
    demo_callback();
    demo_returning_pointer();
    return 0;
}
