// 函数: ?free_crt_array_internal@@YAXQAPBXI@Z
// 地址: 0x71c569
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t entry_ebx
int32_t var_8 = entry_ebx
int32_t* esi = arg1
int32_t edi
int32_t var_10 = edi
int32_t edi_1 = 0
void* result = &esi[arg2]
int32_t ebx_2 = not.d(sbb.d(entry_ebx, entry_ebx, result u< esi)) & (result - esi + 3) u>> 2

if (ebx_2 != 0)
    do
        result = __free_base(*esi)
        edi_1 += 1
        esi = &esi[1]
    while (edi_1 != ebx_2)

return result
