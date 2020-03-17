#ifndef MYDATABASE_H
#define MYDATABASE_H
#include <QWidget>
#include <QObject>
#include <QtSql>
#include <QSqlQuery>
#include <QPieSeries>
#include <QChartView>
#include <QPieSlice>

QT_CHARTS_USE_NAMESPACE

class MyDatabase : public QObject
{
    Q_OBJECT
public:
    static MyDatabase *instance();
    static void destroyInstance();

    void closeConnection();
    bool openConnection();

    void setCurrentUser(QString user);
    QString getCurrentUser();

    int getAction() const;
    void setAction(int value);

    bool createTablesQuery();

    bool signUpCheckQuery(QString user, QString password, QString name, QString surname);

    bool logInCheckQuery(QString user,QByteArray cryptedPassword);

    bool setDonutChartQuery(QDate firstDayOfWeek, QDate lastDayOfWeek);

    bool setBarChartQuery(QDate firstDayOfWeek,QDate lastDayOfWeek);

    bool getProjectQuery(int flag);
    bool getProjectCountQuery();

    bool getReportsQuery(QDate firstDayOfWeek,QDate lastDayOfWeek);
    bool getReportsCountQuery(QDate firstDayOfWeek,QDate lastDayOfWeek);

    bool getHoursQuery(QString projectName,QDate firstDayOfWeek,QDate lastDayOfWeek,int j);

    bool createReportsRowQuery(QString person,QString project,QString time,QString description,QString date);
    bool updateReportsRowQuery(QString person,QString project,QString time,QString description,QString date);
    bool deleteRowReportsQuery(QString user,QString project,QString date);

    bool projectNameCheckQuery(QString projectName);

    bool createProjectsRowQuery(QString projectName,QString projectDescription,QString startDate,QString endDate,QString companyName,QString clientName);

    int getProjectCount() const;
    int getReportsCount() const;

signals:
    void updateHours(QString hours);
    void setValues(QPieSeries *series);
    void setDays(int monday,int tuesday, int wednesday, int thursday, int friday, int saturday, int sunday);
    void setProjects(QString project,int i);
    void setHours(QString date,QString value,int j);
    void setReports(int m, int k, QString text);
    void setCheckBox(QString text);
    void dataUpdated();
    void addButtons(int m);

public slots:

private:
    explicit MyDatabase(QObject *parent = nullptr);
    MyDatabase(const MyDatabase&);
    MyDatabase& operator=(const MyDatabase&);
    static MyDatabase *m_instance;
    QSqlDatabase m_myDatabase;
    QString m_currentUser;
    int m_action;
    int m_projectCount;
    int m_reportsCount;
};

#endif // MYDATABASE_H
