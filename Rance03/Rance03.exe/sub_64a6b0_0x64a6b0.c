// 函数: sub_64a6b0
// 地址: 0x64a6b0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t* eax_1 = arg5 + arg7
void* edx = arg2
int32_t ebp = 1
char* edi = *arg1
void* eax_5 = *(edx + 0x20)

if (eax_5 == 0x20)
    ebp = 4

char* ecx_1
int32_t ebx_1

if (eax_5 == 0x20)
    void* esi_1 = *(edx + 0x10)
    ebx_1 = arg4
    
    if (esi_1 != 0)
        ecx_1 = *(edx + 0x24) * ebx_1 + *(edx + 0x30) * arg3 + esi_1 + 3
    else
        ecx_1 = esi_1 + 3
    
    goto label_64a731

eax_5 = *(edx + 0x14)

if (eax_5 != 0)
    ebx_1 = arg4
    ecx_1 = *(edx + 0x28) * ebx_1 + eax_5 + arg3
label_64a731:
    
    if (ecx_1 != 0)
        eax_5.b = *ecx_1
        void* ecx_8 = &ecx_1[ebp]
        *edi = eax_5.b
        void* edi_1 = &edi[1]
        void* esi_3 = ecx_8 - ebp
        
        if (arg5 s> 1)
            void* i_3 = arg5 - 1
            void* i
            
            do
                void* eax_8
                eax_8.b = *esi_3
                esi_3 += ebp
                eax_8.b -= *ecx_8
                ecx_8 += ebp
                *edi_1 = eax_8.b
                edi_1 += 1
                i = i_3
                i_3 -= 1
            while (i != 1)
            ebx_1 = arg4
        
        if (arg7 s> 0)
            edx = arg2
            __builtin_memset(__builtin_memset(edi_1, 0, arg7 u>> 2 << 2), 0, arg7 & 3)
        
        int32_t esi_4 = 1
        int32_t var_c = 1
        int32_t* eax_9
        int32_t* ecx_28
        
        if (arg6 s<= 1)
            ecx_28 = eax_1
        else
            eax_9 = eax_1
            int32_t* var_8_1 = eax_9
            
            do
                char* edi_4 = *arg1 + eax_9
                char* eax_14
                void* ecx_14
                char* esi_5
                
                if (*(edx + 0x20) != 0x20)
                    ecx_14 = *(edx + 0x14)
                    
                    if (ecx_14 != 0)
                        eax_14 = (esi_4 + ebx_1) * *(edx + 0x28) + ecx_14 + arg3
                    else
                        eax_14 = nullptr
                    
                    if (ecx_14 != 0)
                        esi_5 = (esi_4 - 1 + ebx_1) * *(edx + 0x28) + ecx_14 + arg3
                    else
                        esi_5 = nullptr
                else
                    void* ebx_2 = *(edx + 0x10)
                    
                    if (ebx_2 != 0)
                        ecx_14 = *(edx + 0x30) * arg3 + (arg4 + esi_4) * *(edx + 0x24) + ebx_2
                    else
                        ecx_14 = nullptr
                    
                    eax_14 = ecx_14 + 3
                    
                    if (ebx_2 != 0)
                        esi_5 =
                            *(edx + 0x30) * arg3 + (arg4 - 1 + esi_4) * *(edx + 0x24) + ebx_2 + 3
                    else
                        esi_5 = ebx_2 + 3
                
                ecx_14.b = *esi_5
                void* esi_13 = &esi_5[ebp]
                ecx_14.b -= *eax_14
                void* eax_18 = &eax_14[ebp]
                *edi_4 = ecx_14.b
                void* edi_5 = &edi_4[1]
                void* ebx_4 = eax_18 - ebp
                
                if (arg5 s> 1)
                    void* i_2 = arg5 - 1
                    void* i_1
                    
                    do
                        uint32_t edx_2 = zx.d(*ebx_4)
                        ebx_4 += ebp
                        uint32_t ecx_23 = zx.d(*esi_13)
                        esi_13 += ebp
                        char edx_4 = ((edx_2 + ecx_23) s>> 1).b - *eax_18
                        eax_18 += ebp
                        *edi_5 = edx_4
                        edi_5 += 1
                        i_1 = i_2
                        i_2 -= 1
                    while (i_1 != 1)
                
                if (arg7 s> 0)
                    __builtin_memset(__builtin_memset(edi_5, 0, arg7 u>> 2 << 2), 0, arg7 & 3)
                
                esi_4 = var_c + 1
                ecx_28 = eax_1
                eax_9 = var_8_1 + ecx_28
                edx = arg2
                ebx_1 = arg4
                var_c = esi_4
                var_8_1 = eax_9
            while (esi_4 s< arg6)
        
        if (arg8 s> 0 && ecx_28 s> 0)
            __builtin_memset(
                __builtin_memset((arg6 + arg8 - 1) * ecx_28 + *arg1, 0, ecx_28 u>> 2 << 2), 0, 
                ecx_28 & 3)
        
        eax_9.b = 1
        return eax_9

eax_5.b = 0
return eax_5
