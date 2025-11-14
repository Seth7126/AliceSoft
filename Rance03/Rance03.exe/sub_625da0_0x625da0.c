// 函数: sub_625da0
// 地址: 0x625da0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

uint32_t result_1 = zx.d(*(arg2 + 2))
int32_t esi = 0
int32_t edx = 7
int32_t edi = 4

if (result_1 == 0)
    edx = 0x8a
    edi = 3

uint32_t result = arg4
*(arg2 + (result << 2) + 6) = 0xffff
uint32_t result_2 = 0xffffffff

if (result s>= 0)
    void* var_8_1 = arg2 + 6
    arg4 += 1
    uint32_t i
    
    do
        result = result_1
        esi += 1
        result_1 = zx.d(*var_8_1)
        
        if (esi s>= edx || result != result_1)
            if (esi s< edi)
                *(arg3 + (result << 2) + 0xa7c) += esi.w
            else if (result != 0)
                if (result != result_2)
                    *(arg3 + (result << 2) + 0xa7c) += 1
                
                *(arg3 + 0xabc) += 1
            else if (esi s> 0xa)
                *(arg3 + 0xac4) += 1
            else
                *(arg3 + 0xac0) += 1
            
            esi = 0
            result_2 = result
            
            if (result_1 == 0)
                edx = 0x8a
                edi = 3
            else if (result != result_1)
                edx = 7
                edi = 4
            else
                edx = 6
                edi = 3
        
        var_8_1 += 4
        i = arg4
        arg4 -= 1
    while (i != 1)

return result
