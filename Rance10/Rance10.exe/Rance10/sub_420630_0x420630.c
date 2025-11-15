// 函数: sub_420630
// 地址: 0x420630
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t* edi = (*(**(arg1 + 8) + 4))(arg2)
int32_t eax_1

if (edi != 0 && arg3 s>= 0)
    int32_t eax_3
    int32_t edx_2
    edx_2:eax_3 = sx.q((*(*edi + 0x14))())
    
    if (arg3 s< (eax_3 + (edx_2 & 3)) s>> 2)
        eax_1 = (*(*edi + 0x18))()
        
        if (eax_1 != 0)
            *arg4 = *(eax_1 + (arg3 << 2))
            int32_t* eax_6
            eax_6.b = 1
            return eax_6

eax_1.b = 0
return eax_1
