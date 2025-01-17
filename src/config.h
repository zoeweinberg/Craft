#ifndef _config_h_
#define _config_h_

// app parameters
#define DEBUG 0
#define FULLSCREEN 0
#define WINDOW_WIDTH 1024
#define WINDOW_HEIGHT 768
#define VSYNC 1
#define SCROLL_THRESHOLD 0.1
#define MAX_MESSAGES 4
#define DB_PATH "craft.db"
#define USE_CACHE 1
#define DAY_LENGTH 600
#define INVERT_MOUSE 0

// rendering options
#define SHOW_LIGHTS 1
#define SHOW_PLANTS 1
#define SHOW_CLOUDS 1
#define SHOW_TREES 1
#define SHOW_ITEM 1
#define SHOW_CROSSHAIRS 1
#define SHOW_WIREFRAME 1
#define SHOW_INFO_TEXT 1
#define SHOW_CHAT_TEXT 1
#define SHOW_PLAYER_NAMES 1

// key bindings
#define CRAFT_KEY_FORWARD 'W'
#define CRAFT_KEY_BACKWARD 'S'
#define CRAFT_KEY_LEFT 'A'
#define CRAFT_KEY_RIGHT 'D'
#define CRAFT_KEY_JUMP GLFW_KEY_SPACE
#define CRAFT_KEY_DESCEND  GLFW_KEY_LEFT_SHIFT //zw //control stolen from zoom
#define CRAFT_KEY_FLY GLFW_KEY_TAB
#define CRAFT_KEY_TOGGLE_SCROLLING GLFW_KEY_C //zw
#define CRAFT_KEY_PLACE_ROW GLFW_KEY_H //zw
//place a whole Horizontal row of blocks along X axis

#define CRAFT_KEY_CONNECT_TO_DEFAULT_SERVER GLFW_KEY_I //zw //I for Internet
//Unused for now in src/main.c but ZW wants to use it later for convenience

#define CRAFT_KEY_TOGGLE_MINECRAFT_STYLE_FLYING 'M' //ZW

#define CRAFT_KEY_OBSERVE 'O'
#define CRAFT_KEY_OBSERVE_INSET 'P'
#define CRAFT_KEY_ITEM_NEXT 'E'
#define CRAFT_KEY_ITEM_PREV 'R'
#define CRAFT_KEY_ZOOM 'Z' //changed by ZW //zw
#define CRAFT_KEY_ORTHO 'F'
#define CRAFT_KEY_CHAT 't' //ZW: for Talk?
//ZW: it only works when lowercase, IDK why.

#define CRAFT_KEY_COMMAND '/'
#define CRAFT_KEY_SIGN '`'

// advanced parameters
#define CREATE_CHUNK_RADIUS 10
#define RENDER_CHUNK_RADIUS 10
#define RENDER_SIGN_RADIUS 4
#define DELETE_CHUNK_RADIUS 14
#define CHUNK_SIZE 32
#define COMMIT_INTERVAL 5

#endif
