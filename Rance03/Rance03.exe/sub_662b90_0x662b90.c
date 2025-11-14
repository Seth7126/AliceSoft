// 函数: sub_662b90
// 地址: 0x662b90
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

void* var_4 = arg3
void* result = arg3
int32_t i = (arg2 - result) s/ 0xc0

if (i s> 0)
    var_4 = arg4[0xc]
    
    do
        int32_t eax_3
        int32_t edx_4
        edx_4:eax_3 = sx.q(i)
        int32_t i_1 = (eax_3 - edx_4) s>> 1
        int32_t* edx_7 = i_1 * 0xc0 + result
        int32_t ebp_1 = edx_7[0xc]
        int32_t eax_5 = edx_7[0xd]
        
        if (var_4 s< ebp_1)
            i = i_1
        else if (var_4 s> ebp_1)
            result = &edx_7[0x30]
            i += 0xffffffff - i_1
        else
            int32_t ebp_2 = arg4[0xd]
            int32_t edi_2 = edx_7[0xe]
            
            if (ebp_2 s< eax_5)
                i = i_1
            else if (ebp_2 s> eax_5)
                result = &edx_7[0x30]
                i += 0xffffffff - i_1
            else
                int32_t eax_6 = arg4[0xe]
                
                if (eax_6 s< edi_2 || (eax_6 s<= edi_2 && *arg4 s< *edx_7))
                    i = i_1
                else
                    result = &edx_7[0x30]
                    i += 0xffffffff - i_1
    while (i s> 0)

return result
