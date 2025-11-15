// 函数: sub_5ac180
// 地址: 0x5ac180
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

void* result = arg3
int32_t i = (arg2 - result) s>> 2

while (i s> 0)
    int32_t eax_1
    int32_t edx
    edx:eax_1 = sx.q(i)
    int32_t i_1 = (eax_1 - edx) s>> 1
    int32_t* eax_4 = (i_1 << 2) + result
    int32_t* esi_1 = *eax_4
    (*(**arg4 + 0xc))()
    float var_8_1 = fconvert.s(unimplemented  {fstp dword [esp+0x14], st0})
    unimplemented  {fstp dword [esp+0x14], st0}
    (*(*esi_1 + 0xc))()
    float var_c_1 = fconvert.s(unimplemented  {fstp dword [esp+0x10], st0})
    unimplemented  {fstp dword [esp+0x10], st0}
    int16_t top = top + 2
    
    if (var_c_1 < var_8_1)
        i = i_1
    else
        result = &eax_4[1]
        i += 0xffffffff - i_1

return result
