// 函数: sub_56ff20
// 地址: 0x56ff20
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t esi_2 = (arg2 - arg3) s>> 2
int32_t var_10 = esi_2
int32_t eax_1
int32_t edx
edx:eax_1 = sx.q(esi_2)
int32_t result = eax_1 - edx
int32_t i = result s>> 1

if (i s> 0)
    void* edx_1 = (i << 1) + 2
    
    do
        void* i_2 = i - 1
        int32_t var_8 = *(arg3 + (i << 2) - 4)
        void* i_3 = i_2
        void* i_1 = i_2
        void* i_4 = edx_1 - 2
        
        if (edx_1 - 2 s< esi_2)
            do
                int32_t* esi_3 = *(arg3 + (i_4 << 2) - 4)
                (*(**(arg3 + (i_4 << 2)) + 8))()
                float var_18_1 = fconvert.s(unimplemented  {fstp dword [esp+0x14], st0})
                unimplemented  {fstp dword [esp+0x14], st0}
                (*(*esi_3 + 8))()
                float var_14_1 = fconvert.s(unimplemented  {fstp dword [esp+0x18], st0})
                unimplemented  {fstp dword [esp+0x18], st0}
                int16_t top = top + 2
                
                if (not(var_18_1 <= var_14_1))
                    i_4 -= 1
                
                esi_2 = var_10
                *(arg3 + (i_3 << 2)) = *(arg3 + (i_4 << 2))
                i_3 = i_4
                i_4 = (i_4 << 1) + 2
            while (i_4 s< esi_2)
            
            i_2 = i_1
        
        if (i_4 == esi_2)
            *(arg3 + (i_3 << 2)) = *(arg3 + (esi_2 << 2) - 4)
            i_3 = esi_2 - 1
        
        int32_t var_30_1 = arg4.d
        result = sub_5702c0(&var_8, i_3, arg3, i_2, &var_8)
        i = i_1
        edx_1 -= 2
    while (i s> 0)

return result
