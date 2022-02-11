#include "Game.h"
#include <QGraphicsTextItem>
#include "Button.h"
#include <QBrush>
#include <QImage>
#include <QPixmap>
#include <QMediaPlayer>
#include <QLabel>
#include <QPushButton>
#include "blackButton.h"
#include "whiteButton.h"
#include "blueButton.h"
#include "greenButton.h"
#include "redButton.h"
#include "yellowButton.h"

Game::Game(QWidget *parent){
    // set up the screen
    setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
    setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
    setFixedSize(1024,768);

    // set up the scene
    scene = new QGraphicsScene();
    scene->setSceneRect(0,0,1024,768);
    setScene(scene);

    // play background music
        QMediaPlayer * music = new QMediaPlayer();
        music->setMedia(QUrl("qrc:/sound/images and sounds/bg music.mp3"));
        music->play();
}

void Game::start(){
    // clear the screen
    scene->clear();
    // create the title text
    QGraphicsTextItem* titleText = new QGraphicsTextItem(QString("Choose Your Shoe Type :"));
    QFont titleFont("SV basic manual",40);
    titleText->setFont(titleFont);
    int txPos = this->width()/2 - titleText->boundingRect().width()/2;
    int tyPos = 150;
    titleText->setPos(txPos,tyPos);
    scene->addItem(titleText);

    // create the sport shoe button
    Button* sportButton = new Button(QString("Sport Shoe"));
        int bxPos = this->width()/2 - sportButton->boundingRect().width()/2;
        int byPos = 275;
        sportButton->setPos(bxPos,byPos);
        connect(sportButton,SIGNAL(clicked()),this,SLOT(sportShoe()));
        scene->addItem(sportButton);

        // create the female shoe button
     Button* femaleButton = new Button(QString("Female Shoe"));
         int bxPos2 = this->width()/2 - femaleButton->boundingRect().width()/2;
         int byPos2 = 350;
         femaleButton->setPos(bxPos2,byPos2);
         connect(femaleButton,SIGNAL(clicked()),this,SLOT(femaleShoe()));
         scene->addItem(femaleButton);

         // create the male shoe button
     Button* maleButton = new Button(QString("Male Shoe"));
         int bxPos3 = this->width()/2 - maleButton->boundingRect().width()/2;
         int byPos3 = 425;
         maleButton->setPos(bxPos3,byPos3);
         connect(maleButton,SIGNAL(clicked()),this,SLOT(maleShoe()));
         scene->addItem(maleButton);


    // test code TODO remove

}

void Game::displayMainMenu(){
    setBackgroundBrush(QBrush(QImage(":/img/images and sounds/bg.png")));

    // create the title text
    QGraphicsTextItem* titleText = new QGraphicsTextItem(QString("Color The Shoes"));
    QFont titleFont("cooper black",50);
    titleText->setFont(titleFont);
    int txPos = this->width()/2 - titleText->boundingRect().width()/2;
    int tyPos = 150;
    titleText->setPos(txPos,tyPos);
    scene->addItem(titleText);


    // create the play button

    Button* playButton = new Button(QString("Play"));
        int bxPos = this->width()/2 - playButton->boundingRect().width()/2;
        int byPos = 275;
        playButton->setPos(bxPos,byPos);
        connect(playButton,SIGNAL(clicked()),this,SLOT(start()));
        scene->addItem(playButton);

    // create the quit button
     Button* quitButton = new Button(QString("Quit"));
        int qxPos = this->width()/2 - quitButton->boundingRect().width()/2;
        int qyPos = 350;
        quitButton->setPos(qxPos,qyPos);
        connect(quitButton,SIGNAL(clicked()),this,SLOT(close()));
        scene->addItem(quitButton);
}


