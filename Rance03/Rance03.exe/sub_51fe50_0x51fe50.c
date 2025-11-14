// 函数: sub_51fe50
// 地址: 0x51fe50
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

enum MESSAGEBOX_RESULT result

if (*(arg1 + 0x14) != 0)
    if (*(arg1 + 0x1c) != 0)
        goto label_51fe94
    
    if (sub_5200e0(arg1).b != 0)
        *(arg1 + 0x1c) = 1
    label_51fe94:
        int32_t* result_1
        void arg_4
        sub_42f3d0(arg1 + 0x20, &result_1, &arg_4)
        result = result_1
        
        if (result == *(arg1 + 0x20))
            result.b = 1
            return result
        
        sub_420180(arg1 + 0x20, &arg_4, result)
        
        if (sub_5203f0(arg1).b != 0)
            result.b = 1
            return result
else
    sub_64b530(0x6e313c)

result.b = 0
return result
