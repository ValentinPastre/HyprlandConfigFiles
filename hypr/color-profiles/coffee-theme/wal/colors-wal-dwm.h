static const char norm_fg[] = "#f1e3ab";
static const char norm_bg[] = "#1b130d";
static const char norm_border[] = "#a89e77";

static const char sel_fg[] = "#f1e3ab";
static const char sel_bg[] = "#A36634";
static const char sel_border[] = "#f1e3ab";

static const char urg_fg[] = "#f1e3ab";
static const char urg_bg[] = "#A45028";
static const char urg_border[] = "#A45028";

static const char *colors[][3]      = {
    /*               fg           bg         border                         */
    [SchemeNorm] = { norm_fg,     norm_bg,   norm_border }, // unfocused wins
    [SchemeSel]  = { sel_fg,      sel_bg,    sel_border },  // the focused win
    [SchemeUrg] =  { urg_fg,      urg_bg,    urg_border },
};
