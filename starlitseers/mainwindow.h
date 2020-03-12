#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <windows.h>

#include "mediamute.h"



namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    MediaMute Cmute;
    ~MainWindow();
public:


private:
    Ui::MainWindow *ui;

public slots:
    void FreshSeer();//刷新游戏
    void Mute();//静音
    void unMute();
    void OptimizingMemory();//优化内存
    
    void ChangeSpeedPrepare();//变速准备
    void ChangeSpeed();//修改速度大小为speed_size
    void open();
    void speedopen();
};
#endif // MAINWINDOW_H
