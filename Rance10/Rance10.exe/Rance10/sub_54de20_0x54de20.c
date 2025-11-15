// 函数: sub_54de20
// 地址: 0x54de20
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t* var_4 = arg1
int32_t* result

if (sub_54d950(arg1, arg2).b != 0)
    if (arg2[4] == 0)
        result.b = 1
        return result
    
    switch (arg3)
        case nullptr
            result.b = 1
            return result
        case 1
            result = sub_54dea0(arg1)
        label_54de50:
            
            if (result.b != 0)
                result.b = 1
                return result
        case 2
            result = sub_54df20(arg1)
            goto label_54de50
        case 3
            result = sub_54dfa0(arg1, 0, 0)
            goto label_54de50
        case 4
            if (sub_54e0c0(arg1, 0, 0).b != 0)
                result.b = 1
                return result

result.b = 0
return result
