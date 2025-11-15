// 函数: sub_5ab9d0
// 地址: 0x5ab9d0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

char* result = arg2
int32_t* ebp = arg1
char* result_2 = result
int32_t* var_8 = ebp

if (ebp != result)
    int32_t* result_3 = &ebp[1]
    int32_t* result_5 = &ebp[1]
    
    if (result_3 != result)
        do
            int32_t* ebx_1 = *result_3
            int32_t* esi_1 = *ebp
            int32_t* result_1 = result_3
            (*(*ebx_1 + 0xc))()
            float var_10_1 = fconvert.s(unimplemented  {fstp dword [esp+0x18], st0})
            unimplemented  {fstp dword [esp+0x18], st0}
            (*(*esi_1 + 0xc))()
            float var_c_1 = fconvert.s(unimplemented  {fstp dword [esp+0x1c], st0})
            unimplemented  {fstp dword [esp+0x1c], st0}
            int16_t top = top + 2
            
            if (var_10_1 <= var_c_1)
                int32_t* result_6 = &result_3[-1]
                int32_t* esi_2 = *result_6
                (*(*ebx_1 + 0xc))()
                float var_c_2 = fconvert.s(unimplemented  {fstp dword [esp+0x1c], st0})
                unimplemented  {fstp dword [esp+0x1c], st0}
                (*(*esi_2 + 0xc))()
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
                        (*(*ebx_1 + 0xc))()
                        var_10_3 = fconvert.s(unimplemented  {fstp dword [esp+0x18], st0})
                        unimplemented  {fstp dword [esp+0x18], st0}
                        (*(*esi_3 + 0xc))()
                        var_c_3 = fconvert.s(unimplemented  {fstp dword [esp+0x1c], st0})
                        unimplemented  {fstp dword [esp+0x1c], st0}
                        top += 2
                    while (var_c_3 < var_10_3)
                    result_1 = result_4
                    result_3 = result_5
                
                result = result_1
                ebp = var_8
                *result = ebx_1
            else
                result = sub_6feca0(&ebp[1], ebp, result_3 - ebp)
                *ebp = ebx_1
            
            result_3 = &result_3[1]
            result_5 = result_3
        while (result_3 != result_2)

return result
