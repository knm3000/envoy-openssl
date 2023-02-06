#include <openssl/mem.h>
#include <ossl/openssl/crypto.h>

// OPENSSL_free does nothing if |ptr| is NULL. Otherwise it zeros out the
// memory allocated at |ptr| and frees it.
void OPENSSL_free(void *ptr) {
  ossl_OPENSSL_free(ptr);
}

// OPENSSL_malloc acts like a regular |malloc|.
void *OPENSSL_malloc(size_t size) {
  return ossl_OPENSSL_malloc(size);
}

// OPENSSL_realloc returns a pointer to a buffer of |new_size| bytes that
// contains the contents of |ptr|. Unlike |realloc|, a new buffer is always
// allocated and the data at |ptr| is always wiped and freed.
void *OPENSSL_realloc(void *ptr, size_t new_size) {
  return ossl_OPENSSL_realloc(ptr, new_size);
}