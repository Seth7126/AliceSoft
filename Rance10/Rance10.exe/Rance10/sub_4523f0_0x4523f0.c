// 函数: sub_4523f0
// 地址: 0x4523f0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t result = *(arg1 + 0x34)
int32_t* esi = *(arg1 + 0x30)
uint32_t ebp_3 = (result - esi + 3) u>> 2
int32_t edi = 0

if (esi u> result)
    ebp_3 = 0

if (ebp_3 != 0)
    do
        void* ebx_1 = *esi
        int32_t* ecx = *(ebx_1 + 0x11c)
        
        if (ecx != 0)
            result = (*(*ecx + 4))()
            *(ebx_1 + 0x11c) = 0
        
        edi += 1
        esi = &esi[1]
    while (edi != ebp_3)

return result
