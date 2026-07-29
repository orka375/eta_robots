#pragma once

#define PRIMARY_CLIENT_STRICT_PARSING_ 0

namespace urcl
{
struct CompileOptions
{
  constexpr static bool PRIMARY_CLIENT_STRICT_PARSING = static_cast<bool>(PRIMARY_CLIENT_STRICT_PARSING_);
};

inline constexpr CompileOptions COMPILE_OPTIONS;
}  // namespace urcl
