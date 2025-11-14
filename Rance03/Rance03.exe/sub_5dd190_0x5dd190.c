// 函数: sub_5dd190
// 地址: 0x5dd190
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

void* result = *(arg1 + 4)
void* esi = *(result + 8)
int32_t* ecx = *(esi + 0x2c)
*(esi + 0x21c) = 0

if (ecx != 0)
    result = (**ecx)()
    
    if (result.b != 0 && *(esi + 0x218) == 0)
        *(esi + 0x218) = 1

return result
