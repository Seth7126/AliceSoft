// 函数: sub_481f40
// 地址: 0x481f40
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

void* var_4_2 = arg1

if (*(arg1 + 8) == 0 || *(arg1 + 0xc) == 0)
    return 0

int32_t* esi = *(arg1 + 0x10)
uint32_t ebx_3 = (*(arg1 + 0x14) - esi + 3) u>> 2
int32_t edi = 0

if (esi u> *(arg1 + 0x14))
    ebx_3 = 0

if (ebx_3 != 0)
    int32_t ebp_1 = 0
    
    do
        int32_t eax_2 = (*(**esi + 0x10))()
        esi = &esi[1]
        
        if (edi u< eax_2)
            edi = eax_2
        
        ebp_1 += 1
    while (ebp_1 != ebx_3)

int32_t* esi_1 = *(arg1 + 0xc)
uint32_t ebx_4 = (*(*esi_1 + 0x18))()

if (ebx_4 == 0)
    ebx_4 = 4
    uint32_t esi_4 = ((*(*esi_1 + 0x1c))() * (*(*esi_1 + 0xc))()) u>> 3
    
    if (esi_4 != 0)
        ebx_4 = esi_4

int32_t eax_9 = (*(**(arg1 + 8) + 0x28))()
int32_t ecx_5
ecx_5.b = *(arg1 + 0x1c) != 0
return eax_9 * (ecx_5 + 1) + ebx_4 * edi