void Game::sportShoe()
{
    // clear the screen
    scene->clear();
    QGraphicsTextItem* question1 = new QGraphicsTextItem(QString("What color do you want for shoe body?"));
    QFont titleFont("cooper black",25);
    question1->setFont(titleFont);
    int txPos = this->width()/2 - question1->boundingRect().width()/2;
    int tyPos = 150;
    question1->setPos(txPos,tyPos);
    scene->addItem(question1);

    //color buttons

    blackButton* colorButton1 = new blackButton(QString("black"));
        int bxPos2 = 300;
        int byPos2 = 275;
       colorButton1->setPos(bxPos2,byPos2);
       connect(colorButton1,SIGNAL(clicked()),this,SLOT(shoelaseColor()));
        scene->addItem(colorButton1);

    whiteButton* colorButton2 = new whiteButton(QString("white"));
            int bxPos3 = 440;
            int byPos3 = 275;
           colorButton2->setPos(bxPos3,byPos3);
           connect(colorButton2,SIGNAL(clicked()),this,SLOT(shoelaseColor()));
            scene->addItem(colorButton2);

            blueButton* colorButton3 = new blueButton(QString("blue"));
                int bxPos4 = 580;
                int byPos4 = 275;
               colorButton3->setPos(bxPos4,byPos4);
              connect(colorButton3,SIGNAL(clicked()),this,SLOT(shoelaseColor()));
                scene->addItem(colorButton3);

                redButton* colorButton4 = new redButton(QString("red"));
                    int bxPos5 = 300;
                    int byPos5 = 415;
                   colorButton4->setPos(bxPos5,byPos5);
                  connect(colorButton4,SIGNAL(clicked()),this,SLOT(shoelaseColor()));
                    scene->addItem(colorButton4);

                    greenButton* colorButton5 = new greenButton(QString("green"));
                        int bxPos6 = 440;
                        int byPos6 = 415;
                       colorButton5->setPos(bxPos6,byPos6);
                      connect(colorButton5,SIGNAL(clicked()),this,SLOT(shoelaseColor()));
                        scene->addItem(colorButton5);

                        yellowButton* colorButton6 = new yellowButton(QString("yellow"));
                            int bxPos7 = 580;
                            int byPos7 = 415;
                           colorButton6->setPos(bxPos7,byPos7);
                          connect(colorButton6,SIGNAL(clicked()),this,SLOT(shoelaseColor()));
                            scene->addItem(colorButton6);


}

void Game::femaleShoe()
{
    // clear the screen
    scene->clear();
    QGraphicsTextItem* question1 = new QGraphicsTextItem(QString("What color do you want for shoe body?"));
    QFont titleFont("cooper black",25);
    question1->setFont(titleFont);
    int txPos = this->width()/2 - question1->boundingRect().width()/2;
    int tyPos = 150;
    question1->setPos(txPos,tyPos);
    scene->addItem(question1);

    //color buttons

    blackButton* colorButton1 = new blackButton(QString("black"));
        int bxPos2 = 300;
        int byPos2 = 275;
       colorButton1->setPos(bxPos2,byPos2);
      connect(colorButton1,SIGNAL(clicked()),this,SLOT(solesColor()));
        scene->addItem(colorButton1);

    whiteButton* colorButton2 = new whiteButton(QString("white"));
            int bxPos3 = 440;
            int byPos3 = 275;
           colorButton2->setPos(bxPos3,byPos3);
          connect(colorButton2,SIGNAL(clicked()),this,SLOT(solesColor()));
            scene->addItem(colorButton2);

            blueButton* colorButton3 = new blueButton(QString("blue"));
                int bxPos4 = 580;
                int byPos4 = 275;
               colorButton3->setPos(bxPos4,byPos4);
              connect(colorButton3,SIGNAL(clicked()),this,SLOT(solesColor()));
                scene->addItem(colorButton3);

                redButton* colorButton4 = new redButton(QString("red"));
                    int bxPos5 = 300;
                    int byPos5 = 415;
                   colorButton4->setPos(bxPos5,byPos5);
                  connect(colorButton4,SIGNAL(clicked()),this,SLOT(solesColor()));
                    scene->addItem(colorButton4);

                    greenButton* colorButton5 = new greenButton(QString("green"));
                        int bxPos6 = 440;
                        int byPos6 = 415;
                       colorButton5->setPos(bxPos6,byPos6);
                      connect(colorButton5,SIGNAL(clicked()),this,SLOT(solesColor()));
                        scene->addItem(colorButton5);

                        yellowButton* colorButton6 = new yellowButton(QString("yellow"));
                            int bxPos7 = 580;
                            int byPos7 = 415;
                           colorButton6->setPos(bxPos7,byPos7);
                          connect(colorButton6,SIGNAL(clicked()),this,SLOT(solesColor()));
                            scene->addItem(colorButton6);

}

