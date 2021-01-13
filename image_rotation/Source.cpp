#include<opencv2/opencv.hpp>
#include<opencv2/highgui/highgui.hpp>
#include<opencv2/imgproc/imgproc.hpp>
#include<iostream>
using namespace std;
using namespace cv;

Mat rotate(Mat img)
{
	double angle,scale;
	cout << "enter angle at which you want to rotate the given photo (use - sign befor angle for clockwise) : "; cin >> angle;
	cout << "enter scale of picture : "; cin >> scale;
	Mat img1;
	Point2f pt(img.cols / 2., img.rows / 2.);
	Mat r = getRotationMatrix2D(pt, angle, scale);
	warpAffine(img, img1, r, Size(img.cols, img.rows));
	return img1;
}


int main()
{
	Mat img = imread("./images/Hohfsic.jpg", IMREAD_COLOR);
	if (img.empty())
	{
		cout << "error";
		return-1;
	}
	string winname = "original image";
	namedWindow(winname, WINDOW_AUTOSIZE);
	imshow(winname, img);
	waitKey(0);
	Mat nw_img = rotate(img);
	imwrite("./images/abc.jpg", nw_img);
	winname = "ratated image";
	namedWindow(winname, WINDOW_AUTOSIZE);
	imshow(winname, nw_img);
	waitKey(0);
	destroyWindow("image");
	return 0;
}