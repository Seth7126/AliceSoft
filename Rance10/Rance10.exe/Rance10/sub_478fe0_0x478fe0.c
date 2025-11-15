// 函数: sub_478fe0
// 地址: 0x478fe0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

if (arg7 s<= 0 || arg8 s<= 0)
    return 

int32_t* eax_2 = (*(*arg1 + 8))(arg2, arg3)
void* eax_4 = (*(*arg4 + 8))(arg5, arg6)
int32_t esi_1 = arg7 << 2
int32_t eax_7 = (*(*arg1 + 0x1c))() - esi_1
int32_t* eax_10 = (*(*arg4 + 0x1c))() - esi_1
int32_t* edi_2 = eax_2
void* esi_2 = eax_4
int32_t i

do
    int32_t j_1 = arg7
    int32_t j
    
    do
        if (j_1 u>= 4 && (edi_2 & 0xf) == 0)
            while (true)
                *edi_2 = *esi_2
                edi_2 = &edi_2[4]
                esi_2 += 0x10
                int32_t j_2 = j_1
                j_1 -= 4
                
                if (j_2 == 4)
                    break
                
                if (j_1 u< 4)
                    goto label_479059
            
            break
        
    label_479059:
        *edi_2 = *esi_2
        edi_2 = &edi_2[1]
        esi_2 += 4
        j = j_1
        j_1 -= 1
    while (j != 1)
    edi_2 += eax_7
    esi_2 += eax_10
    i = arg8
    arg8 -= 1
while (i != 1)
