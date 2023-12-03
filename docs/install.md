# Install

- icon.png
  - godot: [press.kit](https://godotengine.org/press/)

## Ubuntu

- download: [linux](https://godotengine.org/download/linux/)
- download: [godot.desktop](/.local/godot.desktop)

```bash
mkdir -p ~/.local/godot.app/bin
```

### Unzip App

```bash
unzip Godot_v4.y.z-stable_linux.x86_64.zip -d ~/.local/godot.app/bin

Archive:  Godot_v4.y.z-stable_linux.x86_64.zip
  inflating: ~/.local/godot.app/bin/Godot_v4.y.z-stable_linux.x86_64
```

### Symlinks

```bash
ln -sf ~/.local/godot.app/bin/Godot_v4.y.z-stable_linux.x86_64 ~/.local/godot.app/bin/godot
ln -s ~/.local/godot.app/bin/godot ~/.local/bin/godot
ln -s ~/.local/godot.app/godot.desktop ~/.local/share/applications/godot.desktop
```

### Godot Home

```bash
~/.local/godot.app/
├── bin
│   ├── Godot_v4.y.z-stable_linux.x86_64
│   └── godot -> Godot_v4.y.z-stable_linux.x86_64
├── godot.desktop
├── icon.png
└── icon_monochrome.png
```

### PATH

```bash
export PATH="$PATH:$HOME/.local/bin"
```

```bash
~/.local/bin
└── godot -> ../godot.app/bin/godot
```

### Version

```bash
godot --version

4.y.z.stable.official
```

