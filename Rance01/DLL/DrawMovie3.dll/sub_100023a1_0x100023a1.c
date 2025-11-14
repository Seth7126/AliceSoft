// 函数: sub_100023a1
// 地址: 0x100023a1
// 来自: E:\torrent\AliceSoft\ランス01\DLL\DrawMovie3.dll

if (arg3 == 0)
    *__errno() = 0x16
    sub_100020e4(0, 0, 0, 0, 0)
    return 0xffffffff

if (arg1 == 0 || arg2 u<= 0)
    *__errno() = 0x16
else
    int32_t result = sub_100022d5(sub_10004a3d, arg1, arg2, arg3, arg4, arg5)
    
    if (result s< 0)
        *arg1 = 0
    
    if (result != 0xfffffffe)
        return result
    
    *__errno() = 0x22

sub_100020e4(0, 0, 0, 0, 0)
return 0xffffffff
