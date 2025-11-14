// 函数: sub_5dde60
// 地址: 0x5dde60
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t result = arg2

if (result == 0)
    *(arg1 + 8) = arg1 + 4
    return arg1 + 4

void* esi = *(arg1 + 0xc)
*(arg1 + 8) = result
int32_t* ecx = *(esi + 0x2c)

if (ecx != 0)
    result = (**ecx)()
    
    if (result.b != 0 && *(esi + 0x218) == 0)
        *(esi + 0x218) = 1

return result
