#pragma once
#include "TextPrint.cpp"	
#include "input.cpp"
#include "IDT.cpp"
#include "shellkb.cpp"
#include "stdlib.cpp"

void print_prompt(){
	char buf[128];
	PrintText("> ", FG_LGRN);
	int buf_size = input_read(buf, 128);
	PrintText("\n\r");
	PrintText(IntegerToString(buf_size));
	PrintText(buf);
	PrintText("\n\r");
	memset(buf, 0, buf_size);
}


void BasicShell(){
	MainKeyBoardHandler = ShellKeyBoardHandler;
	print_prompt();
}