void Game::maleShoe()
{
    // clear the screen
    scene->clear();
    QGraphicsTextItem* question1 = new QGraphicsTextItem(QString("What color do you want for shoe body?"));
    QFont titleFont("cooper black",25);
    question1->setFont(titleFont);
    int txPos = this->width()/2 - question1->boundingRect().width()/2;
    int tyPos = 150;
    question1->setPos(txPos,tyPos);
    scene->addItem(question1);

    //color buttons

    blackButton* colorButton1 = new blackButton(QString("black"));
        int bxPos2 = 300;
        int byPos2 = 275;
       colorButton1->setPos(bxPos2,byPos2);
     connect(colorButton1,SIGNAL(clicked()),this,SLOT(solesColor()));
        scene->addItem(colorButton1);

    whiteButton* colorButton2 = new whiteButton(QString("white"));
            int bxPos3 = 440;
            int byPos3 = 275;
           colorButton2->setPos(bxPos3,byPos3);
         connect(colorButton2,SIGNAL(clicked()),this,SLOT(solesColor()));
            scene->addItem(colorButton2);

            blueButton* colorButton3 = new blueButton(QString("blue"));
                int bxPos4 = 580;
                int byPos4 = 275;
               colorButton3->setPos(bxPos4,byPos4);
             connect(colorButton3,SIGNAL(clicked()),this,SLOT(solesColor()));
                scene->addItem(colorButton3);

                redButton* colorButton4 = new redButton(QString("red"));
                    int bxPos5 = 300;
                    int byPos5 = 415;
                   colorButton4->setPos(bxPos5,byPos5);
                  connect(colorButton4,SIGNAL(clicked()),this,SLOT(solesColor()));
                    scene->addItem(colorButton4);

                    greenButton* colorButton5 = new greenButton(QString("green"));
                        int bxPos6 = 440;
                        int byPos6 = 415;
                       colorButton5->setPos(bxPos6,byPos6);
                      connect(colorButton5,SIGNAL(clicked()),this,SLOT(solesColor()));
                        scene->addItem(colorButton5);

                        yellowButton* colorButton6 = new yellowButton(QString("yellow"));
                            int bxPos7 = 580;
                            int byPos7 = 415;
                           colorButton6->setPos(bxPos7,byPos7);
                         connect(colorButton6,SIGNAL(clicked()),this,SLOT(solesColor()));
                            scene->addItem(colorButton6);

}

void Game::solesColor()
{
    // clear the screen
    scene->clear();

    QGraphicsTextItem* question1 = new QGraphicsTextItem(QString("What color do you want for shoe soles?"));
    QFont titleFont("cooper black",25);
    question1->setFont(titleFont);
    int txPos = this->width()/2 - question1->boundingRect().width()/2;
    int tyPos = 150;
    question1->setPos(txPos,tyPos);
    scene->addItem(question1);

    //color buttons

    blackButton* colorButton1 = new blackButton(QString("black"));
        int bxPos2 = 300;
        int byPos2 = 275;
       colorButton1->setPos(bxPos2,byPos2);
        connect(colorButton1,SIGNAL(clicked()),this,SLOT(end()));
        scene->addItem(colorButton1);

    whiteButton* colorButton2 = new whiteButton(QString("white"));
            int bxPos3 = 440;
            int byPos3 = 275;
           colorButton2->setPos(bxPos3,byPos3);
         connect(colorButton2,SIGNAL(clicked()),this,SLOT(end()));
            scene->addItem(colorButton2);

            blueButton* colorButton3 = new blueButton(QString("blue"));
                int bxPos4 = 580;
                int byPos4 = 275;
               colorButton3->setPos(bxPos4,byPos4);
             connect(colorButton3,SIGNAL(clicked()),this,SLOT(end()));
                scene->addItem(colorButton3);

                redButton* colorButton4 = new redButton(QString("red"));
                    int bxPos5 = 300;
                    int byPos5 = 415;
                   colorButton4->setPos(bxPos5,byPos5);
               connect(colorButton4,SIGNAL(clicked()),this,SLOT(end()));
                    scene->addItem(colorButton4);

                    greenButton* colorButton5 = new greenButton(QString("green"));
                        int bxPos6 = 440;
                        int byPos6 = 415;
                       colorButton5->setPos(bxPos6,byPos6);
                      connect(colorButton5,SIGNAL(clicked()),this,SLOT(end()));
                        scene->addItem(colorButton5);

                        yellowButton* colorButton6 = new yellowButton(QString("yellow"));
                            int bxPos7 = 580;
                            int byPos7 = 415;
                           colorButton6->setPos(bxPos7,byPos7);
                        connect(colorButton6,SIGNAL(clicked()),this,SLOT(end()));
                            scene->addItem(colorButton6);
}


