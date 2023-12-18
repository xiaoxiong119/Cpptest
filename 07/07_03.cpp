#include <opencv2/opencv.hpp>

int main() {
    // 加载图像
    cv::Mat originalImage = cv::imread("user/junjie/Downloads/WechatIMG418.jpg");
    if (originalImage.empty()) {
        std::cerr << "Failed to load image!" << std::endl;
        return -1;
    }

    // (1) 检测图像边缘
    cv::Mat edges;
    cv::Canny(originalImage, edges, 50, 150);

    // (2) 进行膨胀操作
    cv::Mat dilatedImage;
    cv::dilate(edges, dilatedImage, cv::Mat(), cv::Point(-1, -1), 2);

    // (3) 进行侵蚀操作
    cv::Mat erodedImage;
    cv::erode(dilatedImage, erodedImage, cv::Mat(), cv::Point(-1, -1), 2);

    // (4) 改变图像大小，缩放为50%
    cv::Mat resizedImage;
    cv::resize(originalImage, resizedImage, cv::Size(), 0.5, 0.5);

    // (5) 显示原始图像和处理后的图像
    cv::imshow("Original Image", originalImage);
    cv::imshow("Edges", edges);
    cv::imshow("Dilated Image", dilatedImage);
    cv::imshow("Eroded Image", erodedImage);
    cv::imshow("Resized Image", resizedImage);

    cv::waitKey(0);

    return 0;
}
