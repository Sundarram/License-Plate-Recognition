/*****************************************************************************
*   Number Plate Recognition using SVM and Neural Networks
******************************************************************************
*/

#ifndef Plate_h
#define Plate_h

#include <string.h>
#include <vector>

#include <opencv/cv.h>
#include <opencv/highgui.h>
//#include <opencv2/highgui/highgui.hpp>
#include <opencv/cvaux.h>

using namespace std;
using namespace cv;

class Plate {
    public:
        Plate();
        Plate(Mat img, Rect pos);
        string str();
        Rect position;
        Mat plateImg;
        vector<char> chars;
        vector<Rect> charsPos;
};

#endif
