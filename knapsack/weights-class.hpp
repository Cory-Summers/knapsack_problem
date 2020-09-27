#pragma once
#include <vector>
#include <sstream>
class Weights
{
  using value_type = double;
  using size_type = std::size_t;
  using vector_type = std::vector<value_type>;
  using iterator = vector_type::iterator;
  using const_iterator = vector_type::const_iterator;
public:
  Weights();
  void operator<< (std::stringstream&);
  value_type& operator[](size_type const& idx) { return m_wt[idx]; }
  constexpr value_type const& MaxWeight() const { return m_max_wt; }
  size_type Size() const { return m_wt.size(); }

  iterator begin() { return m_wt.begin(); }
  iterator end() { return m_wt.end(); }
  const_iterator cbegin() const { return m_wt.cbegin(); }
  const_iterator cend() const { return m_wt.cend(); }
private:
  value_type m_max_wt;
  vector_type m_wt;
  void Serialize(std::stringstream&);
};