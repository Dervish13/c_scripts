#include <FL/Fl.H>
#include <FL/Fl_Dial.H>
#include <FL/Fl_Slider.H>
#include <FL/Fl_Window.H>
#include <arpa/inet.h>
#include <iostream>
//#include <oscpp/channel.h>


//Channel ch(1);


void slider_callback(Fl_Widget *w, void *v)
{
  Fl_Slider *slider = (Fl_Slider *)w;
  float value = 1.0 - slider->value();
  //ch.fader(value);
}


void dial_callback(Fl_Widget *w, void *v)
{
  Fl_Dial *dial = (Fl_Dial *)w;
  std::cout << dial->value() << std::endl;
}


int main(int argc, char **argv)
{
  //ch.serv.sin_addr.s_addr = inet_addr("192.168.5.80");

  Fl_Window *window = new Fl_Window(340, 380);
  window->begin();
  {
    Fl_Slider *slider = new Fl_Slider(0, 0, 20, 200);
    slider->callback(slider_callback);
    Fl_Dial *dial = new Fl_Dial(30, 30, 50, 50);
    dial->callback(dial_callback);
  }
  window->end();
  window->show(argc, argv);
  return Fl::run();
}
