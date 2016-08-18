#include <cstdint>
#include <cstring>
#include "ul_prime.h"

int create_sign_fs64(const char *psrc, int slen, uint32_t *sign1,
                     uint32_t *sign2) {
  if (slen <= 0) {
    return -1;
  }
  *sign1 = 0;
  *sign2 = 0;
  if (slen <= 4) {
    memcpy(sign1, psrc, slen);
    return 0;
  } else if (slen <= 8) {
    memcpy(sign1, psrc, 4);
    memcpy(sign2, psrc + 4, slen - 4);
    return 0;
  } else {
    *sign1 = getsigns_24_1(psrc, slen);
    *sign2 = getsigns_24_2(psrc, slen);
    return 0;
  }
}

int create_sign_fs64(const char *psrc, int slen, uint64_t *sign) {
  uint32_t sign1 = 0;
  uint32_t sign2 = 0;
  if (create_sign_fs64(psrc, slen, &sign1, &sign2) != 0) {
    return -1;
  }
  *sign = ((uint64_t)sign1) << 32 | sign2;
  return 0;
}
