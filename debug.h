#ifndef origami_debug_h
#define origami_debug_h

#include "chunk.h"

void chunk_disassemble(chunk_t* chunk, const char* name);
int disassemble_instruction(chunk_t* chunk, int offset);

#endif  // origami_debug_h