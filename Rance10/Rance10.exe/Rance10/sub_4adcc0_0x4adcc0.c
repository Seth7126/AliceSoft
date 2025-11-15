// 函数: sub_4adcc0
// 地址: 0x4adcc0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

void* var_4 = arg1
int32_t j = arg2
int32_t* i = *(arg1 + 0xa4)
int32_t* i_1 = nullptr

for (; i != *(arg1 + 0xa8); i = &i[4])
    int32_t* ecx = *i
    int32_t edx_1 = i[1]
    
    if (ecx != edx_1)
        while (true)
            int32_t eax_1 = ecx[1]
            int32_t* ebx_1 = *ecx
            
            if (eax_1 != ebx_1)
                while (*ebx_1 != j)
                    ebx_1 = &ebx_1[1]
                    
                    if (ebx_1 == eax_1)
                        break
                
                if (eax_1 != ebx_1)
                    i_1 = i
                    break
            
            ecx = &ecx[3]
            
            if (ecx == edx_1)
                goto label_4add16
        
        break
    
label_4add16:

char* ebx_2 = arg6
char* esi = arg5
char* result = arg4
char* edi_1 = arg3
*ebx_2 = 1
*esi = 1
*result = 1
*edi_1 = 1

if (i_1 != 0)
    arg2.b = 0
    arg6.b = 0
    sub_4b0220(i_1, j, &arg2, &arg3, &arg6, &arg5)
    result.b = arg2.b == 0
    *ebx_2 = 1
    bool cond:2_1 = arg6.b == 0
    *edi_1 = result.b
    result.b = cond:2_1
    *arg4 = 1
    bool cond:3_1 = i_1[3].b == 0
    *esi = result.b
    
    if (not(cond:3_1))
        *edi_1 = 0
    else if (*(i_1 + 0xd) != 0)
        *edi_1 = 1
        *arg4 = 0
    
    if (*(i_1 + 0xe) != 0)
        *esi = 0
        return result
    
    if (*(i_1 + 0xf) != 0)
        *esi = 1
        *ebx_2 = 0

return result
