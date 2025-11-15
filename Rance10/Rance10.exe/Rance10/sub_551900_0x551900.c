// 函数: sub_551900
// 地址: 0x551900
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

*(arg1 + 0x61) = 1
int32_t* result = *(arg1 + 0xc)
int32_t* esi = *(arg1 + 8)
uint32_t ebx_3 = (result - esi + 3) u>> 2
int32_t edi = 0

if (esi u> result)
    ebx_3 = 0

if (ebx_3 != 0)
    do
        result = *esi
        void* ecx = *result
        result[0xd].b = 1
        
        if (ecx != 0)
            result = sub_451b40(ecx)
        
        edi += 1
        esi = &esi[1]
    while (edi != ebx_3)

return result
