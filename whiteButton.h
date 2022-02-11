#ifndef WHITEBUTTON_H
#define WHITEBUTTON_H

#include <QGraphicsRectItem>
#include <QGraphicsSceneMouseEvent>

class whiteButton:public QObject, public QGraphicsRectItem{
    Q_OBJECT
public:
    // constructors
    whiteButton(QString name, QGraphicsItem* parent=NULL);

    // public methods (events)
    void mousePressEvent(QGraphicsSceneMouseEvent *event);
    void hoverEnterEvent(QGraphicsSceneHoverEvent *event);
    void hoverLeaveEvent(QGraphicsSceneHoverEvent *event);
signals:
    void clicked();
private:
    QGraphicsTextItem* text;
};


#endif // WHITEBUTTON_H
