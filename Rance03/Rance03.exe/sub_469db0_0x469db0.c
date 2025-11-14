// 函数: sub_469db0
// 地址: 0x469db0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t* eax_1 = (*(*arg1 + 8))(arg2, arg3)
void* eax_3 = (*(*arg4 + 8))(arg5, arg6)
int32_t esi = arg7 << 2
int32_t eax_7 = (*(*arg1 + 0x1c))() - esi
int32_t* eax_10 = (*(*arg4 + 0x1c))() - esi
int32_t* edi_1 = eax_1
void* esi_1 = eax_3
void* result
int32_t i

do
    int32_t j_1 = arg7
    int32_t j
    
    do
        if (j_1 u>= 4)
            result = edi_1 & 0xf
            
            if (result == 0)
                while (true)
                    *edi_1 = *esi_1
                    edi_1 = &edi_1[4]
                    esi_1 += 0x10
                    int32_t j_2 = j_1
                    j_1 -= 4
                    
                    if (j_2 == 4)
                        break
                    
                    if (j_1 u< 4)
                        goto label_469e19
                
                break
        
    label_469e19:
        result = *esi_1
        *edi_1 = result
        edi_1 = &edi_1[1]
        esi_1 += 4
        j = j_1
        j_1 -= 1
    while (j != 1)
    edi_1 += eax_7
    esi_1 += eax_10
    i = arg8
    arg8 -= 1
while (i != 1)
return result
