// 函数: sub_534c10
// 地址: 0x534c10
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t* var_4_1 = arg3
void* eax = arg4
int32_t ebx = arg6
int32_t edx = arg5
int32_t ebp = edx * 2

if (ebp s<= ebx)
    do
        int32_t var_18_1 = arg7
        int32_t* edx_1 = &arg3[edx]
        int32_t* esi_1 = &edx_1[edx]
        eax = sub_534cf0(eax, edx_1, arg3, edx_1, esi_1, eax)
        ebx -= ebp
        arg3 = esi_1
    while (ebx s>= ebp)
    
    edx = arg5

if (ebx s<= edx)
    return _memcpy(eax, arg3, (arg2 - arg3) & 0xfffffffc)

int32_t __saved_esi_1 = arg7
int32_t* edx_2 = &arg3[edx]
return sub_534cf0(eax, edx_2, arg3, edx_2, arg2, eax)
