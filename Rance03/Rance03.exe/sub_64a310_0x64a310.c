// 函数: sub_64a310
// 地址: 0x64a310
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

uint32_t i_8 = arg5 + arg7
void* edi = arg2
int32_t esi = *(edi + 0x10)
int32_t eax_3
int32_t edx
edx:eax_3 = sx.q(*(edi + 0x20))
int32_t ebp_1 = ((edx & 7) + eax_3) s>> 3
char* ecx = *arg1
int32_t* eax_4

if (esi != 0)
    void* edx_3 = *(edi + 0x24) * arg4
    eax_4 = *(edi + 0x30) * arg3 + esi
    void* edx_4 = edx_3 + eax_4
    
    if (edx_3 != neg.d(eax_4))
        *ecx = *edx_4
        ecx[1] = *(edx_4 + 1)
        void* edx_5 = edx_4 + ebp_1
        ecx[2] = *(edx_4 + 2)
        void* ecx_1 = &ecx[3]
        void* esi_2 = edx_5 - ebp_1
        uint32_t i_6
        
        if (arg5 s> 1)
            int32_t i_9 = arg5 - 1
            int32_t i
            
            do
                *ecx_1 = *esi_2 - *edx_5
                *(ecx_1 + 1) = *(esi_2 + 1) - *(edx_5 + 1)
                i_6 = zx.d(*(esi_2 + 2))
                esi_2 += ebp_1
                i_6.b -= *(edx_5 + 2)
                edx_5 += ebp_1
                *(ecx_1 + 2) = i_6.b
                ecx_1 += 3
                i = i_9
                i_9 -= 1
            while (i != 1)
            edi = arg2
        
        if (arg7 s> 0)
            i_6 = arg7
            uint32_t i_1
            
            do
                *ecx_1 = 0
                ecx_1 += 3
                *(ecx_1 - 1) = 0
                i_1 = i_6
                i_6 -= 1
            while (i_1 != 1)
        
        int32_t ecx_2 = 1
        int32_t var_18 = 1
        
        if (arg6 s> 1)
            uint32_t eax_12 = i_8 * 3
            uint32_t edx_6 = eax_12
            uint32_t var_10_1 = eax_12
            
            do
                char* eax_15 = *arg1 + edx_6
                int32_t edx_7 = *(edi + 0x10)
                char* esi_4
                
                if (edx_7 != 0)
                    esi_4 = *(edi + 0x30) * arg3 + (ecx_2 + arg4) * *(edi + 0x24) + edx_7
                    ecx_2 = var_18
                else
                    esi_4 = nullptr
                
                char* edi_1
                
                if (edx_7 != 0)
                    edi_1 = *(arg2 + 0x30) * arg3 + (ecx_2 + arg4 - 1) * *(arg2 + 0x24) + edx_7
                else
                    edi_1 = nullptr
                
                *eax_15 = *edi_1 - *esi_4
                eax_15[1] = edi_1[1] - esi_4[1]
                void* edi_7 = &edi_1[ebp_1]
                void* esi_7 = &esi_4[ebp_1]
                eax_15[2] = edi_1[2] - esi_4[2]
                i_6 = &eax_15[3]
                void* ebx_3 = esi_7 - ebp_1
                
                if (arg5 s> 1)
                    int32_t i_5 = arg5 - 1
                    int32_t i_2
                    
                    do
                        *i_6 = ((zx.d(*ebx_3) + zx.d(*edi_7)) s>> 1).b - *esi_7
                        *(i_6 + 1) =
                            ((zx.d(*(ebx_3 + 1)) + zx.d(*(edi_7 + 1))) s>> 1).b - *(esi_7 + 1)
                        uint32_t edx_14 = zx.d(*(ebx_3 + 2))
                        ebx_3 += ebp_1
                        uint32_t ecx_16 = zx.d(*(edi_7 + 2))
                        edi_7 += ebp_1
                        char edx_16 = ((edx_14 + ecx_16) s>> 1).b - *(esi_7 + 2)
                        esi_7 += ebp_1
                        *(i_6 + 2) = edx_16
                        i_6 += 3
                        i_2 = i_5
                        i_5 -= 1
                    while (i_2 != 1)
                
                if (arg7 s> 0)
                    uint32_t i_7 = arg7
                    uint32_t i_3
                    
                    do
                        *i_6 = 0
                        i_6 += 3
                        *(i_6 - 1) = 0
                        i_3 = i_7
                        i_7 -= 1
                    while (i_3 != 1)
                
                ecx_2 = var_18 + 1
                edx_6 = var_10_1 + eax_12
                edi = arg2
                var_18 = ecx_2
                var_10_1 = edx_6
            while (ecx_2 s< arg6)
        
        if (arg8 s> 0)
            i_6 = (arg6 + arg8 - 1) * i_8 * 3 + *arg1
            
            if (i_8 s> 0)
                uint32_t i_4
                
                do
                    *i_6 = 0
                    i_6 += 3
                    *(i_6 - 1) = 0
                    i_4 = i_8
                    i_8 -= 1
                while (i_4 != 1)
        
        i_6.b = 1
        return i_6

eax_4.b = 0
return eax_4
