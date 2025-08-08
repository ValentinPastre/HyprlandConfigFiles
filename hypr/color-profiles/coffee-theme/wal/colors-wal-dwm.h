static const char norm_fg[] = "#e3cfbd";
static const char norm_bg[] = "#0c0d0b";
static const char norm_border[] = "#9e9084";

static const char sel_fg[] = "#e3cfbd";
static const char sel_bg[] = "#956E52";
static const char sel_border[] = "#e3cfbd";

static const char urg_fg[] = "#e3cfbd";
static const char urg_bg[] = "#965C3D";
static const char urg_border[] = "#965C3D";

static const char *colors[][3]      = {
    /*               fg           bg         border                         */
    [SchemeNorm] = { norm_fg,     norm_bg,   norm_border }, // unfocused wins
    [SchemeSel]  = { sel_fg,      sel_bg,    sel_border },  // the focused win
    [SchemeUrg] =  { urg_fg,      urg_bg,    urg_border },
};
