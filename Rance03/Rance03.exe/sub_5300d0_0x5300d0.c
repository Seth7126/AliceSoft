// 函数: sub_5300d0
// 地址: 0x5300d0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t* result = *(arg2 + 4)
int32_t* i = result

for (int32_t esi = *(arg2 + 8); i != esi; i = &i[4])
    if (i[1] f* *(arg1 + 8) + *i * *(arg1 + 4) + i[2] f* *(arg1 + 0xc) f+ i[3] f< 0)
        if (result != esi)
            while (not(result[1] f* *(arg1 + 0x14) + *(arg1 + 0x10) f* *result
                    + result[2] f* *(arg1 + 0x18) f+ result[3] f< 0))
                result = &result[4]
                
                if (result == esi)
                    *(arg1 + 0x80) = 1
                    return result
            
            result = sub_59ddb0(arg2, arg1 + 0x1c)
            
            if (result.b == 0)
                *(arg1 + 0x80) = result.b
                return result
        
        break

*(arg1 + 0x80) = 1
return result
