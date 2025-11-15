// 函数: sub_6fcbc9
// 地址: 0x6fcbc9
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

void* ebx = arg1[-5]
void* edi = arg1[-6]
arg1[-1] = 0xffffffff
void* eax

if (edi == 0)
    eax = nullptr
else
    eax = edi + 4

Concurrency::details::ContextBase::RemoveStealer(arg1[-9], eax)
int32_t* esi = arg1[-7]

if (esi != 0)
    int32_t* var_4_1 = esi
    sub_697590(arg1[-8])
    sub_697230(esi)

void* eax_1 = arg1[2]
*(edi + 0x6c) = 0xffffffff
*(edi + 0x70) = 0xffffffff
*(edi + 0x74) = 0
*(edi + 0x78) = 0
*(edi + 0x34) = 0
*(edi + 0x38) = 0
*(eax_1 + 8) = 0
int32_t* result = Concurrency::details::_StructuredTaskCollection::_CountUp(ebx)
TEB* fsbase
fsbase->NtTib.ExceptionList = arg1[-3]
*arg1
*arg1 = &data_6fcc4b
*arg1
return result
