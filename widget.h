#ifndef WIDGET_H
#define WIDGET_H

#include <QWidget>
#include <QString>

using namespace std;

QT_BEGIN_NAMESPACE
namespace Ui {
class Widget;
}
QT_END_NAMESPACE

class Widget : public QWidget
{
    Q_OBJECT

public:
    Widget(QWidget *parent = nullptr);
    void changeMoney(int coin);
    void changeStatus();
    QString change();

    int money = 0;

    ~Widget();

private slots:
    void on_pbReset_clicked();

    void on_pb500_clicked();

    void on_pb10_clicked();

    void on_pb50_clicked();

    void on_pb100_clicked();

    void on_pbWater_clicked();

    void on_pbCoke_clicked();

    void on_pbTea_clicked();

    void on_pbCoffe_clicked();

    void on_lcdNumber_overflow();

private:
    Ui::Widget *ui;
};
#endif // WIDGET_H
