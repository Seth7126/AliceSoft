// 函数: sub_510160
// 地址: 0x510160
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

void** edi = arg1
int32_t eax = edi[4]

if (eax u>= 1)
    int32_t ecx = eax - 1
    
    if (arg3 u< ecx)
        ecx = arg3
    
    int32_t* eax_1
    
    if (edi[5] u< 0x10)
        eax_1 = edi
    else
        eax_1 = *edi
    
    int32_t* esi_1 = eax_1 + ecx
    int32_t ebx
    ebx.b = *arg2
    
    while (true)
        if (*esi_1 == ebx.b && sub_406ac0(eax_1, arg2, esi_1, 1) == 0)
            if (edi[5] u>= 0x10)
                edi = *edi
            
            return esi_1 - edi
        
        eax_1 = std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> >::c_str(
            edi)
        
        if (esi_1 == eax_1)
            break
        
        esi_1 -= 1

return 0xffffffff
