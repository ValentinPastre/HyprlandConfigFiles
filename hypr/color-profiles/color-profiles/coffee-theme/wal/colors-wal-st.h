const char *colorname[] = {

  /* 8 normal colors */
  [0] = "#0c0d0b", /* black   */
  [1] = "#965C3D", /* red     */
  [2] = "#956E52", /* green   */
  [3] = "#7F807B", /* yellow  */
  [4] = "#9C8973", /* blue    */
  [5] = "#D7A372", /* magenta */
  [6] = "#AAA090", /* cyan    */
  [7] = "#e3cfbd", /* white   */

  /* 8 bright colors */
  [8]  = "#9e9084",  /* black   */
  [9]  = "#965C3D",  /* red     */
  [10] = "#956E52", /* green   */
  [11] = "#7F807B", /* yellow  */
  [12] = "#9C8973", /* blue    */
  [13] = "#D7A372", /* magenta */
  [14] = "#AAA090", /* cyan    */
  [15] = "#e3cfbd", /* white   */

  /* special colors */
  [256] = "#0c0d0b", /* background */
  [257] = "#e3cfbd", /* foreground */
  [258] = "#e3cfbd",     /* cursor */
};

/* Default colors (colorname index)
 * foreground, background, cursor */
 unsigned int defaultbg = 0;
 unsigned int defaultfg = 257;
 unsigned int defaultcs = 258;
 unsigned int defaultrcs= 258;
