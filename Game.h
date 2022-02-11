#ifndef GAME_H
#define GAME_H

#include <QGraphicsView>
#include <QGraphicsScene>

class Game: public QGraphicsView{
    Q_OBJECT
public:
    // constructors
    Game(QWidget* parent=NULL);

    // public methods
    void displayMainMenu();

    // public attributes
    QGraphicsScene* scene;

public slots:
    void start();
    //void shoeBodyColor();
    void solesColor();
    void shoelaseColor();
    void sportShoe();
    void femaleShoe();
    void maleShoe();
    void end();

private:
    // private methods

};

#endif // GAME_H
