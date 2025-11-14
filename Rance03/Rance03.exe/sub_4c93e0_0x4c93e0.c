// 函数: sub_4c93e0
// 地址: 0x4c93e0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

void** edi = arg1
int32_t eax = edi[4]

if (eax u>= 1)
    int32_t* eax_1 = eax - 1
    
    if (eax_1 u> 0xffffffff)
        eax_1 = 0xffffffff
    
    void** ecx
    
    if (edi[5] u< 0x10)
        ecx = edi
    else
        ecx = *edi
    
    void* esi_1 = ecx + eax_1
    int32_t ebx
    ebx.b = *arg2
    
    while (true)
        if (*esi_1 == ebx.b && sub_405190(eax_1, arg2, esi_1, 1) == 0)
            if (edi[5] u>= 0x10)
                edi = *edi
            
            return esi_1 - edi
        
        eax_1 = std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> >::c_str(
            edi)
        
        if (esi_1 == eax_1)
            break
        
        esi_1 -= 1

return 0xffffffff
