// 函数: sub_5c4170
// 地址: 0x5c4170
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

void* i_1 = arg1

if (*(arg1 + 4) == 0)
    return 

__Smtx_lock_shared(arg1 + 0x5c)
int32_t esi_1 = *(arg1 + 0x58)
__Smtx_unlock_shared(arg1 + 0x5c)

if (esi_1 == 0)
    return 

__Smtx_lock_shared(arg1 + 0x5c)
void* edi_2 = *(arg1 + 0x58)
__Smtx_unlock_shared(arg1 + 0x5c)
int32_t* esi_3 = *(edi_2 + 0x24)
void* i = *esi_3
i_1 = i

for (; i != esi_3; i = i_1)
    if (sub_58c190(*(i + 0x14)).b == 0)
        return 
    
    sub_429080(&i_1)

void* ecx_2 = *(arg1 + 0x60)

if (ecx_2 != 0 && sub_56edb0(ecx_2).b != 0)
    sub_58ec50(arg1 + 0x60, arg2)
