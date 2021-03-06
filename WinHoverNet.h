//#ifndef WINHOVERNET_H
//#define WINHOVERNET_H

//#include "lfx_global.h"
//#include "lib/MonitorInfo_x11.h"
//#include <QWidget>
//#include <QVector>
//#include <QLabel>
//#include <QGridLayout>
//#include "WinSetting.h"

//LFX_USE_NAESPACE

//class QTimer;
//class WinHoverNet : public QWidget
//{
//    Q_OBJECT

//public:
//    explicit WinHoverNet(WinSetting *winSetting = nullptr, Qt::Orientation orientation = Qt::Horizontal, QWidget *parent = nullptr);
//    ~WinHoverNet();

//    WinHoverNet* winHoverNetObject();

//    void init();
//    void initSigConnect();
//    void setLabWidgetLayout(bool isHorizontal);
//    void setLabWidgetLayout(Qt::Orientation orientation);
//    bool isHoverDisplay();
//    void DataOverWarning(QString title, QString text, QWidget *parent = nullptr, bool isTransient = true, int ms = 1000 * 60 * 10);

//    void showTest(QString str);
//    QString hoverDisplayText();

//public slots:
//    // 响应本身
//    void onNet();
//    void onCpu();
//    void onMemory();
//    void onSystemRunTime();

//    // 响应 WinSetting 发射的信号
//    void onCurrentFont(const QFont &font);
//    void onFontSize(int size);
//    void onShowModel(bool check);
//    void onUnitModel(const QString &text);
//    void onUnitModelIndex(int index);
//    void onLabTextColor(const QColor color);
//    void onTextColor(const QColor color);
//    void onLabUploadText(const QString &text);
//    void onLabDownText(const QString &text);
//    void onLabCpuText(const QString &text);
//    void onLabMemoryText(const QString &text);
////    void onLabDiskReadText(const QString &text);
////    void onLabDiskWriteText(const QString &text);

//    void onDisolayNet(bool check);
//    void onDisolayCPUAndMemory(bool check);
////    void onDisolayDisk(bool check);
//    void onLocationExchangeNet(bool check);
//    void onLocationExchangeCPUAndMenory(bool check);
////    void onLocationExchangeDisk(bool check);

//    void onFractionalAccuracy(int num);
//    void onRefreshInterval(int interval);
//    void onHoverDisplay(bool check);

//    // 响应 WinMain 发射的信号
//    void onCpuOver(bool check);
//    void onMemOver(bool check);
//    void onCpuOverNum(int cpu);
//    void onMemOverNum(int mem);
//    void onBtnApplyWinMain();

//private:
//    long m_upload;   // 网速的上次数值
//    long m_down;
//    QVector<CpuInfo> m_vec;
//    int m_precision; // 精确度
//    bool m_hover;    // 悬浮现实额外信息
//    QVector<QVariant> m_vecOverWarningTemp;  // 临时
//    QVector<QVariant> m_vecOverWarning; // 顺序：(0-1 是否选中预警):cpu、mem;(2-3 预警数值):cpu、mem；

//    MonitorInfo_x11 *m_info;
//    ModelUnit m_modelUnit;
//    QTimer *m_timer;              // 刷新时间

//    WinSetting *m_winSetting;
//    Qt::Orientation m_orientation;
//    QGridLayout *m_gridLayout;
//    QVector<QLabel *> m_vecLabel; // 顺序：0上传标签、1上传；2下载标签、3下载；4CPU标签、5CPU；6Mem标签、7Mem；
//};

//#endif // WINHOVERNET_H
