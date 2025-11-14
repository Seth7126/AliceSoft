// 函数: sub_51fed0
// 地址: 0x51fed0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

void* var_4 = arg1
enum MESSAGEBOX_RESULT result

if (*(arg1 + 0x14) != 0)
    if (*(arg1 + 0x1c) != 0)
        goto label_51ff0c
    
    if (sub_5200e0(arg1).b != 0)
        *(arg1 + 0x1c) = 1
    label_51ff0c:
        enum MESSAGEBOX_RESULT result_1
        void** result_2 = sub_417ed0(arg1 + 0x28, result_1)
        char eax_2
        
        if (result_2 != *(arg1 + 0x28))
            eax_2 = sub_40c3a0(result_1, &result_2[4])
        
        if (result_2 == *(arg1 + 0x28) || eax_2 != 0)
            result_1 = *(arg1 + 0x28)
        else
            result_1 = result_2
        
        result = result_1
        
        if (result == *(arg1 + 0x28))
            result.b = 1
            return result
        
        sub_417fb0(arg1 + 0x28, &result_1, result)
        
        if (sub_5203f0(arg1).b != 0)
            result.b = 1
            return result
else
    sub_64b530(0x6e313c)

result.b = 0
return result
