// 函数: sub_480090
// 地址: 0x480090
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = arg2
int32_t* esi = nullptr
EnterCriticalSection(*(arg1 + 0x18) + 4)
void** var_4
sub_42eb70(arg1 + 0xc, &var_4, &var_8)
void** eax_3 = var_4

if (eax_3 != *(arg1 + 0xc))
    esi = eax_3[5]

LeaveCriticalSection(*(arg1 + 0x18) + 4)

if (esi != 0)
    EnterCriticalSection(*(arg1 + 0x18) + 4)
    sub_4803d0(arg1 + 0xc, &arg2, *sub_42eb70(arg1 + 0xc, &var_4, &arg2))
    LeaveCriticalSection(*(arg1 + 0x18) + 4)
    void* ecx_3 = *(arg1 + 4)
    
    if (ecx_3 != 0)
        return sub_485a50(ecx_3, esi)

int32_t result
result.b = 0
return result
