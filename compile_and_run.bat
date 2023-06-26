cls
del out.exe
echo COMPILANDO CODIGO
gcc ./src/main.c ./src/dataProcessing.c -o ./out -lm -g
timeout -t 2
out