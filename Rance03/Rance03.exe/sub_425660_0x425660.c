// 函数: sub_425660
// 地址: 0x425660
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

void* const ebx = arg4
void* const edi = (*(**(ebx + 0xc) + 8))((*(**(ebx + 8) + 0x18))((*(**(ebx + 8) + 8))()))
int32_t esi = 0
arg4 = edi
void* const eax_3

if (edi s> 0)
    do
        int32_t eax_7 =
            (*(**(ebx + 0xc) + 0xc))((*(**(ebx + 8) + 0x18))((*(**(ebx + 8) + 8))()), esi)
        
        if (eax_7 == 0xc || eax_7 == 0xd || eax_7 == 0x3f || eax_7 - 0xe u<= 3 || eax_7 - 0x16 u<= 3
                || eax_7 == 0x1e || eax_7 == 0x20 || eax_7 == 0x32 || eax_7 == 0x34)
            int32_t* eax_10 = (*(**(ebx + 8) + 4))((*(**(ebx + 8) + 8))())
            
            if (eax_10 == 0 || esi s< 0)
                edi = arg4
                eax_3 = 0xffffffff
            else
                int32_t eax_12
                int32_t edx_6
                edx_6:eax_12 = sx.q((*(*eax_10 + 0x14))())
                
                if (esi s>= (eax_12 + (edx_6 & 3)) s>> 2)
                    edi = arg4
                    eax_3 = 0xffffffff
                else
                    int32_t eax_16 = (*(*eax_10 + 0x18))()
                    
                    if (eax_16 == 0)
                        edi = arg4
                        eax_3 = 0xffffffff
                    else
                        eax_3 = *(eax_16 + (esi << 2))
                        edi = arg4
        else
            eax_3 = 0xffffffff
        
        if (arg5 == eax_3)
            *arg3 = esi
            *arg2 = 0xffffffff
            int32_t* eax_18
            eax_18.b = 1
            return eax_18
        
        esi += 1
    while (esi s< edi)

eax_3.b = 0
return eax_3
