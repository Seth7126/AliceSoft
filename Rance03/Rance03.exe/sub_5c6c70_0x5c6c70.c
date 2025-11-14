// 函数: sub_5c6c70
// 地址: 0x5c6c70
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_4 = arg1
int32_t edx = arg1
*(edx + 0x234) -= 4
int32_t ebx = **(edx + 0x234)
*(edx + 0x234) -= 4
int32_t edi = **(edx + 0x234)
int32_t eax_4 = (*(edx + 0x178) - *(edx + 0x174)) s>> 2

if (ebx u< eax_4)
    eax_4 = *(edx + 0x174)
    arg1 = *(eax_4 + (ebx << 2))
    
    if (arg1 != 0)
        int32_t eax_7 = (*(edx + 0x178) - *(edx + 0x174)) s>> 2
        
        if (edi u< eax_7)
            eax_7 = *(*(edx + 0x174) + (edi << 2))
            
            if (eax_7 != 0)
                char* eax_9
                
                if (*(arg1 + 0xc) != 0)
                    eax_9 = *(arg1 + 8)
                else
                    eax_9 = nullptr
                
                sub_5ddf10(edx + 0x220, zx.d(sub_5d3ec0(eax_7, eax_9)))
                sub_5d5e80(edx + 0x16c, edi)
                return sub_5d5e80(edx + 0x16c, ebx)
        
        int32_t var_18_4 = edi
        int32_t var_1c = 0x6e7564
        return sub_5c2400(eax_7, edx, arg1, edx, "S_LT")

int32_t var_18_5 = ebx
int32_t var_1c_1 = 0x6e7800
return sub_5c2400(eax_4, edx, arg1, edx, "S_LT")
