/*
Copyright 2013-present Barefoot Networks, Inc. 

Licensed under the Apache License, Version 2.0 (the "License");
you may not use this file except in compliance with the License.
You may obtain a copy of the License at

    http://www.apache.org/licenses/LICENSE-2.0

Unless required by applicable law or agreed to in writing, software
distributed under the License is distributed on an "AS IS" BASIS,
WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
See the License for the specific language governing permissions and
limitations under the License.
*/

#ifndef _RMT_PG_H
#define _RMT_PG_H

#include <stdint.h>
//:: pd_prefix = "p4_pd_" + p4_prefix + "_"
void ${pd_prefix}pg_start(const int32_t id, const int8_t *pg_header, const uint32_t pg_header_size, const int32_t interval_ms);

void ${pd_prefix}pg_stop(const int32_t id);

#endif /* _RMT_PG_H */
