#ifndef GREENBUTTON_H
#define GREENBUTTON_H

#include <QGraphicsRectItem>
#include <QGraphicsSceneMouseEvent>

class greenButton:public QObject, public QGraphicsRectItem{
    Q_OBJECT
public:
    // constructors
    greenButton(QString name, QGraphicsItem* parent=NULL);

    // public methods (events)
    void mousePressEvent(QGraphicsSceneMouseEvent *event);
    void hoverEnterEvent(QGraphicsSceneHoverEvent *event);
    void hoverLeaveEvent(QGraphicsSceneHoverEvent *event);
signals:
    void clicked();
private:
    QGraphicsTextItem* text;
};

#endif // GREENBUTTON_H
