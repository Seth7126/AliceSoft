// 函数: sub_64f170
// 地址: 0x64f170
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

void* edi = arg1[0x66]

if (arg1[0x3f].b != 0)
    *(edi + 0x70) = *arg1[6]
    *(edi + 0x74) = *(arg1[6] + 4)
    sub_64e3c0(sub_64e520(edi), 0x7f, edi, 7)
    int32_t eax_5 = *(edi + 0x70)
    *(edi + 0xc) = 0
    *(edi + 0x10) = 0
    *arg1[6] = eax_5
    int32_t eax_6 = *(edi + 0x74)
    *(arg1[6] + 4) = eax_6
    return eax_6

int32_t* ecx_4 = arg1[6]
int128_t xmm0 = *(edi + 0xc)
int32_t* var_4 = arg1
int32_t var_24 = *ecx_4
int32_t eax_8 = ecx_4[1]
int128_t var_1c = xmm0
int64_t xmm0_1 = *(edi + 0x1c)

if (sub_64e2d0(eax_8, 0x7f, &var_24, 7) == 0)
    *(*arg1 + 0x14) = 0x19
    (**arg1)(arg1)
else
    var_1c.d = 0
    var_1c:4.d = 0

*arg1[6] = var_24
*(arg1[6] + 4) = eax_8
*(edi + 0xc) = var_1c
*(edi + 0x1c) = xmm0_1
return eax_8
