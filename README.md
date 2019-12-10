# CPSC 323 Project

Compile Instructions:

1. lex proj.l

2. yacc -d proj.y

3. gcc lex.yy.c y.tab.c -o proj.out

4. ./proj.out < final.txt

5. ./a.out
