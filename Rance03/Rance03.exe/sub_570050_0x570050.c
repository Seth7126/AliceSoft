// 函数: sub_570050
// 地址: 0x570050
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t* result = arg2
int32_t* ebp = arg1
int32_t* result_2 = result
int32_t* var_8 = ebp

if (ebp != result)
    int32_t* result_3 = &ebp[1]
    int32_t* result_5 = result_3
    
    if (result_3 != result)
        int32_t ebx
        int32_t var_24_1 = ebx
        
        do
            int32_t* ebx_2 = *result_3
            int32_t* esi_1 = *ebp
            int32_t* result_1 = result_3
            (*(*ebx_2 + 8))()
            float var_10_1 = fconvert.s(unimplemented  {fstp dword [esp+0x18], st0})
            unimplemented  {fstp dword [esp+0x18], st0}
            (*(*esi_1 + 8))()
            float var_c_1 = fconvert.s(unimplemented  {fstp dword [esp+0x1c], st0})
            unimplemented  {fstp dword [esp+0x1c], st0}
            int16_t top = top + 2
            
            if (var_10_1 <= var_c_1)
                int32_t* result_6 = &result_3[-1]
                int32_t* esi_2 = *result_6
                (*(*ebx_2 + 8))()
                float var_c_2 = fconvert.s(unimplemented  {fstp dword [esp+0x1c], st0})
                unimplemented  {fstp dword [esp+0x1c], st0}
                (*(*esi_2 + 8))()
                float var_10_2 = fconvert.s(unimplemented  {fstp dword [esp+0x18], st0})
                unimplemented  {fstp dword [esp+0x18], st0}
                top += 2
                
                if (not(var_c_2 <= var_10_2))
                    int32_t* result_4 = result_1
                    float var_10_3
                    float var_c_3
                    
                    do
                        *result_4 = *result_6
                        result_4 = result_6
                        result_6 -= 4
                        int32_t* esi_3 = *result_6
                        (*(*ebx_2 + 8))()
                        var_c_3 = fconvert.s(unimplemented  {fstp dword [esp+0x1c], st0})
                        unimplemented  {fstp dword [esp+0x1c], st0}
                        (*(*esi_3 + 8))()
                        var_10_3 = fconvert.s(unimplemented  {fstp dword [esp+0x18], st0})
                        unimplemented  {fstp dword [esp+0x18], st0}
                        top += 2
                    while (var_c_3 > var_10_3)
                    result_1 = result_4
                    result_3 = result_5
                
                result = result_1
                ebp = var_8
                *result = ebx_2
            else
                int32_t ecx_2 = (result_3 - ebp) s>> 2 << 2
                result = _memcpy(result_3 - ecx_2 + 4, ebp, ecx_2)
                *ebp = ebx_2
            
            result_3 = &result_3[1]
            result_5 = result_3
        while (result_3 != result_2)

return result
