// 函数: ??4?$ostreambuf_iterator@DU?$char_traits@D@std@@@std@@QAEAAV01@D@Z
// 地址: 0x6d1230
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t* ecx = *(arg1 + 4)
uint32_t eax_1

if (ecx != 0)
    eax_1 = std::basic_streambuf<char,struct std::char_traits<char> >::sputc(ecx, arg2)

if (ecx == 0 || eax_1 == 0xffffffff)
    *arg1 = 1

return arg1
