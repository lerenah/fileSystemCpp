#include "file.h"

namespace fs
{
File::File(std::string contents)
  : contents(std::move(contents))
{
}

File& File::operator+=(const std::string &data)
{
  contents += data;
  return *this;
}
} // namespace fs