#ifdef MTX_DNS_H

#include <mtx.h>

struct mtx {
  real* v;
  uint32_t n;
};

struct mtx* mtx_new(uint32_t n);
struct mtx* mtx_rnd(uint32_t n, uint32_t u);
struct mtx* mtx_seq(uint32_t n);
struct mtx* mtx_sequ(uint32_t n);

void mtx_cput(struct mtx* a);

void mtx_mmlt(struct mtx* a, struct mtx* b, struct mtx* c);
void mtx_vmlt(struct mtx* a, struct vec* b, struct vec* c);
void mtx_norm(struct mtx* a, real* r);

#endif  // MTX_DNS_H
