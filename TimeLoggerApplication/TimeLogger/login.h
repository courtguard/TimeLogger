#ifndef LOGIN_H
#define LOGIN_H

#include <QMainWindow>
#include <QtSql>
#include <QDebug>
#include <QFileInfo>
#include <QCloseEvent>
#include "timestatus.h"
#include "mydatabase.h"

namespace Ui {
class Login;
}

class Login : public QMainWindow
{
    Q_OBJECT

public:
    explicit Login(QWidget *parent = nullptr);

    ~Login();

signals:
    void dataUpdated();

private slots:


    void on_buttonLogIn_clicked();

    void on_buttoSignUp_clicked();

    void on_buttonLogInCheck_clicked();

    void on_buttonSignUpCheck_clicked();

    void on_lineEditName_editingFinished();

    void on_lineEditSurname_editingFinished();

    void on_lineEditUser_editingFinished();

    void on_lineEditPassword_editingFinished();

    void on_lineEditUserLog_editingFinished();

    void on_lineEditPassLog_editingFinished();

    void validateLog();

    void validateSign();

    void selectedButton();


private:
    Ui::Login *ui;
    TimeStatus timeStatus;
    QSettings *m_settings;

    //Remembers the user login information for future use
    void saveCreditentials(const QString &user,const QString &password);
    void deleteCreditentials();

protected:
    void closeEvent(QCloseEvent *event);
};

#endif // LOGIN_H
