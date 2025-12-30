#pragma once

// Minimal CPU/architecture glue header.
//
// Dobby sources include "core/arch/Cpu.h" from several arch-specific headers.
// On some branches this file exists; in this checkout it was missing, which
// breaks Linux/Clang builds.
//
// Keep this intentionally small: it only needs to provide common type aliases
// and macros used by downstream headers.

#include <stdint.h>

// addr_t is used widely across Dobby.
using addr_t = uintptr_t;


