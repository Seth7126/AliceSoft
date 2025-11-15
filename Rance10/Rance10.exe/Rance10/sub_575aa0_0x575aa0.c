// 函数: sub_575aa0
// 地址: 0x575aa0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

char* edi = arg1
int32_t edx = *(arg2 + 4)

if (edx + 0xd u> *(arg2 + 8))
    int32_t eax
    eax.b = 0
    return eax

bool cond:0 = *edx == 1
*(arg2 + 4) = edx + 1
arg1.b = cond:0
*edi = arg1.b
char* ecx = *(arg2 + 4)
uint32_t edx_7 = ((zx.d(ecx[3]) << 8 | zx.d(ecx[2])) << 8 | zx.d(ecx[1])) << 8 | zx.d(*ecx)
*(arg2 + 4) = &ecx[4]
*(edi + 4) = edx_7
char* ecx_1 = *(arg2 + 4)
uint32_t edx_14 = ((zx.d(ecx_1[3]) << 8 | zx.d(ecx_1[2])) << 8 | zx.d(ecx_1[1])) << 8 | zx.d(*ecx_1)
*(arg2 + 4) = &ecx_1[4]
*(edi + 8) = edx_14
char* ecx_2 = *(arg2 + 4)
uint32_t edx_21 = ((zx.d(ecx_2[3]) << 8 | zx.d(ecx_2[2])) << 8 | zx.d(ecx_2[1])) << 8 | zx.d(*ecx_2)
*(arg2 + 4) = &ecx_2[4]
void* eax_13
eax_13.b = 1
*(edi + 0xc) = edx_21
return eax_13
