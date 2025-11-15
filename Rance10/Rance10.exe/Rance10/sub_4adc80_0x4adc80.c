// 函数: sub_4adc80
// 地址: 0x4adc80
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t result = *(arg1 + 0x7c)
int32_t* esi = *(arg1 + 0x78)
uint32_t ebx_3 = (result - esi + 3) u>> 2
int32_t edi = 0

if (esi u> result)
    ebx_3 = 0

if (ebx_3 != 0)
    do
        void* eax = *esi
        int32_t* ecx = *(eax + 0x74)
        *(eax + 0x23c) = 0
        result = (*(*ecx + 0x50))()
        edi += 1
        esi = &esi[1]
    while (edi != ebx_3)

return result
