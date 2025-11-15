// 函数: sub_620800
// 地址: 0x620800
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

char* esi = arg2
int32_t ebx_1 = arg1[1] - *arg1
char i

do
    i = *esi
    esi = &esi[1]
while (i != 0)
void* esi_1 = esi - &esi[1]
sub_405950(arg1, esi_1 + ebx_1)
return sub_700660(*arg1 + ebx_1, arg2, esi_1)
