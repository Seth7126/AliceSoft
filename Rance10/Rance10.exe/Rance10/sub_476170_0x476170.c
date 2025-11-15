// 函数: sub_476170
// 地址: 0x476170
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t eax_2 = *(arg1 + 0x24)
int32_t* edx = *(arg1 + 0x20)
uint32_t ebx_3 = (eax_2 - edx + 3) u>> 2
int32_t result = 0
int32_t edi = 0

if (edx u> eax_2)
    ebx_3 = 0

if (ebx_3 != 0)
    do
        void* eax = *edx
        edx = &edx[1]
        edi += 1
        int32_t result_1 = result + 1
        
        if (*(eax + 0x1c) != 0)
            result_1 = result
        
        result = result_1
    while (edi != ebx_3)

return result
