// 函数: sub_47eac0
// 地址: 0x47eac0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

void* result = *(arg1 + 0x2c)
int32_t* esi = *(arg1 + 0x28)
uint32_t ebx_3 = (result - esi + 3) u>> 2
int32_t edi = 0

if (esi u> result)
    ebx_3 = 0

if (ebx_3 != 0)
    do
        result = *esi
        
        if (*(result + 0x8c) != 0 && *(result + 0x90) != 0)
            result = (*(**(result + 0x5c) + 0x4c))(arg2)
        
        edi += 1
        esi = &esi[1]
    while (edi != ebx_3)

return result
