// 函数: sub_4279c0
// 地址: 0x4279c0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t edi = 0
int32_t* esi = *(arg1 + 0x34)
uint32_t ebx_3 = (*(arg1 + 0x38) - esi + 3) u>> 2

if (esi u> *(arg1 + 0x38))
    ebx_3 = 0

if (ebx_3 != 0)
    do
        int32_t* ecx = *esi
        
        if (ecx != 0)
            (**ecx)(1)
        
        edi += 1
        esi = &esi[1]
    while (edi != ebx_3)

int32_t result = *(arg1 + 0x34)
*(arg1 + 0x38) = result
return result
