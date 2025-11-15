// 函数: _wcscspn
// 地址: 0x71c985
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t ecx
int32_t var_8 = ecx
int32_t edi
int32_t var_14 = edi
int16_t* eax = arg1

if (*arg1 != 0)
    int16_t i_1 = *arg2
    
    do
        int16_t* esi_1 = arg2
        
        if (i_1 != 0)
            int16_t i = i_1
            
            do
                if (*eax == i)
                    return (eax - arg1) s>> 1
                
                esi_1 = &esi_1[1]
                i = *esi_1
            while (i != 0)
        
        eax = &eax[1]
    while (*eax != 0)

return (eax - arg1) s>> 1
