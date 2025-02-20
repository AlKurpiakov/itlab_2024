
#include <iostream>
#include <opencv2/core.hpp>
#include <opencv2/dnn/dnn.hpp>
#include <string>
#include <vector>

int main() {
  std::string model_path = cv::samples::findFile("yolov8s.onnx");
  cv::dnn::Net net = cv::dnn::readNetFromONNX(model_path);
  std::vector<std::string> layer_names = net.getLayerNames();

  for (auto& name : layer_names) {
    std::cout << name << std::endl;
  }

  return 0;
}
