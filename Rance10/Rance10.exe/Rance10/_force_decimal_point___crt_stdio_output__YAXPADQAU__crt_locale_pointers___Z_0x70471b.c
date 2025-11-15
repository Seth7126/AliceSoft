// 函数: ?force_decimal_point@__crt_stdio_output@@YAXPADQAU__crt_locale_pointers@@@Z
// 地址: 0x70471b
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

char* esi = arg1

for (bool cond:0 = _tolower(sx.d(*esi)) != 0x65; cond:0; cond:0 = _isdigit(zx.d(*esi)) != 0)
    esi = &esi[1]

if (_tolower(sx.d(*esi)) == 0x78)
    esi = &esi[2]

char ecx_2 = *esi
char* result
result.b = ***(*arg2 + 0x88)
*esi = result.b
void* esi_1 = &esi[1]

do
    result.b = *esi_1
    *esi_1 = ecx_2
    ecx_2 = result.b
    result.b = *esi_1
    esi_1 += 1
while (result.b != 0)

return result
