#include "addprojectdialog.h"
#include "ui_addprojectdialog.h"

AddProjectDialog::AddProjectDialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::AddProjectDialog)
{
    ui->setupUi(this);
    ui->dateEditEnd->setDate(QDate::currentDate());
    ui->dateEditStart->setDate(QDate::currentDate());
}
//this method sets the values of the input fields every time the window is opened to their default values
void AddProjectDialog::setValues()
{
    ui->lineEditClientName->setText("");
    ui->lineEditCompanyName->setText("");
    ui->lineEditProjectName->setText("");
    ui->textEditProjectDescription->setText("");
    ui->dateEditEnd->setDate(QDate::currentDate());
    ui->dateEditStart->setDate(QDate::currentDate());

}

AddProjectDialog::~AddProjectDialog()
{
    delete ui;
}

//when clicked on this button, a new project is added in the project table, it uses the information provided by the user to create a new project
void AddProjectDialog::on_buttonCreateProject_clicked()
{
    QString projectName,projectDescription,clientName,companyName,startDate,endDate;

    projectName=ui->lineEditProjectName->text();
    projectDescription=ui->textEditProjectDescription->toPlainText();
    clientName=ui->lineEditClientName->text();
    companyName=ui->lineEditCompanyName->text();
    startDate=ui->dateEditStart->date().toString("yyyy-MM-dd");
    endDate=ui->dateEditEnd->date().toString("yyyy-MM-dd");

    //if the project is not created we use this query to create it in the database
    if(MyDatabase::instance()->projectNameCheckQuery(projectName))
    {
        if(MyDatabase::instance()->createProjectsRowQuery(projectName, projectDescription, startDate, endDate, companyName, clientName))
        {
            qDebug()<<"Successfuly added project...";
            ui->lineEditProjectName->setText("");
            ui->textEditProjectDescription->setText("");
            ui->lineEditClientName->setText("");
            ui->lineEditCompanyName->setText("");
            ui->dateEditEnd->setDate(QDate::currentDate());
            ui->dateEditStart->setDate(QDate::currentDate());
            emit dataUpdated();
            this->close();
        }
    }
}

void AddProjectDialog::on_buttonCancelProject_clicked()
{
    this->close();
}

void AddProjectDialog::on_textEditProjectDescription_textChanged()
{
    int remainingSymbols=60-ui->textEditProjectDescription->toPlainText().length();
    if(remainingSymbols <= 0)
    {
        remainingSymbols = 0;
    }
    ui->labelRemainingSymbols->setText(QString::number(remainingSymbols));
    validateInfo();
}

void AddProjectDialog::on_lineEditProjectName_textChanged(const QString &arg1)
{
    validateInfo();
}

void AddProjectDialog::on_lineEditCompanyName_textChanged(const QString &arg1)
{
    validateInfo();
}

void AddProjectDialog::on_lineEditClientName_textChanged(const QString &arg1)
{
    validateInfo();
}


void AddProjectDialog::validateInfo()
{
    if(ui->textEditProjectDescription->toPlainText().length() > 60 && ui->lineEditClientName->text() != "" && ui->lineEditCompanyName->text() != "" && ui->lineEditProjectName->text() != "")
    {
        ui->buttonCreateProject->setEnabled(true);
        ui->buttonCreateProject->setStyleSheet("QPushButton {background-color: rgb(64, 150, 244);border-radius: 5px;color: rgb(255, 255, 255);border:none}QPushButton:pressed {background-color: rgb(57, 134, 217);}QPushButton:hover {background-color: rgb(67, 158, 255);}");
    }
    else {
        ui->buttonCreateProject->setEnabled(false);
        ui->buttonCreateProject->setStyleSheet("QPushButton {background-color: rgb(56, 132, 213);border-radius: 5px;color: rgb(255, 255, 255);border:none}QPushButton:pressed {background-color: rgb(57, 134, 217);}QPushButton:hover {background-color: rgb(67, 158, 255);}");
    }
}
