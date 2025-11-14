// 函数: __forcdecpt_l
// 地址: 0x6a97ad
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

void* var_14
sub_69beb0(&var_14, arg2)
char* esi = arg1

for (bool cond:0 = _tolower(sx.d(*esi)) != 0x65; cond:0; cond:0 = _isdigit(zx.d(*esi)) != 0)
    esi = &esi[1]

if (_tolower(sx.d(*esi)) == 0x78)
    esi = &esi[2]

char ecx_2 = *esi
char* result
result.b = ***(var_14 + 0x84)
*esi = result.b
void* esi_1 = &esi[1]

do
    result.b = *esi_1
    *esi_1 = ecx_2
    ecx_2 = result.b
    result.b = *esi_1
    esi_1 += 1
while (result.b != 0)

char var_8

if (var_8 != result.b)
    char* result_1
    result = result_1
    *(result + 0x70) &= 0xfffffffd

return result
