// Copyright 2018 Slightech Co., Ltd. All rights reserved.
//
// Licensed under the Apache License, Version 2.0 (the "License");
// you may not use this file except in compliance with the License.
// You may obtain a copy of the License at
//
//     http://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS,
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
// See the License for the specific language governing permissions and
// limitations under the License.
#include "init_params.h"

#include "log.hpp"

using namespace mynteye;

InitParams::InitParams() {
}

InitParams::InitParams(const std::int32_t &dev_index)
    : dev_index(std::move(dev_index)),
      framerate(30),
      depth_mode(DepthMode::DEPTH_COLORFUL),
      color_info_index(-1),
      depth_info_index(-1),
      state_ae(true),
      state_awb(true),
      ir_intensity(0) {
    DBG_LOGD(__func__);
}

InitParams::~InitParams() {
    DBG_LOGD(__func__);
}
