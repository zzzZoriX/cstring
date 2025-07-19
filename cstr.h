/**
 * @file cstr.h
 * @author anyway
 * @brief special for C string-library
 * @version 0.1
 * @date 2025-07-19
 * 
 * @copyright Copyright (c) 2025
 * 
 */


#ifndef CSTR_H
#define CSTR_H

#include <string.h>
#include <stdlib.h>

typedef struct
cstring {
    size_t size;
    char* data;
} cstring;

#endif