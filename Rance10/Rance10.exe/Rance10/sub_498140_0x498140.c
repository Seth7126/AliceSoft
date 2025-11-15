// 函数: sub_498140
// 地址: 0x498140
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t edi = 0
int32_t eax = *(arg1 + 0x1e0)
int32_t* esi = *(arg1 + 0x1dc)
uint32_t ebx_3 = (eax - esi + 3) u>> 2

if (esi u> eax)
    ebx_3 = 0

if (ebx_3 != 0)
    do
        (*(**esi + 4))()
        edi += 1
        esi = &esi[1]
    while (edi != ebx_3)

int32_t result = *(arg1 + 0x1dc)
*(arg1 + 0x1e0) = result
return result
