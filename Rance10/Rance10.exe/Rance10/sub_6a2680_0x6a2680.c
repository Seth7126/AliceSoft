// 函数: sub_6a2680
// 地址: 0x6a2680
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

uint32_t result = *(arg3 + 0x1450)
int32_t ebx = arg4
int32_t var_8 = arg2
int32_t ebp = *(arg3 + (ebx << 2) + 0xb5c)
int32_t esi = ebx * 2
arg4 = ebp

if (esi s> result)
    *(arg3 + (ebx << 2) + 0xb5c) = ebp
    return result

int16_t* edi = arg2 + (ebp << 2)

while (true)
    if (esi s< result)
        int32_t edi_1 = *(arg3 + (esi << 2) + 0xb60)
        int32_t ebp_1 = *(arg3 + (esi << 2) + 0xb5c)
        int16_t eax = *(arg2 + (edi_1 << 2))
        int16_t edx = *(arg2 + (ebp_1 << 2))
        
        if (eax u< edx)
            esi += 1
        else if (eax == edx)
            eax.b = *(edi_1 + arg3 + 0x1458)
            
            if (eax.b u<= *(arg3 + ebp_1 + 0x1458))
                esi += 1
        
        ebp = arg4
    
    int32_t edx_1 = *(arg3 + (esi << 2) + 0xb5c)
    result = zx.d(*edi)
    int16_t edi_3 = *(var_8 + (edx_1 << 2))
    
    if (result.w u< edi_3)
        *(arg3 + (ebx << 2) + 0xb5c) = ebp
        return result
    
    if (result.w == edi_3)
        result.b = *(arg3 + ebp + 0x1458)
        
        if (result.b u<= *(edx_1 + arg3 + 0x1458))
            *(arg3 + (ebx << 2) + 0xb5c) = ebp
            return result
    
    *(arg3 + (ebx << 2) + 0xb5c) = edx_1
    ebx = esi
    result = *(arg3 + 0x1450)
    esi *= 2
    
    if (esi s> result)
        *(arg3 + (ebx << 2) + 0xb5c) = ebp
        return result
    
    arg2 = var_8
