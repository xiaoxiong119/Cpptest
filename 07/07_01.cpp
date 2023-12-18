#include <opencv2/opencv.hpp>

int main() {
    // (1) 加载并显示一张图像
    cv::Mat image = cv::imread("user/junjie/Downloads/WechatIMG418.jpg");
    if (image.empty()) {
        std::cerr << "Failed to load image!" << std::endl;
        return -1;
    }

    cv::imshow("Image", image);
    int key = cv::waitKey(0);

    if (key == 27) {  // ASCII code for Esc key
        return 0;
    }

    // (2) 加载一个视频
    cv::VideoCapture video("path/to/your/video.mp4");
    if (!video.isOpened()) {
        std::cerr << "Failed to open video!" << std::endl;
        return -1;
    }

    while (true) {
        cv::Mat frame;
        video >> frame;

        if (frame.empty()) {
            std::cerr << "End of video!" << std::endl;
            break;
        }

        cv::imshow("Video", frame);
        key = cv::waitKey(30);

        if (key == 27) {  // ASCII code for Esc key
            break;
        }
    }

    // (3) 开启计算机摄像头
    cv::VideoCapture camera(0);  // 0 corresponds to the default camera
    if (!camera.isOpened()) {
        std::cerr << "Failed to open camera!" << std::endl;
        return -1;
    }

    while (true) {
        cv::Mat frame;
        camera >> frame;

        if (frame.empty()) {
            std::cerr << "Failed to capture frame from camera!" << std::endl;
            break;
        }

        cv::imshow("Camera", frame);
        key = cv::waitKey(30);

        if (key == 27) {  // ASCII code for Esc key
            break;
        }
    }

    return 0;
}
