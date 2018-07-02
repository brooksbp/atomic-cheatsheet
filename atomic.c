#include <stdint.h>

static void fence_relaxed(void) { __atomic_thread_fence(__ATOMIC_RELAXED); }
static void fence_consume(void) { __atomic_thread_fence(__ATOMIC_CONSUME); }
static void fence_acquire(void) { __atomic_thread_fence(__ATOMIC_ACQUIRE); }
static void fence_release(void) { __atomic_thread_fence(__ATOMIC_RELEASE); }
static void fence_acq_rel(void) { __atomic_thread_fence(__ATOMIC_ACQ_REL); }
static void fence_seq_cst(void) { __atomic_thread_fence(__ATOMIC_SEQ_CST); }

static uint64_t load_u64_relaxed(uint64_t *addr)
{
	return __atomic_load_n(addr, __ATOMIC_RELAXED);
}
static uint64_t load_u64_seq_cst(uint64_t *addr)
{
	return __atomic_load_n(addr, __ATOMIC_SEQ_CST);
}
static uint64_t load_u64_acquire(uint64_t *addr)
{
	return __atomic_load_n(addr, __ATOMIC_ACQUIRE);
}
static uint64_t load_u64_consume(uint64_t *addr)
{
	return __atomic_load_n(addr, __ATOMIC_CONSUME);
}

static void store_u64_relaxed(uint64_t *addr, uint64_t val)
{
	__atomic_store_n(addr, val, __ATOMIC_RELAXED);
}
static void store_u64_seq_cst(uint64_t *addr, uint64_t val)
{
	__atomic_store_n(addr, val, __ATOMIC_SEQ_CST);
}
static void store_u64_release(uint64_t *addr, uint64_t val)
{
	__atomic_store_n(addr, val, __ATOMIC_RELEASE);
}

int main(void)
{
	return 0;
}
