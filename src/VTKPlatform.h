#pragma once

#include <QtWidgets/QMainWindow>
#include "ui_VTKPlatform.h"
#include "VTK_AllFile.h"

class VTKPlatform : public QMainWindow
{
	Q_OBJECT

public:
	VTKPlatform(QWidget* parent = nullptr);
	~VTKPlatform();

private:
	Ui::VTKPlatformClass ui;
	QVTKOpenGLNativeWidget* _pVTKWidget = NULL;
};
