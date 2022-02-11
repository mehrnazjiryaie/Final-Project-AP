#ifndef YELLOWBUTTON_H
#define YELLOWBUTTON_H

#include <QGraphicsRectItem>
#include <QGraphicsSceneMouseEvent>

class yellowButton:public QObject, public QGraphicsRectItem{
    Q_OBJECT
public:
    // constructors
    yellowButton(QString name, QGraphicsItem* parent=NULL);

    // public methods (events)
    void mousePressEvent(QGraphicsSceneMouseEvent *event);
    void hoverEnterEvent(QGraphicsSceneHoverEvent *event);
    void hoverLeaveEvent(QGraphicsSceneHoverEvent *event);
signals:
    void clicked();
private:
    QGraphicsTextItem* text;
};

#endif // YELLOWBUTTON_H
