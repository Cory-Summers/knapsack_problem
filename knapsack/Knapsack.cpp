#include "knapsack.hpp"
#include <iostream>
constexpr double k_fitness_needed = 0.99995;
Knapsack::Knapsack(int const argc, char* argv[])
  : m_pop_size(std::strtoul(argv[1], nullptr, 0))
  , m_max_gen(std::strtoul(argv[2], nullptr, 0))
  , m_tourn_size(std::strtoul(argv[3], nullptr, 0))
  , m_xover(std::strtod(argv[4], nullptr))
  , m_fitness(0.0)
{
  LoadWeights();
}

int Knapsack::Execute()
{
  return 0;
}

void Knapsack::LoadWeights()
{
  std::stringstream ss;
  ss << std::cin.rdbuf();
  m_weights << ss;
}
