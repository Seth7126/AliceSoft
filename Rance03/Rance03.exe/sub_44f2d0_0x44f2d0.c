// 函数: sub_44f2d0
// 地址: 0x44f2d0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t* result = *(arg1 + 4)
int32_t* i = *result

if (i != result)
    int32_t edi
    int32_t var_c_1 = edi
    
    do
        void* edi_2 = i[5]
        
        if (edi_2 != 0)
            int32_t* ecx = *(edi_2 + 0xdc)
            
            if (ecx != 0)
                result = (*(*ecx + 4))()
                *(edi_2 + 0xdc) = 0
        
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
    while (i != *(arg1 + 4))

return result
