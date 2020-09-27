#include "weights-class.hpp"
#include <limits>
Weights::Weights()
  : m_max_wt(std::numeric_limits<value_type>::max())
  , m_wt()
{
}

void Weights::operator<<(std::stringstream& stream)
{
  Serialize(stream);
}

void Weights::Serialize(std::stringstream& stream)
{
  size_type vec_size = 0;
  stream >> this->m_max_wt;
  stream >> vec_size;
  this->m_wt.resize(vec_size);
  for (auto& w : m_wt)
  {
    stream >> w;
  }
}
