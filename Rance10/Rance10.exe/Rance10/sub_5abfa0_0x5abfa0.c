// 函数: sub_5abfa0
// 地址: 0x5abfa0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t* ebx = arg4
int32_t eax = arg2
int32_t esi = arg5
int32_t* ebp = arg3
int32_t var_8 = eax
int32_t* edi = arg6

if (ebp != eax && ebx != esi)
    while (true)
        int32_t* esi_1 = *ebp
        (*(**ebx + 0xc))()
        arg6 = fconvert.s(unimplemented  {fstp dword [esp+0x24], st0})
        unimplemented  {fstp dword [esp+0x24], st0}
        (*(*esi_1 + 0xc))()
        float var_4_1 = fconvert.s(unimplemented  {fstp dword [esp+0x14], st0})
        unimplemented  {fstp dword [esp+0x14], st0}
        int16_t top = top + 2
        
        if (arg6 <= var_4_1)
            int32_t eax_8 = *ebp
            ebp = &ebp[1]
            *edi = eax_8
            edi = &edi[1]
            eax = var_8
            
            if (ebp == eax)
                esi = arg5
                break
        else
            int32_t eax_5 = *ebx
            ebx = &ebx[1]
            esi = arg5
            *edi = eax_5
            edi = &edi[1]
            
            if (ebx == esi)
                eax = var_8
                break

void* eax_6 = eax - ebp
sub_6feca0(edi, ebp, eax_6)
void* result = edi + eax_6

if (arg7 != 0)
    return result

void* esi_2 = esi - ebx
sub_6feca0(result, ebx, esi_2)
return esi_2 + result
