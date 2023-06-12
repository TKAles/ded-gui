#pragma once

#include <QtWidgets/QMainWindow>
#include "ui_DEDGUIv2.h"
#include "CameraSystem.h"

class DEDgui : public QMainWindow
{
    Q_OBJECT

public:
    DEDgui(QWidget *parent = nullptr);
    ~DEDgui();
    // Ui Functions
    void CameraSearchClicked();
    void MonoListChanged();
    void ExposureValueChanged();
    void AmplifierValueChanged();
    void WriteToCameraClicked();

private:
    Ui::MainWindow ui;
    CameraSystem camera_system;

};
