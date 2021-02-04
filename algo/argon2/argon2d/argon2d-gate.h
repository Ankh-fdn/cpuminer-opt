#ifndef ARGON2D_GATE_H__
#define ARGON2D_GATE_H__

#include "algo-gate-api.h"
#include <stdint.h>

// 250: version = 0x10, m_cost = 250.
bool register_argon2d_250_algo( algo_gate_t* gate );

void argon2d_250_hash( void *state, const void *input );

int scanhash_argon2d_250( struct work *work, uint32_t max_nonce,
                    uint64_t *hashes_done, struct thr_info *mythr );

// 500: version = 0x10, m_cost = 500.
bool register_argon2d_500_algo( algo_gate_t* gate );

void argon2d_500_hash( void *state, const void *input );

int scanhash_argon2d_500( struct work *work, uint32_t max_nonce,
                    uint64_t *hashes_done, struct thr_info *mythr );


// 4096: version = 0x13, m_cost = 4096.
bool register_argon2d_4096_algo( algo_gate_t* gate );

int scanhash_argon2d_4096( struct work *work, uint32_t max_nonce,
                    uint64_t *hashes_done, struct thr_info *mythr );

// 500: version = 0x10, m_cost = 500.
bool register_argon2d_16000_algo( algo_gate_t* gate );

void argon2d_16000_hash( void *state, const void *input );

int scanhash_argon2d_16000( struct work *work, uint32_t max_nonce,
                    uint64_t *hashes_done, struct thr_info *mythr );

#endif
