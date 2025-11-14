// 函数: sub_5c6d40
// 地址: 0x5c6d40
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

*(arg1 + 0x234) -= 4
int32_t ebx = **(arg1 + 0x234)
*(arg1 + 0x234) -= 4
int32_t edi = **(arg1 + 0x234)
int32_t eax_4 = (*(arg1 + 0x178) - *(arg1 + 0x174)) s>> 2
void* edx

if (ebx u< eax_4)
    eax_4 = *(arg1 + 0x174)
    edx = *(eax_4 + (ebx << 2))
    
    if (edx != 0)
        int32_t eax_7 = (*(arg1 + 0x178) - *(arg1 + 0x174)) s>> 2
        
        if (edi u< eax_7)
            eax_7 = *(*(arg1 + 0x174) + (edi << 2))
            
            if (eax_7 != 0)
                sub_5ddf10(arg1 + 0x220, zx.d(sub_5d3f10(eax_7, edx)))
                sub_5d5e80(arg1 + 0x16c, edi)
                return sub_5d5e80(arg1 + 0x16c, ebx)
        
        int32_t var_14_4 = edi
        int32_t var_18 = 0x6e75ac
        return sub_5c2400(eax_7, edx, arg1, arg1, "S_LT")

int32_t var_14_5 = ebx
int32_t var_18_1 = 0x6e7588
return sub_5c2400(eax_4, edx, arg1, arg1, "S_LT")
