// 3.cpp
#include "CImg.h"
using namespace cimg_library;
int from[1000][1000],dp[1000][1000],last[1000],k=128;
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
  
  while(k--) {
    // �����ݶ�ͼ��ע���ݶ�ͼֻ��һ����ɫͨ����
    CImg<int> grad(gray);
    /*
      �ӻҶ�ͼ����õ��ݶ�ͼ���˴�������Ҫ�Լ�ʵ��
  	*/
    /*
      ���ݶ�ͼ�ϴ���������һ�������족���˴�������Ҫ�Լ�ʵ��
  	*/
    /*
      ���ݶ�ͼ��ԭͼ��ɾ�����������족���˴�������Ҫ�Լ�ʵ��
  	*/
  }
  //���洦����ͼ��Ϊ2.bmp
  image.save("2.bmp");
  image.display("Seam Carving");
  return 0;
}
