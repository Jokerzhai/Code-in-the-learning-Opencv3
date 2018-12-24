#include "opencv2/highgui/highgui.hpp"
#include "opencv2/imgproc/imgpro.hpp"

int main(int argc ,char** argc){

    cv::namedWindow("Example3",cv::WINDOW_AUTOSIZE);
    cv::VideoCapture cap;
    cap.open(string(argv[1]));

    cv::Mat frame;
    for(;;){
        cap >> frame;
        if(frame.empty()) break;
        cv::imshow("Example3",frame);
        if(cv::waitKey(33)>= 0) break;
        }
        return 0;
}


