// 函数: ?equal@?$istreambuf_iterator@DU?$char_traits@D@std@@@std@@QBE_NABV12@@Z
// 地址: 0x6d4245
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t* edi = arg1

if (edi[1].b == 0)
    std::istreambuf_iterator<char,struct std::char_traits<char> >::_Peek(arg1)

if (arg2[1].b == 0)
    std::istreambuf_iterator<char,struct std::char_traits<char> >::_Peek(arg2)

if (*edi != 0)
    if (*arg2 != 0)
        return 1
else if (*arg2 == 0)
    return 1

return 0
