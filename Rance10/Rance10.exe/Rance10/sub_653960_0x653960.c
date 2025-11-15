// 函数: sub_653960
// 地址: 0x653960
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t ebp = arg3
void* esi_1 = *(arg2 + 0x24) * *(arg2 + 0x1c)
void* var_4 = esi_1
int32_t eax_1 = esi_1 * 2
sub_6535f0(eax_1, *(arg1 + 0x104), ebp, *(arg1 + 0x1c), eax_1)
int32_t i = 0
int32_t i_1 = 0

if (*(arg1 + 0x104) s> 0)
    int32_t* ecx_1 = arg4
    void* edx_1 = arg1
    
    do
        void* edi_1 = *(ebp + (i << 2))
        void* eax_2 = *(ebp + (i << 2) + 4)
        int32_t ebp_1 = 1
        void* ebx_1 = *ecx_1
        
        if (esi_1 != 0)
            arg2 = esi_1
            void* j
            
            do
                uint32_t ecx_2 = zx.d(*(edi_1 + 1))
                ebx_1 += 1
                uint32_t esi_2 = zx.d(*(eax_2 + 1))
                edi_1 += 2
                eax_2 += 2
                int32_t ecx_4 = zx.d(*(eax_2 - 2)) + ebp_1
                ebp_1 ^= 3
                j = arg2
                arg2 -= 1
                *(ebx_1 - 1) = ((zx.d(*(edi_1 - 2)) + ecx_4 + esi_2 + ecx_2) s>> 2).b
            while (j != 1)
            ecx_1 = arg4
            esi_1 = var_4
            edx_1 = arg1
        
        ecx_1 = &ecx_1[1]
        ebp = arg3
        i = i_1 + 2
        i_1 = i
        arg4 = ecx_1
    while (i s< *(edx_1 + 0x104))

return i
