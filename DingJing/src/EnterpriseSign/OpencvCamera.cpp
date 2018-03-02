#include "OpencvCamera.h"
#include <QMessageBox>

OpencvCamera::OpencvCamera(QWidget *parent)
    : QWidget(parent)
{
    camera = new VideoCapture(0);
    if(camera == NULL) {
        QMessageBox::warning(this, "Camera", "摄像头打开失败!");
        return;
    }
}

void OpencvCamera::startCamera()
{
    timer = new QTimer;
    connect(timer, SIGNAL(timeout()), this, SLOT(on_getCameraImage()));
    timer->start(100);
}

void OpencvCamera::stopCamera()
{
    if(timer->isActive()) {
        timer->stop();
    }
}

void OpencvCamera::setCameraPixel(const int width, const int height)
{
    camera->set(CV_CAP_PROP_FRAME_WIDTH, width);
    camera->set(CV_CAP_PROP_FRAME_HEIGHT, height);
}

void OpencvCamera::on_getCameraImage()
{
    camera->read(cameraFrame);
    const uchar* ptr = cameraFrame.data;
    QImage image = QImage(ptr, cameraFrame.cols, cameraFrame.rows,
                          QImage::Format_RGB888).rgbSwapped();
    emit sigCameraImage(image);
}
