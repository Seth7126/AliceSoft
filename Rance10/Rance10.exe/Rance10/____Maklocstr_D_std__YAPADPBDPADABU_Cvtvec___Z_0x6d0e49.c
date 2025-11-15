// 函数: ??$_Maklocstr@D@std@@YAPADPBDPADABU_Cvtvec@@@Z
// 地址: 0x6d0e49
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

char* esi = arg1
char* ecx = esi
char i

do
    i = *ecx
    ecx = &ecx[1]
while (i != 0)
void* i_2 = ecx - &ecx[1] + 1
void* i_3 = i_2
int32_t result = _calloc()

if (result == 0)
    sub_6d08ed()
    noreturn

if (i_2 != 0)
    char* ecx_4 = result - esi
    void* i_1
    
    do
        int32_t eax
        eax.b = *esi
        *(ecx_4 + esi) = eax.b
        esi = &esi[1]
        i_1 = i_2
        i_2 -= 1
    while (i_1 != 1)

return result
