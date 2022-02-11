#ifndef BLUEBUTTON_H
#define BLUEBUTTON_H

#include <QGraphicsRectItem>
#include <QGraphicsSceneMouseEvent>

class blueButton:public QObject, public QGraphicsRectItem{
    Q_OBJECT
public:
    // constructors
    blueButton(QString name, QGraphicsItem* parent=NULL);

    // public methods (events)
    void mousePressEvent(QGraphicsSceneMouseEvent *event);
    void hoverEnterEvent(QGraphicsSceneHoverEvent *event);
    void hoverLeaveEvent(QGraphicsSceneHoverEvent *event);
signals:
    void clicked();
private:
    QGraphicsTextItem* text;
};


#endif // BLUEBUTTON_H
