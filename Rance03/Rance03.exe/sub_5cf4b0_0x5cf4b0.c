// 函数: sub_5cf4b0
// 地址: 0x5cf4b0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

void* esi = arg1
*(esi + 0x234) -= 4
int32_t edi = **(esi + 0x234)
*(esi + 0x234) -= 4
int32_t edx = **(esi + 0x234)
int32_t eax_4 = (*(esi + 0x178) - *(esi + 0x174)) s>> 2

if (edi u< eax_4)
    eax_4 = *(esi + 0x174)
    void* ebp_1 = *(eax_4 + (edi << 2))
    
    if (ebp_1 != 0)
        int32_t eax_7 = (*(esi + 0x178) - *(esi + 0x174)) s>> 2
        
        if (edx u< eax_7)
            eax_7 = *(esi + 0x174)
            arg1 = *(eax_7 + (edx << 2))
            
            if (arg1 != 0)
                int32_t* eax_8
                int32_t ecx
                int32_t edx_1
                eax_8, ecx, edx_1 = sub_5d53d0(arg1, ebp_1)
                
                if (eax_8.b != 0)
                    return sub_5ddf10(esi + 0x220, edi)
                
                char const* const var_14_1 = "copyDelegatePage"
                return sub_5c2400(eax_8, edx_1, ecx, esi, "DG_ASSIGN")
        
        int32_t var_14_3 = edx
        int32_t var_18 = 0x6ea300
        return sub_5c2400(eax_7, edx, arg1, esi, "DG_ASSIGN")

int32_t var_14_4 = edi
int32_t var_18_1 = 0x6ea2d0
return sub_5c2400(eax_4, edx, arg1, esi, "DG_ASSIGN")
