// 函数: sub_48f700
// 地址: 0x48f700
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

void* var_4_1 = arg1
int32_t* esi = *(arg1 + 8)
int32_t ebp = 0
void* var_4 = arg1
uint32_t ebx_3 = (*(arg1 + 0xc) - esi + 3) u>> 2
int32_t edi = 0

if (esi u> *(arg1 + 0xc))
    ebx_3 = 0

if (ebx_3 != 0)
    do
        int32_t eax_2 = (*(**esi + 0x10))()
        esi = &esi[1]
        
        if (edi u< eax_2)
            edi = eax_2
        
        ebp += 1
    while (ebp != ebx_3)
    
    arg1 = var_4

int32_t* esi_1 = *(arg1 + 0x14)
int32_t ebp_1 = 0
uint32_t ebx_7 = (*(arg1 + 0x18) - esi_1 + 3) u>> 2

if (esi_1 u> *(arg1 + 0x18))
    ebx_7 = 0

if (ebx_7 != 0)
    do
        int32_t eax_4 = (*(**esi_1 + 0x10))()
        esi_1 = &esi_1[1]
        
        if (edi u< eax_4)
            edi = eax_4
        
        ebp_1 += 1
    while (ebp_1 != ebx_7)
    
    arg1 = var_4

return *(arg1 + 0x24) + edi
