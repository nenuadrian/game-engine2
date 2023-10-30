#pragma once

#include <vector>

#include "plugin.h"

class Engine {
public:
  void init(std::vector<Plugin*>);
};