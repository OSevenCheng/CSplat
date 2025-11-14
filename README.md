# splat

a simple Gaussian splat renderer

## building & running

```
mkdir build
cd build
cmake ..
make spalt
./src/splat /path/to/ply
```

windows
安装 MSYS2: https://www.msys2.org/
打开 MSYS2 MinGW x64 终端（名字含 UCRT64 或 MINGW64 的那个），执行：
```
pacman -S --needed mingw-w64-ucrt-x86_64-toolchain mingw-w64-ucrt-x86_64-cmake mingw-w64-ucrt-x86_64-ninja mingw-w64-ucrt-x86_64-glfw mingw-w64-ucrt-x86_64-glew
```
编译（在该终端中切到你的项目根目录 eg: E:\workspace\splat，注意 MSYS2 的盘符是 /e/）：
```
mkdir -p build
cd build
cmake -G Ninja -D CMAKE_BUILD_TYPE=Release ..
ninja
```

运行：
```
./src/splat /path/to/ply
```


## controls

Use `W` `A` `S` `D`, hold down right mouse button to look around.

Press `P` for point rendering mode and `G` to render Gaussians.

Press `Shift` to move faster.  The default movement speed can be adjusted with the mouse wheel and reset with `.`.

Sorting is triggered manually by pressing `C`.
