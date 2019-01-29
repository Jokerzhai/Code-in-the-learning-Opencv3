#include <opencv2/opencv.hpp>

//smoothing an image can effectively reduce the information content of image by convolving
//it with a Gaussian or other similar kernel function
//Example4-out is to display the result of the processing


void example2_5(const::Mat & image){
//这里我觉得是错了，应该是 void main()
//Create some windows to show the input and output images in
cv::namedWindow( "Example2_5-in", cv::WINDOW_AUTOSIZE);
cv::namedWindow( "Example2_5-out",cv::WINDOW_AUTOSIZE);
//create a window to show our input image
cv::imshow("Example2_5-in",image);
//Create an image to hold the smoothed output

cv::Mat out;

//Do the smoothing
//(Note:Could use GaussianBlur(),blur();medianBlur()or bilateraFilter())

cv::GaussianBlur(image, out, cv::Size(5,5),3,3);
cv::GaussianBlur( out,  out, cv::Size(5,5),3,3);

//Show the smoothed image in the output window

cv::imshow("Example2_5-out",out);

//Wait for the user to hit a key,windows will self destruct

cv::waitKey(0);

}


