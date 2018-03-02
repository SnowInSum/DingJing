#ifndef OPENCVCAMERA_H
#define OPENCVCAMERA_H

#include <QWidget>
#include <QImage>
#include <QTimer>
#include <opencv.hpp>
#include <highgui.hpp>

using namespace cv;

class OpencvCamera : public QWidget
{
    Q_OBJECT
public:
    explicit OpencvCamera(QWidget *parent = nullptr);

    void startCamera();
    void stopCamera();
    void setCameraPixel(const int width, const int height);

signals:
    void sigCameraImage(QImage image);

public slots:
    void on_getCameraImage();

private:
    QTimer* timer;
    VideoCapture* camera;
    Mat cameraFrame;

};

#endif // OPENCVCAMERA_H
