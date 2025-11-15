// 函数: __Getwctype
// 地址: 0x6d47db
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t charType = arg1
void srcStr
BOOL eax = GetStringTypeW(1, &srcStr, 1, &charType)
int32_t eax_1 = neg.d(eax)
return sbb.d(eax_1, eax_1, eax != 0) & sx.d(charType.w)
