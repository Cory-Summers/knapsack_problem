#include <iostream>
#include "knapsack.hpp"
int main(int argc, char* argv[])
{
  if (argc < 5) { std::cerr << "Invalid Number of Arguments!\n"; return 1; }
  Knapsack app(argc, argv);
  return app.Execute();
}