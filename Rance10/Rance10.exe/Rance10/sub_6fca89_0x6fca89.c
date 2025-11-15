// 函数: sub_6fca89
// 地址: 0x6fca89
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

void* var_8 = arg1
void* result

if (arg2 == 0)
    result = nullptr
else
    result = arg2 - 4

if (*(result + 0x34) != 0)
    return result

void* edi_1 = *(arg1 + 8)
void* edx_1 = *(edi_1 + 0xc)
*(result + 0x34) = edi_1
*(result + 0x38) = edi_1

if (*(arg1 + 0x11) != 0)
    *(result + 0x51) = 0
    return Concurrency::details::SafeRWList<struct Concurrency::details::ListEntry,class Concurrency::details::CollectionTypes::NoCount,class Concurrency::details::_ReaderWriterLock>::AddTail(
        edi_1 + 0x1c, result + 0x60)

Concurrency::details::_ReaderWriterLock::_AcquireWrite(edi_1 + 0x20)
*(edi_1 + 0x30) += 1
Concurrency::details::_ReaderWriterLock::_ReleaseWrite(edi_1 + 0x20)
return Concurrency::details::ContextBase::AddStealer(edx_1, result + 4, 1)
