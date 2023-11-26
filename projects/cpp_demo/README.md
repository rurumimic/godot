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

Add lines to .gitignore:

```bash
echo 'godot-cpp' >> .gitignore
```

Clone the repo:

```bash
git clone -b 4.1 https://github.com/godotengine/godot-cpp
cd godot-cpp
```

Create a result file:

```bash
godot --dump-extension-api
```

Run SCons with Clang:

```bash
scons platform=linux -j12 custom_api_file=../extension_api.json use_llvm=yes
```

a static library:

```bash
cpp_demo/godot-cpp/bin/
└── libgodot-cpp.linux.template_debug.x86_64.a
```

