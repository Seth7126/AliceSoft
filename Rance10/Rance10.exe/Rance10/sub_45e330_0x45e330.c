// 函数: sub_45e330
// 地址: 0x45e330
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

void* ebx = arg2
void* var_c = ebx
int32_t* ecx = *(ebx + 0x18)
int32_t edx = *(ebx + 0x1c)
void* eax_1 = ecx & 1
int32_t ebp_1 = edx & 1
int32_t* esi = eax_1 + ecx
char* edi_1 = *arg1
int32_t ebp_2 = 1
void* eax_3 = *(ebx + 0x20)
int32_t* var_1c = esi

if (eax_3 == 0x20)
    ebp_2 = 4

char* ecx_1

if (eax_3 != 0x20)
    ecx_1 = *(ebx + 0x14)
    
    if (ecx_1 != 0)
        goto label_45e39b
else
    ecx_1 = *(ebx + 0x10) + 3
label_45e39b:
    char* edx_1 = ecx_1
    
    if (ecx_1 != 0)
        eax_3.b = *ecx_1
        void* ecx_2 = &ecx_1[ebp_2]
        *edi_1 = eax_3.b
        void* edi_2 = &edi_1[1]
        int32_t* eax_4
        
        if (ecx s> 1)
            void* i_3 = ecx - 1
            void* i
            
            do
                eax_4.b = *edx_1
                edx_1 = &edx_1[ebp_2]
                eax_4.b -= *ecx_2
                ecx_2 += ebp_2
                *edi_2 = eax_4.b
                edi_2 += 1
                i = i_3
                i_3 -= 1
            while (i != 1)
            esi = var_1c
        
        if (eax_1 != 0)
            __builtin_memset(__builtin_memset(edi_2, 0, eax_1 u>> 2 << 2), 0, eax_1 & 3)
        
        int32_t edx_3 = 1
        int32_t var_2c = 1
        
        if (edx s> 1)
            eax_4 = esi
            int32_t* var_18_1 = esi
            
            do
                void* edi_5 = *arg1 + eax_4
                char* eax_8
                void* ecx_8
                char* esi_1
                
                if (*(ebx + 0x20) != 0x20)
                    ecx_8 = *(ebx + 0x14)
                    
                    if (ecx_8 != 0)
                        eax_8 = *(ebx + 0x28) * edx_3 + ecx_8
                    else
                        eax_8 = nullptr
                    
                    if (ecx_8 != 0)
                        esi_1 = (edx_3 - 1) * *(ebx + 0x28) + ecx_8
                    else
                        esi_1 = nullptr
                else
                    ecx_8 = *(ebx + 0x10)
                    void* eax_5
                    
                    if (ecx_8 != 0)
                        eax_5 = *(ebx + 0x24) * edx_3 + ecx_8
                    else
                        eax_5 = nullptr
                    
                    eax_8 = eax_5 + 3
                    
                    if (ecx_8 != 0)
                        esi_1 = (edx_3 - 1) * *(ebx + 0x24) + ecx_8 + 3
                    else
                        esi_1 = ecx_8 + 3
                
                ecx_8.b = *esi_1
                char* ebx_1 = eax_8
                ecx_8.b -= *eax_8
                void* esi_7 = &esi_1[ebp_2]
                *edi_5 = ecx_8.b
                void* eax_11 = &eax_8[ebp_2]
                void* edi_6 = edi_5 + 1
                
                if (ecx s> 1)
                    void* i_2 = ecx - 1
                    void* i_1
                    
                    do
                        uint32_t edx_4 = zx.d(*ebx_1)
                        ebx_1 = &ebx_1[ebp_2]
                        uint32_t ecx_11 = zx.d(*esi_7)
                        esi_7 += ebp_2
                        uint8_t edx_6 = ((edx_4 + ecx_11) u>> 1).b - *eax_11
                        eax_11 += ebp_2
                        *edi_6 = edx_6
                        edi_6 += 1
                        i_1 = i_2
                        i_2 -= 1
                    while (i_1 != 1)
                    edx_3 = var_2c
                
                if (eax_1 != 0)
                    edx_3 = var_2c
                    __builtin_memset(__builtin_memset(edi_6, 0, eax_1 u>> 2 << 2), 0, eax_1 & 3)
                
                edx_3 += 1
                esi = var_1c
                eax_4 = var_18_1 + esi
                ebx = var_c
                var_2c = edx_3
                var_18_1 = eax_4
            while (edx_3 s< edx)
        
        if (ebp_1 u> 0 && esi s> 0)
            __builtin_memset(__builtin_memset((edx + ebp_1 - 1) * esi + *arg1, 0, esi u>> 2 << 2), 
                0, esi & 3)
        
        eax_4.b = 1
        return eax_4
eax_3.b = 0
return eax_3
