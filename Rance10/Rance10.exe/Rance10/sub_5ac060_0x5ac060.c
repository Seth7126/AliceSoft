// 函数: sub_5ac060
// 地址: 0x5ac060
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

void* ebx = arg5
void* ebp = arg2
int32_t* edi = arg6
char* eax_1 = arg4

if (arg3 != ebp && eax_1 != ebx)
    while (true)
        int32_t* ecx = *(ebx - 4)
        int32_t* esi_1 = *(ebp - 4)
        void* var_c_1 = ebx
        ebx -= 4
        void* var_4_1 = ebp
        ebp -= 4
        (*(*ecx + 0xc))()
        arg6 = fconvert.s(unimplemented  {fstp dword [esp+0x28], st0})
        unimplemented  {fstp dword [esp+0x28], st0}
        (*(*esi_1 + 0xc))()
        edi -= 4
        arg5 = fconvert.s(unimplemented  {fstp dword [esp+0x24], st0})
        unimplemented  {fstp dword [esp+0x24], st0}
        int16_t top = top + 2
        
        if (arg6 <= arg5)
            ebp = var_4_1
            *edi = *ebx
            eax_1 = arg4
            
            if (eax_1 == ebx)
                break
        else
            ebx = var_c_1
            *edi = *ebp
            
            if (arg3 == ebp)
                eax_1 = arg4
                break

void* ebx_1 = ebx - eax_1
return sub_6feca0(edi - ebx_1, eax_1, ebx_1)
