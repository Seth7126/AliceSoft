// 函数: sub_526eb0
// 地址: 0x526eb0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

void* esi = data_75d508

if (arg1 s< 0 || arg1 s>= (*(esi + 0x54) - *(esi + 0x50)) s>> 2)
    int32_t eax
    eax.b = 0
    return eax

int32_t edi = arg1 << 2
void* edx = *(edi + *(esi + 0x50))

if (edx != 0)
    int32_t* ecx_1 = *(esi + 0x5c)
    
    if (ecx_1 != 0)
        (*(*ecx_1 + 0xc))(*(edx + 8))
        (*(**(esi + 0x5c) + 0x10))((*(esi + 0x50))[arg1])
    
    (*(**(edi + *(esi + 0x50)) + 4))()
    *(edi + *(esi + 0x50)) = 0

int32_t eax_3
eax_3.b = 1
return eax_3
