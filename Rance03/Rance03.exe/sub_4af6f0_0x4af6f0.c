// 函数: sub_4af6f0
// 地址: 0x4af6f0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

void* edi = arg1
int32_t xmm2 = (zx.o(0)).d
void* var_30 = edi
float var_18 = 0f
int32_t var_1c = 0
bool cond:0 = *(edi + 0x44) == 0
float var_14 = 0f
float var_2c = 0f
int32_t var_20 = 0
float xmm0_2

if (cond:0)
    xmm0_2 = *(edi + 0x40)
else
    void* esi_1 = data_75d514
    
    if (esi_1 != 0)
        int32_t eax_2
        
        if (sub_5ed1f0(esi_1) != 0)
            eax_2 = (*(**(esi_1 + 0x2c) + 0x18))()
        else
            eax_2 = 0
        
        xmm2 = 0
        xmm0_2 = _mm_cvtepi32_ps(zx.o(eax_2)) f* *(edi + 0x40)
    else
        xmm0_2 = _mm_cvtepi32_ps(0) f* *(edi + 0x40)

int32_t ebp = 0
int32_t var_10 = 0
int32_t xmm1 = (zx.o(0)).d
void* eax_5 = *(edi + 0x60)
int32_t var_28 = 0
int32_t var_24 = 0
void* eax_6 = *(eax_5 + 0x58)
int32_t ecx_4 = (*(eax_6 + 0x98) - *(eax_6 + 0x94)) s>> 2
int32_t var_34 = ecx_4

if (ecx_4 s> 0)
    do
        int32_t esi_2
        
        if (ebp s>= 0)
            void* ecx_5 = *(*(edi + 0x60) + 0x58)
            
            if ((*(ecx_5 + 0x98) - *(ecx_5 + 0x94)) s>> 2 s> ebp)
                esi_2 = *(*(ecx_5 + 0x94) + (ebp << 2))
            else
                esi_2 = 0
            
            ecx_4 = var_34
        else
            esi_2 = 0
        
        int32_t* ebx_1 = *(edi + 0x64)
        
        if (esi_2 s> 0)
            int32_t edi_3 = esi_2 s/ 0x2710
            void** edx_3 = ebx_1[7]
            void** ecx_6 = edx_3
            void** eax_13 = edx_3[1]
            
            while (*(eax_13 + 0xd) == 0)
                if (eax_13[4] s>= edi_3)
                    ecx_6 = eax_13
                    eax_13 = *eax_13
                else
                    eax_13 = eax_13[2]
            
            void*** eax_14
            
            if (ecx_6 == edx_3 || edi_3 s< ecx_6[4])
                void** var_8 = edx_3
                eax_14 = &var_8
            else
                void** var_c = ecx_6
                eax_14 = &var_c
            
            void** eax_15 = *eax_14
            
            if (eax_15 != edx_3)
                void* edi_4 = eax_15[5]
                
                if (edi_4 != 0)
                    int32_t ecx_7 = *(edi_4 + 8)
                    
                    if (esi_2 s>= ecx_7 && *(edi_4 + 4) + ecx_7 s> esi_2)
                        int32_t eax_18
                        eax_18.b = *(*(edi_4 + 0xc) + ((esi_2 - ecx_7) << 2)) != 0
                        
                        if (eax_18.b != 0)
                            int32_t var_48_1 = esi_2
                            struct partsengine::CPartsList::VTable** eax_19 = sub_4a52a0(ebx_1)
                            int32_t edi_5
                            
                            if (eax_19 != 0)
                                edi_5 = eax_19[2]
                            
                            struct IInterface::VTable** vFunc_0
                            
                            if (eax_19 == 0 || esi_2 s< edi_5 || eax_19[1] + edi_5 s<= esi_2)
                                vFunc_0 = nullptr
                            else
                                vFunc_0 = eax_19[3][esi_2 - edi_5].vFunc_0
                                
                                if (vFunc_0 == 0)
                                    vFunc_0 = sub_4e7720(eax_19, esi_2)
                            
                            if (sub_4a26a0(vFunc_0, 1) == 0)
                                xmm1 = var_28
                                xmm2 = var_2c
                            else
                                int32_t ebp_3 = vFunc_0[0x34]
                                    + (*(vFunc_0[0x17]->vFunc_0 + 0x28))(1) + vFunc_0[0x35]
                                
                                if (*(var_30 + 0x3c) != 0 && not(_mm_cvtepi32_ps(zx.o(ebp_3))
                                        + var_2c f<= _mm_cvtepi32_ps(zx.o(int.d(xmm0_2)))))
                                    int32_t* eax_28 = &var_20
                                    
                                    if (var_2c <= var_18)
                                        eax_28 = &var_1c
                                    
                                    var_2c = 0f
                                    var_14 = var_28 f+ var_14
                                    var_28 = 0
                                    var_24 = 0
                                    int32_t xmm0_10 = *eax_28
                                    var_18 = xmm0_10
                                    var_1c = xmm0_10
                                
                                int32_t* eax_33 = &var_20
                                float xmm0_12 = _mm_cvtepi32_ps(zx.o(
                                    (*(vFunc_0[0x17]->vFunc_0 + 0x2c))(1) + vFunc_0[0x33]
                                    + vFunc_0[0x32]))
                                var_20 = xmm0_12
                                ebp = var_10
                                
                                if (xmm0_12 f<= var_28)
                                    eax_33 = &var_24
                                
                                float xmm0_14 = _mm_cvtepi32_ps(zx.o(ebp_3))
                                xmm1 = *eax_33
                                var_28 = xmm1
                                var_24 = xmm1
                                xmm2 = xmm0_14 + var_2c
                                var_2c = xmm2
                                var_20 = xmm2
            
            edi = var_30
            ecx_4 = var_34
        
        ebp += 1
        var_10 = ebp
    while (ebp s< ecx_4)

int32_t* eax_36 = &var_20
float xmm0_17 = _mm_cvtepi32_ps(zx.o(*(edi + 0x58) + *(edi + 0x54)))

if (xmm2 f<= var_18)
    eax_36 = &var_1c

*arg2 = xmm0_17 f+ *eax_36
*arg3 = _mm_cvtepi32_ps(zx.o(*(edi + 0x50) + *(edi + 0x4c))) + xmm1 f+ var_14
return arg3
