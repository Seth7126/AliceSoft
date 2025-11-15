// 函数: sub_67e0b0
// 地址: 0x67e0b0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t* esi = arg5
int32_t edi = 0
int32_t* result = esi[4]
arg5 = result

if (result s> 0)
    int32_t x = arg3
    
    do
        char* eax
        
        if (esi[5] u< 0x10)
            eax = esi
        else
            eax = *esi
        
        eax.b = eax[edi]
        int32_t ecx_1
        
        if (eax.b u< 0x81 || eax.b u> 0x9f)
            eax.b += 0x20
            
            if (eax.b u<= 0xf)
                goto label_67e102
            
            TextOutA(arg2, x, arg4, 
                std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> >::c_str(
                    esi) + edi, 
                1)
            ecx_1 = 1
            int32_t eax_6
            int32_t edx_1
            edx_1:eax_6 = sx.q(*(arg1 + 0x40))
            result = (eax_6 - edx_1) s>> 1
        else
        label_67e102:
            TextOutA(arg2, x, arg4, 
                std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> >::c_str(
                    esi) + edi, 
                2)
            result = *(arg1 + 0x40)
            ecx_1 = 2
        
        edi += ecx_1
        x += result
    while (edi s< arg5)

return result
