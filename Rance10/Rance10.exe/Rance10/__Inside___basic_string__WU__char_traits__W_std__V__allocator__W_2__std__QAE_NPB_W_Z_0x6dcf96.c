// 函数: ?_Inside@?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@QAE_NPB_W@Z
// 地址: 0x6dcf96
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

void* result

if (arg2 == 0)
    result.b = 0
else
    if (arg1[5] u< 8)
        result = arg1
    else
        result = *arg1
    
    if (arg2 u< result)
        result.b = 0
    else
        int32_t* esi_1
        
        if (arg1[5] u< 8)
            esi_1 = arg1
        else
            esi_1 = *arg1
        
        if (esi_1 + (arg1[4] << 1) u<= arg2)
            result.b = 0
        else
            result.b = 1

return result
