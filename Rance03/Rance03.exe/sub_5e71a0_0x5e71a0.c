// 函数: sub_5e71a0
// 地址: 0x5e71a0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

uint8_t keyState
int32_t eax_1 = __security_cookie ^ &keyState

if (arg1 == 0x90 || arg1 == 0x10 || arg1 == 0xa0 || arg1 == 0xa1)
    keyState = 0
    char var_103[0x20]
    _memset(&var_103, 0, 0xff)
    GetKeyboardState(&keyState)
    int32_t var_a3_1 = 0
    int32_t var_e2_1 = 0
    int16_t var_dd_1 = 0
    int32_t var_9e_1 = 0
    char var_de_1 = 0
    char var_e3_1 = 0
    SetKeyboardState(&keyState)

sub_69a5bc(eax_1 ^ &keyState)
return 0
