#include <opencv2/opencv.hpp>

using namespace cv;

cvtColor(img_rgb,img_gry,cv::BGR2GARY);
pyrDown(img_gry,img_pyr);
pyrDown(img_pry,img_pry2);
Canny(img_pry2,img_cny,10,100,3,true);
