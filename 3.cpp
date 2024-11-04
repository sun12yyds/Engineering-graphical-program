// 3.cpp
#include "CImg.h"
using namespace cimg_library;
int from[1000][1000],dp[1000][1000],last[1000],k=128;
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
  
  while(k--) {
    // 创建梯度图（注意梯度图只有一个颜色通道）
    CImg<int> grad(gray);
    /*
      从灰度图计算得到梯度图，此处代码需要自己实现
  	*/
    /*
      从梯度图上从上至下找一条“狭缝”，此处代码需要自己实现
  	*/
    /*
      在梯度图和原图上删除这条“狭缝”，此处代码需要自己实现
  	*/
  }
  //保存处理后的图像为2.bmp
  image.save("2.bmp");
  image.display("Seam Carving");
  return 0;
}
