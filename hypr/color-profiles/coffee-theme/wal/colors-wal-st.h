const char *colorname[] = {

  /* 8 normal colors */
  [0] = "#1b130d", /* black   */
  [1] = "#A45028", /* red     */
  [2] = "#A36634", /* green   */
  [3] = "#A16D47", /* yellow  */
  [4] = "#D29239", /* blue    */
  [5] = "#B68B5B", /* magenta */
  [6] = "#DEA255", /* cyan    */
  [7] = "#f1e3ab", /* white   */

  /* 8 bright colors */
  [8]  = "#a89e77",  /* black   */
  [9]  = "#A45028",  /* red     */
  [10] = "#A36634", /* green   */
  [11] = "#A16D47", /* yellow  */
  [12] = "#D29239", /* blue    */
  [13] = "#B68B5B", /* magenta */
  [14] = "#DEA255", /* cyan    */
  [15] = "#f1e3ab", /* white   */

  /* special colors */
  [256] = "#1b130d", /* background */
  [257] = "#f1e3ab", /* foreground */
  [258] = "#f1e3ab",     /* cursor */
};

/* Default colors (colorname index)
 * foreground, background, cursor */
 unsigned int defaultbg = 0;
 unsigned int defaultfg = 257;
 unsigned int defaultcs = 258;
 unsigned int defaultrcs= 258;
