#pragma once

#include "Camera.h"
#include <QDebug>

class PerspectiveCamera:public Camera
{
public:
	float angle;

public:
    void zoom(float step) override;

    void onPanPress(int x,int y) override;

    void onRotatePress(int x,int y) override;

    void drawGird() const override;

    void rotate45V();

    void rotate(int x,int y) override;

    Vector getEye() const override;

	Vector rotateFromP2P(int x1,int y1,int x2,int y2);

    void onRotateRelease() override;

    void onPanRelease(int x,int y) override;

    void setCamera() override;

    void setCameraForSelectionD(size_t x1,size_t y1,size_t x2,size_t y2,size_t h) override;

    void setCameraForSelectionS() override;
	
    void pan(int x,int y) override;

    Vector getHorizontalDir() const override;

	PerspectiveCamera(float angle,float width,float height,float nearPlane,float farPlane,float startX,float startY,Vector target,Vector eye,Vector up);

    ~PerspectiveCamera(void) override;

private:
    Vector mapToSphere(const int x,const int y) const;
};