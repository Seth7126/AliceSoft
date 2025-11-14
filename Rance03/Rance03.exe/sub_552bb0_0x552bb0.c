// 函数: sub_552bb0
// 地址: 0x552bb0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

void* esi = arg2
void* ebp = esi
void* eax = (esi << 1) + 2
bool cond:0 = eax != arg4

while (eax s< arg4)
    int32_t edx_1 = eax << 5
    
    if (*(edx_1 + arg3) s< *(edx_1 + arg3 - 0x20))
        eax -= 1
    
    int32_t* esi_2 = (esi << 5) + arg3
    int32_t* edx_4 = (eax << 5) + arg3
    *esi_2 = *edx_4
    esi_2[1] = edx_4[1]
    *(esi_2 + 0xc) = *(edx_4 + 0xc)
    esi_2[7] = edx_4[7]
    esi = eax
    eax = (eax << 1) + 2
    cond:0 = eax != arg4

if (not(cond:0))
    void* ecx_6 = (arg4 << 5) + arg3
    int32_t* esi_4 = (esi << 5) + arg3
    *esi_4 = *(ecx_6 - 0x20)
    esi_4[1] = *(ecx_6 - 0x1c)
    *(esi_4 + 0xc) = *(ecx_6 - 0x14)
    eax = *(ecx_6 - 4)
    esi_4[7] = eax
    esi = arg4 - 1

int32_t var_14 = arg6
return sub_552f20(eax, esi, arg3, ebp, arg5)
