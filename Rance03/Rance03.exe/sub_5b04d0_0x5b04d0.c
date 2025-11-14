// 函数: sub_5b04d0
// 地址: 0x5b04d0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_4_1 = arg3
void* ebx = arg2
void* esi = (ebx << 1) + 2
void* var_4 = ebx
bool cond:0 = esi != arg4

while (esi s< arg4)
    void* ecx = esi * 9
    
    if (*(arg3 + (ecx << 2)) s< *(arg3 + (ecx << 2) - 0x24))
        esi -= 1
    
    void* edx = esi * 9
    void* ecx_1 = ebx * 9
    *(arg3 + (ecx_1 << 2)) = *(arg3 + (edx << 2))
    ebx = esi
    esi = (esi << 1) + 2
    *(arg3 + (ecx_1 << 2) + 4) = *(arg3 + (edx << 2) + 4)
    *(arg3 + (ecx_1 << 2) + 0xc) = *(arg3 + (edx << 2) + 0xc)
    *(arg3 + (ecx_1 << 2) + 0x14) = *(arg3 + (edx << 2) + 0x14)
    *(arg3 + (ecx_1 << 2) + 0x18) = *(arg3 + (edx << 2) + 0x18)
    *(arg3 + (ecx_1 << 2) + 0x1c) = *(arg3 + (edx << 2) + 0x1c)
    arg1 = *(arg3 + (edx << 2) + 0x20)
    *(arg3 + (ecx_1 << 2) + 0x20) = arg1
    cond:0 = esi != arg4

if (not(cond:0))
    void* ecx_2 = ebx * 9
    void* edx_2 = arg4 * 9
    ebx = arg4 - 1
    *(arg3 + (ecx_2 << 2)) = *(arg3 + (edx_2 << 2) - 0x24)
    *(arg3 + (ecx_2 << 2) + 4) = *(arg3 + (edx_2 << 2) - 0x20)
    *(arg3 + (ecx_2 << 2) + 0xc) = *(arg3 + (edx_2 << 2) - 0x18)
    *(arg3 + (ecx_2 << 2) + 0x14) = *(arg3 + (edx_2 << 2) - 0x10)
    *(arg3 + (ecx_2 << 2) + 0x18) = *(arg3 + (edx_2 << 2) - 0xc)
    *(arg3 + (ecx_2 << 2) + 0x1c) = *(arg3 + (edx_2 << 2) - 8)
    arg1 = *(arg3 + (edx_2 << 2) - 4)
    *(arg3 + (ecx_2 << 2) + 0x20) = arg1

int32_t var_18 = arg6
return sub_5b07b0(arg1, ebx, arg3, var_4, arg5)
