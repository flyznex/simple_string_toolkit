#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

private slots:
    void on_btn_Action_clicked();

    void on_btn_action_clicked();

    void on_btn_proceed_clicked();

private:
    Ui::MainWindow *ui;
};

#endif // MAINWINDOW_H