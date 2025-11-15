// 函数: ?_SpinOnce@?$_SpinWait@$00@details@Concurrency@@QAE_NXZ
// 地址: 0x6e9db2
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t eax_1

while (true)
    eax_1 = arg1[2]
    
    if (eax_1 != 0)
        break
    
    arg1[2] &= eax_1
    Concurrency::details::_SpinWait<1>::_SetSpinCount(arg1, sub_6eac27())

if (eax_1 == 1)
    int32_t temp2_1 = *arg1
    *arg1 -= 1
    
    if (temp2_1 == 1)
        int32_t eax_9 = arg1[1]
        int32_t eax_10 = neg.d(eax_9)
        arg1[2] = sbb.d(eax_10, eax_10, eax_9 != 0) + 3
else
    if (eax_1 != 2)
        if (eax_1 == 3)
            arg1[2] = 0
            Concurrency::details::_SpinWait<1>::_SetSpinCount(arg1, sub_6eac27())
        else if (eax_1 == 4)
            int32_t esi_1 = arg1[3]
            j_sub_4033e0()
            esi_1()
        
        int32_t eax_7
        eax_7.b = 0
        return eax_7
    
    int32_t temp5_1 = arg1[1]
    arg1[1] -= 1
    
    if (temp5_1 == 1)
        arg1[2] = 3
    
    int32_t esi_2 = arg1[3]
    j_sub_4033e0()
    esi_2()

int32_t eax_4
eax_4.b = 1
return eax_4
