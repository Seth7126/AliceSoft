// 函数: sub_1000211a
// 地址: 0x1000211a
// 来自: E:\torrent\AliceSoft\ランス01\DLL\DrawMovie3.dll

int32_t edi
int32_t var_c = edi

if (arg4 != 0)
    if (arg1 == 0)
    label_1000213a:
        *__errno() = 0x16
        sub_100020e4(0, 0, 0, 0, 0)
        return 0x16
    
    if (arg3 == 0 || arg2 u< arg4)
        sub_10003d40(arg1, 0, arg2)
        
        if (arg3 == 0)
            goto label_1000213a
        
        if (arg2 u>= arg4)
            return 0x16
        
        *__errno() = 0x22
        sub_100020e4(0, 0, 0, 0, 0)
        return 0x22
    
    sub_10003dc0(arg1, arg3, arg4)

return 0
