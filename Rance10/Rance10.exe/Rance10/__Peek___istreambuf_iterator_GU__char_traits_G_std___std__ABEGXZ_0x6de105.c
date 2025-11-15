// 函数: ?_Peek@?$istreambuf_iterator@GU?$char_traits@G@std@@@std@@ABEGXZ
// 地址: 0x6de105
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t* ecx = *arg1
int16_t eax_1

if (ecx != 0)
    eax_1 = sub_6e3597(ecx)

if (ecx == 0 || 0xffff == eax_1)
    *arg1 = 0
else
    *(arg1 + 6) = eax_1

arg1[1].b = 1
return *(arg1 + 6)
