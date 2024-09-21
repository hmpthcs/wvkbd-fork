#ifndef config_def_h_INCLUDED
#define config_def_h_INCLUDED

#define DEFAULT_FONT "Bitter 14"
#define DEFAULT_ROUNDING 3
static const int transparency = 255;

/* wvkbd-mobintl --fg ffffffff --fg-sp ccccccff \ 
--bg 000000aa --text 000000ff --text-sp 000000ff \
--press 000000aa --press-sp 000000aa --swipe 000000aa \
--swipe-sp 000000aa -L 160 -H 180 \
--landscape-layers landscape,special -l simple,special \
--hidden --fn "Bitter 14" -O \
  | swipeGuess /usr/local/bin/count1w.txt \
  | completelyTypeWord.sh &
*/

struct clr_scheme schemes[] = {
{
  /* colors */
  .bg = {.bgra = {15, 15, 15, transparency}},
  .fg = {.bgra = {45, 45, 45, transparency}},
  .high = {.bgra = {100, 100, 100, transparency}},
  .swipe = {.bgra = {100, 255, 100, 64}},
  .text = {.color = UINT32_MAX},
  .font = DEFAULT_FONT,
  .rounding = DEFAULT_ROUNDING,
},
{
  /* colors */
  .bg = {.bgra = {0, 0, 0, transparency}},
  .fg = {.bgra = {255, 255, 255, transparency}},
  .high = {.bgra = {100, 100, 100, transparency}},
  .swipe = {.bgra = {150, 150, 150, 64}},
  .text = {.color = UINT32_MAX},
  .font = DEFAULT_FONT,
  .rounding = DEFAULT_ROUNDING,
}
};

/* layers is an ordered list of layouts, used to cycle through */
static enum layout_id layers[] = {
  Full, // First layout is the default layout on startup
  Special, 
  NumLayouts // signals the last item, may not be omitted
};

/* layers is an ordered list of layouts, used to cycle through */
static enum layout_id landscape_layers[] = {
  Landscape, // First layout is the default layout on startup
  LandscapeSpecial,
  NumLayouts // signals the last item, may not be omitted
};

#endif // config_def_h_INCLUDED
