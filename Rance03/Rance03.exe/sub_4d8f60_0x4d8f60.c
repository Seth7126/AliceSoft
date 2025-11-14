// 函数: sub_4d8f60
// 地址: 0x4d8f60
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

void* ebp = arg3
char* edx = *(ebp + 4)
void* result

if (&edx[4] u<= *(ebp + 8))
    uint32_t ebx_7 = ((zx.d(edx[3]) << 8 | zx.d(edx[2])) << 8 | zx.d(edx[1])) << 8 | zx.d(*edx)
    *(ebp + 4) = &edx[4]
    sub_4d9280(arg1 + 4, ebx_7)
    int32_t esi_1 = 0
    
    if (ebx_7 s> 0)
        int32_t edi_1 = 0
        
        do
            if (sub_4d95b0(*(arg1 + 4) + edi_1, arg2, ebp).b == 0)
                goto label_4d90d3
            
            esi_1 += 1
            edi_1 += 0x84
        while (esi_1 s< ebx_7)
    
    char* ecx_3 = *(ebp + 4)
    
    if (&ecx_3[4] u<= *(ebp + 8))
        void* esi_2 = arg1 + 0x10
        void* var_4_1 = esi_2
        uint32_t ebx_14 =
            ((zx.d(ecx_3[3]) << 8 | zx.d(ecx_3[2])) << 8 | zx.d(ecx_3[1])) << 8 | zx.d(*ecx_3)
        *(ebp + 4) = &ecx_3[4]
        sub_4d9390(esi_2, ebx_14)
        arg3 = nullptr
        
        if (ebx_14 s> 0)
            int32_t edx_2 = 0
            int32_t var_10_1 = 0
            
            while (true)
                int32_t* ecx_6 = *esi_2 + edx_2
                char* edx_3 = *(ebp + 4)
                
                if (&edx_3[4] u> *(ebp + 8))
                    goto label_4d90d3
                
                uint32_t ebx_21 =
                    ((zx.d(edx_3[3]) << 8 | zx.d(edx_3[2])) << 8 | zx.d(edx_3[1])) << 8
                    | zx.d(*edx_3)
                *(ebp + 4) = &edx_3[4]
                sub_4d9280(ecx_6, ebx_21)
                int32_t esi_4 = 0
                
                if (ebx_21 s> 0)
                    int32_t edi_2 = 0
                    
                    do
                        if (sub_4d95b0(*ecx_6 + edi_2, arg2, ebp).b == 0)
                            goto label_4d90d3
                        
                        esi_4 += 1
                        edi_2 += 0x84
                    while (esi_4 s< ebx_21)
                
                result = arg3 + 1
                edx_2 = var_10_1 + 0xc
                arg3 = result
                var_10_1 = edx_2
                
                if (result s>= ebx_14)
                    break
                
                esi_2 = var_4_1
        
        result.b = 1
        return result

label_4d90d3:
result.b = 0
return result
