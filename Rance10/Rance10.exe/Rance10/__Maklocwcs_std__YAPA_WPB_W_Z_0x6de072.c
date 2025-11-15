// 函数: ?_Maklocwcs@std@@YAPA_WPB_W@Z
// 地址: 0x6de072
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int16_t* ecx = arg1
void* edx = &ecx[1]
int16_t i

do
    i = *ecx
    ecx = &ecx[1]
while (i != 0)
void* var_14 = ((ecx - edx) s>> 1) + 1
char* result = _calloc()

if (result == 0)
    sub_6d08ed()
    noreturn

sub_700660(result, arg1, (((ecx - edx) s>> 1) + 1) * 2)
return result
