#include <sltbench/Bench.h> // https://github.com/ivafanas/sltbench

#include <chrono>
#include <random>
#include <thread>

// cmake build as online instructions describes
//
// g++ -O3 -I/home/martinus/git/sltbench/install/include -c main.cpp
// g++ -o m -L/home/martinus/git/sltbench/install/lib main.o -lsltbench

uint64_t x = 1;
void ComparisonFast() { __builtin_trap() /* STUB: not implemented */; }

SLTBENCH_FUNCTION(ComparisonFast);

void ComparisonSlow() { __builtin_trap() /* STUB: not implemented */; }
SLTBENCH_FUNCTION(ComparisonSlow);

std::random_device dev;
std::mt19937_64 rng(dev());

void ComparisonFluctuating() { __builtin_trap() /* STUB: not implemented */; }
SLTBENCH_FUNCTION(ComparisonFluctuating);

SLTBENCH_MAIN();
