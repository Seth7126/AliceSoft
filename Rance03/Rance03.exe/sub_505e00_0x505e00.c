// 函数: sub_505e00
// 地址: 0x505e00
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t* var_4 = arg1
struct _EXCEPTION_REGISTRATION_RECORD** result

if (sub_505a10(arg1, arg2).b != 0)
    if (arg2[4] == 0)
        result.b = 1
        return result
    
    switch (arg3)
        case nullptr
            result.b = 1
            return result
        case 1
            result = sub_505e80(arg1)
        label_505e30:
            
            if (result.b != 0)
                result.b = 1
                return result
        case 2
            result = sub_505fc0(arg1)
            goto label_505e30
        case 3
            result = sub_506100(arg1, 0, nullptr)
            goto label_505e30
        case 4
            if (sub_506280(arg1, 0, nullptr).b != 0)
                result.b = 1
                return result

result.b = 0
return result
