// 函数: sub_4e2790
// 地址: 0x4e2790
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

void* edx_2 = arg1
void* const eax = 0x1cc
arg1.b = *(edx_2 + 0xb0)

if (arg1.b != 0)
    eax = 0x184

int32_t* result

if (*(eax + edx_2 + 0x10) == 0)
    void* const eax_3 = 0x154
    
    if (arg1.b != 0)
        eax_3 = 0x10c
    
    void* eax_4 = eax_3 + edx_2
    
    if (*(eax_4 + 0x10) != 0)
        if (*(eax_4 + 0x14) u>= 0x10)
            eax_4 = *eax_4
        
        return sub_44c5f0(eax_4, arg2, arg3)
    
    *arg2 = *(edx_2 + 0xa8)
    result = arg3
    *result = *(edx_2 + 0xac)
else
    result = *(edx_2 + 0x220)
    void* ecx = result[2]
    
    if (ecx != 0)
        result = sub_4d61b0(ecx, eax + edx_2)
        
        if (result != 0)
            *arg2 = result[0xa]
            *arg3 = result[0xb]
            return (*(*result + 4))()

return result
