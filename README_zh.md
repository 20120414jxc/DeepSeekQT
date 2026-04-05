# DeepSeek 客户端

一个基于 Qt 6 和 WebEngine 构建的 DeepSeek AI 聊天服务桌面客户端。

## 功能特点
- 通过桌面应用访问 DeepSeek AI 聊天服务
- 持久化登录状态和缓存
- 响应式窗口设计
- 跨平台支持（Windows、macOS、Linux）

## 环境要求
- Qt 6（版本 6.2 或更高）
- Qt WebEngine 模块
- 支持 C++17 的编译器
- CMake（版本 3.16 或更高）

## 编译方法

### Linux/macOS
```bash
# 克隆仓库
git clone https://github.com/20120414jxc/DeepSeekQt.git
cd DeepSeekQt

# 创建构建目录
mkdir build
cd build

# 配置并构建
cmake ..
make

# 运行应用
./DeepSeekClient
```

### Windows
```bash
# 克隆仓库
git clone https://github.com/20120414jxc/DeepSeekQt.git
cd DeepSeekQt

# 创建构建目录
mkdir build
cd build

# 配置并构建（使用 Visual Studio）
cmake .. -G "Visual Studio 16 2019" -A x64
cmake --build . --config Release

# 运行应用
Release\DeepSeekClient.exe
```

## 缓存和登录状态位置

应用程序将缓存文件和登录状态存储在以下目录中：

- **Linux/macOS**：`~/.DeepSeekClient`
- **Windows**：`%USERPROFILE%\.DeepSeekClient`

该目录包含：
- 持久化 cookie（用于登录状态）
- 网页缓存文件
- 本地存储数据
- WebEngine 配置

## 许可证
MIT 许可证