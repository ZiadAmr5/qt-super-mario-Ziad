#pragma once

#include <QGraphicsRectItem>
#include <QKeyEvent>
#include <QObject>

class Player : public QObject, public QGraphicsRectItem {
 public:
  Player();

 protected:
  void keyPressEvent(QKeyEvent* event) override;

 public slots:
  void update();

 private:
  int velocityY;
  bool onGround;
};
