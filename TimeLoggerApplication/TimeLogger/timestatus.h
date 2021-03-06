#ifndef TIMESTATUS_H
#define TIMESTATUS_H

#include <QWidget>
#include "addtimedialog.h"
#include "addprojectdialog.h"
#include "mydatabase.h"
#include "buttons.h"
#include <QPieSeries>
#include <QtCharts/QBarCategoryAxis>
QT_CHARTS_USE_NAMESPACE

namespace Ui {
class TimeStatus;
}

class TimeStatus : public QWidget
{
    Q_OBJECT

public:
    explicit TimeStatus(QWidget *parent = nullptr);

    ~TimeStatus();

private slots:

    void on_buttonNextWeek_clicked();

    void on_buttonPreviousWeek_clicked();

    void on_buttonAddTime_clicked();

    void on_buttonAddProject_clicked();

    void onDataUpdated();

    void onUpdatedHours(QString hours);

    void onSetValues(QPieSeries *series);

    void onSetDays(int monday,int tuesday, int wednesday, int thursday, int friday, int saturday, int sunday);

    void onSetProjects (QString project,int i);

    void onSetHours (QString date, QString value, int j);

    void onSetReports (int m ,int k, QString text);

    void onAddButtons(int m);

    void setDonutChart();

    void setBarChart();

    void setProjectDetails();

    void setReportDetails();

    void onButtonEditClicked(Buttons *);

    void onButtonDeleteClicked(Buttons *);

private:
    Ui::TimeStatus *ui;
    AddTimeDialog m_addTimeDialog;
    AddProjectDialog m_addProjectDialog;
    QDate m_firstDayOfWeek;
    QDate m_lastDayOfWeek;
    QChartView *m_chartView;
    QChartView *m_chartViewBar;
    QChart *m_chart;
    QPieSlice *m_slice;
    QStringList m_categories;
    QBarCategoryAxis *m_axisX;
    int m_year;
    int m_month;
    int m_day;
    int m_j;
};

#endif // TIMESTATUS_H
