// 函数: sub_57a3b0
// 地址: 0x57a3b0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t eax_3 = (arg4 - arg3) s/ 0x6c

if (eax_3 s<= 0x28)
    int32_t __saved_edi = arg5
    return sub_57a6e0(eax_3, arg2, arg3, arg4)

int32_t eax_5
int32_t edx_2
edx_2:eax_5 = sx.q(eax_3 + 1)
int32_t eax_7 = (eax_5 + (edx_2 & 7)) s>> 3
void* edi = eax_7 * 0x6c
void* ebx_1 = eax_7 * 0xd8
void* eax_8 = ebx_1 + arg3
int32_t var_1c = arg5
sub_57a6e0(eax_8, edi + arg3, arg3, eax_8)
int32_t var_24 = arg5
void* eax_9 = edi + arg2
sub_57a6e0(eax_9, arg2, arg2 - edi, eax_9)
int32_t var_2c = arg5
void* eax_11 = arg4 - ebx_1
void* esi_4 = arg4 - edi
int32_t var_34 = arg5
return sub_57a6e0(sub_57a6e0(eax_11, esi_4, eax_11, arg4), arg2, edi + arg3, esi_4)
