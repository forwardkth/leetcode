#if __INTELLISENSE__
#undef __ARM_NEON
#undef __ARM_NEON__
#endif
// https://github.com/microsoft/vscode-cpptools/issues/7413

#include <iostream>
#include <Eigen/Dense>
#include <opencv2/opencv.hpp>
using namespace std;
using namespace cv;

void capImages(char **argv) {
  // Create a VideoCapture object and open the input file
  // If the input is the web camera, pass 0 instead of the video file name
  VideoCapture cap(argv[1]); 
  // Check if camera opened successfully
  if(!cap.isOpened()){
    cout << "Error opening video stream or file" << endl;
    return;
  }
     
  while(1){
    Mat frame;
    // Capture frame-by-frame
    cap >> frame;
  
    // If the frame is empty, break immediately
    if (frame.empty())
      break;
 
    // Display the resulting frame
    imshow( "Frame", frame );
 
    // Press  ESC on keyboard to exit
    char c=(char)waitKey(25);
    if(c==27)
      break;
  }
  
  // When everything done, release the video capture object
  cap.release();
 
  // Closes all the frames
  destroyAllWindows();
}

void eigenTest() {
  Eigen::Matrix<int, 2, 3> matrix_23 {{2, 3, 4},
                                      {5, 6, 7}};
  cout << matrix_23 << endl;
  matrix_23 << 1, 2, 3, 4, 5, 6;
  Eigen::Matrix<int, 1, 5> c = {1, 2, 3, 4, 5};
  Eigen::MatrixXd m(2, 2);
  Eigen::Matrix3d mat_33 = Eigen::Matrix3d::Random();
  Eigen::Matrix2f matrix_22 {{1, 2}, 
                             {4, 5}};
  cout << matrix_23 << endl;
  cout << mat_33.transpose() << endl;
  cout << mat_33.inverse() << endl;
  cout << matrix_22.inverse() << endl;
  cout << matrix_22.inverse() * matrix_22 << endl;
}
 
int main(int argc, char **argv){
  // capImages(argv);
  
  // eigen test
  eigenTest();
  return 0;
}