// 函数: sub_436500
// 地址: 0x436500
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t ebp = 0
int32_t* eax_1 = *arg1
uint32_t edx_2 = (arg1[1] + 7) u>> 3
int32_t esi = 0
int32_t ebx_2 = eax_1[1] - edx_2 - *eax_1

if (ebx_2 u> 4)
    ebx_2 = 4

uint32_t edi = 0
int32_t ecx = 0

if (ebx_2 u>= 2)
    int32_t eax_3 = *eax_1 + 1
    int32_t i_1 = ((ebx_2 - 2) u>> 1) + 1
    int32_t var_14_1 = eax_3
    int32_t ebx_3 = 0
    int32_t ecx_1 = i_1 * 2
    int32_t i
    
    do
        char ecx_3 = esi.b + 8
        ebp += zx.d(*(eax_3 + edx_2 - 1)) << esi.b
        esi += 0x10
        uint32_t eax_7 = zx.d(*(var_14_1 + edx_2))
        edx_2 += 2
        ebx_3 += eax_7 << ecx_3
        eax_3 = var_14_1
        i = i_1
        i_1 -= 1
    while (i != 1)
    ecx = ecx_1
    edi = 0
    esi = ebx_3

if (ecx u< ebx_2)
    edi = zx.d(*(*eax_1 + edx_2)) << (ecx << 3).b
    edx_2 += 1

arg1[1] = edx_2 << 3
return esi + ebp + edi
