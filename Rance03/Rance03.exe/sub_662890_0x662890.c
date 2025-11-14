// 函数: sub_662890
// 地址: 0x662890
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

void* var_4 = arg3
void* result = arg3
int32_t i = (arg2 - result) s/ 0xc0

if (i s> 0)
    var_4 = arg4[9]
    
    do
        int32_t eax_3
        int32_t edx_4
        edx_4:eax_3 = sx.q(i)
        int32_t i_1 = (eax_3 - edx_4) s>> 1
        int32_t* edx_7 = i_1 * 0xc0 + result
        int32_t ebp_1 = edx_7[9]
        int32_t eax_5 = edx_7[0xa]
        
        if (ebp_1 s< var_4)
            result = &edx_7[0x30]
            i += 0xffffffff - i_1
        else if (ebp_1 s> var_4)
            i = i_1
        else
            int32_t ebp_2 = arg4[0xa]
            int32_t edi_2 = edx_7[0xb]
            
            if (eax_5 s< ebp_2)
                result = &edx_7[0x30]
                i += 0xffffffff - i_1
            else if (eax_5 s> ebp_2)
                i = i_1
            else
                int32_t eax_6 = arg4[0xb]
                
                if (edi_2 s< eax_6 || (edi_2 s<= eax_6 && *edx_7 s< *arg4))
                    result = &edx_7[0x30]
                    i += 0xffffffff - i_1
                else
                    i = i_1
    while (i s> 0)

return result
