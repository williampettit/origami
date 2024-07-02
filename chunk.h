#ifndef origami_chunk_h
#define origami_chunk_h

#include "common.h"
#include "value.h"

typedef enum {
  OP_CONSTANT,
  OP_RETURN,
} op_code_e;

typedef struct {
  int count;
  int capacity;
  uint8_t* code;
  int* lines;
  value_array_t constants;
} chunk_t;

void chunk_init(chunk_t* chunk);
void chunk_free(chunk_t* chunk);
void chunk_write(chunk_t* chunk, uint8_t byte, int line);
int chunk_add_constant(chunk_t* chunk, value_t value);

#endif  // origami_chunk_h