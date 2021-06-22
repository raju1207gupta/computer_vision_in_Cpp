#include <iostream>
#include <stdio.h>
#include <opencv2/opencv.hpp>
#include <opencv2/video.hpp>
#include <opencv2/videoio/videoio.hpp>
#include <opencv2/imgproc.hpp>
#include <opencv2/highgui.hpp>
#include <opencv2/imgcodecs/imgcodecs.hpp>


//using namespace cv;
using namespace std;


int main(int argc, char** argv) {

    cv::Mat image,image_gray,image_blur,image_Canny,image_dilate,image_erode,imgcrop;
    
    const string path_to_video = "E:/deeplearning_stuff/new_usecase/BIAL_new_video/reject/(1) 693 SBD XRAY IN FEED WCT 0010 CAM 2-2021-05-11_06h33min20s000ms.mp4";
    
    cv::VideoCapture video(path_to_video);
    
    
    while (video.isOpened())
    {
        // if (!video.open(path_to_video))
        // {
        //     cout << "No image data for the stream provided";
        //     break;
        // }
        //video >> image;
        video.read(image);
        
        cv::resize(image,image,cv::Size(1280,720));
        //cv::resize(image,image,cv::Size(),0.75,0.75,cv::INTER_AREA);
        // cv::cvtColor(image,image_gray,cv::COLOR_BGR2GRAY);
        // cv::GaussianBlur(image,image_blur,cv::Size(3,3),3,0);
        // cv::Canny(image_blur,image_Canny,25,75);
        
        // cv::Mat kernel = cv::getStructuringElement(cv::MORPH_RECT,cv::Size(5,5));
        // cv::dilate(image_Canny,image_dilate,kernel);
        // cv::erode(image_dilate,image_erode,kernel);

        //cv::Rect roi(100,100,300,250);
    
        //imgcrop = image(roi);
        // if (!image.data)
        // {
        //     cout << "No image data";
        //     return -1;
        // }
        //cv::namedWindow("Display_output",cv::WINDOW_AUTOSIZE);
        cv::imshow("Display_output",image);
        //cv::imshow("Display_output_image_gray",image_gray);
        //cv::imshow("Display_output_image_blur",image_blur);
        // cv::imshow("Display_output_image_Canny",image_Canny);
        // cv::imshow("Display_output_image_dilation",image_dilate);
        // cv::imshow("Display_output_image_erode",image_erode);
        //cv::imshow("Display_output_iimgcrop",imgcrop);
        int k = cv::waitKey(1);
        if (k =='q')
        {
            break;
        }
        if(k == 's')
        {
            cv::imwrite("starry_night.png", image);
        }
        
    }
    return 0;
}