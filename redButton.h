#ifndef REDBUTTON_H
#define REDBUTTON_H

#include <QGraphicsRectItem>
#include <QGraphicsSceneMouseEvent>

class redButton:public QObject, public QGraphicsRectItem{
    Q_OBJECT
public:
    // constructors
    redButton(QString name, QGraphicsItem* parent=NULL);

    // public methods (events)
    void mousePressEvent(QGraphicsSceneMouseEvent *event);
    void hoverEnterEvent(QGraphicsSceneHoverEvent *event);
    void hoverLeaveEvent(QGraphicsSceneHoverEvent *event);
signals:
    void clicked();
private:
    QGraphicsTextItem* text;
};

#endif // REDBUTTON_H
