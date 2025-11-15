// 函数: sub_4fe130
// 地址: 0x4fe130
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t* esi = arg1
char result

if (*(arg2 + 0xa8) != 0)
label_4fe153:
    arg2.b = *(arg2 + 0xa9)
    int32_t eax = esi[0x11]
    
    if (eax == 0)
        int32_t* var_c_3 = arg1
        return sub_4fe1a0(esi)
    
    if (eax == 1)
        return sub_4fe360(esi, arg2.b)
    
    result = (eax - 1).b - 1
    
    if (eax == 2)
        return sub_4fe910(esi, arg2.b)
else
    result, arg1 = sub_4edf40(esi[0x1b])
    
    if (result != 0)
        goto label_4fe153

return result
