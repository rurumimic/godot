#ifndef GDEXAMPLE_H
#define GDEXAMPLE_H

#include <godot_cpp/classes/sprite2d.hpp>

namespace godot {

class GDExample : public Sprite2D { // container class
  GDCLASS(GDExample, Sprite2D) // macro: set up a few internal things

private:
  double time_passed;

protected:
  static void _bind_methods();

public:
  GDExample();
  ~GDExample();

  void _process(double delta) override;
};

}

#endif

