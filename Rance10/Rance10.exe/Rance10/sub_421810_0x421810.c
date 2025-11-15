// 函数: sub_421810
// 地址: 0x421810
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t* result

if (arg2 s>= 0)
    int32_t ecx = *arg3
    
    if (arg2 s< (arg3[1] - ecx) s>> 2)
        *(ecx + (arg2 << 2)) += 1
        
        if ((*arg3)[arg2] s> 1)
            result.b = 1
            return result
        
        switch ((*(**(arg1 + 8) + 0x10))(arg2))
            case nullptr
                result = sub_4218c0(arg1, arg2, arg3)
            label_421858:
                
                if (result.b != 0)
                    result.b = 1
                    return result
            case 1
                result = sub_421980(arg1, arg2, arg3)
                goto label_421858
            case 2
                result.b = 1
                return result
            case 3
                result = sub_421a50(arg1, arg2, arg3)
                goto label_421858
            case 4
                result = sub_421bc0(arg1, arg2, arg3)
                goto label_421858
            case 5
                if (sub_421c90(arg1, arg2, arg3).b != 0)
                    result.b = 1
                    return result

result.b = 0
return result
