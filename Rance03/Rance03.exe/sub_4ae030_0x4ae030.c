// 函数: sub_4ae030
// 地址: 0x4ae030
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

float var_10 = 0f
float var_c
sub_4af180(arg1, &var_10, &var_c)
void* edi_1 = *(arg1 + 0x60)
int32_t ebp = int.d(fconvert.t(var_10))
int32_t esi = *(edi_1 + 0x88)
int32_t ebp_1

if (esi - 1 u> 8)
    ebp_1 = 0
else
    switch (esi + &jump_table_4ae220[2]:3)
        case &lookup_table_4ae22c, &lookup_table_4ae22c[3], &lookup_table_4ae22c[6]
            ebp_1 = 0
        case &lookup_table_4ae22c[1], &lookup_table_4ae22c[4], &lookup_table_4ae22c[7]
            int32_t eax_3
            int32_t edx_1
            edx_1:eax_3 = sx.q(ebp)
            ebp_1 = neg.d((eax_3 - edx_1) s>> 1)
        case &lookup_table_4ae22c[2], &lookup_table_4ae22c[5], &lookup_table_4ae22c[8]
            ebp_1 = neg.d(ebp)

int32_t ecx = int.d(fconvert.t(var_c))
int32_t ecx_1

if (esi - 1 u> 8)
    ecx_1 = 0
else
    switch (esi + &jump_table_4ae238[2]:3)
        case &lookup_table_4ae244, &lookup_table_4ae244[1], &lookup_table_4ae244[2]
            ecx_1 = 0
        case &lookup_table_4ae244[3], &lookup_table_4ae244[4], &lookup_table_4ae244[5]
            int32_t eax_9
            int32_t edx_2
            edx_2:eax_9 = sx.q(ecx)
            ecx_1 = neg.d((eax_9 - edx_2) s>> 1)
        case &lookup_table_4ae244[6], &lookup_table_4ae244[7], &lookup_table_4ae244[8]
            ecx_1 = neg.d(ecx)

float vFunc_0 = *(edi_1 + 0x58)
int32_t ebx = 0
var_10 = ecx_1
int32_t ecx_4 = (*(vFunc_0 i+ 0x98) - *(vFunc_0 i+ 0x94)) s>> 2

if (ecx_4 s> 0)
    void* edx_3 = arg1
    
    do
        vFunc_0 = *(edx_3 + 0x60)
        int32_t esi_1
        
        if (ebx s>= 0)
            void* ecx_5 = *(vFunc_0 i+ 0x58)
            vFunc_0 = (*(ecx_5 + 0x98) - *(ecx_5 + 0x94)) s>> 2
            
            if (vFunc_0 s> ebx)
                vFunc_0 = *(ecx_5 + 0x94)
                esi_1 = *(vFunc_0 i+ (ebx << 2))
            else
                esi_1 = 0
        else
            esi_1 = 0
        
        if (esi_1 s> 0)
            int32_t edi_4 = esi_1 s/ 0x2710
            void** edx_6 = *(*(edx_3 + 0x64) + 0x1c)
            void** ecx_7 = edx_6
            void** eax_15 = edx_6[1]
            
            while (*(eax_15 + 0xd) == 0)
                if (eax_15[4] s>= edi_4)
                    ecx_7 = eax_15
                    eax_15 = *eax_15
                else
                    eax_15 = eax_15[2]
            
            float* eax_16
            
            if (ecx_7 == edx_6 || edi_4 s< ecx_7[4])
                float var_8 = edx_6
                eax_16 = &var_8
            else
                var_c = ecx_7
                eax_16 = &var_c
            
            edx_3 = arg1
            vFunc_0 = *eax_16
            
            if (vFunc_0 != *(*(edx_3 + 0x64) + 0x1c))
                void* edi_5 = *(vFunc_0 i+ 0x14)
                
                if (edi_5 != 0)
                    int32_t ecx_9 = *(edi_5 + 8)
                    
                    if (esi_1 s>= ecx_9)
                        vFunc_0 = *(edi_5 + 4) + ecx_9
                        
                        if (vFunc_0 s> esi_1)
                            vFunc_0.b = *(*(edi_5 + 0xc) i+ ((esi_1 - ecx_9) << 2)) != 0
                            
                            if (vFunc_0.b != 0)
                                int32_t var_2c_1 = esi_1
                                struct partsengine::CPartsList::VTable** eax_18 =
                                    sub_4a52a0(*(arg1 + 0x64))
                                int32_t edi_7
                                
                                if (eax_18 != 0)
                                    edi_7 = eax_18[2]
                                
                                if (eax_18 == 0 || esi_1 s< edi_7 || eax_18[1] + edi_7 s<= esi_1)
                                    vFunc_0 = 0f
                                else
                                    vFunc_0 = eax_18[3][esi_1 - edi_7].vFunc_0
                                    
                                    if (vFunc_0 == 0)
                                        vFunc_0 = sub_4e7720(eax_18, esi_1)
                                
                                float ecx_14 = var_10
                                *(vFunc_0 i+ 0x4a4) = _mm_cvtepi32_ps(zx.o(ebp_1))
                                *(vFunc_0 i+ 0x4a8) = _mm_cvtepi32_ps(zx.o(ecx_14))
                            
                            edx_3 = arg1
        
        ebx += 1
    while (ebx s< ecx_4)

return vFunc_0
