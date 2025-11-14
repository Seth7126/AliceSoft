// 函数: sub_428b30
// 地址: 0x428b30
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

LPARAM dwInitParam = arg1
void* eax

if (*arg4 != 0)
    char* eax_1 = arg4
    
    do
        arg1.b = *eax_1
        eax_1 = &eax_1[1]
    while (arg1.b != 0)
    
    eax = eax_1 - &eax_1[1]
else
    eax = nullptr

sub_402110(dwInitParam + 8, arg4, eax)
*(dwInitParam + 0x20) = arg5
*(dwInitParam + 0x24) = arg6
*(dwInitParam + 0x28) = 0xa0
*(dwInitParam + 0x2c) = 0x18
int32_t result = DialogBoxParamA(arg3, 0x69, arg2, sub_697100, dwInitParam)
*(dwInitParam + 4) = result
result.b = result == 0
return result
