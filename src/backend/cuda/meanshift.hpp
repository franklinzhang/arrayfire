#include <Array.hpp>

namespace cuda
{

template<typename T, bool is_color>
Array<T> * meanshift(const Array<T> &in, const float &s_sigma, const float &c_sigma, const unsigned iter);

}