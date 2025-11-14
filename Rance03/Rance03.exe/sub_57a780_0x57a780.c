// 函数: sub_57a780
// 地址: 0x57a780
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_4_1 = arg3
void* edi = arg2
void* var_4 = edi
void* edx = (edi << 1) + 2
bool cond:0 = edx != arg4

while (edx s< arg4)
    arg1 = edx * 0x6c
    
    if (not(*(arg1 + arg3 - 4) f<= *(arg1 + arg3 + 0x68)))
        edx -= 1
    
    __builtin_memcpy(edi * 0x6c + arg3, edx * 0x6c + arg3, 0x6c)
    edi = edx
    edx = (edx << 1) + 2
    cond:0 = edx != arg4

if (not(cond:0))
    arg1 = arg4 * 0x6c
    __builtin_memcpy(edi * 0x6c + arg3, arg3 - 0x6c + arg1, 0x6c)
    edi = arg4 - 1

int32_t var_18 = arg6
return sub_57a810(arg1, edi, arg3, var_4, arg5)
