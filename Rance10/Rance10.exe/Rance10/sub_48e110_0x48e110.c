// 函数: sub_48e110
// 地址: 0x48e110
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

void* var_4_1 = arg1
int32_t* esi = *(arg1 + 8)
int32_t ebp = 0
uint32_t ebx_3 = (*(arg1 + 0xc) - esi + 3) u>> 2
int32_t result = 0

if (esi u> *(arg1 + 0xc))
    ebx_3 = 0

if (ebx_3 != 0)
    do
        int32_t result_1 = (*(**esi + 0x10))()
        esi = &esi[1]
        
        if (result u< result_1)
            result = result_1
        
        ebp += 1
    while (ebp != ebx_3)

int32_t eax_2 = *(arg1 + 0x18)
int32_t ebp_1 = 0
int32_t* esi_1 = *(arg1 + 0x14)
uint32_t ebx_7 = (eax_2 - esi_1 + 3) u>> 2

if (esi_1 u> eax_2)
    ebx_7 = 0

if (ebx_7 != 0)
    do
        int32_t result_2 = (*(**esi_1 + 0x10))()
        esi_1 = &esi_1[1]
        
        if (result u< result_2)
            result = result_2
        
        ebp_1 += 1
    while (ebp_1 != ebx_7)

return result