void Game::shoelaseColor()
{
    // clear the screen
    scene->clear();

    QGraphicsTextItem* question1 = new QGraphicsTextItem(QString("What color do you want for shoelase?"));
    QFont titleFont("cooper black",25);
    question1->setFont(titleFont);
    int txPos = this->width()/2 - question1->boundingRect().width()/2;
    int tyPos = 150;
    question1->setPos(txPos,tyPos);
    scene->addItem(question1);

    //color buttons

    blackButton* colorButton1 = new blackButton(QString("black"));
        int bxPos2 = 300;
        int byPos2 = 275;
       colorButton1->setPos(bxPos2,byPos2);
        connect(colorButton1,SIGNAL(clicked()),this,SLOT(solesColor()));
        scene->addItem(colorButton1);

    whiteButton* colorButton2 = new whiteButton(QString("white"));
            int bxPos3 = 440;
            int byPos3 = 275;
           colorButton2->setPos(bxPos3,byPos3);
            connect(colorButton2,SIGNAL(clicked()),this,SLOT(solesColor()));
            scene->addItem(colorButton2);

            blueButton* colorButton3 = new blueButton(QString("blue"));
                int bxPos4 = 580;
                int byPos4 = 275;
               colorButton3->setPos(bxPos4,byPos4);
               connect(colorButton3,SIGNAL(clicked()),this,SLOT(solesColor()));
                scene->addItem(colorButton3);

                redButton* colorButton4 = new redButton(QString("red"));
                    int bxPos5 = 300;
                    int byPos5 = 415;
                   colorButton4->setPos(bxPos5,byPos5);
                   connect(colorButton4,SIGNAL(clicked()),this,SLOT(solesColor()));
                    scene->addItem(colorButton4);

                    greenButton* colorButton5 = new greenButton(QString("green"));
                        int bxPos6 = 440;
                        int byPos6 = 415;
                       colorButton5->setPos(bxPos6,byPos6);
                        connect(colorButton5,SIGNAL(clicked()),this,SLOT(solesColor()));
                        scene->addItem(colorButton5);

                        yellowButton* colorButton6 = new yellowButton(QString("yellow"));
                            int bxPos7 = 580;
                            int byPos7 = 415;
                           colorButton6->setPos(bxPos7,byPos7);
                           connect(colorButton6,SIGNAL(clicked()),this,SLOT(solesColor()));
                            scene->addItem(colorButton6);
}

void Game::end()
{
    scene->clear();

    QMediaPlayer * music = new QMediaPlayer();
    music->setMedia(QUrl("qrc:/sound/images and sounds/END MUSIC.wav"));
    music->play();

    QGraphicsTextItem* question1 = new QGraphicsTextItem(QString("CONGRATS!\n YOUR SHOE PAINTED SUCCESSFULLY!!"));
    QFont titleFont("cooper black",25);
    question1->setFont(titleFont);
    int txPos = this->width()/2 - question1->boundingRect().width()/2;
    int tyPos = 150;
    question1->setPos(txPos,tyPos);
    scene->addItem(question1);



}
