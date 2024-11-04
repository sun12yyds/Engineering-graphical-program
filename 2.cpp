// 2.cpp
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
  // 创建一幅和灰度图分辨率相同的梯度图
  CImg<int> grad(gray);
  /*
    从灰度图计算得到梯度图，此处代码需要自己实现
  */
  grad.display("Grad");
  return 0;
}
