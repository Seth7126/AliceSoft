// 函数: sub_552e70
// 地址: 0x552e70
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_4_1 = arg3
void* ebx = arg2
void* eax = (ebx << 1) + 2
void* esi = ebx
bool cond:0 = eax != arg4

while (eax s< arg4)
    int32_t* edx = arg3 + eax * 0x14
    
    if (*edx s< edx[-5])
        eax -= 1
    
    int32_t* esi_1 = arg3 + eax * 0x14
    void* ecx_3 = ebx * 5
    ebx = eax
    int32_t* edx_1 = arg3 + (ecx_3 << 2)
    *edx_1 = *esi_1
    eax = (eax << 1) + 2
    edx_1[1] = esi_1[1]
    edx_1[3] = esi_1[3]
    edx_1[4] = esi_1[4]
    cond:0 = eax != arg4

if (not(cond:0))
    void* edx_2 = arg3 + arg4 * 0x14
    int32_t* ecx_8 = arg3 + ebx * 0x14
    *ecx_8 = *(edx_2 - 0x14)
    ebx = arg4 - 1
    ecx_8[1] = *(edx_2 - 0x10)
    ecx_8[3] = *(edx_2 - 8)
    eax = *(edx_2 - 4)
    ecx_8[4] = eax

int32_t var_18 = arg6
return sub_5530c0(eax, ebx, arg3, esi, arg5)
