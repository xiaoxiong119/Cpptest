#include <opencv2/opencv.hpp>

int main() {
    // 加载图像
    cv::Mat originalImage = cv::imread("user/junjie/Downloads/WechatIMG418.jpg");
    if (originalImage.empty()) {
        std::cerr << "Failed to load image!" << std::endl;
        return -1;
    }

    // (1) 将图像转换为灰度图
    cv::Mat grayImage;
    cv::cvtColor(originalImage, grayImage, cv::COLOR_BGR2GRAY);

    // (2) 将灰度图像二值化
    cv::Mat binaryImage;
    cv::threshold(grayImage, binaryImage, 128, 255, cv::THRESH_BINARY);

    // (3) 将灰度图像进行高斯模糊处理
    cv::Mat blurredImage;
    cv::GaussianBlur(grayImage, blurredImage, cv::Size(5, 5), 0);

    // (4) 显示原始图像和处理后的图像
    cv::imshow("Original Image", originalImage);
    cv::imshow("Gray Image", grayImage);
    cv::imshow("Binary Image", binaryImage);
    cv::imshow("Blurred Image", blurredImage);

    cv::waitKey(0);

    return 0;
}
