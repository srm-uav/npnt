/*
 *  This Source Code Form is subject to the terms of the Mozilla Public
 *  License, v. 2.0. If a copy of the MPL was not distributed with this
 *  file, You can obtain one at http://mozilla.org/MPL/2.0/.
 */

#ifndef NPNT_H
#define NPNT_H
/**
 * @file    inc/npnt.h
 * @brief   Common Headers for NPNT library
 * @{
 */
#include <control_iface.h>
#include <defines.h>
#include <log_iface.h>
#include <security_iface.h>

#ifdef __cplusplus
extern "C" {
#endif
// Common helper headers
void reset_sha1();
void update_sha1(const char *data, uint16_t data_len);
void final_sha1(char *hash);

#ifdef __cplusplus
}  // extern "C"
#endif
#endif  // NPNT_H