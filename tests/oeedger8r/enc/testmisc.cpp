// Copyright (c) Microsoft Corporation. All rights reserved.
// Licensed under the MIT License.

#include "misc_t.c"

int8_t* get_enclave_mem_ptr()
{
    return (int8_t*)"hello world!";
}

void test_invalid_ptr(int8_t* p1, int8_t* p2)
{
    // This functions is never reached since invalid
    // pointers are passed in.
}
