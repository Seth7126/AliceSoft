// 函数: sub_479310
// 地址: 0x479310
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

uint32_t var_4_1 = arg1

if (arg8 s<= 0 || arg9 s<= 0)
    return 

char* esi_1 = (*(*arg2 + 8))(arg3, arg4)
void* eax_3 = (*(*arg5 + 8))(arg6, arg7)
int32_t edi_1 = arg8 << 2
int32_t edx_2 = *(arg1 + 8)
int32_t eax_5 = *(edx_2 + (arg12 << 2))
int32_t eax_7 = *(edx_2 + (arg11 << 2))
int32_t* eax_9 = *(edx_2 + (arg10 << 2))
int32_t* eax_12 = (*(*arg2 + 0x1c))() - edi_1
int32_t eax_14 = (*(*arg5 + 0x1c))() - edi_1
int32_t ebp_2 = **(arg1 + 8)
int32_t i_1 = arg9

if (i_1 s<= 0)
    return 

void* ebx_2 = eax_3
uint32_t j_2 = arg8
int32_t* edx_4 = eax_12
int32_t edi_2 = eax_14
int32_t i

do
    if (j_2 s> 0)
        uint32_t j_1 = j_2
        uint32_t j
        
        do
            j_2.b = *(ebx_2 + 3)
            
            if (j_2.b != 0)
                if (j_2.b != 0xff)
                    uint32_t edx_5 = zx.d(j_2.b)
                    *esi_1 = *(zx.d(*esi_1) + ((0xff - edx_5) << 8) + ebp_2) + *(edx_5 + eax_9)
                    uint32_t edx_6 = zx.d(*(ebx_2 + 3))
                    esi_1[1] = *(zx.d(esi_1[1]) + ((0xff - edx_6) << 8) + ebp_2) + *(edx_6 + eax_7)
                    char* edx_7 = zx.d(*(ebx_2 + 3))
                    j_2.b = *(zx.d(esi_1[2]) + ((0xff - edx_7) << 8) + ebp_2) + edx_7[eax_5]
                else
                    *esi_1 = arg10.b
                    esi_1[1] = arg11.b
                    j_2 = arg12
                
                esi_1[2] = j_2.b
            
            esi_1 = &esi_1[4]
            ebx_2 += 4
            j = j_1
            j_1 -= 1
        while (j != 1)
        j_2 = arg8
        i_1 = arg9
        edx_4 = eax_12
        edi_2 = eax_14
    
    esi_1 += edx_4
    ebx_2 += edi_2
    i = i_1
    i_1 -= 1
    arg9 = i_1
while (i != 1)
