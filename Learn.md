# 学习区

> ~2024-12-7~
> ~决定去做什么就等尘埃落定再公之于众吧，不然说出来准凉。~

---

- [返回主页](index.html)
- **快速浏览**
  - [C语言](C语言-基本书写组成)
  - [JAVA](JAVA-基本书写组成)

---

## C语言-基本书写组成

```C
#include <stdio.h>
#include <locale.h> // setlocale(LC_ALL, "zh_CN.UTF-8");

int main()
{
    setlocale(LC_ALL, "zh_CN.UTF-8"); // 设置为中文 UTF-8 编码，确保可以处理中文
    
    printf("Hello World!\n");
    printf("你好，世界！\n");

    printf("\n");
    getchar(); // 用于查看运行结果，避免程序一闪而过
    return 0;
}
```

**下载博主自己写的**<a href="download/myfunc/myfunc.zip" download>头文件</a>

## JAVA-基本书写组成

```JAVA
package com.TheStart; // 导包

import java.util.Scanner; // 导入类

public class HelloWorld {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in); // 创建对象sc

        System.out.println("Hello World");
    }
}
```
