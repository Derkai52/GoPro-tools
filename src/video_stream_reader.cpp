#include <opencv2/opencv.hpp>
#include <iostream>

int main(int argc, char** argv) {
    // 指定网络视频流的URL
    std::string videoStreamAddress = "udp://0.0.0.0:8554";

    // 创建VideoCapture对象
    cv::VideoCapture cap(videoStreamAddress);

    // 检查视频流是否打开成功
    if (!cap.isOpened()) {
        std::cerr << "Error: Could not open video stream from " << videoStreamAddress << std::endl;
        return -1;
    }

    cv::Mat frame;
    while (true) {
        // 读取视频帧
        cap >> frame;

        // 检查是否成功读取帧
        if (frame.empty()) {
            std::cerr << "Error: Could not read frame from video stream" << std::endl;
            break;
        }

        // 显示视频帧
        cv::imshow("Video Stream", frame);

        // 按下 'q' 键退出循环
        if (cv::waitKey(1) >= 0) {
            break;
        }
    }

    // 释放资源
    cap.release();
    cv::destroyAllWindows();

    return 0;
}