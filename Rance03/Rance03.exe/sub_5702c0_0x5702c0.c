// 函数: sub_5702c0
// 地址: 0x5702c0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t ebx = arg2
int32_t eax_1
int32_t edx
edx:eax_1 = sx.q(ebx - 1)
int32_t edi_1 = (eax_1 - edx) s>> 1

if (arg4 s>= ebx)
    int32_t eax_15 = *arg5
    *(arg3 + (ebx << 2)) = eax_15
    return eax_15

do
    int32_t* esi_1 = *arg5
    (*(**(arg3 + (edi_1 << 2)) + 8))()
    float var_8_1 = fconvert.s(unimplemented  {fstp dword [esp+0x10], st0})
    unimplemented  {fstp dword [esp+0x10], st0}
    (*(*esi_1 + 8))()
    float var_4_1 = fconvert.s(unimplemented  {fstp dword [esp+0x14], st0})
    unimplemented  {fstp dword [esp+0x14], st0}
    int16_t top = top + 2
    
    if (var_8_1 <= var_4_1)
        break
    
    *(arg3 + (ebx << 2)) = *(arg3 + (edi_1 << 2))
    int32_t eax_10
    int32_t edx_1
    edx_1:eax_10 = sx.q(edi_1 - 1)
    ebx = edi_1
    edi_1 = (eax_10 - edx_1) s>> 1
while (arg4 s< ebx)

int32_t eax_13 = *arg5
*(arg3 + (ebx << 2)) = eax_13
return eax_13
