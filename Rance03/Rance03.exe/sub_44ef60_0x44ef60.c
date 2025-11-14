// 函数: sub_44ef60
// 地址: 0x44ef60
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t** edx = data_75dd54
data_75dd58 = edx
int32_t* result = *(arg1 + 4)
int32_t* i = *result

if (i != result)
    int32_t edi
    int32_t var_c_1 = edi
    
    do
        if (&i[4] u< edx)
            result = data_75dd54
        
        if (&i[4] u>= edx || result u> &i[4])
            if (edx == data_75dd5c)
                result = sub_415950(&data_75dd54, 1)
                edx = data_75dd58
            
            if (edx != 0)
                result = i[4]
                *edx = result
                edx = data_75dd58
        else
            int32_t edi_4 = (&i[4] - result) s>> 2
            
            if (edx == data_75dd5c)
                result = sub_415950(&data_75dd54, 1)
                edx = data_75dd58
            
            if (edx != 0)
                result = *(data_75dd54 + (edi_4 << 2))
                *edx = result
                edx = data_75dd58
        
        edx = &edx[1]
        data_75dd58 = edx
        
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
