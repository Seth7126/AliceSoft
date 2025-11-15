// 函数: sub_4a00f0
// 地址: 0x4a00f0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

void keyState
int32_t eax_1 = __security_cookie ^ &keyState

if (arg1 == 0x90 || arg1 == 0x10 || arg1 == 0xa0 || arg1 == 0xa1)
    _memset(&keyState, 0, 0x100)
    
    if (GetKeyboardState(&keyState) != 0)
        int32_t var_a3_1 = 0
        int32_t var_e2_1 = 0
        int16_t var_dd_1 = 0
        int32_t var_9e_1 = 0
        char var_de_1 = 0
        char var_e3_1 = 0
        SetKeyboardState(&keyState)

@__security_check_cookie@4(eax_1 ^ &keyState)
return 0
