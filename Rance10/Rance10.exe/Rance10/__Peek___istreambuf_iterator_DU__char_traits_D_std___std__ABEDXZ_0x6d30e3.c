// 函数: ?_Peek@?$istreambuf_iterator@DU?$char_traits@D@std@@@std@@ABEDXZ
// 地址: 0x6d30e3
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t* ecx = *arg1
uint32_t result

if (ecx != 0)
    result = std::basic_streambuf<char,struct std::char_traits<char> >::sgetc(ecx)

if (ecx == 0 || result == 0xffffffff)
    *arg1 = 0
else
    *(arg1 + 5) = result.b

result.b = *(arg1 + 5)
arg1[1].b = 1
return result
