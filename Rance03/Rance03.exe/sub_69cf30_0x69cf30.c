// 函数: sub_69cf30
// 地址: 0x69cf30
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

char* result = arg2

if (arg1 != result)
    int32_t i_1 = arg3
    
    if (i_1 != 0)
        void* edi_1 = arg1 - result
        int32_t i
        
        do
            char ecx = *result
            result = &result[1]
            char edx = *(edi_1 + result - 1)
            *(edi_1 + result - 1) = ecx
            result[0xffffffff] = edx
            i = i_1
            i_1 -= 1
        while (i != 1)

return result
