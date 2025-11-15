// 函数: ?ResetGlobalAllocationData@ResourceManager@details@Concurrency@@AAEXXZ
// 地址: 0x6eef12
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

void* var_8 = arg1
void* var_c = arg1
void* esi = arg1
void* var_c_1 = esi
int32_t i = 0

if (*(esi + 0x18) u> 0)
    int32_t edi_1 = 0
    
    do
        void* ecx_1 = *(esi + 0x48) + edi_1
        int32_t var_8_1 = 0
        *(ecx_1 + 8) = 0
        *(ecx_1 + 0x1c) = 0
        
        if (*(ecx_1 + 4) u> 0)
            int32_t ebx_1 = 0
            int32_t j = 0
            
            do
                int32_t* eax_2 = *(ecx_1 + 0x20) + ebx_1
                ebx_1 += 0x24
                *eax_2 = 0
                eax_2[7] = 0
                j += 1
            while (j u< *(ecx_1 + 4))
            
            esi = var_c_1
        
        i += 1
        edi_1 += 0x28
    while (i u< *(esi + 0x18))

return 0
