// 函数: sub_4ce600
// 地址: 0x4ce600
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t ecx
int32_t var_4 = ecx
arg1[5] = 0xf
arg1[4] = 0
*arg1 = 0
sub_403590(arg1, arg2, 0, 0xffffffff)
int32_t edi = arg1[4]
int32_t eax = 0

if (edi != 0)
    do
        int32_t edx_1 = arg1[5]
        char* ecx_2
        
        if (edx_1 u< 0x10)
            ecx_2 = arg1
        else
            ecx_2 = *arg1
        
        ecx_2.b = ecx_2[eax]
        
        if (ecx_2.b u< 0x81 || ecx_2.b u> 0x9f)
            ecx_2.b += 0x20
            
            if (ecx_2.b u> 0xf)
                int32_t* ecx_3
                
                if (edx_1 u< 0x10)
                    ecx_3 = arg1
                else
                    ecx_3 = *arg1
                
                if (*(ecx_3 + eax) == 0x2f)
                    int32_t* ecx_4
                    
                    if (edx_1 u< 0x10)
                        ecx_4 = arg1
                    else
                        ecx_4 = *arg1
                    
                    *(ecx_4 + eax) = 0x5c
            else
                eax += 1
        else
            eax += 1
        
        eax += 1
    while (eax u< edi)

return arg1
