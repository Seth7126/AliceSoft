// 函数: __FindPESection
// 地址: 0x6a75e0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t edx = 0
void* ecx_1 = *(arg1 + 0x3c) + arg1
uint32_t ebx = zx.d(*(ecx_1 + 6))
void* result = zx.d(*(ecx_1 + 0x14)) + 0x18 + ecx_1

if (ebx != 0)
    do
        int32_t esi_1 = *(result + 0xc)
        
        if (arg2 u>= esi_1 && arg2 u< *(result + 8) + esi_1)
            return result
        
        edx += 1
        result += 0x28
    while (edx u< ebx)

return nullptr
