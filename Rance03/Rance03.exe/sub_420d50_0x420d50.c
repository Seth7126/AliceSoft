// 函数: sub_420d50
// 地址: 0x420d50
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

char* esi = (*(*arg3 + 8))(arg2, arg4)
int32_t j_2 = arg5
int32_t i_1 = arg6
int32_t result = (*(*arg3 + 0x1c))() - j_2 * 3
arg5 = result

if (i_1 s> 0)
    int32_t i
    
    do
        if (j_2 s> 0)
            int32_t j_1 = j_2
            int32_t j
            
            do
                *esi = arg7
                esi[1] = arg8
                esi[2] = arg9
                esi = &esi[3]
                j = j_1
                j_1 -= 1
            while (j != 1)
            result = arg5
        
        esi = &esi[result]
        i = i_1
        i_1 -= 1
    while (i != 1)

return result
