// 函数: sub_6fca51
// 地址: 0x6fca51
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

void* result = arg2 - 4
int32_t esi_1 = neg.d(arg2)
void* esi_3 = sbb.d(esi_1, esi_1, arg2 != 0) & result

if (*(esi_3 + 0x34) != 0)
    return result

void* eax = *(arg1 + 8)
int32_t esi_4 = neg.d(esi_3)
void* ecx = *(eax + 0xc)
*(esi_3 + 0x34) = eax
*(esi_3 + 0x38) = eax
return Concurrency::details::ContextBase::AddStealer(ecx, 
    sbb.d(esi_4, esi_4, esi_3 != 0) & (esi_3 + 4), 0)
