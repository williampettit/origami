#ifndef origami_value_h
#define origami_value_h

#include "common.h"

typedef double value_t;

typedef struct {
  int capacity;
  int count;
  value_t* values;
} value_array_t;


void value_array_init(value_array_t* array);
void value_array_write(value_array_t* array, value_t value);
void value_array_free(value_array_t* array);
void value_print(value_t value);

#endif  // origami_value_h
