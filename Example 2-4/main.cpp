#include "opencv2/highgui/highgui.hpp"
#include "opencv2/imgproc/imgproc.hpp"
#include <iostream>
#include <fstream>

using namespace std;
int g_slider_position = 0;
int g_run = 1,g_dontest = 0;    //start out in single step mode
cv::VideoCapture g_cap;
void onTrackbarSlide(int pos,void *){
    g_cap.set(cv::CAP_PROP_POS_FRAMS,pos)£»
    if (!g_dontest)
        g_run = 1;
       g_dontest = 0;
}
int main(int argv,char** argv)
{
    cv::namedWindow( "Example2_4",cv::WINDOW_AUTOSIZE);
    g_cap.open(string(argv[1]));
    int frames = (int)
    int tmpw = (int)
    int tmph = (int)
    cout << "Video has " << frames <<"frames of directions("<< tmpw <<","<< tmph << tmph << ")."<< endl
    cv::createTrackerbar("Position","Example2_4",&g_slider_position,frames,onTrackbarSlide);
    cv::Mat frame
    for(;;)
    return 0;
}
