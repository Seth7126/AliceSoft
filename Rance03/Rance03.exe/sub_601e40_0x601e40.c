// 函数: sub_601e40
// 地址: 0x601e40
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_4_1 = arg1
int32_t ebp = arg5[4]

if (ebp s<= 0)
    return 

int32_t x = arg3
int32_t edi_1 = 0

do
    int32_t eax_1 = arg5[5]
    char* ecx
    
    if (eax_1 u< 0x10)
        ecx = arg5
    else
        ecx = *arg5
    
    char* ecx_1
    
    if (ecx[edi_1] u>= 0x81)
        if (eax_1 u< 0x10)
            ecx_1 = arg5
        else
            ecx_1 = *arg5
    
    int32_t* eax_2
    char* ecx_2
    
    if (ecx[edi_1] u< 0x81 || ecx_1[edi_1] u> 0x9f)
        if (eax_1 u< 0x10)
            ecx_2 = arg5
        else
            ecx_2 = *arg5
        
        if (ecx_2[edi_1] u>= 0xe0)
            if (eax_1 u< 0x10)
                eax_2 = arg5
            else
                eax_2 = *arg5
    
    if ((ecx[edi_1] u< 0x81 || ecx_1[edi_1] u> 0x9f)
            && (ecx_2[edi_1] u< 0xe0 || *(eax_2 + edi_1) u> 0xef))
        TextOutA(arg2, x, arg4, 
            std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> >::c_str(
                arg5) + edi_1, 
            1)
        int32_t eax_9
        int32_t edx_1
        edx_1:eax_9 = sx.q(*(arg1 + 0x3c))
        x += (eax_9 - edx_1) s>> 1
        edi_1 += 1
    else
        TextOutA(arg2, x, arg4, 
            std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> >::c_str(
                arg5) + edi_1, 
            2)
        x += *(arg1 + 0x3c)
        edi_1 += 2
while (edi_1 s< ebp)
