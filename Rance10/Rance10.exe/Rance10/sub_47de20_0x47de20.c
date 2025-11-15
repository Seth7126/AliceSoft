// 函数: sub_47de20
// 地址: 0x47de20
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t* ecx = *(arg1 + 4)

if (ecx != 0)
    (*(*ecx + 0x20))(ecx)
    int32_t* eax_2 = *(arg1 + 4)
    (*(*eax_2 + 8))(eax_2)
    *(arg1 + 4) = 0

int32_t result = *(arg1 + 0xc)
int32_t edx = 0
int32_t* ecx_2 = *(arg1 + 8)
uint32_t esi_4 = (result - ecx_2 + 3) u>> 2

if (ecx_2 u> result)
    esi_4 = 0

if (esi_4 != 0)
    do
        edx += 1
        *ecx_2 = 0
        ecx_2 = &ecx_2[1]
    while (edx != esi_4)

return result
