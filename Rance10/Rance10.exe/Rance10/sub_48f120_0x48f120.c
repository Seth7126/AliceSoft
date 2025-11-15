// 函数: sub_48f120
// 地址: 0x48f120
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

void* var_4_1 = arg1
int32_t ebp = 0
int32_t* esi = *(arg1 + 8)
int32_t eax_1 = *(arg1 + 0xc)
uint32_t ebx_3 = (eax_1 - esi + 3) u>> 2
int32_t edi = 0

if (esi u> eax_1)
    ebx_3 = 0

if (ebx_3 != 0)
    do
        int32_t eax_3 = (*(**esi + 0x10))()
        esi = &esi[1]
        
        if (edi u< eax_3)
            edi = eax_3
        
        ebp += 1
    while (ebp != ebx_3)

return *(arg1 + 0x18) + edi
