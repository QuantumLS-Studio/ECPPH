# ECPPH介绍

ECPPH是一个为了使编写C++的CLI程序更轻松的头文件

"ECPPH"这个名称来源于"Easy C++ head file"，这一针见血的指出该头文件目的

当然，如果您发现ECPPH的内容或文档有误，我们欢迎您的Issues与PR!

## 使用

先使用Git将本仓库克隆下来

```bash
> git clone https://github.com/QuantumLS-Studio/ECPPH
```

然后将仓库目录里的`src/include`放在您引用头文件的对应文件夹中，在您的源码的头文件引用里加入`#include "include/ECPPH.h"`即可

## 引用

本文件引用了以下文件

- iostream
- cmath
- limits
- unistd.h
- ctime
- chrono
- cstring
- cstdio
- ios
- string
- sys/type.h

以及命名空间"std"

在您引用“ECPPH.h”后，以上的头文件您无需再次引用

## 保留词

以下的这些内容已被定义，您应该万分注意！

- print
- error
- clear
- line
- dash
- boxout

如有冲突，您可以更改`ECPPH.h`中的内容
