#include <iostream>
#include <string>
#include <opencv2/opencv.hpp>

int main(int argc, char** argv)
{
    std::string window_name = "Sandbox OpenCV";

    cv::Mat img(250, 250, CV_8UC3, cv::Scalar(255,0,0));
    cv::imshow(window_name, img);
    cv::waitKey(0);

    return 0;
}
