// 1.cpp
#include "CImg.h"
using namespace cimg_library;
int main()
{
  CImg<unsigned char> image("1.bmp");
  // �����Ҷ�ͼ��ע��Ҷ�ͼֻ��һ����ɫͨ����
  CImg<unsigned char> gray(image.width(),image.height(),1,1);
  // �Ҷ�ͼ��������
  gray.fill(0);
  /*
    ��ԭͼ����õ��Ҷ�ͼ���˴�������Ҫ�Լ�ʵ��
  */
  int x , y;
  // ��ʾ�Ҷ�ͼ
  gray.display("Gray");
  return 0;
}
