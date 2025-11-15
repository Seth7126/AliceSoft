// 函数: _strcpy_s
// 地址: 0x70d2a2
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t result
int32_t* eax_1

if (arg1 == 0)
    eax_1 = __errno()
    result = 0x16
else
    int32_t i_1 = arg2
    
    if (i_1 == 0)
        eax_1 = __errno()
        result = 0x16
    else if (arg3 != 0)
        int32_t edi
        int32_t var_c = edi
        char* edi_1 = arg1
        int32_t i
        
        do
            char eax = *(arg3 - arg1 + edi_1)
            *edi_1 = eax
            edi_1 = &edi_1[1]
            
            if (eax == 0)
                break
            
            i = i_1
            i_1 -= 1
        while (i != 1)
        
        if (i_1 != 0)
            return 0
        
        *arg1 = i_1.b
        eax_1 = __errno()
        result = 0x22
    else
        *arg1 = 0
        eax_1 = __errno()
        result = 0x16

*eax_1 = result
__invalid_parameter_noinfo()
return result
