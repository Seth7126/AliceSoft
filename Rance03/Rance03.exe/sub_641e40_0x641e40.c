// 函数: sub_641e40
// 地址: 0x641e40
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t __saved_ebp
int32_t eax_1 = __security_cookie ^ &__saved_ebp
int32_t esi = arg3[0xa]
int32_t eax_2 = *arg3
__alloca_probe_16(esi << 2)
int32_t __saved_edi
int32_t* var_20 = &__saved_edi
int32_t i = 0
float xmm1_1 = *(arg3[1] + 4) + arg6

if (esi s> 0)
    do
        (&__saved_edi)[i] = 0xc61c3c00
        i += 1
    while (i s< arg3[0xa])

void* eax_13 = arg3[1]
float xmm0 = *(eax_13 + 8)

if (not(xmm0 <= xmm1_1))
    xmm1_1 = xmm0

int32_t ecx = eax_2
int32_t i_2 = 0
int32_t ebx = arg5

if (ecx s>= 4)
    void* esi_1 = ebx + 8
    int32_t i_3 = ((ecx - 4) u>> 2) + 1
    int32_t* edx_1 = 8
    int32_t i_1
    
    do
        int32_t* ecx_3 = 0xfffffff8 - ebx + esi_1
        *(esi_1 - 8) = *(ecx_3 + arg3[4]) + xmm1_1
        *(esi_1 - 4) = *(ecx_3 + arg3[4] + 4) + xmm1_1
        float xmm0_5 = *(edx_1 + arg3[4])
        edx_1 = &edx_1[4]
        *esi_1 = xmm0_5 + xmm1_1
        eax_13 = arg3[4]
        *(esi_1 + 4) = *(4 - ebx + esi_1 + eax_13) + xmm1_1
        esi_1 += 0x10
        i_1 = i_3
        i_3 -= 1
    while (i_1 != 1)
    i_2 = (((ecx - 4) u>> 2) + 1) << 2
    ebx = arg5
    ecx = eax_2

for (; i_2 s< ecx; i_2 += 1)
    eax_13 = arg3[4]
    *(ebx + (i_2 << 2)) = *(eax_13 + (i_2 << 2)) + xmm1_1

int32_t var_38 = ecx
int32_t result =
    sub_641350(sub_640ff0(eax_13, arg3[2], arg3, arg2, ebx, var_20, arg4), var_20, arg3, ebx)
sub_69a5bc(eax_1 ^ &__saved_ebp)
return result
