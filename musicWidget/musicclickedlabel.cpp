#include "musicclickedlabel.h"
#include <QMouseEvent>

MusicClickedLabel::MusicClickedLabel(QWidget *parent)
    : QLabel(parent)
{

}

void MusicClickedLabel::mousePressEvent(QMouseEvent *event)
{
    QLabel::mousePressEvent(event);
    if(event->button() == Qt::LeftButton)
    {
       emit clicked();
    }
}
