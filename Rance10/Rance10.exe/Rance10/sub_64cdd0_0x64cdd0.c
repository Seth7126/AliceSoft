// 函数: sub_64cdd0
// 地址: 0x64cdd0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t ebp_1 = arg5 - 1
bool cond:0 = arg5 - 1 s< 0
void* i_2 = *(arg1 + 0x1c)
arg5 = ebp_1
int32_t result = *(*(arg1 + 0x18c) + 8)
int32_t result_1 = result

if (not(cond:0))
    int32_t* edi_1 = arg3
    int32_t edx_1 = arg4 << 2
    int32_t temp1_1
    
    do
        int32_t* ecx_2 = arg2
        arg2 = &ecx_2[1]
        int32_t esi_1 = *(edx_1 + *edi_1)
        void* ebx_2 = *(edx_1 + edi_1[1])
        int32_t ecx_7 = *(edx_1 + edi_1[2])
        edx_1 += 4
        
        if (i_2 u> 0)
            void* esi_2 = esi_1 - ebx_2
            char* ebp_3 = *ecx_2 + 2
            void* ecx_8 = ecx_7 - ebx_2
            void* i_1 = i_2
            void* i
            
            do
                uint32_t edx_2 = zx.d(*ebp_3)
                ebp_3 = &ebp_3[3]
                uint32_t esi_3 = zx.d(ebp_3[0xfffffffc])
                ebx_2 += 1
                uint32_t edi_2 = zx.d(ebp_3[0xfffffffb])
                *(esi_2 + ebx_2 - 1) = ((*(result + (edx_2 << 2) + 0x800)
                    + *(result + (esi_3 << 2) + 0x400) + *(result + (edi_2 << 2))) s>> 0x10).b
                result = result_1
                *(ebx_2 - 1) = ((*(result + (edx_2 << 2) + 0x1400)
                    + *(result + (esi_3 << 2) + 0x1000) + *(result + (edi_2 << 2) + 0xc00)) s>> 0x10).b
                i = i_1
                i_1 -= 1
                *(ecx_8 + ebx_2 - 1) = ((*(result + (edx_2 << 2) + 0x1c00)
                    + *(result + (esi_3 << 2) + 0x1800) + *(result + (edi_2 << 2) + 0x1400)) s>> 0x10)
                    .b
            while (i != 1)
            ebp_1 = arg5
            edi_1 = arg3
        
        temp1_1 = ebp_1
        ebp_1 -= 1
        arg5 = ebp_1
    while (temp1_1 - 1 s>= 0)

return result
