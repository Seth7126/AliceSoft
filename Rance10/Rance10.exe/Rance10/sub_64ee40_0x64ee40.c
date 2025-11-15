// 函数: sub_64ee40
// 地址: 0x64ee40
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t* edi = arg3
int32_t* var_10 = edi
int32_t* ecx = edi[8]
int32_t ebx = sx.d(*arg2)
int32_t i_3 = ebx - arg4
int32_t i = i_3
int32_t ebp = ecx[0x5d]
int32_t edx = ecx[0x5c]

if (ebx - arg4 s< 0)
    i = neg.d(i)
    i_3 -= 1

uint32_t esi = 0

if (i != 0)
    do
        esi += 1
        i s>>= 1
    while (i != 0)
    
    if (esi s> 0xb)
        *(*ecx + 0x14) = 6
        int32_t* eax_2 = edi[8]
        (**eax_2)(eax_2)

int32_t eax_4 = sx.d(*(esi + arg5 + 0x400))
char* result = sub_64e2d0(eax_4, *(arg5 + (esi << 2)), edi, eax_4)

if (result.b != 0)
    if (esi != 0)
        result = sub_64e2d0(result, i_3, edi, esi)
    
    if (esi == 0 || result.b != 0)
        result = 1
        int32_t i_1 = 0
        arg4 = 1
        
        if (ebp s>= 1)
            int32_t ecx_4 = ebp
            int16_t* edx_4 = arg2
            
            while (true)
                int32_t ebx_2 = sx.d(edx_4[*(edx + (result << 2))])
                
                if (ebx_2 != 0)
                    for (; i_1 s> 0xf; i_1 -= 0x10)
                        int32_t eax_6 = sx.d(arg6[0x13c].b)
                        
                        if (sub_64e2d0(eax_6, arg6[0xf0], edi, eax_6).b == 0)
                            goto label_64eec1
                    
                    int32_t eax_7 = ebx_2
                    
                    if (ebx_2 s< 0)
                        eax_7 = neg.d(eax_7)
                        ebx_2 -= 1
                    
                    int32_t i_2 = eax_7 s>> 1
                    uint32_t edi_1 = 1
                    
                    if (i_2 != 0)
                        do
                            edi_1 += 1
                            i_2 s>>= 1
                        while (i_2 != 0)
                        
                        if (edi_1 s> 0xa)
                            *(*var_10[8] + 0x14) = 6
                            int32_t* eax_10 = var_10[8]
                            (**eax_10)(eax_10)
                    
                    int32_t esi_2 = (i_1 << 4) + edi_1
                    int32_t eax_12 = sx.d(*(esi_2 + arg6 + 0x400))
                    result = sub_64e2d0(eax_12, arg6[esi_2], var_10, eax_12)
                    
                    if (result.b == 0)
                        goto label_64eec1
                    
                    edi = var_10
                    
                    if (sub_64e2d0(result, ebx_2, edi, edi_1).b == 0)
                        goto label_64eec1
                    
                    ecx_4 = ebp
                    i_1 = 0
                    edx_4 = arg2
                else
                    i_1 += 1
                
                result = &arg4[1]
                arg4 = result
                
                if (result s> ecx_4)
                    if (i_1 s<= 0)
                        break
                    
                    uint32_t eax_14 = sx.d(arg6[0x100].b)
                    
                    if (sub_64e2d0(eax_14, *arg6, edi, eax_14).b == 0)
                        goto label_64eec1
                    
                    break
        
        result.b = 1
        return result

label_64eec1:
result.b = 0
return result
