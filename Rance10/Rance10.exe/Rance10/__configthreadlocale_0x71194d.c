// 函数: __configthreadlocale
// 地址: 0x71194d
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

void* eax = sub_714cce()
int32_t ecx = *(eax + 0x350)
int32_t eax_1
eax_1.b = (ecx.b & 2) == 0

if (arg1 == 0xffffffff)
    data_7e180c = 0xffffffff
else if (arg1 != 0)
    int32_t ecx_1
    
    if (arg1 == 1)
        ecx_1 = ecx | 2
    else
        if (arg1 != 2)
            *__errno() = 0x16
            __invalid_parameter_noinfo()
            return 0xffffffff
        
        ecx_1 = ecx & 0xfffffffd
    
    *(eax + 0x350) = ecx_1

return eax_1 + 1
