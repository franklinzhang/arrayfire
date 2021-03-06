/*******************************************************
 * Copyright (c) 2014, ArrayFire
 * All rights reserved.
 *
 * This file is distributed under 3-clause BSD license.
 * The complete license agreement can be obtained at:
 * http://arrayfire.com/licenses/BSD-3-Clause
 ********************************************************/

#include <af/image.h>
#include "error.hpp"

namespace af
{

array rotate(const array& in, const float theta, const interpType method, const bool crop)
{
    af_array out = 0;
    AF_THROW(af_rotate(&out, in.get(), theta, method, crop));
    return array(out);
}

}
