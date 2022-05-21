# Lex Program
* This simple program checks the syntax of the file config.in. This program is written in such a way that syntax of config.in file is accepted. So it only distinguishes between identifier, integer, colon, /t, /n, and the input file should follow the format of config.in file.
* ## Instructions to run the code:
  * Create input file(say input.txt) <br>
  * Create header file(say lex.h)<br>
  * Create lex file say(lex.l)<br>
  * Go to command line and write "lex lex.l"<br>
  * Create main.c file<br>
  * Go to command line & write "gcc main.c lex.y.cc -o out"<br>
  * You are ready to go now, just enter "./out < input.txt" & your input file will be compiled.<br>
  **Note: lex.yy.c file will be automatically created after "lex lex.l"
