#pragma once
#include "imgui.h"

class Application {
public:
  void update(ImVec4& clearColor);

private:
  bool show_demo_window = true;
  bool show_another_window = false;
};