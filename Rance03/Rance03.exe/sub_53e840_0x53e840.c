// 函数: sub_53e840
// 地址: 0x53e840
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

EnterCriticalSection(*(arg1 + 0x40) + 4)
float eax_2 = *(arg1 + 0x38)
int64_t xmm0 = *(arg1 + 0x30)
LeaveCriticalSection(*(arg1 + 0x40) + 4)
float xmm0_1 = xmm0.d
xmm0_1 - arg3
int32_t* result
result:1.b = (xmm0_1 == arg3 ? 1 : 0) << 6 | (is_unordered.d(xmm0_1, arg3) ? 1 : 0) << 2
    | (xmm0_1 < arg3 ? 1 : 0)
bool p_1 = unimplemented  {test ah, 0x44}

if (p_1)
label_53e8cc:
    EnterCriticalSection(*(arg1 + 0x40) + 4)
    *(arg1 + 0x30) = _mm_unpacklo_ps(zx.o(arg3.q), arg4)
    *(arg1 + 0x38) = arg5
    result = LeaveCriticalSection(*(arg1 + 0x40) + 4)
    void* edx_1 = *(arg1 + 0x1c0)
    
    if (edx_1 != 0)
        result = *(edx_1 + 0x4c)
        int32_t edx_2 = *(edx_1 + 0x50)
        
        if (result != edx_2)
            while (*(*result + 0x69) == 0)
                result = &result[1]
                
                if (result == edx_2)
                    return result
            
            void* var_24_4 = arg1
            int32_t ecx_2
            int32_t edx_3
            result, ecx_2, edx_3 = sub_5246c0(*(arg1 + 0x1c8))
            
            if (result.b == 0)
                return sub_59f4e0(result, edx_3, ecx_2, 0x6e3a74, arg2)
else
    float xmm0_2 = xmm0:4.d
    xmm0_2 - arg4
    result:1.b = (xmm0_2 == arg4 ? 1 : 0) << 6 | (is_unordered.d(xmm0_2, arg4) ? 1 : 0) << 2
        | (xmm0_2 < arg4 ? 1 : 0)
    bool p_3 = unimplemented  {test ah, 0x44}
    
    if (p_3)
        goto label_53e8cc
    
    eax_2 - arg5
    result:1.b = (eax_2 == arg5 ? 1 : 0) << 6 | (is_unordered.d(eax_2, arg5) ? 1 : 0) << 2
        | (eax_2 < arg5 ? 1 : 0)
    bool p_5 = unimplemented  {test ah, 0x44}
    
    if (p_5)
        goto label_53e8cc

return result
