// 函数: sub_4efd40
// 地址: 0x4efd40
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

void* esi = data_75d4fc
int32_t* result = *(esi + 0x134)

if (result != *(esi + 0x138))
    int32_t* ecx_1 = *result
    
    if (ecx_1 != 0)
        (**ecx_1)(1)
    
    int32_t* eax_1 = *(esi + 0x134)
    result = _memcpy(eax_1, &eax_1[1], (*(esi + 0x138) - &eax_1[1]) & 0xfffffffc)
    *(esi + 0x138) -= 4

return result
