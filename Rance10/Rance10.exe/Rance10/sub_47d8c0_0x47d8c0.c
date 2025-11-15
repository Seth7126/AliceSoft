// 函数: sub_47d8c0
// 地址: 0x47d8c0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t edi = 0
int32_t* esi = *(arg1 + 8)
uint32_t ebx_3 = (*(arg1 + 0xc) - esi + 3) u>> 2

if (esi u> *(arg1 + 0xc))
    ebx_3 = 0

if (ebx_3 != 0)
    do
        int32_t* ecx = *esi
        
        if (ecx != 0)
            (**ecx)(1)
        
        edi += 1
        esi = &esi[1]
    while (edi != ebx_3)

int32_t result = *(arg1 + 8)
*(arg1 + 0xc) = result
return result
