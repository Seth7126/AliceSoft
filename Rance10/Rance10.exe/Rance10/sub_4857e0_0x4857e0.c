// 函数: sub_4857e0
// 地址: 0x4857e0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t i = 0
void* edi = arg1 + 4
float result

do
    (*(**(arg1 + 0x914) + 0xc))(i)
    unimplemented  {fmul st0, dword [0x79a6ac]}
    float result_1 = fconvert.s(unimplemented  {fstp dword [esp+0xc], st0})
    unimplemented  {fstp dword [esp+0xc], st0}
    int16_t top = top + 1
    result = int.d(fconvert.t(result_1))
    *(edi + 4) = result
    result_1 = result
    
    if (i u<= 0x3f)
        float var_4 = 1.40129846e-43f
        float* ecx_1 = &result_1
        
        if (result s>= 0x64)
            ecx_1 = &var_4
        
        result = 0f
        float result_2 = *ecx_1
        
        if (result_2 s> 0)
            result = result_2
        
        *edi = result
    
    i += 1
    edi += 0x24
while (i s< 0x40)

return result
