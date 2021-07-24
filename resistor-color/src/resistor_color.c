#include "resistor_color.h"


int color_code(resistor_band_t color){
  return color;
}

resistor_band_t* colors(void){
  static resistor_band_t list[WHITE + 1];

  for (int i = BLACK; i <= WHITE; i++){
    list[i] = i;
  }

  return list;
}
