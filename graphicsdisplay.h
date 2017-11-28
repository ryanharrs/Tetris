#ifndef GRAPHICSDISPLAY_H
#define GRAPHICSDISPLAY_H
#include <iostream>
#include <vector>
#include "observer.h"
#include "state.h"
#include "window.h"
#include "info.h"
class Cell;

class GraphicsDisplay: public Observer<Info, State> {
  const int blockWidth, blockHeight, widthSize, heightSize, recWidthSize, recHeightSize;
  Xwindow xw;
  	
 public:
  GraphicsDisplay();

  void notify(Subject<Info, State> &whoNotified) override;
};
#endif
