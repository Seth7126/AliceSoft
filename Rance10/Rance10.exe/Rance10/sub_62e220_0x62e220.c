// 函数: sub_62e220
// 地址: 0x62e220
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

char* ebx = (**arg1)()
char* ecx_1 = (**arg1)()

if (ecx_1 != 0)
    char* eax_2
    
    do
        eax_2.b = *ecx_1
        ecx_1 = &ecx_1[1]
    while (eax_2.b != 0)
    ecx_1 -= &ecx_1[1]

void* edi_1 = ecx_1 + ebx
int32_t result = 0

while (ebx u< edi_1)
    if (_strncmp(ebx, 
            std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> >::c_str(
                arg2), 
            arg2[4]) == 0)
        return result
    
    int32_t eax_4
    eax_4.b = *ebx
    int32_t eax_5
    
    if (eax_4.b u< 0x81 || eax_4.b u> 0x9f)
        eax_4.b += 0x20
        
        eax_5 = eax_4.b u> 0xf ? 1 : 2
    else
        eax_5 = 2
    
    ebx = &ebx[eax_5]
    result += 1

return 0xffffffff
