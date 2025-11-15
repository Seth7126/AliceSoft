// 函数: ?_Tidy@?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@QAEX_NI@Z
// 地址: 0x6ded33
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t* esi = arg1

if (arg2 != 0 && esi[5] u>= 8)
    char* ebx_1 = *esi
    
    if (arg3 != 0)
        sub_6df102(esi, ebx_1, arg3)
    
    sub_403160(ebx_1, esi[5] + 1, 2)

esi[5] = 7
bool cond:1 = esi[5] u< 8
esi[4] = arg3

if (not(cond:1))
    esi = *esi

*(esi + (arg3 << 1)) = 0
return 0
