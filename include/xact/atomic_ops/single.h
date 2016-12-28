#pragma once
#include <cstdint>

namespace xact { namespace atomic_ops {

bool casU64S(uint64_t *atomTarget, uint64_t expected, uint64_t desired,
    uint64_t *actual = nullptr);
void storeU64S(uint64_t *atomTarget, uint64_t desired);
uint64_t loadU64S(uint64_t *atomTarget);
uint64_t fetchAddU64S(uint64_t *atomTarget, uint64_t addBy);
uint64_t fetchSubU64S(uint64_t *atomTarget, uint64_t subBy);


}} // xact::atomic_ops
