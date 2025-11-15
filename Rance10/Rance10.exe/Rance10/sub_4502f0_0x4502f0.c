// 函数: sub_4502f0
// 地址: 0x4502f0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

bool cond:0 = *(arg1 + 0x80) == 0
*(arg1 + 4) = 0

if (not(cond:0))
    if (sub_451d80(arg1 + 8, arg3, arg2) == 0)
        return false
    
    if ((*(**(arg1 + 0x80) + 0x28))() == 0)
        sub_452290(arg1 + 0x44)
    else if (sub_451d80(arg1 + 0x44, arg3, arg2) == 0)
        return false
    
    *(arg1 + 4) = 1

return true
