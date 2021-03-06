/*
 * Copyright (c) 2016, 2017 ARM Limited.
 *
 * SPDX-License-Identifier: MIT
 *
 * Permission is hereby granted, free of charge, to any person obtaining a copy
 * of this software and associated documentation files (the "Software"), to
 * deal in the Software without restriction, including without limitation the
 * rights to use, copy, modify, merge, publish, distribute, sublicense, and/or
 * sell copies of the Software, and to permit persons to whom the Software is
 * furnished to do so, subject to the following conditions:
 *
 * The above copyright notice and this permission notice shall be included in all
 * copies or substantial portions of the Software.
 *
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
 * IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
 * FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
 * AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
 * LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
 * OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE
 * SOFTWARE.
 */
#ifndef __ARM_COMPUTE_CLGAUSSIAN3X3KERNEL_H__
#define __ARM_COMPUTE_CLGAUSSIAN3X3KERNEL_H__

#include "arm_compute/core/CL/ICLSimple2DKernel.h"

namespace arm_compute
{
class ICLTensor;

/** Interface for the Gaussian 3x3 filter kernel.
 *
 */
class CLGaussian3x3Kernel : public ICLSimple2DKernel
{
public:
    /** Initialise the kernel's input and output.
     *
     * @param[in]  input            An input tensor. Data types supported: U8
     * @param[out] output           The output tensor. Data types supported: U8.
     * @param[in]  border_undefined True if the border mode is undefined. False if it's replicate or constant.
     */
    void configure(const ICLTensor *input, ICLTensor *output, bool border_undefined);

    // Inherited methods overridden:
    BorderSize border_size() const override;
};
}
#endif /*__ARM_COMPUTE_CLGAUSSIAN3X3KERNEL_H__ */
