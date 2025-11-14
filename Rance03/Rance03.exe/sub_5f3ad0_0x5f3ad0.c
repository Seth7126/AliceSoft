// 函数: sub_5f3ad0
// 地址: 0x5f3ad0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

void* result = arg2
int32_t* ebx = arg1
void* result_1 = result
int32_t* var_c = ebx

if (ebx != result)
    int32_t* esi_1 = &ebx[1]
    
    if (esi_1 != result)
        do
            result = *esi_1
            int32_t* edx = esi_1
            int32_t ebp_1 = *(*(result + 0x48) + 8)
            
            if (ebp_1 s<= *(*(*ebx + 0x48) + 8))
                void* ebp_2 = esi_1[-1]
                void* edi_1 = &esi_1[-1]
                ebx = var_c
                
                if (ebp_1 s> *(*(ebp_2 + 0x48) + 8))
                    void** ebx_2 = edx
                    
                    do
                        *ebx_2 = ebp_2
                        ebx_2 = edi_1
                        ebp_2 = *(edi_1 - 4)
                        edi_1 -= 4
                    while (*(*(result + 0x48) + 8) s> *(*(ebp_2 + 0x48) + 8))
                    
                    ebx = var_c
                    edx = ebx_2
                
                *edx = result
            else
                int32_t* ecx_3 = esi_1
                
                if (ebx != esi_1)
                    do
                        int32_t edx_1 = ecx_3[-1]
                        ecx_3 -= 4
                        ecx_3[1] = edx_1
                    while (ecx_3 != ebx)
                
                *ebx = result
            
            esi_1 = &esi_1[1]
        while (esi_1 != result_1)

return result
