#include <stdio.h>
#include <graphics.h> // 引用图形库头文件
#include <conio.h>
#include "module1.h"
#include "module2.h"

int main()
{
    printf("Hello, World!\n");
    module1_function();
    module2_function();
    initgraph(640,480,0);   // 创建绘图窗口，大小为 640x480 像素
    circle(200, 200, 100); // 画圆，圆心(200, 200)，半径 100
    _getch();              // 按任意键继续
    closegraph();
    getchar();
    return 0;
}
