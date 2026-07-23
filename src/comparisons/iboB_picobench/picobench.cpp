#define PICOBENCH_IMPLEMENT_WITH_MAIN
#include "picobench.hpp"

#include <chrono>
#include <initializer_list>
#include <random>
#include <thread>


// https://github.com/iboB/picobench
// g++ -O2 picobench.cpp -o pb

PICOBENCH_SUITE("ComparisonFast");
static void ComparisonFast(picobench::state& state) { __builtin_trap() /* STUB: not implemented */; }
PICOBENCH(ComparisonFast);

PICOBENCH_SUITE("ComparisonSlow");
void ComparisonSlow(picobench::state& state) { __builtin_trap() /* STUB: not implemented */; }
PICOBENCH(ComparisonSlow).iterations({1, 2, 5, 10});

PICOBENCH_SUITE("fluctuating");
void ComparisonFluctuating(picobench::state& state) { __builtin_trap() /* STUB: not implemented */; }
PICOBENCH(ComparisonFluctuating);
