// Licensed to the Apache Software Foundation (ASF) under one
// or more contributor license agreements.  See the NOTICE file
// distributed with this work for additional information
// regarding copyright ownership.  The ASF licenses this file
// to you under the Apache License, Version 2.0 (the
// "License"); you may not use this file except in compliance
// with the License.  You may obtain a copy of the License at
//
//   http://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing,
// software distributed under the License is distributed on an
// "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY
// KIND, either express or implied.  See the License for the
// specific language governing permissions and limitations
// under the License.

#ifndef PPLCUDA_KERNEL_INCLUDE_RELATION_RELATION_H_
#define PPLCUDA_KERNEL_INCLUDE_RELATION_RELATION_H_
#include "ppl/nn/common/tensor_shape.h"
#include "ppl/common/retcode.h"

ppl::common::RetCode PPLCUDARelationEqualForwardImp(
    cudaStream_t stream,
    const ppl::nn::TensorShape* input_shape0,
    const void* input0,
    const ppl::nn::TensorShape* input_shape1,
    const void* input1,
    const ppl::nn::TensorShape* output_shape,
    bool* output);

ppl::common::RetCode PPLCUDARelationGreaterForwardImp(
    cudaStream_t stream,
    const ppl::nn::TensorShape* input_shape0,
    const void* input0,
    const ppl::nn::TensorShape* input_shape1,
    const void* input1,
    const ppl::nn::TensorShape* output_shape,
    bool* output);

ppl::common::RetCode PPLCUDARelationLessForwardImp(
    cudaStream_t stream,
    const ppl::nn::TensorShape* input_shape0,
    const void* input0,
    const ppl::nn::TensorShape* input_shape1,
    const void* input1,
    const ppl::nn::TensorShape* output_shape,
    bool* output);

#endif //PPLCUDA_KERNEL_INCLUDE_RELATION_RELATION_H_