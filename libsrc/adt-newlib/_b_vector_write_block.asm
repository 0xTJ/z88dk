; size_t b_vector_write_block(void *src, size_t n, b_vector_t *v, size_t idx)

SECTION code_clib
SECTION code_string

MODULE _b_vector_write_block_sdcc
GLOBAL _b_vector_write_block
GLOBAL b_vector_write_block

defc _b_vector_write_block = b_vector_write_block

