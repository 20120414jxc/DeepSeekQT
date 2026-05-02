<a href="https://space.bilibili.com/1524901776"><img src="https://img.shields.io/badge/Bilibili-关注我-pink?logo=bilibili" alt="Bilibili"></a>   
# DeepSeek Client

A desktop client for DeepSeek AI chat service, built with Qt 6 and WebEngine.

## Features
- Access DeepSeek AI chat service via desktop application
- Persistent login state and cache
- Responsive window design
- Cross-platform support (Windows, macOS, Linux)

## Environment Requirements
- Qt 6 (version 6.2 or higher)
- Qt WebEngine module
- C++17 compatible compiler
- CMake (version 3.16 or higher)

## Build Instructions

### Linux/macOS
```bash
# Clone the repository
git clone https://github.com/20120414jxc/DeepSeekQt.git
cd DeepSeekQt

# Create build directory
mkdir build
cd build

# Configure and build
cmake ..
make

# Run the application
./DeepSeekClient
```

### Windows
```bash
# Clone the repository
git clone https://github.com/20120414jxc/DeepSeekQt.git
cd DeepSeekQt

# Create build directory
mkdir build
cd build

# Configure and build (using Visual Studio)
cmake .. -G "Visual Studio 16 2019" -A x64
cmake --build . --config Release

# Run the application
Release\DeepSeekClient.exe
```

## Cache and Login State Location

The application stores cache files and login state in the following directory:

- **Linux/macOS**: `~/.DeepSeekClient`
- **Windows**: `%USERPROFILE%\.DeepSeekClient`

This directory contains:
- Persistent cookies (for login state)
- Web cache files
- Local storage data
- WebEngine configuration

## License
MIT License