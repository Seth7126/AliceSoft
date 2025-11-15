// 函数: sub_62e2a0
// 地址: 0x62e2a0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t* var_4_1 = arg1
int32_t result = 0xffffffff
char* edi = (**arg1)()
char* ecx_1 = (**arg1)()

if (ecx_1 != 0)
    char* eax_3
    
    do
        eax_3.b = *ecx_1
        ecx_1 = &ecx_1[1]
    while (eax_3.b != 0)
    ecx_1 -= &ecx_1[1]

void* ebp = ecx_1 + edi
int32_t result_1 = 0

while (edi u< ebp)
    bool cond:0_1 = _strncmp(edi, 
        std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> >::c_str(
            arg2), 
        arg2[4]) == 0
    int32_t eax_6
    eax_6.b = *edi
    
    if (cond:0_1)
        result = result_1
    
    int32_t eax_7
    
    if (eax_6.b u< 0x81 || eax_6.b u> 0x9f)
        eax_6.b += 0x20
        
        eax_7 = eax_6.b u> 0xf ? 1 : 2
    else
        eax_7 = 2
    
    edi = &edi[eax_7]
    result_1 += 1

return result
