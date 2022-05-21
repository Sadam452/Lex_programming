#include <stdio.h>
#include "lex.h"
extern int yylex();     
extern int yylineno;    
extern char* yytext;  
char *names[] = {NULL,"db_type","db_name","db_table_prefix","db_port"};
int main(void) {
    int ntoken, vtoken; //name & value
    ntoken = yylex();
    while(ntoken) {     
        printf("%d\n",ntoken);
        if(yylex() != COLON) { 
            printf("Syntax error in line %d, Except a ':' but found %s\n",yylineno,yytext);
            return 1;
        }   
        vtoken = yylex();
        switch(ntoken){
            case TYPE:
            case NAME:
            case TABLE_PREFIX:
                if(vtoken != IDENTIFIER) {
                    printf("Syntax error in line %d, Except an identifier but found %s\n",yylineno,yytext);
                    return 1;
                }
                printf("%s is set to %s\n",names[ntoken],yytext);
                break;

            case PORT:
                if(vtoken != INTEGER) {
                    printf("Syntax error in line %d, Except an Integer but found %s\n",yylineno,yytext);
                    return 1;
                }
                printf("%s is set to %s\n",names[ntoken],yytext);
                break;

            default:
            	 printf("vtoken = %d",vtoken);
                 printf("line %d have error\n",yylineno);
        }

        ntoken = yylex();
    }
    return 0;
}
