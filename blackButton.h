#ifndef BLACKBUTTON_H
#define BLACKBUTTON_H

#include <QGraphicsRectItem>
#include <QGraphicsSceneMouseEvent>

class blackButton:public QObject, public QGraphicsRectItem{
    Q_OBJECT
public:
    // constructors
    blackButton(QString name, QGraphicsItem* parent=NULL);

    // public methods (events)
    void mousePressEvent(QGraphicsSceneMouseEvent *event);
    void hoverEnterEvent(QGraphicsSceneHoverEvent *event);
    void hoverLeaveEvent(QGraphicsSceneHoverEvent *event);
signals:
    void clicked();
private:
    QGraphicsTextItem* text;
};

#endif // BLACKBUTTON_H
