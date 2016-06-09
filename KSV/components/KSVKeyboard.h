#ifndef KSV_KEYBOARD_H
#define KSV_KEYBOARD_H

class Keyboard {

public:

    /**
     * Converte para o caractere correspondente na tabela ASCII
     */
    static const char *convertKeyCode(int key);

    static bool isMDFKey(int keyCode);

    static int MDFKeyIndex(int keyCode);
};


#endif //KSV_KEYBOARD_H
