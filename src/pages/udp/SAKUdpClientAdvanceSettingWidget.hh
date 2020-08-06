﻿/*
 * Copyright 2018-2020 Qter(qsaker@qq.com). All rights reserved.
 *
 * The file is encoded using "utf8 with bom", it is a part
 * of QtSwissArmyKnife project.
 *
 * QtSwissArmyKnife is licensed according to the terms in
 * the file LICENCE in the root of the source code directory.
 */
#ifndef SAKUDPCLIENTADCANCESETTINGWIDGET_HH
#define SAKUDPCLIENTADCANCESETTINGWIDGET_HH

#include <QWidget>
#include <QLineEdit>
#include <QCheckBox>
#include <QPushButton>
#include <QListWidget>

namespace Ui {
    class SAKUdpClientAdvanceSettingWidget;
}

class SAKUdpClientDevice;
class SAKUdpClientAdvanceSettingWidget:public QWidget
{
    Q_OBJECT
public:
    SAKUdpClientAdvanceSettingWidget(QWidget *parent = Q_NULLPTR);
    ~SAKUdpClientAdvanceSettingWidget();

    void setUdpDevice(SAKUdpClientDevice* device);
private:
    Ui::SAKUdpClientAdvanceSettingWidget *ui;

    QCheckBox* unicastCheckBox;
    QCheckBox* broadcastCheckBox;
    QLineEdit* broadcastPortLineEdit;
    QCheckBox* multicastCheckBox;
    QListWidget* listWidget;
    QPushButton* deletePushButton;
    QPushButton* addPushButton;
private slots:
    void on_unicastCheckBox_clicked();
    void on_broadcastCheckBox_clicked();
    void on_multicastCheckBox_clicked();
    void on_deletePushButton_clicked();
    void on_addPushButton_clicked();
private:
    SAKUdpClientDevice* udpDevice;
    bool isInitUi;
};

#endif
