#pragma once

#define MATCH_STATE_NOT_STARTED 0
#define MATCH_STATE_REBEL_ACTION_ROUND_SIGN 2
#define MATCH_STATE_FIGHT 3
#define MATCH_STATE_FINISH_SIGN 4
#define MATCH_STATE_WIN_LOSE_SIGN 5
#define MATCH_STATE_VICTORY_SCREEN 7
#define MATCH_STATE_NOT_IN_MATCH 7 //self-defined, not present in the game

#define GAME_STATE_ARCSYS_LOGO 2
#define GAME_STATE_INTRO_VIDEO_PLAYING 3
#define GAME_STATE_TITLE_SCREEN 4
#define GAME_STATE_CHARACTER_SELECTION_SCREEN 6
#define GAME_STATE_ARCADE_ACT_SELECT_SCREEN 11
#define GAME_STATE_SCORE_ATTACK_MODE_SELECT_SCREEN 11
#define GAME_STATE_SPEEDSTAR_MODE_SELECT_SCREEN 11
#define GAME_STATE_ARCADE_CHAR_INFO_SCREEN 12
#define GAME_STATE_ARCADE_STAGE_SELECT_SCREEN 13
#define GAME_STATE_VERSUS_SCREEN 14
#define GAME_STATE_IN_MATCH 15
#define GAME_STATE_VICTORY_SCREEN 16
#define GAME_STATE_STORY_MENU 24
#define GAME_STATE_GALLERY_MENU 25
#define GAME_STATE_ITEM_MENU 25
#define GAME_STATE_REPLAY_MENU 26
#define GAME_STATE_MAIN_MENU 27
#define GAME_STATE_TUTORIAL_MENU 28
#define GAME_STATE_LIBRARY_MENU 28
#define GAME_STATE_LOBBY 31
#define GAME_STATE_STORY_PLAYING 33
#define GAME_STATE_ABYSS_MENU 34
#define GAME_STATE_D_CODE_EDIT 39

#define GAME_MODE_ARCADE 1
#define GAME_MODE_STORY 4
#define GAME_MODE_VERSUS 5
#define GAME_MODE_TRAINING 6
#define GAME_MODE_TUTORIAL 7
#define GAME_MODE_CHALLENGE 8
//#define GAME_MODE_GALLERY 9
//#define GAME_MODE_ITEM_SHOP 10
#define GAME_MODE_REPLAY_THEATER 11
//#define GAME_MODE_TITLE_SCREEN 12
//#define GAME_MODE_MAIN_MENU_SCREEN 13
#define GAME_MODE_ONLINE 15
#define GAME_MODE_ABYSS 16
//#define GAME_MODE_D_CODE_EDIT 18