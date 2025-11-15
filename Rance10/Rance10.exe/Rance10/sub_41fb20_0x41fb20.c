// 函数: sub_41fb20
// 地址: 0x41fb20
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t* edi = (*(**(arg1 + 8) + 4))((*(**(arg1 + 8) + 0x1c))())
int32_t eax_2

if (edi != 0 && arg2 s>= 0)
    int32_t eax_4
    int32_t edx_2
    edx_2:eax_4 = sx.q((*(*edi + 0x14))())
    
    if (arg2 s< (eax_4 + (edx_2 & 3)) s>> 2)
        eax_2 = (*(*edi + 0x18))()
        
        if (eax_2 != 0)
            *arg3 = *(eax_2 + (arg2 << 2))
            int32_t* eax_7
            eax_7.b = 1
            return eax_7

eax_2.b = 0
return eax_2
