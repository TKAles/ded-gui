/********************************************************************************
** Form generated from reading UI file 'DEDGUIv2.ui'
**
** Created by: Qt User Interface Compiler version 6.5.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DEDGUIV2_H
#define UI_DEDGUIV2_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QGraphicsView>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QVBoxLayout *verticalLayout_2;
    QVBoxLayout *VLMainLayout;
    QHBoxLayout *HLMainLayout;
    QVBoxLayout *VLAVCameras;
    QLabel *label;
    QHBoxLayout *horizontalLayout_2;
    QPushButton *PBSearchMonocam;
    QPushButton *PBFreerunMonocam;
    QLabel *label_4;
    QListWidget *ListDetectedMonocam;
    QHBoxLayout *HLCameraSettings;
    QVBoxLayout *VLCameraSetting;
    QLabel *label_5;
    QLineEdit *LEExposureMonocam;
    QVBoxLayout *VLCameraSetting_2;
    QLabel *label_6;
    QLineEdit *LEAmpGainMonocam;
    QVBoxLayout *VLCameraSetting_4;
    QLabel *label_9;
    QLineEdit *LEAmpGainMonocam_2;
    QPushButton *PBWriteToCamera;
    QSpacerItem *verticalSpacer_4;
    QLabel *label_7;
    QHBoxLayout *horizontalLayout_3;
    QGraphicsView *GVPreviewMonocam;
    QSpacerItem *verticalSpacer;
    QVBoxLayout *VLIRCameras;
    QLabel *label_2;
    QHBoxLayout *HLXiDetails;
    QLabel *label_10;
    QLineEdit *LEXiSerialNumber;
    QPushButton *PBXiToggleConnect;
    QHBoxLayout *horizontalLayout_7;
    QLabel *label_14;
    QComboBox *CBoxXiFormat;
    QHBoxLayout *horizontalLayout_6;
    QLabel *label_13;
    QComboBox *CBoxXiTempRange;
    QSpacerItem *verticalSpacer_5;
    QLabel *label_15;
    QHBoxLayout *horizontalLayout_8;
    QGraphicsView *GVXiPreview;
    QSpacerItem *verticalSpacer_2;
    QVBoxLayout *VLDAQmx;
    QLabel *label_3;
    QHBoxLayout *horizontalLayout_9;
    QPushButton *PBDAQSearch;
    QPushButton *PBDAQConnToggle;
    QHBoxLayout *CameraSyncLayout;
    QLabel *label_17;
    QComboBox *CBoxCamSyncSignal;
    QHBoxLayout *horizontalLayout_18;
    QLabel *label_24;
    QComboBox *CBoxLaserOnSignal;
    QHBoxLayout *horizontalLayout_12;
    QLabel *label_18;
    QComboBox *CBoxOxyPPMSignal;
    QHBoxLayout *horizontalLayout_19;
    QLabel *label_25;
    QComboBox *CBoxMoisturePPMSignal;
    QHBoxLayout *horizontalLayout_20;
    QLabel *label_26;
    QComboBox *CBoxLaserPowerPctSignal;
    QHBoxLayout *horizontalLayout_13;
    QLabel *label_19;
    QComboBox *CBoxXEncoderA;
    QComboBox *CBoxXEncoderB;
    QHBoxLayout *horizontalLayout_10;
    QLabel *label_16;
    QComboBox *CBoxYEncoderA;
    QComboBox *CBoxYEncoderB;
    QHBoxLayout *horizontalLayout_16;
    QLabel *label_22;
    QComboBox *CBoxZEncoderA;
    QComboBox *CBoxZEncoderB;
    QLabel *label_27;
    QGridLayout *gridLayout;
    QLabel *LPowerPctState;
    QLabel *LOxyPPMState;
    QLabel *label_28;
    QLabel *LXCount;
    QLabel *label_53;
    QLabel *label_35;
    QLabel *LCameraSyncState;
    QLabel *label_37;
    QLabel *label_36;
    QLabel *LPewPewOnState;
    QLabel *label_33;
    QLabel *LWaterPPMState;
    QLabel *LZCount;
    QLabel *LYCount;
    QLabel *label_30;
    QLabel *label_51;
    QSpacerItem *verticalSpacer_3;
    QHBoxLayout *HLExperimentDetails;
    QLabel *label_8;
    QComboBox *CBoxMicroPort;
    QPushButton *PBMicroRefresh;
    QPushButton *PBMicroConnect;
    QSpacerItem *horizontalSpacer_2;
    QLabel *label_11;
    QComboBox *CBoxSyncFreq;
    QSpacerItem *horizontalSpacer;
    QLabel *label_12;
    QLineEdit *LEFramesToGrab;
    QHBoxLayout *HLOutputInfo;
    QLabel *label_21;
    QLineEdit *LEOutputDirectoryPath;
    QPushButton *PBBrowseOutputPath;
    QPushButton *PBStartExperiment;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(1440, 810);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        verticalLayout_2 = new QVBoxLayout(centralwidget);
        verticalLayout_2->setObjectName("verticalLayout_2");
        VLMainLayout = new QVBoxLayout();
        VLMainLayout->setObjectName("VLMainLayout");
        HLMainLayout = new QHBoxLayout();
        HLMainLayout->setObjectName("HLMainLayout");
        VLAVCameras = new QVBoxLayout();
        VLAVCameras->setObjectName("VLAVCameras");
        label = new QLabel(centralwidget);
        label->setObjectName("label");
        QFont font;
        font.setPointSize(12);
        label->setFont(font);

        VLAVCameras->addWidget(label);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        PBSearchMonocam = new QPushButton(centralwidget);
        PBSearchMonocam->setObjectName("PBSearchMonocam");

        horizontalLayout_2->addWidget(PBSearchMonocam);

        PBFreerunMonocam = new QPushButton(centralwidget);
        PBFreerunMonocam->setObjectName("PBFreerunMonocam");
        PBFreerunMonocam->setCheckable(true);

        horizontalLayout_2->addWidget(PBFreerunMonocam);


        VLAVCameras->addLayout(horizontalLayout_2);

        label_4 = new QLabel(centralwidget);
        label_4->setObjectName("label_4");

        VLAVCameras->addWidget(label_4);

        ListDetectedMonocam = new QListWidget(centralwidget);
        ListDetectedMonocam->setObjectName("ListDetectedMonocam");
        ListDetectedMonocam->setMaximumSize(QSize(475, 100));
        ListDetectedMonocam->setFrameShape(QFrame::NoFrame);
        ListDetectedMonocam->setFrameShadow(QFrame::Plain);

        VLAVCameras->addWidget(ListDetectedMonocam);

        HLCameraSettings = new QHBoxLayout();
        HLCameraSettings->setObjectName("HLCameraSettings");
        VLCameraSetting = new QVBoxLayout();
        VLCameraSetting->setObjectName("VLCameraSetting");
        label_5 = new QLabel(centralwidget);
        label_5->setObjectName("label_5");

        VLCameraSetting->addWidget(label_5);

        LEExposureMonocam = new QLineEdit(centralwidget);
        LEExposureMonocam->setObjectName("LEExposureMonocam");

        VLCameraSetting->addWidget(LEExposureMonocam);


        HLCameraSettings->addLayout(VLCameraSetting);

        VLCameraSetting_2 = new QVBoxLayout();
        VLCameraSetting_2->setObjectName("VLCameraSetting_2");
        label_6 = new QLabel(centralwidget);
        label_6->setObjectName("label_6");

        VLCameraSetting_2->addWidget(label_6);

        LEAmpGainMonocam = new QLineEdit(centralwidget);
        LEAmpGainMonocam->setObjectName("LEAmpGainMonocam");

        VLCameraSetting_2->addWidget(LEAmpGainMonocam);


        HLCameraSettings->addLayout(VLCameraSetting_2);

        VLCameraSetting_4 = new QVBoxLayout();
        VLCameraSetting_4->setObjectName("VLCameraSetting_4");
        label_9 = new QLabel(centralwidget);
        label_9->setObjectName("label_9");

        VLCameraSetting_4->addWidget(label_9);

        LEAmpGainMonocam_2 = new QLineEdit(centralwidget);
        LEAmpGainMonocam_2->setObjectName("LEAmpGainMonocam_2");

        VLCameraSetting_4->addWidget(LEAmpGainMonocam_2);


        HLCameraSettings->addLayout(VLCameraSetting_4);


        VLAVCameras->addLayout(HLCameraSettings);

        PBWriteToCamera = new QPushButton(centralwidget);
        PBWriteToCamera->setObjectName("PBWriteToCamera");

        VLAVCameras->addWidget(PBWriteToCamera);

        verticalSpacer_4 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        VLAVCameras->addItem(verticalSpacer_4);

        label_7 = new QLabel(centralwidget);
        label_7->setObjectName("label_7");

        VLAVCameras->addWidget(label_7);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName("horizontalLayout_3");
        GVPreviewMonocam = new QGraphicsView(centralwidget);
        GVPreviewMonocam->setObjectName("GVPreviewMonocam");
        GVPreviewMonocam->setMinimumSize(QSize(415, 309));
        GVPreviewMonocam->setMaximumSize(QSize(415, 309));

        horizontalLayout_3->addWidget(GVPreviewMonocam);


        VLAVCameras->addLayout(horizontalLayout_3);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        VLAVCameras->addItem(verticalSpacer);


        HLMainLayout->addLayout(VLAVCameras);

        VLIRCameras = new QVBoxLayout();
        VLIRCameras->setObjectName("VLIRCameras");
        label_2 = new QLabel(centralwidget);
        label_2->setObjectName("label_2");
        label_2->setMinimumSize(QSize(475, 0));
        label_2->setFont(font);

        VLIRCameras->addWidget(label_2);

        HLXiDetails = new QHBoxLayout();
        HLXiDetails->setObjectName("HLXiDetails");
        label_10 = new QLabel(centralwidget);
        label_10->setObjectName("label_10");

        HLXiDetails->addWidget(label_10);

        LEXiSerialNumber = new QLineEdit(centralwidget);
        LEXiSerialNumber->setObjectName("LEXiSerialNumber");

        HLXiDetails->addWidget(LEXiSerialNumber);

        PBXiToggleConnect = new QPushButton(centralwidget);
        PBXiToggleConnect->setObjectName("PBXiToggleConnect");

        HLXiDetails->addWidget(PBXiToggleConnect);


        VLIRCameras->addLayout(HLXiDetails);

        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setObjectName("horizontalLayout_7");
        label_14 = new QLabel(centralwidget);
        label_14->setObjectName("label_14");

        horizontalLayout_7->addWidget(label_14);

        CBoxXiFormat = new QComboBox(centralwidget);
        CBoxXiFormat->setObjectName("CBoxXiFormat");

        horizontalLayout_7->addWidget(CBoxXiFormat);


        VLIRCameras->addLayout(horizontalLayout_7);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setObjectName("horizontalLayout_6");
        label_13 = new QLabel(centralwidget);
        label_13->setObjectName("label_13");

        horizontalLayout_6->addWidget(label_13);

        CBoxXiTempRange = new QComboBox(centralwidget);
        CBoxXiTempRange->setObjectName("CBoxXiTempRange");

        horizontalLayout_6->addWidget(CBoxXiTempRange);


        VLIRCameras->addLayout(horizontalLayout_6);

        verticalSpacer_5 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        VLIRCameras->addItem(verticalSpacer_5);

        label_15 = new QLabel(centralwidget);
        label_15->setObjectName("label_15");

        VLIRCameras->addWidget(label_15);

        horizontalLayout_8 = new QHBoxLayout();
        horizontalLayout_8->setObjectName("horizontalLayout_8");
        GVXiPreview = new QGraphicsView(centralwidget);
        GVXiPreview->setObjectName("GVXiPreview");
        GVXiPreview->setMinimumSize(QSize(382, 288));
        GVXiPreview->setMaximumSize(QSize(382, 288));

        horizontalLayout_8->addWidget(GVXiPreview);


        VLIRCameras->addLayout(horizontalLayout_8);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        VLIRCameras->addItem(verticalSpacer_2);


        HLMainLayout->addLayout(VLIRCameras);

        VLDAQmx = new QVBoxLayout();
        VLDAQmx->setObjectName("VLDAQmx");
        label_3 = new QLabel(centralwidget);
        label_3->setObjectName("label_3");
        label_3->setMinimumSize(QSize(475, 0));
        label_3->setFont(font);

        VLDAQmx->addWidget(label_3);

        horizontalLayout_9 = new QHBoxLayout();
        horizontalLayout_9->setObjectName("horizontalLayout_9");
        PBDAQSearch = new QPushButton(centralwidget);
        PBDAQSearch->setObjectName("PBDAQSearch");

        horizontalLayout_9->addWidget(PBDAQSearch);

        PBDAQConnToggle = new QPushButton(centralwidget);
        PBDAQConnToggle->setObjectName("PBDAQConnToggle");

        horizontalLayout_9->addWidget(PBDAQConnToggle);


        VLDAQmx->addLayout(horizontalLayout_9);

        CameraSyncLayout = new QHBoxLayout();
        CameraSyncLayout->setObjectName("CameraSyncLayout");
        label_17 = new QLabel(centralwidget);
        label_17->setObjectName("label_17");

        CameraSyncLayout->addWidget(label_17);

        CBoxCamSyncSignal = new QComboBox(centralwidget);
        CBoxCamSyncSignal->setObjectName("CBoxCamSyncSignal");

        CameraSyncLayout->addWidget(CBoxCamSyncSignal);


        VLDAQmx->addLayout(CameraSyncLayout);

        horizontalLayout_18 = new QHBoxLayout();
        horizontalLayout_18->setObjectName("horizontalLayout_18");
        label_24 = new QLabel(centralwidget);
        label_24->setObjectName("label_24");

        horizontalLayout_18->addWidget(label_24);

        CBoxLaserOnSignal = new QComboBox(centralwidget);
        CBoxLaserOnSignal->setObjectName("CBoxLaserOnSignal");

        horizontalLayout_18->addWidget(CBoxLaserOnSignal);


        VLDAQmx->addLayout(horizontalLayout_18);

        horizontalLayout_12 = new QHBoxLayout();
        horizontalLayout_12->setObjectName("horizontalLayout_12");
        label_18 = new QLabel(centralwidget);
        label_18->setObjectName("label_18");

        horizontalLayout_12->addWidget(label_18);

        CBoxOxyPPMSignal = new QComboBox(centralwidget);
        CBoxOxyPPMSignal->setObjectName("CBoxOxyPPMSignal");

        horizontalLayout_12->addWidget(CBoxOxyPPMSignal);


        VLDAQmx->addLayout(horizontalLayout_12);

        horizontalLayout_19 = new QHBoxLayout();
        horizontalLayout_19->setObjectName("horizontalLayout_19");
        label_25 = new QLabel(centralwidget);
        label_25->setObjectName("label_25");

        horizontalLayout_19->addWidget(label_25);

        CBoxMoisturePPMSignal = new QComboBox(centralwidget);
        CBoxMoisturePPMSignal->setObjectName("CBoxMoisturePPMSignal");

        horizontalLayout_19->addWidget(CBoxMoisturePPMSignal);


        VLDAQmx->addLayout(horizontalLayout_19);

        horizontalLayout_20 = new QHBoxLayout();
        horizontalLayout_20->setObjectName("horizontalLayout_20");
        label_26 = new QLabel(centralwidget);
        label_26->setObjectName("label_26");

        horizontalLayout_20->addWidget(label_26);

        CBoxLaserPowerPctSignal = new QComboBox(centralwidget);
        CBoxLaserPowerPctSignal->setObjectName("CBoxLaserPowerPctSignal");

        horizontalLayout_20->addWidget(CBoxLaserPowerPctSignal);


        VLDAQmx->addLayout(horizontalLayout_20);

        horizontalLayout_13 = new QHBoxLayout();
        horizontalLayout_13->setObjectName("horizontalLayout_13");
        label_19 = new QLabel(centralwidget);
        label_19->setObjectName("label_19");

        horizontalLayout_13->addWidget(label_19);

        CBoxXEncoderA = new QComboBox(centralwidget);
        CBoxXEncoderA->setObjectName("CBoxXEncoderA");

        horizontalLayout_13->addWidget(CBoxXEncoderA);

        CBoxXEncoderB = new QComboBox(centralwidget);
        CBoxXEncoderB->setObjectName("CBoxXEncoderB");

        horizontalLayout_13->addWidget(CBoxXEncoderB);


        VLDAQmx->addLayout(horizontalLayout_13);

        horizontalLayout_10 = new QHBoxLayout();
        horizontalLayout_10->setObjectName("horizontalLayout_10");
        label_16 = new QLabel(centralwidget);
        label_16->setObjectName("label_16");

        horizontalLayout_10->addWidget(label_16);

        CBoxYEncoderA = new QComboBox(centralwidget);
        CBoxYEncoderA->setObjectName("CBoxYEncoderA");

        horizontalLayout_10->addWidget(CBoxYEncoderA);

        CBoxYEncoderB = new QComboBox(centralwidget);
        CBoxYEncoderB->setObjectName("CBoxYEncoderB");

        horizontalLayout_10->addWidget(CBoxYEncoderB);


        VLDAQmx->addLayout(horizontalLayout_10);

        horizontalLayout_16 = new QHBoxLayout();
        horizontalLayout_16->setObjectName("horizontalLayout_16");
        label_22 = new QLabel(centralwidget);
        label_22->setObjectName("label_22");

        horizontalLayout_16->addWidget(label_22);

        CBoxZEncoderA = new QComboBox(centralwidget);
        CBoxZEncoderA->setObjectName("CBoxZEncoderA");

        horizontalLayout_16->addWidget(CBoxZEncoderA);

        CBoxZEncoderB = new QComboBox(centralwidget);
        CBoxZEncoderB->setObjectName("CBoxZEncoderB");

        horizontalLayout_16->addWidget(CBoxZEncoderB);


        VLDAQmx->addLayout(horizontalLayout_16);

        label_27 = new QLabel(centralwidget);
        label_27->setObjectName("label_27");
        QFont font1;
        font1.setPointSize(14);
        label_27->setFont(font1);

        VLDAQmx->addWidget(label_27);

        gridLayout = new QGridLayout();
        gridLayout->setObjectName("gridLayout");
        LPowerPctState = new QLabel(centralwidget);
        LPowerPctState->setObjectName("LPowerPctState");
        QFont font2;
        font2.setBold(true);
        LPowerPctState->setFont(font2);

        gridLayout->addWidget(LPowerPctState, 4, 1, 1, 1);

        LOxyPPMState = new QLabel(centralwidget);
        LOxyPPMState->setObjectName("LOxyPPMState");
        LOxyPPMState->setFont(font2);

        gridLayout->addWidget(LOxyPPMState, 3, 1, 1, 1);

        label_28 = new QLabel(centralwidget);
        label_28->setObjectName("label_28");

        gridLayout->addWidget(label_28, 2, 0, 1, 1);

        LXCount = new QLabel(centralwidget);
        LXCount->setObjectName("LXCount");
        LXCount->setFont(font2);

        gridLayout->addWidget(LXCount, 5, 1, 1, 1);

        label_53 = new QLabel(centralwidget);
        label_53->setObjectName("label_53");

        gridLayout->addWidget(label_53, 5, 2, 1, 1);

        label_35 = new QLabel(centralwidget);
        label_35->setObjectName("label_35");

        gridLayout->addWidget(label_35, 3, 0, 1, 1);

        LCameraSyncState = new QLabel(centralwidget);
        LCameraSyncState->setObjectName("LCameraSyncState");
        LCameraSyncState->setFont(font2);

        gridLayout->addWidget(LCameraSyncState, 2, 1, 1, 1);

        label_37 = new QLabel(centralwidget);
        label_37->setObjectName("label_37");

        gridLayout->addWidget(label_37, 5, 0, 1, 1);

        label_36 = new QLabel(centralwidget);
        label_36->setObjectName("label_36");

        gridLayout->addWidget(label_36, 4, 0, 1, 1);

        LPewPewOnState = new QLabel(centralwidget);
        LPewPewOnState->setObjectName("LPewPewOnState");
        LPewPewOnState->setFont(font2);

        gridLayout->addWidget(LPewPewOnState, 2, 5, 1, 1);

        label_33 = new QLabel(centralwidget);
        label_33->setObjectName("label_33");

        gridLayout->addWidget(label_33, 3, 3, 1, 1);

        LWaterPPMState = new QLabel(centralwidget);
        LWaterPPMState->setObjectName("LWaterPPMState");
        LWaterPPMState->setFont(font2);

        gridLayout->addWidget(LWaterPPMState, 3, 5, 1, 1);

        LZCount = new QLabel(centralwidget);
        LZCount->setObjectName("LZCount");
        LZCount->setFont(font2);

        gridLayout->addWidget(LZCount, 5, 5, 1, 1);

        LYCount = new QLabel(centralwidget);
        LYCount->setObjectName("LYCount");
        LYCount->setFont(font2);

        gridLayout->addWidget(LYCount, 5, 3, 1, 1);

        label_30 = new QLabel(centralwidget);
        label_30->setObjectName("label_30");

        gridLayout->addWidget(label_30, 2, 3, 1, 1);

        label_51 = new QLabel(centralwidget);
        label_51->setObjectName("label_51");

        gridLayout->addWidget(label_51, 5, 4, 1, 1);


        VLDAQmx->addLayout(gridLayout);

        verticalSpacer_3 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        VLDAQmx->addItem(verticalSpacer_3);


        HLMainLayout->addLayout(VLDAQmx);


        VLMainLayout->addLayout(HLMainLayout);

        HLExperimentDetails = new QHBoxLayout();
        HLExperimentDetails->setObjectName("HLExperimentDetails");
        label_8 = new QLabel(centralwidget);
        label_8->setObjectName("label_8");
        label_8->setMaximumSize(QSize(120, 16777215));

        HLExperimentDetails->addWidget(label_8);

        CBoxMicroPort = new QComboBox(centralwidget);
        CBoxMicroPort->setObjectName("CBoxMicroPort");
        CBoxMicroPort->setMinimumSize(QSize(325, 0));
        CBoxMicroPort->setMaximumSize(QSize(200, 16777215));

        HLExperimentDetails->addWidget(CBoxMicroPort);

        PBMicroRefresh = new QPushButton(centralwidget);
        PBMicroRefresh->setObjectName("PBMicroRefresh");
        PBMicroRefresh->setMaximumSize(QSize(100, 16777215));

        HLExperimentDetails->addWidget(PBMicroRefresh);

        PBMicroConnect = new QPushButton(centralwidget);
        PBMicroConnect->setObjectName("PBMicroConnect");
        PBMicroConnect->setMaximumSize(QSize(100, 16777215));

        HLExperimentDetails->addWidget(PBMicroConnect);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        HLExperimentDetails->addItem(horizontalSpacer_2);

        label_11 = new QLabel(centralwidget);
        label_11->setObjectName("label_11");
        label_11->setMaximumSize(QSize(100, 16777215));

        HLExperimentDetails->addWidget(label_11);

        CBoxSyncFreq = new QComboBox(centralwidget);
        CBoxSyncFreq->setObjectName("CBoxSyncFreq");

        HLExperimentDetails->addWidget(CBoxSyncFreq);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        HLExperimentDetails->addItem(horizontalSpacer);

        label_12 = new QLabel(centralwidget);
        label_12->setObjectName("label_12");

        HLExperimentDetails->addWidget(label_12);

        LEFramesToGrab = new QLineEdit(centralwidget);
        LEFramesToGrab->setObjectName("LEFramesToGrab");
        LEFramesToGrab->setMaximumSize(QSize(100, 16777215));

        HLExperimentDetails->addWidget(LEFramesToGrab);


        VLMainLayout->addLayout(HLExperimentDetails);

        HLOutputInfo = new QHBoxLayout();
        HLOutputInfo->setObjectName("HLOutputInfo");
        label_21 = new QLabel(centralwidget);
        label_21->setObjectName("label_21");

        HLOutputInfo->addWidget(label_21);

        LEOutputDirectoryPath = new QLineEdit(centralwidget);
        LEOutputDirectoryPath->setObjectName("LEOutputDirectoryPath");

        HLOutputInfo->addWidget(LEOutputDirectoryPath);

        PBBrowseOutputPath = new QPushButton(centralwidget);
        PBBrowseOutputPath->setObjectName("PBBrowseOutputPath");

        HLOutputInfo->addWidget(PBBrowseOutputPath);


        VLMainLayout->addLayout(HLOutputInfo);

        PBStartExperiment = new QPushButton(centralwidget);
        PBStartExperiment->setObjectName("PBStartExperiment");
        QFont font3;
        font3.setPointSize(18);
        PBStartExperiment->setFont(font3);

        VLMainLayout->addWidget(PBStartExperiment);


        verticalLayout_2->addLayout(VLMainLayout);

        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 1440, 22));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName("statusbar");
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "Monocam:", nullptr));
        PBSearchMonocam->setText(QCoreApplication::translate("MainWindow", "Search Cameras", nullptr));
        PBFreerunMonocam->setText(QCoreApplication::translate("MainWindow", "Freerun Preview", nullptr));
        label_4->setText(QCoreApplication::translate("MainWindow", "Detected Cameras:", nullptr));
        label_5->setText(QCoreApplication::translate("MainWindow", "Exposure:", nullptr));
        label_6->setText(QCoreApplication::translate("MainWindow", "Amplifier Gain [dB]:", nullptr));
        label_9->setText(QCoreApplication::translate("MainWindow", "Future Value", nullptr));
        PBWriteToCamera->setText(QCoreApplication::translate("MainWindow", "Write Settings to Camera", nullptr));
        label_7->setText(QCoreApplication::translate("MainWindow", "Preview", nullptr));
        label_2->setText(QCoreApplication::translate("MainWindow", "Xi400 Thermal Camera:", nullptr));
        label_10->setText(QCoreApplication::translate("MainWindow", "Xi400 SN:", nullptr));
        PBXiToggleConnect->setText(QCoreApplication::translate("MainWindow", "Connect", nullptr));
        label_14->setText(QCoreApplication::translate("MainWindow", "Image Format:", nullptr));
        label_13->setText(QCoreApplication::translate("MainWindow", "Sensor Range:", nullptr));
        label_15->setText(QCoreApplication::translate("MainWindow", "Preview", nullptr));
        label_3->setText(QCoreApplication::translate("MainWindow", "DAQmx:", nullptr));
        PBDAQSearch->setText(QCoreApplication::translate("MainWindow", "Search", nullptr));
        PBDAQConnToggle->setText(QCoreApplication::translate("MainWindow", "Connect", nullptr));
        label_17->setText(QCoreApplication::translate("MainWindow", "Camera Sync Signal:", nullptr));
        label_24->setText(QCoreApplication::translate("MainWindow", "Laser On Signal:", nullptr));
        label_18->setText(QCoreApplication::translate("MainWindow", "Oxygen PPM Analog [0-10V]", nullptr));
        label_25->setText(QCoreApplication::translate("MainWindow", "Moisture PPM Analog [0-10V]", nullptr));
        label_26->setText(QCoreApplication::translate("MainWindow", "Laser Power % Analog [0-10V]", nullptr));
        label_19->setText(QCoreApplication::translate("MainWindow", "X Axis Encoder", nullptr));
        label_16->setText(QCoreApplication::translate("MainWindow", "Y Axis Encoder", nullptr));
        label_22->setText(QCoreApplication::translate("MainWindow", "Z Axis Encoder", nullptr));
        label_27->setText(QCoreApplication::translate("MainWindow", "Live Values:", nullptr));
        LPowerPctState->setText(QCoreApplication::translate("MainWindow", "0.00V", nullptr));
        LOxyPPMState->setText(QCoreApplication::translate("MainWindow", "0.00V", nullptr));
        label_28->setText(QCoreApplication::translate("MainWindow", "CameraSync", nullptr));
        LXCount->setText(QCoreApplication::translate("MainWindow", "00000", nullptr));
        label_53->setText(QCoreApplication::translate("MainWindow", "YCount", nullptr));
        label_35->setText(QCoreApplication::translate("MainWindow", "OxyPPM", nullptr));
        LCameraSyncState->setText(QCoreApplication::translate("MainWindow", "Off", nullptr));
        label_37->setText(QCoreApplication::translate("MainWindow", "XCount", nullptr));
        label_36->setText(QCoreApplication::translate("MainWindow", "Power%", nullptr));
        LPewPewOnState->setText(QCoreApplication::translate("MainWindow", "Off", nullptr));
        label_33->setText(QCoreApplication::translate("MainWindow", "MoisturePPM", nullptr));
        LWaterPPMState->setText(QCoreApplication::translate("MainWindow", "0.00V", nullptr));
        LZCount->setText(QCoreApplication::translate("MainWindow", "00000", nullptr));
        LYCount->setText(QCoreApplication::translate("MainWindow", "00000", nullptr));
        label_30->setText(QCoreApplication::translate("MainWindow", "LaserOn", nullptr));
        label_51->setText(QCoreApplication::translate("MainWindow", "ZCount", nullptr));
        label_8->setText(QCoreApplication::translate("MainWindow", "Sync Microcontroller:", nullptr));
        PBMicroRefresh->setText(QCoreApplication::translate("MainWindow", "Refresh", nullptr));
        PBMicroConnect->setText(QCoreApplication::translate("MainWindow", "Connect", nullptr));
        label_11->setText(QCoreApplication::translate("MainWindow", "Sync Frequency:", nullptr));
        label_12->setText(QCoreApplication::translate("MainWindow", "Frames to Capture:", nullptr));
        label_21->setText(QCoreApplication::translate("MainWindow", "Output Folder:", nullptr));
        PBBrowseOutputPath->setText(QCoreApplication::translate("MainWindow", "Browse", nullptr));
        PBStartExperiment->setText(QCoreApplication::translate("MainWindow", "Start Synchonized Capture", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DEDGUIV2_H
