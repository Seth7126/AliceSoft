// 函数: sub_5351d0
// 地址: 0x5351d0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_14 = arg3
int32_t i = (arg2 - arg3) s>> 2

if (i s> 0)
    int32_t entry_ebx
    int32_t var_1c_1 = entry_ebx
    
    do
        int32_t eax_1
        int32_t edx
        edx:eax_1 = sx.q(i)
        int32_t i_1 = (eax_1 - edx) s>> 1
        int32_t* esi_1 = *(arg3 + (i_1 << 2))
        int32_t* ebp_1 = *arg4
        char eax_4 = (*(*esi_1 + 4))()
        char eax_5 = (*(*ebp_1 + 4))()
        int32_t eax_10
        
        if (eax_4 == 0)
            if (eax_5 == 0)
                int32_t eax_12 = (*(*esi_1 + 0xc))(0)
                eax_10 = (*(*ebp_1 + 0xc))(0)
                bool c_1
                
                if (eax_12 != 0 && eax_10 != 0)
                    c_1 = eax_12 u< eax_10
                
                if (eax_12 == 0 || eax_10 == 0 || eax_12 == eax_10)
                    c_1 = (*(*esi_1 + 0xc))(1) u< (*(*ebp_1 + 0xc))(1)
                
                eax_10.b = c_1
                goto label_535298
            
        label_5352b1:
            arg3 = arg3 + (i_1 << 2) + 4
            var_14 = arg3
            i += 0xffffffff - i_1
        else if (eax_5 == 0)
            i = i_1
            arg3 = var_14
        else
            (*(*esi_1 + 8))()
            float var_c_1 = fconvert.s(unimplemented  {fstp dword [esp+0x18], st0})
            unimplemented  {fstp dword [esp+0x18], st0}
            (*(*ebp_1 + 8))()
            float var_8_2 = fconvert.s(unimplemented  {fstp dword [esp+0x1c], st0})
            unimplemented  {fstp dword [esp+0x1c], st0}
            int16_t top = top + 2
            eax_10.b = var_c_1 > var_8_2
        label_535298:
            
            if (eax_10.b != 0)
                goto label_5352b1
            
            i = i_1
            arg3 = var_14
    while (i s> 0)

return arg3
