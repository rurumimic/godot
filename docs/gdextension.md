# GDExtension

- docs: [GDExtension](https://docs.godotengine.org/en/latest/tutorials/scripting/gdextension/index.html)
- github: [godot-cpp](https://github.com/godotengine/godot-cpp)

## Install SCons

```bash
sudo apt install scons
```

## Clone the repo

```bash
git clone -b 4.1 https://github.com/godotengine/godot-cpp
```

### Building the C++ bindings

```bash
godot --dump-extension-api

Dumping Extension API
Godot Engine v4.1.z.stable.official - https://godotengine.org
Vulkan API 1.3.260 - Forward+ - Using Vulkan Device #0: NVIDIA - NVIDIA GeForce RTX 3070
```

Copy a result file to the `godot-cpp` directory:

```bash
extension_api.json
```

Get nums of threads:

```bash
cat /proc/cpuinfo | grep -c processor
12
```

Run SCons with Clang:

```bash
bear -- scons platform=linux -j12 custom_api_file=./extension_api.json use_llvm=yes
# or g++
scons platform=linux -j12 custom_api_file=./extension_api.json
```

a static library:

```bash
godot-cpp/bin/
└── libgodot-cpp.linux.template_debug.x86_64.a
```

## A Game Demo

- [C++ Demo](/projects/cpp_demo/README.md)

