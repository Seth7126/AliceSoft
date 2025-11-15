// 函数: sub_64f270
// 地址: 0x64f270
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t eax = arg3[0x5c]
int32_t ebp = arg3[0x5d]
int32_t i_2 = sx.d(*arg2) - arg4
int16_t* var_c = arg2
int32_t i = neg.d(i_2)

if (i_2 s>= 0)
    i = i_2

int32_t esi = 0

if (i != 0)
    do
        esi += 1
        i s>>= 1
    while (i != 0)
    
    if (esi s> 0xb)
        *(*arg3 + 0x14) = 6
        (**arg3)(arg3)
        arg2 = var_c

int32_t* result = arg5
int32_t edi_1 = 0
result[esi] += 1
int32_t ebx = 1

if (ebp s>= 1)
    int32_t ecx = ebp
    
    do
        int32_t ebp_1 = sx.d(arg2[*(eax + (ebx << 2))])
        
        if (ebp_1 != 0)
            if (edi_1 s> 0xf)
                int32_t ecx_3 = ((edi_1 - 0x10) u>> 4) + 1
                edi_1 += neg.d(ecx_3) << 4
                arg6[0xf0] += ecx_3
            
            int32_t esi_2 = 1
            int32_t eax_12 = neg.d(ebp_1)
            
            if (ebp_1 s>= 0)
                eax_12 = ebp_1
            
            int32_t i_1 = eax_12 s>> 1
            
            if (i_1 != 0)
                do
                    esi_2 += 1
                    i_1 s>>= 1
                while (i_1 != 0)
                
                if (esi_2 s> 0xa)
                    *(*arg3 + 0x14) = 6
                    (**arg3)(arg3)
            
            result = arg6
            ecx = ebp
            arg2 = var_c
            int32_t edi_3 = (edi_1 << 4) + esi_2
            result[edi_3] += 1
            edi_1 = 0
        else
            result = arg6
            edi_1 += 1
        
        ebx += 1
    while (ebx s<= ecx)
    
    if (edi_1 s> 0)
        *result += 1

return result
