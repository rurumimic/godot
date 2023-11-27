# C++ Demo

- docs: [GDExtension](/docs/gdextension.md)
- godot
  - docs: [GDExtension C++ example](https://docs.godotengine.org/en/stable/tutorials/scripting/gdextension/gdextension_cpp_example.html)
  - github: [godot-cpp](https://github.com/godotengine/godot-cpp)

## Start

Install SCons:

```bash
sudo apt install scons
```

Create directories:

```bash
mkdir demo src
```

Add `.clangd`:

```clangd
CompileFlags:
  Add:
    - "-I/path/to/godot-cpp/gen/include"
    - "-I/path/to/godot-cpp/include"
    - "-I/path/to/godot-cpp/gdextension"
```

