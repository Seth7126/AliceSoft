// 函数: sub_57d070
// 地址: 0x57d070
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

void* var_4 = arg1
sub_6ca100(arg1, (arg2[1] - *arg2) s>> 2)
void* result = arg2[1]
int32_t* esi = *arg2
int32_t edi_1 = 0
uint32_t ebx_3 = (result - esi + 3) u>> 2

if (esi u> result)
    ebx_3 = 0

if (ebx_3 != 0)
    do
        result = sub_6ca100(arg1, *esi)
        edi_1 += 1
        esi = &esi[1]
    while (edi_1 != ebx_3)

return result
