#include <opencv2/opencv.hpp>
using namespace cv;
using namespace std;
int main()
{
    int x = 16,y = 32;
    cv::Vec3b intensity = img_rgb.at<cv::Vec3b>(y,x);
    //Note:We could write img_rgb.at<cv::Vec3b>(x,y)[0]

    uchar blue = intensity[0];
    uchar blue = intensity[1];
    uchar blue = intensity[2];

    cout << "At (x,y) = ("<<x<<","<<y<<
                "):(blue,green,red) = ("<<
                (unsigned int)red <<")" <<std::endl;

    cout << "Gray poxel there is: " <<
            (unsigned int)img_gry.at<uchar>(y,x)<<endl;
    x/4;y/4;
    cout << "Pyramid2 pixel there is: "<<
            (unsigned int)img_pyr2.at<uchar>(y,x)<<endl;
    img_cny.at<uchar>(x,y) = 128 //set the Canny pixel there to 128
}
