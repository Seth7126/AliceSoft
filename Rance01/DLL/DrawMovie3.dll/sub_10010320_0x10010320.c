// 函数: sub_10010320
// 地址: 0x10010320
// 来自: E:\torrent\AliceSoft\ランス01\DLL\DrawMovie3.dll

int32_t result = 0

if (arg2 == 0 || arg2 u> 0x7fffffff)
    result = 0x80070057

if (result s>= 0)
    int16_t* ecx_1 = arg1
    result = 0
    int32_t esi_1 = arg2
    
    if (arg2 == 0)
        ecx_1 -= 2
        result = 0x8007007a
    else
        int16_t* edi_2 = arg3 - ecx_1
        
        while (0x7ffffffe - arg2 + esi_1 != 0)
            int16_t edx_1 = *(edi_2 + ecx_1)
            
            if (edx_1 == 0)
                break
            
            *ecx_1 = edx_1
            ecx_1 = &ecx_1[1]
            int32_t temp1_1 = esi_1
            esi_1 -= 1
            
            if (temp1_1 == 1)
                *(ecx_1 - 2) = 0
                return 0x8007007a
        
        if (esi_1 == 0)
            ecx_1 -= 2
            result = 0x8007007a
    
    *ecx_1 = 0

return result
