// 函数: sub_487b00
// 地址: 0x487b00
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t ecx
int32_t var_4 = ecx
arg1[5] = 0xf
arg1[4] = 0
*arg1 = 0
sub_401ff0(arg1, arg2, 0, 0xffffffff)
int32_t edi = arg1[4]
int32_t eax = 0

if (edi != 0)
    do
        int32_t ecx_2 = arg1[5]
        char* edx_1
        
        if (ecx_2 u< 0x10)
            edx_1 = arg1
        else
            edx_1 = *arg1
        
        char* edx_2
        
        if (edx_1[eax] u>= 0x81)
            if (ecx_2 u< 0x10)
                edx_2 = arg1
            else
                edx_2 = *arg1
        
        char* edx_3
        char* edx_4
        
        if (edx_1[eax] u< 0x81 || edx_2[eax] u> 0x9f)
            if (ecx_2 u< 0x10)
                edx_3 = arg1
            else
                edx_3 = *arg1
            
            if (edx_3[eax] u>= 0xe0)
                if (ecx_2 u< 0x10)
                    edx_4 = arg1
                else
                    edx_4 = *arg1
        
        if ((edx_1[eax] u< 0x81 || edx_2[eax] u> 0x9f)
                && (edx_3[eax] u< 0xe0 || edx_4[eax] u> 0xef))
            int32_t* edx_5
            
            if (ecx_2 u< 0x10)
                edx_5 = arg1
            else
                edx_5 = *arg1
            
            if (*(edx_5 + eax) == 0x2f)
                int32_t* ecx_3
                
                if (ecx_2 u< 0x10)
                    ecx_3 = arg1
                else
                    ecx_3 = *arg1
                
                *(ecx_3 + eax) = 0x5c
        else
            eax += 1
        
        eax += 1
    while (eax u< edi)

return arg1
