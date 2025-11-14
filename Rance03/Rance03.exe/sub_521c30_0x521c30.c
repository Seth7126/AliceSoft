// 函数: sub_521c30
// 地址: 0x521c30
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t* ecx = *(arg2 + 0xdc)
int32_t* esi_1

if (ecx != 0)
    (**ecx)()
    esi_1 = *(arg2 + 0xdc)
else
    esi_1 = nullptr

int32_t* ecx_1 = *(arg1 + 0xe0)

if (ecx_1 != esi_1)
    if (ecx_1 != 0)
        (*(*ecx_1 + 4))()
    
    *(arg1 + 0xe0) = esi_1
else if (esi_1 != 0)
    (*(*esi_1 + 4))()
    int32_t eax_3
    eax_3.b = 1
    return eax_3

int32_t eax
eax.b = 1
return eax
