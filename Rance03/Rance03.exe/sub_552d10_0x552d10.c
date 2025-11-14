// 函数: sub_552d10
// 地址: 0x552d10
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_4_1 = arg3
void* ebx = arg2
void* esi = (ebx << 1) + 2
void* var_4 = ebx
bool cond:0 = esi != arg4

while (esi s< arg4)
    void* ecx = esi * 5
    
    if (*(arg3 + (ecx << 2)) s< *(arg3 + (ecx << 2) - 0x14))
        esi -= 1
    
    void* edx = esi * 5
    void* ecx_1 = ebx * 5
    *(arg3 + (ecx_1 << 2)) = *(arg3 + (edx << 2))
    ebx = esi
    esi = (esi << 1) + 2
    *(arg3 + (ecx_1 << 2) + 4) = *(arg3 + (edx << 2) + 4)
    *(arg3 + (ecx_1 << 2) + 0xc) = *(arg3 + (edx << 2) + 0xc)
    arg1 = *(arg3 + (edx << 2) + 0x10)
    *(arg3 + (ecx_1 << 2) + 0x10) = arg1
    cond:0 = esi != arg4

if (not(cond:0))
    void* edx_2 = arg4 * 5
    void* ecx_2 = ebx * 5
    ebx = arg4 - 1
    *(arg3 + (ecx_2 << 2)) = *(arg3 + (edx_2 << 2) - 0x14)
    *(arg3 + (ecx_2 << 2) + 4) = *(arg3 + (edx_2 << 2) - 0x10)
    *(arg3 + (ecx_2 << 2) + 0xc) = *(arg3 + (edx_2 << 2) - 8)
    arg1 = *(arg3 + (edx_2 << 2) - 4)
    *(arg3 + (ecx_2 << 2) + 0x10) = arg1

int32_t var_18 = arg6
return sub_552ff0(arg1, ebx, arg3, var_4, arg5)
