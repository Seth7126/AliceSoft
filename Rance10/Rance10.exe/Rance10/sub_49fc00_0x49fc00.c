// 函数: sub_49fc00
// 地址: 0x49fc00
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

void* var_4 = arg1
uint32_t eax = zx.d(arg3)

if (eax u<= 0x9cc1)
    if (eax u>= 0x9cb8)
        sub_499aa0(arg1 + 0x270, eax - 0x9cb8)
        return 0
    
    if (eax - 0x9ca5 u<= 4)
        switch (eax)
            case 0x9ca5
                sub_4a03f0(arg1, arg2)
                sub_49d350(arg1 + 0x158)
            case 0x9ca6
                sub_49fcf0(arg1, arg2)
            case 0x9ca7
                SendMessageA(arg2, 0x10, 0, 0)
            case 0x9ca8
                sub_4a3850(arg1)
            case 0x9ca9
                sub_49df60(arg1)
else if (eax == 0xa803)
    sub_4a2f70(arg1)
else
    if (eax == 0xa804)
        sub_4a2fa0(arg1)
        return 0
    
    if (eax == 0xa805)
        sub_4a33e0(arg1)

return 0
