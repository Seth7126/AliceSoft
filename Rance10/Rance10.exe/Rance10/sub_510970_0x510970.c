// 函数: sub_510970
// 地址: 0x510970
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t* ecx = *(arg1 + 0x28)

if (ecx != 0xffffffff)
    sub_492c40(ecx)
    *(arg1 + 0x28) = 0xffffffff

bool cond:0 = *(arg1 + 0x40) u< 0x10
*(arg1 + 0x3c) = 0
char* eax

if (cond:0)
    eax = arg1 + 0x2c
else
    eax = *(arg1 + 0x2c)

void** esi = arg2
*eax = 0

if (arg1 + 0x2c != esi)
    sub_403590(arg1 + 0x2c, esi, 0, 0xffffffff)

void* edx = esi[4]

if (esi[5] u>= 0x10)
    esi = *esi

struct common::SuicideRefCounter<class IEXReader>::exfile::CEXReader::VTable** result =
    sub_46d5b0(esi, edx)

if (result == 0)
    return result

int32_t* eax_1 = sub_404080(data_7fcb78)
sub_492a50(eax_1, result)
*(arg1 + 0x28) = eax_1
return (*result)->vFunc_1()
