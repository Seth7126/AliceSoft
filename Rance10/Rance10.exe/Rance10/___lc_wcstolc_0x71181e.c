// 函数: ___lc_wcstolc
// 地址: 0x71181e
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t ecx
int32_t var_8 = ecx
int32_t var_c = ecx
int32_t edi
int32_t var_18 = edi
_memset(arg1, 0, 0x1ca)
int16_t* esi = arg2
int16_t eax = *esi

if (eax != 0)
    if (eax != 0x2e || esi[1] == 0)
        int32_t var_8_1 = 0
        
        while (true)
            int32_t eax_4 = _wcscspn(esi, &data_755a3c)
            
            if (eax_4 != 0)
                void* ecx_2 = &esi[eax_4]
                uint32_t ebx_1 = zx.d(*ecx_2)
                
                if (var_8_1 != 0)
                    void* eax_5
                    
                    if (var_8_1 != 1)
                        if (var_8_1 == 2 && eax_4 u< 0x10 && (ebx_1.w == 0 || ebx_1.w == 0x2c))
                            int32_t var_1c_4 = eax_4
                            int16_t* var_20_5 = esi
                            int32_t var_24_4 = 0x10
                            eax_5 = &arg1[0x10]
                            goto label_7118ff
                    else if (eax_4 u< 0x40 && ebx_1 != 0x5f)
                        int32_t var_1c_3 = eax_4
                        int16_t* var_20_4 = esi
                        int32_t var_24_3 = 0x40
                        eax_5 = &arg1[8]
                    label_7118ff:
                        void* var_28_3 = eax_5
                        goto label_711900
                else if (eax_4 u< 0x40 && ebx_1.w != 0x2e)
                    int32_t var_1c_2 = eax_4
                    int16_t* var_20_3 = esi
                    int32_t var_24_2 = 0x40
                    uint32_t (* var_28_2)[0x4] = arg1
                label_711900:
                    
                    if (sub_713d17() != 0)
                        break
                    
                    if (ebx_1.w == 0x2c)
                        return 0
                    
                    if (ebx_1.w == 0)
                        return 0
                    
                    esi = ecx_2 + 2
                    var_8_1 += 1
                    continue
            
            return 0xffffffff
        
        int32_t var_2c
        __builtin_memset(&var_2c, 0, 0x14)
        __invoke_watson()
        noreturn
    
    int32_t var_1c_1 = 0xf
    void* var_20_1 = &esi[1]
    int32_t var_24_1 = 0x10
    void* var_28_1 = &arg1[0x10]
    int32_t eax_3 = sub_713d17()
    
    if (eax_3 != 0)
        int32_t var_2c_1
        __builtin_memset(&var_2c_1, 0, 0x14)
        __invoke_watson()
        noreturn
    
    *(arg1 + 0x11e) = eax_3.w

return 0
