//
//  main.c
//  messing_around_with_c
//
//  Created by Stephen Smithstone on 06/16/12.
//  Copyright (c) 2012 __MyCompanyName__. All rights reserved.
//

#include <stdio.h>


void function_to_move_pointer_to_another_value_and_leave_initial_value_as_was(int **intPtr);
void function_to_move_pointer_to_change_the_value_that_the_pointer_is_pointing_to(int *intPtr);
void function_one();
void function_two();

void function_to_move_pointer_to_another_value_and_leave_initial_value_as_was(int **intPtr) {

    printf("value of intptr in function before change %d\n", *(*intPtr));
    int a = 1000;
    (*intPtr) = &a;
    printf("value of intptr in function after change %d\n", *(*intPtr));
}


void function_to_move_pointer_to_change_the_value_that_the_pointer_is_pointing_to(int *intPtr) {
    printf("value of intPtr top of before change function %d\n", *(intPtr));
    (*intPtr) = 99;
    printf("value of intPtr bottom of after change function %d\n", *(intPtr));
}



void function_one() {
    int a = 10;
    int *aIntPtr = &a;

    printf("a in main %d\n", a);
    printf("aIntPtr pointing to a in main %d\n", *aIntPtr);
    function_to_move_pointer_to_change_the_value_that_the_pointer_is_pointing_to(aIntPtr);
    printf("aIntPtr pointing to a in main %d\n", *aIntPtr);
    printf("a value after function call in main %d\n", a);
}


void function_two() {
    int b = 11;
    int *bIntPtr = &b;

    printf("b in main %d\n", b);
    printf("bIntPtr pointing to b in main %d\n", *bIntPtr);
    function_to_move_pointer_to_another_value_and_leave_initial_value_as_was(&bIntPtr);
    printf("bIntPtr pointing to b in main %d\n", *bIntPtr);
    printf("b in main after pointer function %d\n", b);
}

int main(int argc, const char *argv[]) {

    function_one();
    function_two();
    return 0;
}
