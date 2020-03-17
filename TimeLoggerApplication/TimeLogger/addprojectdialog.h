#ifndef ADDPROJECTDIALOG_H
#define ADDPROJECTDIALOG_H

#include <QDialog>
#include <QtSql>
#include <QDebug>
#include <QFileInfo>
#include "mydatabase.h"


namespace Ui {
class AddProjectDialog;
}

class AddProjectDialog : public QDialog
{
    Q_OBJECT

public:
    explicit AddProjectDialog(QWidget *parent = nullptr);
    void setValues();
    ~AddProjectDialog();

private slots:
    void on_buttonCreateProject_clicked();

    void on_buttonCancelProject_clicked();

    void on_textEditProjectDescription_textChanged();

    void on_lineEditProjectName_textChanged(const QString &arg1);

    void on_lineEditCompanyName_textChanged(const QString &arg1);

    void validateInfo();

    void on_lineEditClientName_textChanged(const QString &arg1);

signals:
    void dataUpdated();

private:
    Ui::AddProjectDialog *ui;
};

#endif // ADDPROJECTDIALOG_H
