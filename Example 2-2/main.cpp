//////�ڶ���д������Ҫ���������ռ�
#include <opencv2/opencv.hpp>   //include file for every supported Opencv function

using namespace cv; //���������ռ�

int main(int argc,char** argv){

    Mat img = imread(argv[1],-1);
    if(img.empty()) return -1;

    namedWindow("Example1",cv::WINDOW_AUTOSIZE);
    imshow("Example1",img);
    waitKey(0);
    destoryWindow("Example1 ");
}
