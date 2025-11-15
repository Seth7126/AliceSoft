// 函数: sub_449780
// 地址: 0x449780
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t edi = arg1[1]
uint32_t edx_1 = edi u>> 3
int32_t ebx_1 = edi & 7
uint32_t ecx

if (ebx_1 == 0)
    ecx = 0
else
    ecx = zx.d(*(**arg1 + edx_1 + 1))

uint32_t edx_4 = zx.d(*(**arg1 + edx_1)) << 8 | ecx
arg1[1] = edi + 8
return zx.d((edx_4 s>> (8 - ebx_1.b)).b)
