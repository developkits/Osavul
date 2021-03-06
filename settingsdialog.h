#ifndef SETTINGSDIALOG_H
#define SETTINGSDIALOG_H

#include <QtGui/QDialog>
#include <QtCore/QSettings>
#include <QtGui/QFileDialog>
#include "utils.h"

namespace Ui {
    class SettingsDialog;
}

class SettingsDialog : public QDialog
{
    Q_OBJECT

public:
    explicit SettingsDialog(QWidget *parent = 0);
    ~SettingsDialog();

private slots:
    void on_buttonBox_accepted();
    void on_daemonPathBrowseButton_clicked();

private:
    Settings::PreferredIPVersion getPreferredIPSetting();

    Ui::SettingsDialog *ui;
    QSettings settings;
};

#endif // SETTINGSDIALOG_H
