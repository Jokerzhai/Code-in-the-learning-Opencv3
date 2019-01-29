#include <iostream>
#include <opencv2/opencv.hpp>   //include file for every supported Opencv function
#include "cv.h"
int main(int argc, char** argv)
{
    cv::Mat img = cv::imread(argv[1],[-1]);
    if(img.empty()) return -1;
    cv::namedWindow("Example1",cv::WINDOW_AUTOSIZE);
    cv::imshow("Example1",img);
    cv::waitKey(0);//等待是否按下
    cv::destoryWindow("Example1");
    return 0;
}
//#include "cv.h"
//#include "highgui.h"
//int main()
//{
//    IplImage* img = cvLoadImage("test.jpg");
//    cvNamedWindow( "test", 0 );
//    cvShowImage("test", img);
//    cvWaitKey(0);
//    cvReleaseImage( &img );
//    cvDestroyWindow( "test" );
//    return 0;
//}
