#include "blueButton.h"
#include <QGraphicsTextItem>
#include <QBrush>

blueButton::blueButton(QString name,QGraphicsItem *parent): QGraphicsRectItem(parent){
    // draw the rect
    setRect(0,0,100,100);
    QBrush brush;
    brush.setStyle(Qt::SolidPattern);
    brush.setColor(Qt::blue);
    setBrush(brush);

    // draw the text
    text = new QGraphicsTextItem(this);
    int xPos = rect().width()/2 - text->boundingRect().width()/2;
    int yPos = rect().height()/2 - text->boundingRect().height()/2;
    text->setPos(xPos,yPos);

    // allow responding to hover events
    setAcceptHoverEvents(true);
}

void blueButton::mousePressEvent(QGraphicsSceneMouseEvent *event){
    emit clicked();
}

void blueButton::hoverEnterEvent(QGraphicsSceneHoverEvent *event){
    // change color to cyan
    QBrush brush;
    brush.setStyle(Qt::SolidPattern);
    brush.setColor(Qt::gray);
    setBrush(brush);
}

void blueButton::hoverLeaveEvent(QGraphicsSceneHoverEvent *event){
    // change color to dark cyan
    QBrush brush;
    brush.setStyle(Qt::SolidPattern);
    brush.setColor(Qt::blue);
    setBrush(brush);
}
