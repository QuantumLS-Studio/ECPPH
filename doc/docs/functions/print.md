# print

## 介绍

类型：void

原型：`void print(const char T[], string color, bool i)`

用处：输出彩色字符

解释：T[]为输出字符，color为输出字符的颜色，i为是否另起一行输出

`color`的值可以为

- red
- yellow
- teal
- blue
- green
- purple
- white
- none

## 示例

```cpp
print("Hello World","yellow",true);
```

结果为：在新的一行上输出黄色的“Hello World”
