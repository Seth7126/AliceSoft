// 函数: ?_SpinOnce@?$_SpinWait@$0A@@details@Concurrency@@QAE_NXZ
// 地址: 0x6e9e39
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t eax_1

while (true)
    eax_1 = arg1[2]
    
    if (eax_1 != 0)
        break
    
    arg1[2] = 0
    Concurrency::details::_SpinWait<0>::_SetSpinCount(arg1, sub_6eac27())

int32_t result

if (eax_1 == 1)
    int32_t temp2_1 = *arg1
    *arg1 -= 1
    
    if (temp2_1 == 1)
        int32_t eax_6 = arg1[1]
        int32_t eax_7 = neg.d(eax_6)
        arg1[2] = sbb.d(eax_7, eax_7, eax_6 != 0) + 3
    
    result.b = 1
else if (eax_1 == 2)
    int32_t temp5_1 = arg1[1]
    arg1[1] -= 1
    
    if (temp5_1 == 1)
        arg1[2] = 3
    
    result.b = 1
else if (eax_1 == 3)
    arg1[2] = 0
    Concurrency::details::_SpinWait<0>::_SetSpinCount(arg1, sub_6eac27())
    result.b = 0
else if (eax_1 == 4)
    result.b = 0
else
    result.b = 0

return result
