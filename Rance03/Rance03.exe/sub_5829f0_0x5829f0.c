// 函数: sub_5829f0
// 地址: 0x5829f0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t* ebx = *(arg1 + 4)
int32_t* i_1 = *ebx
int32_t* result

while (i_1 != ebx)
    void* edi_1 = i_1[5]
    
    if (*(edi_1 + 0x40) != 0)
    label_582a75:
        result.b = 1
        return result
    
    int32_t* i = *(edi_1 + 0x48)
    
    for (int32_t edi_2 = *(edi_1 + 0x4c); i != edi_2; i = &i[1])
        void* ecx = *i
        
        if (ecx != 0)
            result, i_1 = sub_581d60(ecx)
            
            if (result.b != 0)
                goto label_582a75
    
    if (*(i_1 + 0xd) == 0)
        int32_t* i_2 = i_1[2]
        
        if (*(i_2 + 0xd) != 0)
            result = i_1[1]
            
            if (*(result + 0xd) == 0)
                while (i_1 == result[2])
                    i_1 = result
                    result = result[1]
                    
                    if (*(result + 0xd) != 0)
                        break
            
            i_1 = result
        else
            i_1 = i_2
            result = *i_1
            
            while (*(result + 0xd) == 0)
                i_1 = result
                result = *i_1

result.b = 0
return result
