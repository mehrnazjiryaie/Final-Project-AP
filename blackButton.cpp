#include "blackButton.h"
#include <QGraphicsTextItem>
#include <QBrush>

blackButton::blackButton(QString name,QGraphicsItem *parent): QGraphicsRectItem(parent){
    // draw the rect
    setRect(0,0,100,100);
    QBrush brush;
    brush.setStyle(Qt::SolidPattern);
    brush.setColor(Qt::black);
    setBrush(brush);

    // draw the text
    text = new QGraphicsTextItem(this);
    int xPos = rect().width()/2 - text->boundingRect().width()/2;
    int yPos = rect().height()/2 - text->boundingRect().height()/2;
    text->setPos(xPos,yPos);

    // allow responding to hover events
    setAcceptHoverEvents(true);
}

void blackButton::mousePressEvent(QGraphicsSceneMouseEvent *event){
    emit clicked();
}

void blackButton::hoverEnterEvent(QGraphicsSceneHoverEvent *event){
    // change color to cyan
    QBrush brush;
    brush.setStyle(Qt::SolidPattern);
    brush.setColor(Qt::gray);
    setBrush(brush);
}

void blackButton::hoverLeaveEvent(QGraphicsSceneHoverEvent *event){
    // change color to dark cyan
    QBrush brush;
    brush.setStyle(Qt::SolidPattern);
    brush.setColor(Qt::black);
    setBrush(brush);
}
