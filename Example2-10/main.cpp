#include <opencv2/opencv.hpp>
#include <iostream>

using namespace std;
using namespace cv;
int main(int argc, char** argv)
{
    namedWindow("Example2_10",WINDOW_AUTOSIZE);
    VideoCapture cap;
    if(argc==1){
        cap.open(0);    //open the first camera
    }else{
     cap.open(argv[1]);
     }
     if(!cap.isOpened()){ //check if we succeed
        cerr<< "Couldn't open capture."<<endl;
         return -1;
     }

}
