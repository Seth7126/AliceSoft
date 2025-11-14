// 函数: sub_4be660
// 地址: 0x4be660
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

void* ebp = arg2
char* edx = *(ebp + 4)
void* result

if (&edx[4] u<= *(ebp + 8))
    uint32_t ebx_7 = ((zx.d(edx[3]) << 8 | zx.d(edx[2])) << 8 | zx.d(edx[1])) << 8 | zx.d(*edx)
    *(ebp + 4) = &edx[4]
    sub_4be960(arg1 + 4, ebx_7)
    int32_t esi_1 = 0
    
    if (ebx_7 s> 0)
        int32_t edi_1 = 0
        
        do
            void* var_28_2 = ebp
            int32_t* ecx_2 = *(arg1 + 4) + edi_1
            
            if (sub_4bee10(ecx_2, ecx_2).b == 0)
                goto label_4be7bd
            
            esi_1 += 1
            edi_1 += 0x5c
        while (esi_1 s< ebx_7)
    
    char* ecx_3 = *(ebp + 4)
    
    if (&ecx_3[4] u<= *(ebp + 8))
        void* esi_2 = arg1 + 0x10
        void* var_4_1 = esi_2
        uint32_t ebx_14 =
            ((zx.d(ecx_3[3]) << 8 | zx.d(ecx_3[2])) << 8 | zx.d(ecx_3[1])) << 8 | zx.d(*ecx_3)
        *(ebp + 4) = &ecx_3[4]
        sub_4bea80(esi_2, ebx_14)
        arg2 = nullptr
        
        if (ebx_14 s> 0)
            int32_t edx_2 = 0
            int32_t var_10_1 = 0
            
            while (true)
                int32_t* ecx_6 = *esi_2 + edx_2
                char* edx_3 = *(ebp + 4)
                
                if (&edx_3[4] u> *(ebp + 8))
                    goto label_4be7bd
                
                uint32_t ebx_21 =
                    ((zx.d(edx_3[3]) << 8 | zx.d(edx_3[2])) << 8 | zx.d(edx_3[1])) << 8
                    | zx.d(*edx_3)
                *(ebp + 4) = &edx_3[4]
                sub_4be960(ecx_6, ebx_21)
                int32_t esi_4 = 0
                
                if (ebx_21 s> 0)
                    int32_t edi_2 = 0
                    
                    do
                        void* var_28_5 = ebp
                        int32_t* ecx_8 = *ecx_6 + edi_2
                        
                        if (sub_4bee10(ecx_8, ecx_8).b == 0)
                            goto label_4be7bd
                        
                        esi_4 += 1
                        edi_2 += 0x5c
                    while (esi_4 s< ebx_21)
                
                result = arg2 + 1
                edx_2 = var_10_1 + 0xc
                arg2 = result
                var_10_1 = edx_2
                
                if (result s>= ebx_14)
                    break
                
                esi_2 = var_4_1
        
        result.b = 1
        return result

label_4be7bd:
result.b = 0
return result
