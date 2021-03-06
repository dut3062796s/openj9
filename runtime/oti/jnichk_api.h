/*******************************************************************************
 * Copyright (c) 1991, 2014 IBM Corp. and others
 *
 * This program and the accompanying materials are made available under
 * the terms of the Eclipse Public License 2.0 which accompanies this
 * distribution and is available at https://www.eclipse.org/legal/epl-2.0/
 * or the Apache License, Version 2.0 which accompanies this distribution and
 * is available at https://www.apache.org/licenses/LICENSE-2.0.
 *
 * This Source Code may also be made available under the following
 * Secondary Licenses when the conditions for such availability set
 * forth in the Eclipse Public License, v. 2.0 are satisfied: GNU
 * General Public License, version 2 with the GNU Classpath
 * Exception [1] and GNU General Public License, version 2 with the
 * OpenJDK Assembly Exception [2].
 *
 * [1] https://www.gnu.org/software/classpath/license.html
 * [2] http://openjdk.java.net/legal/assembly-exception.html
 *
 * SPDX-License-Identifier: EPL-2.0 OR Apache-2.0
 *******************************************************************************/

#ifndef jnichk_api_h
#define jnichk_api_h

/**
* @file jnichk_api.h
* @brief Public API for the JNICHK module.
*
* This file contains public function prototypes and
* type definitions for the JNICHK module.
*
*/

#include "j9.h"
#include "j9comp.h"
#include "jni.h"

#ifdef __cplusplus
extern "C" {
#endif

#define JNICHK_VERBOSE 1
#define JNICHK_PROFILE 2
#define JNICHK_NONFATAL 4
#define JNICHK_PEDANTIC 8
#define JNICHK_TRACE 16
#define JNICHK_NOWARN 32
#define JNICHK_NOADVICE 64
#define JNICHK_NOBOUNDS 128
#define JNICHK_NOVALIST 256
#define JNICHK_INCLUDEBOOT 512
#define JNICHK_ALWAYSCOPY 1024

#ifdef __cplusplus
}
#endif

#endif /* jnichk_api_h */

