#pragma once
#include <string>
#include <vector>
#include <utility>

namespace fs
{
struct File
{
  File(std::string contents);

  File &operator+=(const std::string &data);

  std::string contents;
};
} // namespace fs
