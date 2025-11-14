// 函数: sub_472ee0
// 地址: 0x472ee0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t i = 0
void* edi = arg1 + 4
float result

do
    (*(**(arg1 + 0x91c) + 0xc))(i)
    unimplemented  {fmul st0, dword [0x709100]}
    float result_1 = fconvert.s(unimplemented  {fstp dword [esp+0xc], st0})
    unimplemented  {fstp dword [esp+0xc], st0}
    int16_t top = top + 1
    result = int.d(fconvert.t(result_1))
    *(edi + 4) = result
    result_1 = result
    
    if (i u<= 0x3f)
        float var_8 = 1.40129846e-43f
        float* ecx_2 = &result_1
        float var_4 = 0f
        
        if (result s>= 0x64)
            ecx_2 = &var_8
        
        float* eax_3 = &var_4
        
        if (*ecx_2 s> 0)
            eax_3 = ecx_2
        
        result = *eax_3
        *edi = result
    
    i += 1
    edi += 0x24
while (i s< 0x40)

return result
