#ifndef MUSICLRCARTPHOTOLABEL_H
#define MUSICLRCARTPHOTOLABEL_H

#include <QWidget>
#include "musiclibexportglobal.h"

#define PIX_HEIGHT 16
#define PIX_WIDTH  16

class MUSIC_WIDGET_EXPORT MusicLrcArtPhotoLabel : public QWidget
{
    Q_OBJECT
public:
    explicit MusicLrcArtPhotoLabel(QWidget *parent = 0);

    void setImagePath(const QString& path);
    void saveImagePath(const QString& path);

signals:
public slots:

protected:
    virtual void paintEvent(QPaintEvent *event);
    virtual void wheelEvent(QWheelEvent *event);

    QString m_path;
    QPixmap m_showPix;
    int m_width, m_height;

};

#endif // MUSICLRCARTPHOTOLABEL_H