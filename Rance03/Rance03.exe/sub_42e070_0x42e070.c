// 函数: sub_42e070
// 地址: 0x42e070
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t edi = arg3 * 3
int32_t* esi = (*(**(arg1 + 8) + 4))(arg2)
int32_t eax_1

if (esi != 0 && edi s>= 0)
    int32_t eax_3
    int32_t edx_2
    edx_2:eax_3 = sx.q((*(*esi + 0x14))())
    
    if (edi s< (eax_3 + (edx_2 & 3)) s>> 2)
        eax_1 = (*(*esi + 0x18))()
        
        if (eax_1 != 0)
            *arg4 = *(eax_1 + (edi << 2))
            int32_t* eax_6
            eax_6.b = 1
            return eax_6

eax_1.b = 0
return eax_1
