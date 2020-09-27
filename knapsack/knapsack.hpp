#pragma once
#include <string>

#include "weights-class.hpp"
class Knapsack
{
public:
  Knapsack(const int, char* argv[]);
  int Execute();
private:
  void LoadWeights();
  Weights     m_weights;
  std::size_t m_pop_size;   //Population Size
  std::size_t m_max_gen;    //Max number of generations
  std::size_t m_tourn_size; //Tournement size
  double      m_xover;      //xover probability
  double      m_fitness;
};

