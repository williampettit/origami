#include "chunk.h"
#include "common.h"
#include "debug.h"
#include "version.h"

int
main(int argc, const char* argv[])
{
  (void)argc;
  (void)argv;

  printf("origami: v%s\n", ORIGAMI_VERSION);

  chunk_t chunk;
  chunk_init(&chunk);

  int constant = chunk_add_constant(&chunk, 1.2);
  chunk_write(&chunk, OP_CONSTANT, 123);
  chunk_write(&chunk, constant, 123);

  chunk_write(&chunk, OP_RETURN, 123);
  chunk_disassemble(&chunk, "test");
  chunk_free(&chunk);

  return EXIT_SUCCESS;
}