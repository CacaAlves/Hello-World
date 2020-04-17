#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>
#include "library.h"
#define VERSION 1.0
bool help() {
    printf("Ajuda:\n\'--help\' ou \'-h\': Mostra a opção de ajuda.\nSair:\n\'--exit\' \'-e\'.\nou Saudações:\n\'--pt\' ou \'-1\': Saudação em português.\n\'--en\' ou \'-2\': Saudação em inglês.\n\'--es\' ou \'-3\': Saudação em espanhol.\n\'--fr\' ou \'-4\': Saudação em francês.\n\'--it\' ou \'-5\': Saudação em italiano.\n\'--de\' ou \'-6\': Saudação em alemão.\n\'--jp\' ou \'-7\': Saudação em japonês.\n\'--ch\' ou \'-8\': Saudação em chinês tradicional.\n\'--ru\' ou \'-9\': Saudação em russo.\nVersão:\n'--version' ou '-v': Mostra a versão atual do programa.\n");
}
bool version() {
    printf("%.1f\n", VERSION);
    return false;
}
bool portugueseHW() {
    printf("Olá mundo!\n");
    return false;
}
bool englishHW() {
    printf("Hello world\n");
    return false;
}
bool spanishHW() {
    printf("Hola Mundo\n");
    return false;
}
bool frenchHW() {
    printf("Bonjour le monde\n");
    return false;
}
bool italianHW() {
    printf("Ciao mondo\n");
    return false;

}
bool germanHW() {
    printf("Hallo Welt\n");
    return false;

}
bool japoneseHW() {
    printf("こんにちは世界\n");
    return false;

}
bool chineseHW() {
    printf("你好，世界\n");
    return false;

}
bool russianHW() {
    printf("Привет мир\n");
    return false;

}
bool error() {
    printf("Comando não encontrado\n");
    return false;

}
bool close() {
    printf("Tchau!\n");
    return true;
}
void shortCommandHelloWorld(char command, bool *end)
{
    switch (command)
    {
    case 'h':
        *end = help();
        break;
    case 'v':
        *end = version();
        break;
    case 'e':
        *end = close();
        break;
    case '1':
        *end = portugueseHW();
        break;
    case '2':
        *end = englishHW();
        break;
    case '3':
        spanishHW();
        break;
    case '4':
        frenchHW();
        break;
    case '5':
        italianHW();
        break;
    case '6':
        germanHW();
        break;
    case '7':
        japoneseHW();
        break;
    case '8':
        chineseHW();
        break;
    case '9':
        russianHW();
        break;
    default:
        error();
        break;
    }
}
void longCommandHelloWorld(char command[], bool *end) {
    if (command[0] == '-' && command[1] == '-') {
        char versionCommand[11] = "--version";
        char helpCommand[11] = "--help";
        char exitCommand[11] = "--exit";
        char portugueseCommand[11] = "--pt";
        char englishCommand[11] = "--en";
        char spanishCommand[11] = "--es";
        char frenchCommand[11] = "--fr";
        char italianCommand[11] = "--it";
        char germanCommand[11] = "--de";
        char japoneseCommand[11] = "--jp";
        char chineseCommand[11] = "--ch";
        char russianCommand[11] = "--ru";
        if (strncmp(command,versionCommand,11) ==  0) {
            *end = version();
        } 
        else if (strncmp(command,helpCommand,11) ==  0) {
            *end = help();
        }
        else if (strncmp(command,exitCommand,11) ==  0) {
            *end = close();
        }
        else if (strncmp(command,portugueseCommand,11) ==  0) {
            *end = portugueseHW();
        }
        else if (strncmp(command,englishCommand,11) ==  0) {
            *end = englishHW();
        }
        else if (strncmp(command,spanishCommand,11) ==  0) {
            *end = spanishHW();
        }
        else if (strncmp(command,frenchCommand,11) ==  0) {
            *end = frenchHW();
        }
        else if (strncmp(command,italianCommand,11) ==  0) {
            *end = italianHW();
        }
        else if (strncmp(command,germanCommand,11) ==  0) {
            *end = germanHW();
        }
        else if (strncmp(command,japoneseCommand,11) ==  0) {
            *end = japoneseHW();        
        }
        else if (strncmp(command,chineseCommand,11) ==  0) {
            *end = chineseHW();
        }
        else if (strncmp(command,russianCommand,11) ==  0) {
            *end = russianHW();
        }
        else {
            *end = error();
        }
    }
}