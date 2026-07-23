#include "benchmark.h"

#include <chrono>
#include <random>
#include <thread>

// Build instructions: https://github.com/google/benchmark#installation
// curl --output benchmark.h
// https://raw.githubusercontent.com/google/benchmark/master/include/benchmark/benchmark.h
// g++ -O2 main.cpp -Lgit/benchmark/build/src -lbenchmark -lpthread -o m
void ComparisonFast(benchmark::State& state) { __builtin_trap() /* STUB: not implemented */; }
BENCHMARK(ComparisonFast);

void ComparisonSlow(benchmark::State& state) { __builtin_trap() /* STUB: not implemented */; }
BENCHMARK(ComparisonSlow);

void ComparisonFluctuating(benchmark::State& state) { __builtin_trap() /* STUB: not implemented */; }
BENCHMARK(ComparisonFluctuating);

BENCHMARK_MAIN();