// 函数: sub_539690
// 地址: 0x539690
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

void* result = *(arg1 + 4)

if (result != *(arg1 + 8))
    void* i = result
    void* result_1 = 0x7fffffff
    void* result_2 = 0x80000000
    
    for (; i != *(arg1 + 8); i += 0x4c)
        sub_538e20(i, arg2)
        void* result_3 = *(i + 0x40)
        
        if (result_1 s> result_3)
            result_1 = result_3
        
        if (result_2 s< result_3)
            result_2 = result_3
        
        void* result_4 = *(i + 0x44)
        
        if (result_1 s> result_4)
            result_1 = result_4
        
        if (result_2 s< result_4)
            result_2 = result_4
        
        result = *(i + 0x48)
        
        if (result_1 s> result)
            result_1 = result
        
        if (result_2 s< result)
            result_2 = result
    
    *(arg1 + 0x2c) = result_1
    *(arg1 + 0x30) = result_2 - result_1 + 1

return result
