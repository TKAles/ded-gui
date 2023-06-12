#include "DEDgui.h"
#include "qmessagebox.h"

DEDgui::DEDgui(QWidget* parent)
    : QMainWindow(parent)
{
    bool MONOFREERUN = false;
    bool THERMALFREERUN = false;
    
    ui.setupUi(this);
    QObject::connect(ui.PBSearchMonocam, &QPushButton::clicked,
        this, &DEDgui::CameraSearchClicked);
    QObject::connect(ui.ListDetectedMonocam, &QListWidget::itemSelectionChanged,
        this, &DEDgui::MonoListChanged);
    QObject::connect(ui.PBWriteToCamera, &QPushButton::clicked,
        this, &DEDgui::WriteToCameraClicked);
    QObject::connect(ui.LEExposureMonocam, &QLineEdit::textChanged,
        this, &DEDgui::ExposureValueChanged);
    QObject::connect(ui.LEAmpGainMonocam, &QLineEdit::textChanged,
        this, &DEDgui::ExposureValueChanged);
}

DEDgui::~DEDgui()
{}

/*
    CameraSearchClicked - UI function to search for any connected
                          allied vision monocams and populate the
                          listbox with the found IDs
*/
void DEDgui::CameraSearchClicked()
{
    this->ui.ListDetectedMonocam->clear();
    auto result = camera_system.SearchForCameras();
    if (!result)
    {
        this->ui.ListDetectedMonocam->clear();
        for (auto cam_id : this->camera_system.FoundIDs)
        {
            this->ui.ListDetectedMonocam->addItem(
                QString(cam_id.c_str()));
        }
    }
}

void DEDgui::MonoListChanged()
{
    auto _cameraID = this->ui.ListDetectedMonocam->currentItem()->data(Qt::DisplayRole).toString().toStdString();
    
}

/*
    ExposureValueChanged - UI function to enable the write to camera
                           button whenever the exposure value is edited.
*/
void DEDgui::ExposureValueChanged()
{
    this->ui.PBWriteToCamera->setEnabled(true);
    this->ui.PBWriteToCamera->setText("Send to Camera");
    return;
}

/*
    AmplifierValueChanged - UI function to enable the write to camera
                            button whenever the amp gain value is edited.
*/
void DEDgui::AmplifierValueChanged()
{
    this->ui.PBWriteToCamera->setEnabled(true);
    this->ui.PBWriteToCamera->setText("Send to Camera");
    return;
}
void DEDgui::WriteToCameraClicked()
{
    
}