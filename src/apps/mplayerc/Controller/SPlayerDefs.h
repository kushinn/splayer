#ifndef SPLAYERDEFS_H
#define SPLAYERDEFS_H

// int variable ids for PlayerPreference
#define INTVAR_CL_SWITCHES          1000
#define INTVAR_LOGO_AUTOSTRETCH     1001
#define INTVAR_PLAYLIST_CURRENT     1002
#define INTVAR_SHUFFLEPLAYLISTITEMS 1003
#define INTVAR_AUTOLOADAUDIO        1004
#define INTVAR_TOGGLEFULLSCRENWHENPLAYBACKSTARTED   1005
#define INTVAR_LEFTCLICK2PAUSE                      1006
#define INTVAR_MAP_CENTERCH2LR                      1007
#define INTVAR_CHECKFILEASSOCONSTARTUP              1008
#define INTVAR_CURSNAPTIME                          1009
#define INTVAR_CURPLAYEDTIME                        1010
#define INTVAR_CURTOTALPLAYTIME                     1011
#define INTVAR_PLAYAD                               1012

// int64 variables
#define INT64VAR_MAINWINDOW         1000

// string variables
#define STRVAR_HOTKEYSCHEME         1000
#define STRVAR_GETSNAPTIMEURL       1001
#define STRVAR_GETSNAPTIMEURL_ACT   1003
#define STRVAR_UPLOADUSRBHVURL      1004
#define STRVAR_UPLOADUSRBHVURL_ACT  1005

#define STRVAR_APIURL               1006
#define STRVAR_LASTSPIDERPATH       1007

#define STRVAR_SUBTITLE_SAVEMETHOD  1008        // "same","custom"
#define STRVAR_SUBTITLE_SAVE_CUSTOMPATH 1009    // "custom path"

#define STRVAR_AD                   1010        // string to get ads
#define STRVAR_TIMEBMP_TYPE         1011        // "Display_TimeLeft", "Display_TimeTotal", "Display_Power"

#define STRVAR_USER_ACCOUNT_NAME    1012   // used to record the user share's logging name, don't save to database

#define STRVAR_MAINSUBTITLEFONT     1013
#define STRVAR_SECONDARYSUBTITLEFONT 1014

#define STRVAR_HIDEAD                1015

#define STRVAR_CHECK_ED2K_EXIST        1016
#define STRVAR_UPLOAD_ED2K          1017

// string array variables
#define STRARRAY_PLAYLIST           1000

// temprary data for globle usage
#define STRARRAY_QUERYSUBTITLE      1001

// custom messages
#define WM_SPLAYER_CMD      WM_USER+9901

// custom commands
#define CMD_OPEN_CURRENTPLAYLISTITEM   1
#define CMD_OPEN_PLAYLIST              2

#endif // SPLAYERDEFS_H
