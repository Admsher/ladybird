/*
 * Copyright (c) 2024, Andrew Kaster <akaster@serenityos.org>.
 *
 * SPDX-License-Identifier: BSD-2-Clause
 */

#pragma once

#define Backtrace_FOUND
#if defined(Backtrace_FOUND)
#    define AK_HAS_BACKTRACE_HEADER
#    undef Backtrace_FOUND
#endif

#if defined(AK_HAS_BACKTRACE_HEADER)
#    include <execinfo.h>
#endif
