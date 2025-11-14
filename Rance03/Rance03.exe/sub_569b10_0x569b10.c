// 函数: sub_569b10
// 地址: 0x569b10
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

void** esi = arg3
char* result = arg4

while (esi != arg2)
    if (result != esi)
        sub_401ff0(result, esi, 0, 0xffffffff)
    
    esi = &esi[6]
    result = &result[0x18]

return result
