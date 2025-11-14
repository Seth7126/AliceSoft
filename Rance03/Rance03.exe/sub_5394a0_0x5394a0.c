// 函数: sub_5394a0
// 地址: 0x5394a0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

void* var_4_1 = arg1
int32_t edx = *(arg1 + 0x14)
*(arg1 + 0x20) = *(arg1 + 0x1c)
sub_42f470(arg1 + 0x1c, edx)
void* ecx_1 = arg1
int32_t* result = *(ecx_1 + 0x10)
int32_t* i = *result

if (i != result)
    do
        int32_t edi_1 = i[5]
        int32_t ebx_1 = i[4]
        
        if (edi_1 s>= 0)
            result = (**(arg1 + 0x18))()
            ecx_1 = arg1
            
            if (edi_1 s< result)
                result = *(arg1 + 0x1c)
                result[edi_1] = ebx_1
        
        if (*(i + 0xd) == 0)
            int32_t* i_1 = i[2]
            
            if (*(i_1 + 0xd) != 0)
                result = i[1]
                
                if (*(result + 0xd) == 0)
                    while (i == result[2])
                        i = result
                        result = result[1]
                        
                        if (*(result + 0xd) != 0)
                            break
                
                i = result
            else
                i = i_1
                result = *i
                
                while (*(result + 0xd) == 0)
                    i = result
                    result = *i
    while (i != *(ecx_1 + 0x10))

return result
