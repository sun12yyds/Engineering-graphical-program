// 1.cpp
#include "CImg.h"
using namespace cimg_library;
int main()
{
  CImg<unsigned char> image("1.bmp");
  // 创建灰度图（注意灰度图只有一个颜色通道）
  CImg<unsigned char> gray(image.width(),image.height(),1,1);
  // 灰度图像素清零
  gray.fill(0);
  /*
    从原图计算得到灰度图，此处代码需要自己实现
  */
  int x , y;
  // 显示灰度图
  gray.display("Gray");
  return 0;
}
