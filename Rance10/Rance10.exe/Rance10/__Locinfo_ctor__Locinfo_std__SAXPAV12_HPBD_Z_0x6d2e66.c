// 函数: ?_Locinfo_ctor@_Locinfo@std@@SAXPAV12@HPBD@Z
// 地址: 0x6d2e66
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

char* eax = _setlocale(0, nullptr)

if (eax == 0)
    eax = &data_794c78

sub_630d40(arg1 + 0x24, eax)
return std::_Locinfo::_Locinfo_Addcats(arg1, arg2, arg3)
