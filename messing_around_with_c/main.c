//
//  main.c
//  messing_around_with_c
//
//  Created by Stephen Smithstone on 06/16/12.
//  Copyright (c) 2012 __MyCompanyName__. All rights reserved.
//

#include <stdio.h>


void function_to_mess_with_pointers(int **intPtr);

void function_to_mess_with_pointers( int ** intPtr){

    printf("value of intptr in function %d\n" , *(*intPtr));
    int newint = 1000;
    (*intPtr) = &newint;
}

void function_to_mess_with_pointer_to_change_the_value_that_the_pointer_is_pointing_to(int * intptr ){
    printf("value of intptr in function %d\n" , *(intptr));
    (*intptr) = 99;
    printf("value of intptr in function %d\n" , *(intptr));
}



int main(int argc, const char * argv[])
{

    int a = 10;
    int *intptr = &a;

    printf("a in main %d\n" , a);
    printf("intptr pointing to a in main %d\n" , *intptr);
//    function_to_mess_with_pointers(&intptr);

//    printf("intptr value after function call in main %d\n" , *intptr);

    function_to_mess_with_pointer_to_change_the_value_that_the_pointer_is_pointing_to(intptr);
    printf("a value after function call in main %d\n" , a);

    return 0;
}
