#include "VTKPlatform.h"

VTKPlatform::VTKPlatform(QWidget* parent)
	: QMainWindow(parent)
{
	ui.setupUi(this);
	_pVTKWidget = new QVTKOpenGLNativeWidget();
	this->setCentralWidget(_pVTKWidget);

	vtkSmartPointer<vtkConeSource> cone = vtkSmartPointer<vtkConeSource>::New();
	vtkSmartPointer<vtkPolyDataMapper> mapper = vtkSmartPointer<vtkPolyDataMapper>::New();
	vtkSmartPointer<vtkActor> actor = vtkSmartPointer<vtkActor>::New();
	vtkSmartPointer<vtkRenderer> render = vtkSmartPointer<vtkRenderer>::New();

	render->SetBackground(.4, .6, .3);
	mapper->SetInputConnection(cone->GetOutputPort());
	actor->SetMapper(mapper);
	render->AddActor(actor);

	_pVTKWidget->renderWindow()->AddRenderer(render);
	_pVTKWidget->renderWindow()->Render();
}

VTKPlatform::~VTKPlatform()
{}