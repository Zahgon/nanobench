// g++ -O2 asymptotes-google.cpp -isystem ~/git/benchmark/include/ -L/home/martinus/git/benchmark/build/src -lbenchmark -lpthread -o
// asymptotes
#include <benchmark/benchmark.h>

#include <set>

static void BM_StringCreation(benchmark::State& state) { __builtin_trap() /* STUB: not implemented */; }
// Register the function as a benchmark
BENCHMARK(BM_StringCreation);

// Define another benchmark
static void BM_StringCopy(benchmark::State& state) { __builtin_trap() /* STUB: not implemented */; }
BENCHMARK(BM_StringCopy);

static void BM_set(benchmark::State& state) { __builtin_trap() /* STUB: not implemented */; }
BENCHMARK(BM_set)->RangeMultiplier(2)->Range(1 << 10, 1 << 18)->Complexity();

static void BM_StringCompare(benchmark::State& state) { __builtin_trap() /* STUB: not implemented */; }
BENCHMARK(BM_StringCompare)->RangeMultiplier(2)->Range(1 << 5, 1 << 22)->Complexity();

BENCHMARK_MAIN();
