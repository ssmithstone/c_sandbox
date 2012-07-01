
#include <stdio.h>


void function_to_move_pointer_to_another_value_and_leave_initial_value_as_was(int **intPtr);
void function_to_move_pointer_to_change_the_value_that_the_pointer_is_pointing_to(int *intPtr);
void function_one();
void function_two();

void function_to_move_pointer_to_another_value_and_leave_initial_value_as_was(int **intPtr) {

    printf("\t\tmoving pointer value to another value\n");
    printf("\t\tvalue of intPtr in function before change %d\n", *(*intPtr));
    int a = 1000;
    (*intPtr) = &a;
    printf("\t\tvalue of intPtr in function after change %d\n", *(*intPtr));
}


void function_to_move_pointer_to_change_the_value_that_the_pointer_is_pointing_to(int *intPtr) {
    printf("\t\tChannging value that is being pointed to\n");
    printf("\t\tvalue of intPtr top of before change function %d\n", *(intPtr));
    (*intPtr) = 99;
    printf("\t\tvalue of intPtr bottom of after change function %d\n", *(intPtr));
}



void function_one() {

    int a = 10;
    int *aIntPtr = &a;
    printf("\nGoing to change the value of the int via the pointer\n");
    printf("\ta in main %d\n", a);
    printf("\ta memory in main before pointer function %p\n", &a);
    printf("\taIntPtr pointing to a in main %d\n", *aIntPtr);
    printf("\taIntPtr pointing to memory in main %p\n", aIntPtr);
    function_to_move_pointer_to_change_the_value_that_the_pointer_is_pointing_to(aIntPtr);
    printf("\taIntPtr pointing to a in main %d\n", *aIntPtr);
    printf("\taIntPtr pointing to memory in main %p\n", aIntPtr);
    printf("\ta value after function call in main %d\n", a);
    printf("\ta memory in main after pointer function %p\n", &a);

}


void function_two() {
    int b = 11;
    int *bIntPtr = &b;
    printf("\nGoing to change the value of the using the pointer but leave the value of var alone\n");

    printf("\tb in main %d\n", b);
    printf("\tb memory in main before pointer function %p\n", &b);
    printf("\tbIntPtr pointing to b in main %d\n", *bIntPtr);
    printf("\tbIntPtr pointing to memory in main %p\n", bIntPtr);
    function_to_move_pointer_to_another_value_and_leave_initial_value_as_was(&bIntPtr);
    printf("\tbIntPtr pointing to b in main %d\n", *bIntPtr);
    printf("\tbIntPtr pointing to memory in main %p\n", bIntPtr);
    printf("\tb in main after pointer function %d\n", b);
    printf("\tb memory in main after pointer function %p\n", &b);
}

void datatypes_ints(){
    int base10 = 17;
    int base8 = 0127;
    int base16 = 0x2F;
    printf("base 10 = %d\n" , base10);
    printf("base 8 = %d\n" , base8);
    printf("base 16 = %d\n" , base16);
}

int main(int argc, const char *argv[]) {

    datatypes_ints();
//    function_one();
//    function_two();
    return 0;
}
