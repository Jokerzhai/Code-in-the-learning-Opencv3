#include "opencv2/highgui/highgui.hpp"
#include "opencv2/imgproc/imgproc.hpp"
#include <iostream>
#include <fstream>

using namespace std;
int g_slider_position = 0; //set global variable to keep the trackerbar slider position state
int g_run = 1,g_dontest = 0;//start out in single step mode to update the trackbar's position

cv::VideoCapture g_cap;

void onTrackbarSlide(int pos,void *){
    g_cap.set(cv::CAP_PROP_POS_FRAMS,pos);//to advance the video playback to the new position
                                          //indicates that we would like to set the read
                                          //position in units of frames
    if (!g_dontest)                       //set to get into single-step mode
        g_run = 1;
       g_dontest = 0;
}


int main(int argv,char** argv)
{
    cv::namedWindow( "Example2_4",cv::WINDOW_AUTOSIZE);
    g_cap.open(string(argv[1]));
    int frames = (int)g_cap.get(cv::CAP_PROP_FRAME_COUNT);//determine the numbers of frames
    int tmpw   = (int)g_cap.get(cv::CAP_PROP_FRAME_WIDTH);//determine the width of video images
    int tmph   = (int)g_cap.get(cv::CAP_PROP_FRAME_HIGHT);//determine the height of video images
    cout << "Video has " << frames <<"frames of directions("
         << tmpw <<","<< tmph << tmph << ")."<< endl;

    cv::createTrackerbar("Position","Example2_4",&g_slider_position,frames,
                         onTrackbarSlide);
    //give the trackbar a laber (Position)
    //provide a variable
    cv::Mat frame;
    for(;;){
        if(g_run !=0 ){
            g_cap >> frame;if(frame.empty()) break;
            int current_pos = (int)g_cap.get(cv::CAP_PROP_POS_FRAMES);
            g_dontset = 1;

            cv::setTrackbarPos("Position","Example2_4",current_pos);
            cv::imshow("Example2_4",frame);

            g_run-=1;
        }
    //
        char c = (char)cv::waitkey(10);
        if( c == 's')   //single step
         {g_run = 1;cout << "Single step,run = " << g_run << endl;}
        if( c == 'r')   //run mode
         {g_run = -1;cout << "Run mode,run = " << g_run << endl;}
        if( c == 27)
          break;
        }
    // If 's' has pressed ,go into single-step mode;
    // If 'R' has pressed ,go into continous video mode
    // If 'Esc'has pressed, the program will terminate

    return 0;
}
