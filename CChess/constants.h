#ifndef CONSTANTS_H
#define CONSTANTS_H

#include <string>


enum Side {
	WHITE = 0,
	BLACK = 1
};
const int FIRST_TURN = WHITE;
/*
	@param		piece		char of piece

	@return		enum of White if piece is uppercase; Black otherwise
*/
int inline whichSide(const char& piece) {
	return (piece == toupper(piece)) ? WHITE : BLACK;
}


const std::string JSON_EXT = ".json";

const std::string SAVE_DIR = "saves\\";
const std::string SAVE_RULES = "rules";
const std::string SAVE_ROUND = "round";
const std::string SAVE_WHITE_TURN = "white_turn";
const std::string SAVE_BLACK_TURN = "black_turn";
const std::string SAVE_TIME = "time";

const std::string UNDO_TEMP = "undo_temp";

const std::string RULES_DIR = "rules\\";
const std::string RULESET = "ruleset";
const std::string DEFAULT_RULES = "normal";
const std::string RULES_BOARD = "board";
const std::string RULES_ROYAL = "royal";

const std::string PIECES_LIBRARY = "piece_library";
const std::string PIECE_NAME = "name";
const std::string PIECE_INITIAL_ARRAY = "initial";
const std::string PIECE_MOVE_ARRAY = "move";
const std::string PIECE_CAPTURE_ARRAY = "capture";

const int JSON_RANGE_INDEX = 2;		//see note_on_pieces_json.txt
const int JSON_RANGE_INFINITE = -1;


const int BOARD_SIZE = 8;
const char FIRST_ROW = '1';
const char FIRST_COL = 'a';
const char EMPTY = ' ';

#endif CONSTANTS_H
