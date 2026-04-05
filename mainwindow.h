#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QWebEngineView>
#include <QApplication>

#include <QWebEngineProfile>
#include <QWebEnginePage>
#include <QWebEngineSettings>
#include <QDesktopServices>
#include <QUrl>

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private:
    QWebEngineView *webView; // 网页视图
    QWebEngineProfile *profile;
    QWebEnginePage *page;
};

#endif // MAINWINDOW_H
