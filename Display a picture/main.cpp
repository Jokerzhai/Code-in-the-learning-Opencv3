#include <iostream>
#include <opencv2/opencv.hpp>   //include file for every supported Opencv function

int main(int argc, char** argv)
{
    cv::Mat img = cv::imread(argv[1],[-1]);
    if(img.empty()) return -1;
    cv::namedWindow("Example1",cv::WINDOW_AUTOSIZE);
    CV::imshow("Example1",img);
    cv::waitKey(0);//µÈ´ý°´¼ü
    cv::destoryWindow("Example1");
    return 0;
}
