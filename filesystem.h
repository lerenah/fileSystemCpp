#pragma once
#include <iostream>

#include "file.h"
#include "node.h"

namespace fs
{
class FileSystem {
public:
  void ls(){

  }
private:
  Node* m_root;
  Node* m_workingDirectory;
};
} // namespace fs
