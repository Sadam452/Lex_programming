# Lex Program
* This simple program checks the syntax of the file config.in. This program is written in such a way that syntax of config.in file is accepted. So it only distinguishes between identifier, integer, colon, /t, /n, and the input file should follow the format of config.in file.
* ## Instructions to run the code:
  *Create input file(say input.txt) \n
  *Create header file(say lex.h)
  *Create lex file say(lex.l)
  *Go to command line and write "lex lex.l"
  *Create main.c file
  *Go to command line & write "gcc main.c lex.y.cc -o out"
  *You are ready to go now, just enter "./out < input.txt" & your input file will be compiled.
  **Note: lex.yy.c file will be automatically created after "lex lex.l"
