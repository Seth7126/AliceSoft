// 函数: sub_6e8f75
// 地址: 0x6e8f75
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

data_7fc25c = 0
data_7e1080 |= 1

if (IsProcessorFeaturePresent(PF_XMMI64_INSTRUCTIONS_AVAILABLE) != 0)
    char var_14_1 = 0
    data_7e1080 |= 2
    data_7fc25c = 1
    int32_t eax_1
    int32_t ecx_1
    int32_t edx_1
    int32_t ebx_1
    eax_1, ebx_1, ecx_1, edx_1 = __cpuid(0, 0)
    int32_t eax_7
    int32_t ecx_6
    int32_t edx_2
    int32_t ebx_2
    eax_7, ebx_2, ecx_6, edx_2 = __cpuid(1, 0)
    int32_t var_28_2 = ebx_2
    int32_t eax_9
    
    if (((edx_1 ^ 0x49656e69) | (ecx_1 ^ 0x6c65746e) | (ebx_1 ^ 0x756e6547)) == 0)
        eax_9 = eax_7 & 0xfff3ff0
    
    int32_t edi_2
    
    if (((edx_1 ^ 0x49656e69) | (ecx_1 ^ 0x6c65746e) | (ebx_1 ^ 0x756e6547)) == 0 && (
            eax_9 == 0x106c0 || eax_9 == 0x20660 || eax_9 == 0x20670 || eax_9 == 0x30650
            || eax_9 == 0x30660 || eax_9 == 0x30670))
        edi_2 = data_7fc260 | 1
        data_7fc260 = edi_2
    else
        edi_2 = data_7fc260
    
    int32_t var_1c_1 = edx_2
    int32_t var_18_1 = ecx_6
    
    if (eax_1 s>= 7)
        int32_t eax_12
        int32_t ecx_7
        int32_t edx_3
        int32_t ebx_3
        eax_12, ebx_3, ecx_7, edx_3 = __cpuid(7, 0)
        int32_t var_2c = eax_12
        int32_t var_24_3 = ecx_7
        int32_t var_20_3 = edx_3
        var_14_1 = ebx_3.b
        
        if ((ebx_3 & 0x200) != 0)
            data_7fc260 = edi_2 | 2
    
    if ((ecx_6 & 0x100000) != 0)
        data_7e1080 |= 4
        data_7fc25c = 2
        
        if ((ecx_6 & 0x8000000) != 0 && (ecx_6 & 0x10000000) != 0)
            int32_t eax_14
            int32_t edx_4
            edx_4, eax_14 = _xgetbv(0, arg1)
            int32_t var_c_2 = edx_4
            
            if ((eax_14 & 6) == 6)
                int32_t eax_18 = data_7e1080 | 8
                data_7fc25c = 3
                data_7e1080 = eax_18
                
                if ((var_14_1 & 0x20) != 0)
                    data_7fc25c = 5
                    data_7e1080 = eax_18 | 0x20

return 0
