#include "mainwindow.h"
#include <QDir>
#include <QIcon>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
{
    setWindowTitle("DeepSeek Client");

    this->resize(1100, 750);
    setWindowIcon(QIcon(":/icons/deepseek-color.png"));

    // 创建持久的WebEngineProfile来保存登录状态
    QString profilePath = QDir::homePath() + "/.DeepSeekClient";
    profile = new QWebEngineProfile("default", this);
    profile->setPersistentStoragePath(profilePath);
    profile->setPersistentCookiesPolicy(QWebEngineProfile::ForcePersistentCookies);

    // 启用必要的设置
    QWebEngineSettings *s = profile->settings();
    s->setAttribute(QWebEngineSettings::JavascriptEnabled, true);
    s->setAttribute(QWebEngineSettings::LocalStorageEnabled, true);
    s->setAttribute(QWebEngineSettings::AllowRunningInsecureContent, true);

    // 创建WebEnginePage并设置到WebEngineView
    page = new QWebEnginePage(profile, this);
    webView = new QWebEngineView(this);
    webView->setPage(page);

    // 加载 DeepSeek 官方网页版
    webView->load(QUrl("https://chat.deepseek.com"));

    // 将网页设为窗口中心控件
    this->setCentralWidget(webView);
}

MainWindow::~MainWindow()
{
    // 确保 WebEnginePage 在 WebEngineProfile 之前被删除，以避免警告
    delete webView;
    delete page;
    delete profile;
}
