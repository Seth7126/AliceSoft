// 函数: ?_Locinfo_ctor@_Locinfo@std@@SAXPAV12@PBD@Z
// 地址: 0x6d468c
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

char* eax = _setlocale(0, nullptr)

if (eax == 0)
    eax = &data_794c78

sub_630d40(arg1 + 0x24, eax)
char* eax_1

if (arg2 == 0)
    eax_1 = &data_799164
else
    eax_1 = _setlocale(0, arg2)
    
    if (eax_1 == 0)
        eax_1 = &data_799164

return sub_630d40(arg1 + 0x2c, eax_1)
