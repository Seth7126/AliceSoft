// 函数: sub_5ac8c0
// 地址: 0x5ac8c0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

sub_5acaa0(arg1)
arg1[0x160] = arg8
arg1[0x161] = arg9
int32_t result

if (arg2 s>= 0)
    int32_t eax_1
    int32_t edx_1
    edx_1:eax_1 = muls.dp.d(0x4da637d, arg6[2] - arg6[1])
    int32_t edx_2 = edx_1 s>> 4
    
    if (arg2 s< (edx_2 u>> 0x1f) + edx_2)
        int32_t eax_4 = arg2 * 0x34c
        result = eax_4 + arg6[1]
        
        if (eax_4 != neg.d(arg6[1]))
            *arg1 = arg2
            sub_5672c0(&arg1[1], result)
            sub_5ace80(arg1, arg3, arg4, arg5)
            
            if (arg1[0x3b] == 1)
                arg1[0xff] = sub_59f440(arg6, &arg1[0x3c])
            
            if (arg1[0x43] == 4)
                arg1[0x100] = sub_59f440(arg6, &arg1[0x44])
            
            switch (arg1[2])
                case 0
                    return sub_597000(&arg1[0x120], arg6, arg2, arg1[0x160])
                case 1
                    return sub_5adfa0(arg1, arg2, arg6, arg7)
                case 2
                    result = sub_59f440(arg6, &arg1[0x9e])
                    
                    if (result != 0xffffffff && result != *arg1)
                        return sub_5accb0(arg1, result, arg6, arg7)
                    
                    result.b = 1
                    return result
                case 3, 4, 5, 6
                    result.b = 1
                    return result

result.b = 0
return result
