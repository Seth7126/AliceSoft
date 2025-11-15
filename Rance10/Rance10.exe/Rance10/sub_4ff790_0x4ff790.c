// 函数: sub_4ff790
// 地址: 0x4ff790
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t edx = *(arg1 + 0x44)
int32_t result = *(arg1 + 0x54)
arg1.b = *(arg1 + 0x48)
bool cond:0_1

if (edx != 1)
    if (edx != 2)
        return result
    
    if (result != edx && result != 5 && result != 8)
        if (arg1.b == 0)
            return result
        
        if (result != 4)
            cond:0_1 = result != 6
            goto label_4ff7da
else if (result != 4 && result != 5 && result != 6)
    if (arg1.b == 0)
        return result
    
    if (result != 8)
        cond:0_1 = result != 2
    label_4ff7da:
        
        if (cond:0_1)
            return result
return 1
