#include <opencv2/opencv.hpp>
#include <iostream>

using namespace std;
using namespace cv;

int main(int argc,char* argv[])
{
    namedWindow("Example2_11",WINDOW_AUTOSIZE);
    namedWindow("Log_Polar",WINDOW_AUTOSIZE);

    //Note:could capture from a camera by giving a camera id as an int

    VideoCapture capture(argc[1]);

    double fps = capture.get(CAP_PROP_FPS);
    Size size(
    (int)capture.get(CAP_PROP_FRAME_WIDTH),
    (int)capture.get(CAP_PROP_FRAME_HEIGHT)
              );
    VideoWriter writer;
    writer.open(argv[2],CV_FOURCC('M','J','P','C'),fps,size);

    Mat logpolar_frame,bgr_frame;
    if(bgr_frame.empty()) break;//end if done

    imshow()
    return 0;
}
