// 函数: sub_5a7470
// 地址: 0x5a7470
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t result

if (arg1 s>= 0)
    void* edx_1 = data_75d508
    
    if (arg1 s< (*(edx_1 + 0x54) - *(edx_1 + 0x50)) s>> 2)
        result = *(*(edx_1 + 0x50) + (arg1 << 2))
        
        if (result != 0)
            if (not(0 f<= arg2))
                do
                    arg2 = arg2 + 360f
                while (0 f> arg2)
            
            if (not(arg2 < 360f))
                do
                    arg2 = arg2 - 360f
                while (arg2 >= 360f)
            
            *(result + 0x4c) = arg2
            result.b = 1
            return result

result.b = 0
return result
