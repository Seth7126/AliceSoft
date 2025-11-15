// 函数: sub_67a0e0
// 地址: 0x67a0e0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t i_1 = arg4
int32_t j_2 = *(arg1 + 0x5c)
int32_t j_3 = j_2
int32_t* eax_1 = *(*(arg1 + 0x1c0) + 0x18)
void* edx = *eax_1
int32_t edx_1 = eax_1[1]
char** result = eax_1[2]
char** result_1 = result

if (i_1 s> 0)
    int32_t* edi_1 = arg3
    result = arg2 - edi_1
    arg2 = result
    int32_t i
    
    do
        char* eax_3 = *(result + edi_1)
        int32_t j_1 = j_2
        void* esi_1 = *edi_1
        
        if (j_2 != 0)
            void* ebp = edx
            int32_t j
            
            do
                char* ecx_1 = zx.d(*eax_3)
                eax_3 = &eax_3[3]
                esi_1 += 1
                char edx_3 = *(ecx_1 + ebp) + *(zx.d(eax_3[0xfffffffe]) + edx_1)
                ebp = edx
                *(esi_1 - 1) = edx_3 + *(zx.d(eax_3[0xffffffff]) + result_1)
                j = j_1
                j_1 -= 1
            while (j != 1)
            edi_1 = arg3
            i_1 = arg4
            j_2 = j_3
        
        result = arg2
        edi_1 = &edi_1[1]
        i = i_1
        i_1 -= 1
        arg3 = edi_1
        arg4 = i_1
    while (i != 1)

return result
