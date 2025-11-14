// 函数: sub_60aa00
// 地址: 0x60aa00
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

struct ID3D11DeviceContext ppImmediateContext_9
int32_t var_14 = __security_cookie ^ &ppImmediateContext_9
int32_t esi
int32_t var_fc = esi
int32_t edi
int32_t var_100 = edi
sub_60aed0(arg1)
HRESULT ppImmediateContext_1 = &arg1[3]
int32_t i = 0
enum D3D_FEATURE_LEVEL featureLevels = D3D_FEATURE_LEVEL_11_0
int32_t var_28
__builtin_memcpy(&var_28, 
    "\x00\xa1\x00\x00\x00\xa0\x00\x00\x01\x00\x00\x00\x05\x00\x00\x00\x02\x00\x00\x00", 0x14)
enum D3D_FEATURE_LEVEL featureLevel = D3D_FEATURE_LEVEL_11_0
HRESULT ppImmediateContext_12 = ppImmediateContext_1
int32_t* esp_1

do
    struct ID3D11DeviceContext* ppImmediateContext = ppImmediateContext_1
    esp_1 = &var_100
    int32_t var_20
    
    if (D3D11CreateDevice(0, (&var_20)[i], nullptr, 0, &featureLevels, 3, 7, &arg1[2], 
            &featureLevel, ppImmediateContext) s>= 0)
        if (i u< 3)
            int32_t* eax_3 = arg1[2]
            ppImmediateContext = &ppImmediateContext_9
            ppImmediateContext_9 = 0
            esp_1 = &var_100
            
            if ((**eax_3)(eax_3, 0x708278, ppImmediateContext) s>= 0)
                struct ID3D11DeviceContext ppImmediateContext_15 = ppImmediateContext_9
                struct ID3D11DeviceContext ppImmediateContext_11 = 0
                ppImmediateContext = &ppImmediateContext_11
                
                if ((*(*ppImmediateContext_15 + 0x1c))(ppImmediateContext_15, ppImmediateContext)
                        s< 0)
                    goto label_60ac32
                
                struct ID3D11DeviceContext ppImmediateContext_16 = ppImmediateContext_11
                struct ID3D11DeviceContext ppImmediateContext_10
                ppImmediateContext = &ppImmediateContext_10
                ppImmediateContext_10 = 0
                
                if ((*(*ppImmediateContext_16 + 0x18))(ppImmediateContext_16, 0x708288, 
                        ppImmediateContext) s< 0)
                    goto label_60ac28
                
                int32_t j_1 = arg5
                int32_t j_2 = 1
                void* var_e8 = nullptr
                struct ID3D11DeviceContext var_dc
                
                if (j_1 != 0)
                    int32_t j
                    
                    do
                        int32_t* eax_6 = arg1[2]
                        ppImmediateContext = &var_dc
                        
                        if ((*(*eax_6 + 0x78))(eax_6, 0x1c, j_1, ppImmediateContext) s>= 0)
                            struct ID3D11DeviceContext eax_8 = var_dc
                            
                            if (eax_8 != 0)
                                j_2 = j_1
                                var_e8 = eax_8 - 1
                                break
                        
                        j = j_1
                        j_1 -= 1
                    while (j != 1)
                
                ppImmediateContext = 0x3c
                int32_t var_ac
                _memset(&var_ac, 0, ppImmediateContext)
                var_ac = arg3
                int32_t var_a8_1 = arg4
                int32_t eax_12 = 0
                ppImmediateContext = &arg1[1]
                
                if (arg6 != 0)
                    eax_12 = 0x3c
                
                int32_t var_84_1 = 1
                int32_t var_a4_1 = eax_12
                int32_t var_80_1 = arg2
                int32_t j_3 = j_2
                void* var_8c_1 = var_e8
                struct ID3D11DeviceContext ppImmediateContext_17 = ppImmediateContext_10
                int32_t var_9c_1 = 0x1c
                int32_t var_a0_1 = 1
                int32_t var_88_1 = 0x20
                int32_t var_7c_1 = 1
                int32_t var_78_1 = 0
                bool cond:1_1 =
                    (*(*ppImmediateContext_17 + 0x28))(ppImmediateContext_17, arg1[2], &var_ac)
                    s>= 0
                struct ID3D11DeviceContext ppImmediateContext_2 = ppImmediateContext_10
                int32_t ecx_7 = *ppImmediateContext_2
                int32_t var_18
                int32_t ecx_9
                
                if (not(cond:1_1))
                    ppImmediateContext = ppImmediateContext_2
                    (*(ecx_7 + 8))(ppImmediateContext)
                label_60ac28:
                    struct ID3D11DeviceContext ppImmediateContext_3 = ppImmediateContext_11
                    ppImmediateContext = ppImmediateContext_3
                    (*(*ppImmediateContext_3 + 8))(ppImmediateContext)
                label_60ac32:
                    struct ID3D11DeviceContext ppImmediateContext_4 = ppImmediateContext_9
                    ppImmediateContext = ppImmediateContext_4
                    ecx_9 = *ppImmediateContext_4
                label_60ac39:
                    (*(ecx_9 + 8))()
                    int32_t eax_17
                    eax_17.b = 0
                    sub_69a5bc(var_18 ^ &var_fc)
                    return eax_17
                
                ppImmediateContext = 2
                (*(ecx_7 + 0x20))(ppImmediateContext_2, arg2, ppImmediateContext)
                struct ID3D11DeviceContext ppImmediateContext_5 = ppImmediateContext_10
                ppImmediateContext = ppImmediateContext_5
                (*(*ppImmediateContext_5 + 8))(ppImmediateContext)
                struct ID3D11DeviceContext ppImmediateContext_6 = ppImmediateContext_11
                ppImmediateContext_10 = 0
                ppImmediateContext = ppImmediateContext_6
                (*(*ppImmediateContext_6 + 8))(ppImmediateContext)
                struct ID3D11DeviceContext ppImmediateContext_7 = ppImmediateContext_9
                ppImmediateContext_11 = 0
                ppImmediateContext = ppImmediateContext_7
                (*(*ppImmediateContext_7 + 8))(ppImmediateContext)
                int32_t* eax_18 = arg1[1]
                void* ppImmediateContext_13
                ppImmediateContext = &ppImmediateContext_13
                ppImmediateContext_9 = 0
                ppImmediateContext_13 = nullptr
                esp_1 = &var_100
                
                if ((*(*eax_18 + 0x24))(eax_18, 0, 0x708298, ppImmediateContext) s>= 0)
                    int32_t* ecx_16 = arg1[2]
                    ppImmediateContext = &arg1[4]
                    bool cond:2_1 =
                        (*(*ecx_16 + 0x24))(ecx_16, ppImmediateContext_13, 0, ppImmediateContext)
                        s< 0
                    void* ppImmediateContext_8 = ppImmediateContext_13
                    ppImmediateContext = ppImmediateContext_8
                    ecx_9 = *ppImmediateContext_8
                    
                    if (cond:2_1)
                        goto label_60ac39
                    
                    (*(ecx_9 + 8))()
                    int32_t var_74
                    _memset(&var_74, 0, 0x2c)
                    int32_t* ecx_17 = arg1[2]
                    var_74 = arg3
                    int32_t var_70_1 = arg4
                    struct ID3D11DeviceContext ppImmediateContext_14 = ppImmediateContext_11
                    int32_t var_6c_1 = 1
                    int32_t var_68_1 = 1
                    enum D3D_FEATURE_LEVEL featureLevel_1 = 0x2d
                    int32_t j_4 = j_2
                    int32_t var_58_1 = 0
                    int32_t var_54_1 = 0x40
                    int32_t var_50_1 = 0
                    int32_t var_4c_1 = 0
                    esp_1 = &ppImmediateContext
                    
                    if ((*(*ecx_17 + 0x14))(ecx_17, &var_74, 0, &arg1[5]) s>= 0)
                        int32_t* ecx_18 = arg1[2]
                        featureLevel.o = zx.o(0)
                        featureLevel = featureLevel_1
                        int64_t var_c4_1 = 0
                        int32_t var_c8_1 = 0
                        int32_t var_d0_1 = (sbb.d(1, 1, 1 u< ppImmediateContext_11) & 2) + 3
                        esp_1 = &ppImmediateContext
                        
                        if ((*(*ecx_18 + 0x28))(ecx_18, arg1[5], &featureLevel, &arg1[6]) s>= 0)
                            int32_t var_108_8 = arg1[6]
                            esp_1 = &ppImmediateContext
                            
                            if (sub_60b040(arg1, arg1[4]).b != 0)
                                int32_t* eax_31 = arg1[3]
                                int32_t xmm0_2 = _mm_cvtepi32_ps(zx.o(arg3))
                                int32_t var_38_1 = 0
                                int32_t var_34_1 = 0x3f800000
                                int32_t var_48 = 0
                                int32_t var_44_1 = 0
                                int32_t var_40_1 = xmm0_2
                                int32_t var_3c_1 = _mm_cvtepi32_ps(zx.o(arg4))
                                (*(*eax_31 + 0xb0))(eax_31, 1, &var_48)
                                esp_1 = &ppImmediateContext
                                int32_t ecx_22
                                ppImmediateContext_1, ecx_22 = sub_60b0f0(arg1)
                                
                                if (ppImmediateContext_1.b != 0)
                                    int32_t var_108_10 = ecx_22
                                    ppImmediateContext_13 = &arg1[0xc]
                                    sub_60b2e0(&arg1[0xc])
                                    int32_t esi_4 = 0
                                    int32_t edx_5
                                    edx_5.b = ppImmediateContext_11 != 1
                                    int32_t var_e8_1 = edx_5
                                    
                                    while (true)
                                        esp_1 = &ppImmediateContext
                                        
                                        if (sub_60ebe0(*ppImmediateContext_13 + (esi_4 << 3), 
                                                esi_4, edx_5.b, arg1[2]).b == 0)
                                            break
                                        
                                        edx_5 = var_e8_1
                                        esi_4 += 1
                                        
                                        if (esi_4 s>= 3)
                                            ppImmediateContext_1.b = arg6
                                            *(var_dc + 0x3c) = ppImmediateContext_1.b
                                            ppImmediateContext_1.b = 1
                                            sub_69a5bc(var_18 ^ &var_fc)
                                            return ppImmediateContext_1
        
        break
    
    ppImmediateContext_1 = ppImmediateContext_12
    i += 1
while (i u< 3)

ppImmediateContext_1.b = 0
*esp_1
esp_1[1]
sub_69a5bc(esp_1[0x3b] ^ &esp_1[2])
return ppImmediateContext_1
