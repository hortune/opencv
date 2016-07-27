#include <opencv/highgui.h>
int main()
{
	CvCapture * cap=cvCreateCameraCapture(0);
	IplImage * img;//=cvLoadImage("a.png");
	cvNamedWindow("a");
 
	while(1){
		img = cvQueryFrame(cap);
		cvShowImage("a", img);
		int key = cvWaitKey(33);
		if(key==27) break;
	}
	cvReleaseCapture(&cap);
	return 0;
}
