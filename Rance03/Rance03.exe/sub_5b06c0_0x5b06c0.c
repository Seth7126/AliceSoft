// 函数: sub_5b06c0
// 地址: 0x5b06c0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_4_1 = arg3
void* ebx = arg2
void* esi = (ebx << 1) + 2
void* var_4 = ebx
bool cond:0 = esi != arg4

while (esi s< arg4)
    void* ecx_1 = esi * 7
    
    if (*(arg3 + (ecx_1 << 2)) s< *(arg3 + (ecx_1 << 2) - 0x1c))
        esi -= 1
    
    void* edx_1 = esi * 7
    void* ecx_3 = ebx * 7
    ebx = esi
    esi = (esi << 1) + 2
    *(arg3 + (ecx_3 << 2)) = *(arg3 + (edx_1 << 2))
    *(arg3 + (ecx_3 << 2) + 4) = *(arg3 + (edx_1 << 2) + 4)
    *(arg3 + (ecx_3 << 2) + 0xc) = *(arg3 + (edx_1 << 2) + 0xc)
    *(arg3 + (ecx_3 << 2) + 0x10) = *(arg3 + (edx_1 << 2) + 0x10)
    *(arg3 + (ecx_3 << 2) + 0x14) = *(arg3 + (edx_1 << 2) + 0x14)
    arg1 = *(arg3 + (edx_1 << 2) + 0x18)
    *(arg3 + (ecx_3 << 2) + 0x18) = arg1
    cond:0 = esi != arg4

if (not(cond:0))
    void* edx_3 = arg4 * 7
    void* ecx_5 = ebx * 7
    ebx = arg4 - 1
    *(arg3 + (ecx_5 << 2)) = *(arg3 + (edx_3 << 2) - 0x1c)
    *(arg3 + (ecx_5 << 2) + 4) = *(arg3 + (edx_3 << 2) - 0x18)
    *(arg3 + (ecx_5 << 2) + 0xc) = *(arg3 + (edx_3 << 2) - 0x10)
    *(arg3 + (ecx_5 << 2) + 0x10) = *(arg3 + (edx_3 << 2) - 0xc)
    *(arg3 + (ecx_5 << 2) + 0x14) = *(arg3 + (edx_3 << 2) - 8)
    arg1 = *(arg3 + (edx_3 << 2) - 4)
    *(arg3 + (ecx_5 << 2) + 0x18) = arg1

int32_t var_18 = arg6
return sub_5b0970(arg1, ebx, arg3, var_4, arg5)
