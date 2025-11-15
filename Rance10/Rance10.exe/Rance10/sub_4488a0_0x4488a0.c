// 函数: sub_4488a0
// 地址: 0x4488a0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

char* var_4_1 = arg1
char* var_4 = arg1
int32_t eax = arg2[1]
arg1.b = 7
arg1.b = 7 - (eax.b & 7)
int32_t* eax_1 = *arg2
arg2[1] = eax + 1
int32_t edi = *eax_1
eax_1.b = *(edi + (eax u>> 3))
eax_1.b u>>= arg1.b
eax_1.b &= 1
*var_4 = eax_1.b
uint32_t ecx_2 = (eax + 1) u>> 3
int32_t esi_3 = (eax + 1) & 7
uint32_t eax_2

if (esi_3 == 0)
    eax_2 = 0
else
    eax_2 = zx.d(*(edi + ecx_2 + 1))

char edx_5 = ((zx.d(*(edi + ecx_2)) << 8 | eax_2) s>> (8 - esi_3.b)).b
arg2[1] = eax + 4
*(var_4 + 4) = zx.d(edx_5) u>> 5
uint32_t result
result.b = 1
return result
