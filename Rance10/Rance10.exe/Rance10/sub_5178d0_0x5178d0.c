// 函数: sub_5178d0
// 地址: 0x5178d0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

void* edi = *(arg1 + 0x44)
sub_555e00(edi, 0x13, arg2)
void* eax = *(edi + (arg2 << 2) + 0x7c)
int32_t edx = 0
int32_t* ecx_1 = *(eax + 0x9c)
void* result = *(eax + 0xa0)
uint32_t esi_4 = (result - ecx_1 + 3) u>> 2

if (ecx_1 u> result)
    esi_4 = 0

if (esi_4 != 0)
    do
        result = *ecx_1
        ecx_1 = &ecx_1[1]
        edx += 1
        *(result + 0xec) = 0
    while (edx != esi_4)

return result
