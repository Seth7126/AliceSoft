// 函数: sub_4432d0
// 地址: 0x4432d0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

EnterCriticalSection(*(arg1 + 0x18) + 4)
int32_t edi = 0
void* i = arg1 + 0x438
void* result

while (true)
    if (*(i + 0x30) == 0)
        int32_t** ebp_1 = *(arg1 + 0xa50)
        int32_t* j = *ebp_1
        
        if (j != ebp_1)
            while (j[5] != i)
                if (*(j + 0xd) == 0)
                    int32_t* j_1 = j[2]
                    
                    if (*(j_1 + 0xd) != 0)
                        int32_t* j_3 = j[1]
                        
                        if (*(j_3 + 0xd) == 0)
                            while (j == j_3[2])
                                j = j_3
                                j_3 = j_3[1]
                                
                                if (*(j_3 + 0xd) != 0)
                                    break
                        
                        j = j_3
                    else
                        j = j_1
                        int32_t* j_2 = *j
                        
                        while (*(j_2 + 0xd) == 0)
                            j = j_2
                            j_2 = *j
                
                if (j == ebp_1)
                    break
        
        if (j == ebp_1)
            result = arg1 + 0x438 + edi * 0x34
            break
    
    edi += 1
    i += 0x34
    
    if (edi s>= 0x1e)
        result = nullptr
        break

LeaveCriticalSection(*(arg1 + 0x18) + 4)

if (result != 0)
    int32_t ecx = *(arg1 + 0x3c)
    *(result + 4) = (*(arg1 + 0x38) + 0xf) & 0xfffffff0
    int32_t eax_8 = (ecx + 0xf) & 0xfffffff0
    int32_t edx_1 = *(result + 4) * eax_8
    *(result + 8) = eax_8
    *(result + 0x10) = *(result + 0xc)
    uint32_t esi_3 = edx_1 u>> 2
    sub_444490(result + 0xc, edx_1)
    *(result + 0x1c) = *(result + 0x18)
    sub_444490(result + 0x18, esi_3)
    *(result + 0x28) = *(result + 0x24)
    sub_444490(result + 0x24, esi_3)
    *(result + 0x30) = 0

return result
