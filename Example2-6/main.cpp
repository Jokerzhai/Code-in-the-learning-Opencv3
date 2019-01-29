//Using cv::pyrDown() to create a new image that is half the width and height of the input image
//downsample 降低采样 以减少图片的高度和宽度

#include <opencv2/opencv.hpp>

using namespace cv; //use cv namespace for laze

int main(int argc,char**argv)
{
    Mat img1,img2;

    namedWindow("Example1",cv::WINDOW_AUTOSIZE );
    namedWindow("Example2",cv::WINDOW_AUTOSIZE );

    img = imread(argv[1]);
    show("Example1",img1);

    pyrDown(img1,img2);
    imshow("Example2",img2);

    waitkey(0);
    return 0;
}
