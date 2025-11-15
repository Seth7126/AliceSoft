// 函数: sub_643b20
// 地址: 0x643b20
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

void* var_4 = arg1
int32_t edi = *(arg1 + 8)
int32_t ebx = edi

if ((ebx.b & 1) != 0)
    ebx += 1

int32_t eax = int.d(sub_4a78b0(*(arg1 + 0x20)))
int32_t esi = edi

if (eax s< edi)
    esi = eax

int32_t eax_1 = int.d(sub_4a78b0(*(arg1 + 0x1c)))

if (eax_1 s< edi)
    edi = eax_1

if (edi s< esi)
    edi = esi

return ebx + (edi << 1)
